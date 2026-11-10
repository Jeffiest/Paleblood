// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: destroys a flagged owned pair by tail-calling the owned pair destructor at 0x0139b630.
//
// misc_destroy_flagged_pair_tail (0x0139bf90) sets the object's vtable to its class's, releases the two owned
// pointers when its flag is set, clears both, and tail-jumps to the owned pair destructor at 0x0139b630 with
// the object. Nothing is returned.
#include <cstdint>

#include "flagged_owned_pair.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0247c460, fn_0247c460, void(void *object));
RT_ORIGINAL(0x0139b630, fn_0139b630, void(void *self));

RT_GLOBAL(0x056f1ef0, flagged_pair_vtable, misc::FlaggedOwnedPairVtable);

}  // namespace

/**
 *
 * Destroys the flagged pair, ending in a tail call of the owned pair destructor. Nothing is returned.
 *
 * The two owned pointers are released only when the flag byte is nonzero; both are cleared either way.
 */
extern "C" void bb_misc_destroy_flagged_pair_tail(misc::FlaggedOwnedPair *self)
{
    self->vtable = flagged_pair_vtable.address();
    if (self->flag_0x40 != 0) {
        if (self->first_0x30 != nullptr) fn_0247c460(self->first_0x30);
        if (self->second_0x38 != nullptr) fn_0247c460(self->second_0x38);
    }
    self->first_0x30 = nullptr;
    self->second_0x38 = nullptr;
    fn_0139b630(self);
}
