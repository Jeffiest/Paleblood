// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets a record's vtable, releases and clears its held pointer when one is set, then returns with RAX as it stands.
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

RT_ORIGINAL(0x02450560, release_held, uint64_t(void *held, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4,
                                              uint64_t arg5));

}  // namespace

/**
 *
 * Sets the record's vtable, releases the held pointer and clears it, then returns the value left in RAX.
 *
 * The chained base destructor at 0x013e5c40 is a bare return, so the replacement does not call it: the
 * value left in RAX is the record vtable when nothing was released, and the release call's result otherwise.
 * The argument registers after the record are passed on to the release call.
 */
extern "C" uint64_t bb_misc_clear_held_then_chain_destroy(HeldRecord *record, uint64_t arg1, uint64_t arg2, uint64_t arg3,
                                                          uint64_t arg4, uint64_t arg5)
{
    record->vtable = held_record_vtable.address();
    uint64_t result = reinterpret_cast<uint64_t>(record->vtable);
    if (record->held != nullptr) {
        result = release_held(record->held, arg1, arg2, arg3, arg4, arg5);
        record->held = nullptr;
    }
    return result;
}
