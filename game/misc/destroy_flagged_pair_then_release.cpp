// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: destroys a flagged owned pair, then releases the object through the library function at 0x02fbe588.
//
// misc_destroy_flagged_pair_then_release (0x0139bf20) sets the object's vtable to its class's, releases the two
// owned pointers when its flag is set, clears both, runs the owned pair destructor at 0x0139b630, and tail-calls
// 0x02fbe588 with the object, whose result is returned.
#include <cstdint>

#include "flagged_owned_pair.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0247c460, fn_0247c460, void(void *object));
RT_ORIGINAL(0x0139b630, fn_0139b630, void(void *self));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *self));

RT_GLOBAL(0x056f1ef0, flagged_pair_vtable, misc::FlaggedOwnedPairVtable);

}  // namespace

/**
 *
 * Destroys the flagged pair and returns the result of the final library call on it.
 *
 * The two owned pointers are released only when the flag byte is nonzero; both are cleared either way.
 */
extern "C" uint64_t bb_misc_destroy_flagged_pair_then_release(misc::FlaggedOwnedPair *self)
{
    self->vtable = flagged_pair_vtable.address();
    if (self->flag_0x40 != 0) {
        if (self->first_0x30 != nullptr) fn_0247c460(self->first_0x30);
        if (self->second_0x38 != nullptr) fn_0247c460(self->second_0x38);
    }
    self->first_0x30 = nullptr;
    self->second_0x38 = nullptr;
    fn_0139b630(self);
    return fn_02fbe588(self);
}
