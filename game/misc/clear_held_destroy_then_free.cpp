// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets a record's vtable, releases and clears its held pointer when one is set, runs the base destructor, then frees the record.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** A record with a vtable pointer and a held pointer at 0x10 that is released and then cleared. */
struct HeldRecord {
    const void *vtable;      /**< The record's vtable block. */
    uint8_t unknown_0x08[0x08];
    void *held;              /**< The pointer released by the release call; null when none is held. */
};
static_assert(offsetof(HeldRecord, held) == 0x10);

RT_GLOBAL(0x057b1fb0, held_record_vtable, uint8_t);

RT_ORIGINAL(0x02450560, release_held, void(void *held));
RT_ORIGINAL(0x013e5c40, base_destroy, void(HeldRecord *record));
RT_ORIGINAL(0x02fbe588, free_record, uint64_t(HeldRecord *record));

}  // namespace

/**
 *
 * Sets the record's vtable, releases the held pointer and clears it, runs the base destructor, then frees the record.
 *
 * The free call's result is returned. Nothing is released when no pointer is held.
 */
extern "C" uint64_t bb_misc_clear_held_destroy_then_free(HeldRecord *record)
{
    record->vtable = held_record_vtable.address();
    if (record->held != nullptr) {
        release_held(record->held);
        record->held = nullptr;
    }
    base_destroy(record);
    return free_record(record);
}
