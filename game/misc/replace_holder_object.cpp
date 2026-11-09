// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: finds the object a holder should be rebuilt from. With a table present it is the table's
// object; otherwise a lookup under the caller's key gives either a row of the list or an object of
// its own. An accepted object is used to build a new object, which replaces the holder's object.
#include <cstdint>
#include <cstdlib>

#include "misc.h"

namespace {
using misc::Service;

struct Object;

/** The virtual functions of an object here: slot 0x18 answers a query whose bits 8 to 15 decide. */
struct ObjectVtable {
    uint8_t unknown_0x00[0x18];
    uint32_t (*query)(Object *object); /**< Slot at 0x18. */
};
static_assert(offsetof(ObjectVtable, query) == 0x18);

struct Object {
    const ObjectVtable *vtable; /**< Dispatch table for the object's methods. */
};

/** A row of a list: an object and a word. */
struct Row {
    Object *first;
    uint64_t second;
};
static_assert(sizeof(Row) == 0x10);

/** The owner that the lookup is given. */
struct Owner {
    uint8_t unknown_0x00[0x40];
    void *owner; /**< Passed to the lookup. */
};
static_assert(offsetof(Owner, owner) == 0x40);

struct Details {
    uint8_t unknown_0x00[0x18];
    Owner *owner_info;
};
static_assert(offsetof(Details, owner_info) == 0x18);

struct Source {
    uint8_t unknown_0x00[0x48];
    Details *details;
};
static_assert(offsetof(Source, details) == 0x48);

/** A list of rows: the count, the rows, a ready byte and the source of the owner. */
struct RowList {
    uint8_t unknown_0x00[0x08];
    uint32_t count;
    uint8_t unknown_0x0c[0x04];
    Row *rows;
    uint8_t unknown_0x18[0x08];
    uint8_t ready; /**< Nonzero when the rows can be used directly. */
    uint8_t unknown_0x21[0x07];
    Source *source;
};
static_assert(offsetof(RowList, count) == 0x08);
static_assert(offsetof(RowList, rows) == 0x10);
static_assert(offsetof(RowList, ready) == 0x20);
static_assert(offsetof(RowList, source) == 0x28);

/** The holder: the object it keeps, then the list it reads. */
struct Holder {
    Object *object;
    RowList *list;
};
static_assert(offsetof(Holder, list) == 0x08);

/** A lookup's result: a found flag, then the row index when found or the object when not. */
struct Lookup {
    uint32_t found;
    uint8_t unknown_0x04[0x04];
    uint64_t value;
};
static_assert(offsetof(Lookup, value) == 0x08);

/** The caller's self: its key, its table, and a context the new object is given. */
struct Self {
    uint8_t unknown_0x00[0x0c];
    uint32_t key;
    Object *table;
    uint8_t unknown_0x18[0x08];
};
static_assert(offsetof(Self, key) == 0x0c);
static_assert(offsetof(Self, table) == 0x10);
static_assert(offsetof(Self, unknown_0x18) == 0x18);

/** The size of the object built from an accepted one. */
constexpr uint32_t built_object_size = 0x78;
/** The query answer bits that are compared, and the value that accepts. */
constexpr uint32_t query_mask = 0xff00;
constexpr uint32_t query_accepted = 0x100;

RT_ORIGINAL(0x00418120, fn_00418120, void(void *owner, Lookup *result, uint32_t *key));
RT_ORIGINAL(0x0042fe80, fn_0042fe80, void(RowList *list, Row *out, uint32_t index));
RT_ORIGINAL(0x0042e5c0, fn_0042e5c0, void(Object *object));
RT_ORIGINAL(0x0042e5d0, fn_0042e5d0, void(Object *object));
RT_ORIGINAL(0x0278b020, fn_0278b020,
            void(void *object, Object *table, uint32_t *zero, void *context, Service *service));
RT_GLOBAL(0x057e3be0, stack_guard_pointer, const uint64_t *);
RT_ORIGINAL(0x02fbe4f8, stack_check_failure, void());

/**
 *
 * Returns the object when its query accepts it, and null otherwise.
 *
 */
Object *accepted(Object *object)
{
    const uint32_t answer = object->vtable->query(object);
    return (answer & query_mask) == query_accepted ? object : nullptr;
}

/**
 *
 * Takes the found row: a row of the list when it is ready and the index is below the count, or the
 * pair the lookup gives otherwise. A row's object is retained first, and the object is released
 * once its query has been made.
 *
 */
Object *take_found_row(RowList *list, uint32_t index)
{
    Row pair{};
    if (list->ready != 0 && list->count > index) {
        Row *row = &list->rows[index];
        if (row->first != nullptr) fn_0042e5c0(row->first);
        pair.first = row->first;
        pair.second = row->second;
    } else {
        fn_0042fe80(list, &pair, index);
    }

    Object *candidate = pair.first;
    if (candidate == nullptr) return nullptr;
    fn_0042e5d0(candidate);
    return accepted(candidate);
}
}  // namespace

/**
 *
 * Builds a new object from the accepted object the holder's table or lookup gives, and stores it in
 * the holder in place of the old one. Returns true when a new object was stored.
 *
 * The old object is released after the new one is built. An object from a lookup that is not found
 * is released once it has been queried.
 *
 */
extern "C" bool bb_misc_replace_holder_object(void *, Self *self, Holder *holder, uint64_t, Service *service)
{
    // The guard pointer and its value are taken on entry and checked again before returning.
    const uint64_t *guard = stack_guard_pointer.get();
    const uint64_t guard_value = *guard;

    Object *found = self->table;
    if (found == nullptr) {
        Lookup lookup{};
        uint32_t key = self->key;
        Owner *owner = holder->list->source->details->owner_info;
        fn_00418120(owner->owner, &lookup, &key);
        if (lookup.found != 0) {
            found = take_found_row(holder->list, static_cast<uint32_t>(lookup.value));
        } else {
            Object *value = reinterpret_cast<Object *>(lookup.value);
            found = value != nullptr ? accepted(value) : nullptr;
            if (value != nullptr) fn_0042e5d0(value);
        }
    }

    bool stored = false;
    if (found != nullptr) {
        void *object = service->vtable->allocate(service, built_object_size, 0);
        uint32_t zero = 0;
        fn_0278b020(object, found, &zero, self->unknown_0x18, service);
        if (holder->object != nullptr) fn_0042e5d0(holder->object);
        holder->object = static_cast<Object *>(object);
        stored = true;
    }

    if (*guard != guard_value) {
        stack_check_failure();
        // A return from the original failure routine remains unsupported.
        std::abort();
    }
    return stored;
}
