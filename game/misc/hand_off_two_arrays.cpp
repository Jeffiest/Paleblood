// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "owned_array.h"
#include "runtime/original.h"

namespace {

// The text the source is read with: its address is passed on unchanged.
RT_GLOBAL(0x055191e0, source_text, const char);
// Fills the two arrays from the source and the text.
RT_ORIGINAL(0x00c24e60, fn_00c24e60, void(const void *source, const char *text, misc::OwnedArray *first, misc::OwnedArray *second));
// Hands the two arrays to the object.
RT_ORIGINAL(0x00cbe140, fn_00cbe140, void(void *self, misc::OwnedArray *first, misc::OwnedArray *second));

}  // namespace

/**
 *
 * Builds two arrays from a source, hands them to the object, then frees the ones it owns: the second
 * array first, then the first.
 *
 * Nothing is returned.
 */
extern "C" void bb_misc_hand_off_two_arrays(void *self, const void *source)
{
    misc::OwnedArray first{nullptr, 0, misc::unowned_capacity};
    misc::OwnedArray second{nullptr, 0, misc::unowned_capacity};
    fn_00c24e60(source, source_text.address(), &first, &second);
    fn_00cbe140(self, &first, &second);
    misc::release_array(&second, misc::element_shift_4);
    misc::release_array(&first, misc::element_shift_16);
}
