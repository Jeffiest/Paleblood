// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: finds the object that three keys map to in the owner's first entry list, or builds one.
#include <cstdint>

#include "../engine/allocator.h"
#include "keyed_object_entry.h"
#include "runtime/original.h"

namespace {

using engine::Allocator;
using misc::KeyedEntry;
using misc::KeyedEntryVector;
using misc::KeyedObject;
using misc::KeyedOwner;
using misc::KeyedRequest;

/** Size of an entry in bytes, and its alignment. */
constexpr uint64_t entry_size = 0x18;
constexpr uint64_t entry_alignment = 0x8;
/** Size of an object in bytes, and its alignment. */
constexpr uint64_t object_size = 0x90;
constexpr uint64_t object_alignment = 0x10;
/** The scale an object starts with. */
constexpr float initial_scale = 1.0f;
/** The value of the minus-one word, and of the all-ones word of an object. */
constexpr int64_t unset_qword = -1;
constexpr uint32_t unset_dword = 0xffffffff;

RT_GLOBAL(0x05940680, keyed_allocator, Allocator *);
RT_GLOBAL(0x057b6860, keyed_object_vtable, uint8_t);
RT_GLOBAL(0x04d239b0, initial_range, const uint64_t[]);

RT_ORIGINAL(0x0259f130, build_object, bool(KeyedObject *object, const KeyedRequest *request, uint32_t zero_rdx, uint32_t zero_rcx));
RT_ORIGINAL(0x026f47c0, push_entry_pointer, void(KeyedEntryVector *entries, KeyedEntry **entry));

/**
 *
 * Makes the request record the builder reads: the three keys, the ones, the flags word and the zeros.
 *
 */
KeyedRequest make_request(int32_t key_a, int32_t key_b, int32_t key_c)
{
    KeyedRequest request{};
    request.key_a = key_a;
    request.key_b = key_b;
    request.key_c = key_c;
    request.one_0x0c = 1;
    request.one_0x10 = 1;
    request.flags_0x18 = misc::keyed_request_flags;
    return request;
}

/**
 *
 * Sets the fields a new object starts with: its vtable, its scale, the constant range and its cleared words.
 *
 */
void initialize_object(KeyedObject *object)
{
    const uint64_t *range = initial_range.get();
    object->reference_count = 0;
    object->scale = initial_scale;
    object->initial_0x20[0] = range[0];
    object->initial_0x20[1] = range[1];
    object->cleared_0x30 = 0;
    object->cleared_0x40 = 0;
    object->cleared_0x48 = 0;
    object->cleared_0x50 = 0;
    object->cleared_0x58 = 0;
    object->cleared_0x60 = 0;
    object->cleared_0x68 = 0;
    object->cleared_0x70 = 0;
    object->unset_0x78 = unset_qword;
    object->unset_0x80 = unset_dword;
    object->vtable = keyed_object_vtable.address();
}

}  // namespace

/**
 *
 * Returns the object of the entry the three keys map to in the owner's first list. An entry whose
 * hidden flag is set is skipped, and the search takes the first entry that matches.
 *
 * When no entry matches, an entry and an object are allocated, the object is built from a request
 * for the keys, and the entry is appended to the list. The object is returned only when it was built.
 *
 */
extern "C" KeyedObject *bb_misc_find_or_create_keyed_object_a(KeyedOwner *self, int32_t key_a, int32_t key_b,
                                                              int32_t key_c)
{
    KeyedEntryVector &entries = self->entries_0x1338;
    KeyedEntry **const last = entries.end;
    for (KeyedEntry **cursor = entries.begin; cursor != last; ++cursor) {
        KeyedEntry *found = *cursor;
        if (found->hidden == 0 && found->key_a == key_a && found->key_b == key_b && found->key_c == key_c) {
            return found->object;
        }
    }

    Allocator *allocator = keyed_allocator.get();
    KeyedEntry *entry = static_cast<KeyedEntry *>(allocator->allocate(entry_size, entry_alignment));
    if (entry != nullptr) {
        entry->key_a = key_a;
        entry->key_b = key_b;
        entry->key_c = key_c;
        entry->hidden = 0;
        entry->object = nullptr;
    }

    KeyedObject *object = static_cast<KeyedObject *>(allocator->allocate(object_size, object_alignment));
    if (object != nullptr) initialize_object(object);

    KeyedObject *result = nullptr;
    KeyedRequest request = make_request(key_a, key_b, key_c);
    if (build_object(object, &request, 0, 0)) {
        object->reference_count += 1;
        entry->object = object;
        push_entry_pointer(&entries, &entry);
        result = entry->object;
    }
    return result;
}
