// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "derived_object.h"
#include "owned_array.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

// The text the source is read with: its address is passed on unchanged.
RT_GLOBAL(0x055191e0, source_text, const char);
// Fills the two arrays from the held item's branches and the text.
RT_ORIGINAL(0x00c24e60, fn_00c24e60, void(const void *branches, const char *text, misc::OwnedArray *first, misc::OwnedArray *second));
// Hands the two arrays to the object.
RT_ORIGINAL(0x00cbe140, fn_00cbe140, void(void *self, misc::OwnedArray *first, misc::OwnedArray *second));

}  // namespace

/**
 *
 * Replaces the object's held item: counts the new item when it is counted, drops the old one, stores
 * the new one, then builds two arrays from its branches, hands them to the object and frees the
 * storage each one owns (the second array first).
 *
 * Nothing is returned.
 */
extern "C" void bb_misc_replace_holder_and_hand_off(misc::DerivedObject *self, misc::RefItem *item)
{
    if (item != nullptr && item->refcount_word >= misc::ref_counted_threshold)
        misc::increment_ref_count(&item->refcount_word);
    misc::drop_held_reference(self);
    self->holder_0xb0 = item;

    misc::OwnedArray first{nullptr, 0, misc::unowned_capacity};
    misc::OwnedArray second{nullptr, 0, misc::unowned_capacity};
    fn_00c24e60(item->branches, source_text.address(), &first, &second);
    fn_00cbe140(self, &first, &second);
    misc::release_array(&second, misc::element_shift_4);
    misc::release_array(&first, misc::element_shift_16);
}
