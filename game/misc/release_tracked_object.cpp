// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases the object a record holds, then clears the record, when the record's state word is set.
#include <cstddef>
#include <cstdint>

namespace {

struct TrackedObject;

/** The object's virtual table: its release slot is the one a record's release calls. */
struct TrackedObjectVtable {
    uint8_t unknown_0x0000[0x70];
    void (*release)(TrackedObject *self);
};
static_assert(offsetof(TrackedObjectVtable, release) == 0x70);

struct TrackedObject {
    const TrackedObjectVtable *vtable;
};

/** A record of a state word, two words that are cleared with it, and the object it holds. */
struct ObjectRecord {
    uint8_t unknown_0x00[0x8];
    uint64_t state;
    uint64_t first;
    uint64_t second;
    TrackedObject *object;
};
static_assert(offsetof(ObjectRecord, state) == 0x8 && offsetof(ObjectRecord, first) == 0x10);
static_assert(offsetof(ObjectRecord, second) == 0x18 && offsetof(ObjectRecord, object) == 0x20);

}  // namespace

/**
 *
 * Releases the record's object and clears the record when its state word is set. The release goes through the
 * object's virtual table; the second word, the first word and the state are then cleared in that order. A clear
 * state leaves the record and the object alone.
 *
 */
extern "C" void bb_misc_release_tracked_object(ObjectRecord *record)
{
    if (record->state == 0) return;

    TrackedObject *object = record->object;
    object->vtable->release(object);
    record->second = 0;
    record->first = 0;
    record->state = 0;
}
