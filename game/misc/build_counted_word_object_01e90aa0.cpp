// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: builds a counted word object: its virtual table and its default mask.
#include <cstdint>

#include "counted_word_object.h"

/**
 *
 * Sets the object's virtual table and its default mask, and clears the word beside the mask, which the original's
 * eight-byte store of the mask also clears. The word is otherwise left as it is.
 *
 * Returns the mask, as the original leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_build_counted_word_object_01e90aa0(misc::CountedWordObject *object)
{
    object->vtable_0x00 = misc::counted_word_vtable.address();
    object->mask_0x08 = misc::counted_word_default_mask;
    object->word_0x0c = 0;
    return misc::counted_word_default_mask;
}
