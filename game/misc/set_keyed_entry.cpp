// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets, replaces or removes the entry for a key in a list of reference-holding entries.
#include <cstddef>
#include <cstdint>
#include <cstring>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

/** The largest key the list accepts. */
constexpr uint32_t largest_key = 0x7f;

/** The line the engine's fatal report carries for a removal index outside the list. */
constexpr int32_t removal_out_of_range_line = 0x1b7;

/** The value a scale holds when the caller gives none, and the slot value that marks "no slot". */
constexpr float default_scale = 1.0f;
constexpr int32_t no_slot = -1;

struct SharedObject;

/** The slots of a counted object: the first one destroys it. */
struct SharedObjectVtable {
    void (*destroy)(SharedObject *object);   /**< Destroys the object. */
};

/** An object counted by a plain (not atomic) reference count. */
struct SharedObject {
    const SharedObjectVtable *vtable;   /**< The object's slots. */
    int32_t references;                 /**< The number of holders. */
};
static_assert(offsetof(SharedObject, references) == 0x08);

/** The fields of an entry after its key and object, copied as a block when an entry moves. */
struct EntryValues {
    uint32_t first_value;   /**< A value the caller gave. */
    float scale_x;          /**< The first scale lane. */
    float scale_y;          /**< The second scale lane. */
    uint8_t flag_first;     /**< The first of two flag bytes. */
    uint8_t flag_second;    /**< The second of two flag bytes. */
    uint8_t unknown_0x001e[2];
    uint64_t payload;       /**< A qword the caller gave. */
    uint32_t extra_value;   /**< A dword the caller gave. */
    uint8_t has_slot;       /**< Whether the slot fields hold a slot. */
    uint8_t unknown_0x002d[3];
    int32_t slot;           /**< The slot, or no_slot. */
    uint8_t slot_flag;      /**< The byte that goes with the slot. */
    uint8_t unknown_0x0035[3];
};
static_assert(sizeof(EntryValues) == 0x28);
static_assert(offsetof(EntryValues, payload) == 0x10);
static_assert(offsetof(EntryValues, slot) == 0x20);

/** One entry of the list: its key, the object it holds and its values. */
struct KeyedEntry {
    uint32_t key;               /**< The key the entry answers to. */
    uint8_t unknown_0x0004[4];
    SharedObject *object;       /**< The object the entry holds a reference to. */
    EntryValues values;         /**< The rest of the entry. */
};
static_assert(sizeof(KeyedEntry) == 0x38);
static_assert(offsetof(KeyedEntry, object) == 0x08);
static_assert(offsetof(KeyedEntry, values) == 0x10);

/** The list of entries. */
struct KeyedEntryList {
    uint8_t unknown_0x0000[0x08];
    KeyedEntry *begin;   /**< The first entry. */
    KeyedEntry *end;     /**< One past the last entry. */
};
static_assert(offsetof(KeyedEntryList, begin) == 0x08);
static_assert(offsetof(KeyedEntryList, end) == 0x10);

RT_GLOBAL(0x04c9e9d6, removal_file, const char);
RT_GLOBAL(0x04c9ea31, removal_message, const char);

RT_ORIGINAL(0x02d2de00, append_entry, void(KeyedEntryList *list, const KeyedEntry *entry));
RT_ORIGINAL(0x02d2f360, throw_index_error, void(KeyedEntryList *list));

/** Drops one holder with a plain decrement; whoever held it last destroys the object. */
void drop_holder(SharedObject *object)
{
    const int32_t before = object->references;
    object->references = before - 1;
    if (before <= 1) object->vtable->destroy(object);
}

}  // namespace

/**
 *
 * Looks for the entry with the key. With an object given it replaces the entry's object, or appends a new entry
 * built from the other arguments when the key is absent. Without an object it removes the entry by moving the last
 * entry over it and dropping the last one.
 *
 * Keys above 0x7f do nothing. The original leaves the stack guard in RAX, so it returns nothing.
 *
 */
extern "C" void bb_misc_set_keyed_entry(KeyedEntryList *list, uint32_t key, SharedObject *object, uint32_t extra_value,
                                        uint32_t first_value, const float *scale, const uint8_t *flags,
                                        uint64_t payload, int32_t slot, uint8_t slot_flag)
{
    if (key > largest_key) return;

    KeyedEntry *begin = list->begin;
    KeyedEntry *end = list->end;
    const uint64_t count = static_cast<uint64_t>(end - begin);
    int32_t found = no_slot;
    for (int32_t index = 0; index < static_cast<int32_t>(count); ++index) {
        if (begin[index].key == key) {
            found = index;
            break;
        }
    }

    if (object != nullptr) {
        if (found == no_slot) {
            KeyedEntry entry;
            entry.key = key;
            entry.object = object;
            ++object->references;
            entry.values.first_value = first_value;
            entry.values.scale_x = default_scale;
            entry.values.scale_y = default_scale;
            entry.values.flag_first = 0;
            entry.values.flag_second = 0;
            if (scale != nullptr) {
                entry.values.scale_x = scale[0];
                entry.values.scale_y = scale[1];
            }
            if (flags != nullptr) {
                entry.values.flag_first = flags[0];
                entry.values.flag_second = flags[1];
            }
            entry.values.payload = payload;
            entry.values.extra_value = extra_value;
            entry.values.has_slot = 0;
            entry.values.slot = no_slot;
            entry.values.slot_flag = 0;
            if (slot >= 0) {
                entry.values.has_slot = 1;
                entry.values.slot = slot;
                entry.values.slot_flag = slot_flag;
            }
            append_entry(list, &entry);
            if (entry.object != nullptr) {
                drop_holder(entry.object);
                entry.object = nullptr;
            }
            return;
        }
        KeyedEntry &existing = begin[found];
        if (existing.object == object) return;
        if (existing.object != nullptr) {
            drop_holder(existing.object);
            existing.object = nullptr;
        }
        existing.object = object;
        ++object->references;
        return;
    }

    const uint64_t index = static_cast<uint64_t>(static_cast<int64_t>(found));
    if (count <= index) {
        engine::fatal_error(removal_file.address(), removal_out_of_range_line, removal_message.address());
        begin = list->begin;
        end = list->end;
    }
    const uint64_t size = static_cast<uint64_t>(end - begin);
    if (size - 1 > index) {
        if (size <= index) {
            throw_index_error(list);
            __builtin_unreachable();
        }
        KeyedEntry &target = begin[index];
        const KeyedEntry &last = end[-1];
        target.key = last.key;
        SharedObject *replacement = last.object;
        if (target.object != replacement) {
            if (target.object != nullptr) {
                drop_holder(target.object);
                target.object = nullptr;
                replacement = last.object;
            }
            target.object = replacement;
            if (replacement != nullptr) ++replacement->references;
        }
        std::memcpy(&target.values, &last.values, sizeof(EntryValues));
        begin = list->begin;
        end = list->end;
    }

    if (begin != end) {
        KeyedEntry &last = end[-1];
        KeyedEntry *new_end = end;
        SharedObject *held = last.object;
        if (held != nullptr) {
            const int32_t before = held->references;
            held->references = before - 1;
            if (before <= 1) {
                held->vtable->destroy(held);
                new_end = list->end;
            }
            last.object = nullptr;
        }
        list->end = new_end - 1;
    }
}
