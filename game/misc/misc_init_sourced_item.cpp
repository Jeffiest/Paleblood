// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "../engine/engine.h"
#include "sourced_item_object.h"

/**
 *
 * Makes a sourced item object: it sets both base vtables and a default size word, copies the 32-byte
 * source record into the object, and holds the counted item it is given with one more reference.
 *
 * Returns the object's marker value.
 */
extern "C" uint64_t bb_misc_init_sourced_item(misc::SourcedItemObject *object, misc::RefItem *held,
                                              const misc::SourcedItemSource *source)
{
    object->size_word_0x08 = misc::sourced_item_default_size_word;
    object->primary_vtable = misc::sourced_item_vtable.address() + engine::vtable_address_point;
    object->secondary_vtable = misc::sourced_item_vtable.address() + misc::sourced_item_secondary_vtable_offset;
    object->low_0x20 = source->low_0x00;
    object->high_0x28 = source->high_0x08;
    object->qword_0x30 = source->qword_0x10;
    object->tail_0x38 = source->tail_0x18;

    if (held != nullptr && held->refcount_word >= misc::ref_counted_threshold)
        misc::increment_ref_count(&held->refcount_word);
    object->held_0x40 = held;
    object->zero_0x48 = 0;
    object->high_bit_0x50 = misc::sourced_item_high_bit;
    object->marker_0x58 = misc::sourced_item_marker;
    object->minus_one_0x60 = misc::sourced_item_minus_one;
    object->zero_0x68 = 0;
    object->zero_0x70 = 0;
    return misc::sourced_item_marker;
}
