// SPDX-License-Identifier: GPL-2.0-or-later
#include "slot_table_object.h"

namespace {

/**
 *
 * Marks a slot empty: null pointer, zero count and the unused limit word.
 *
 */
void clear_slot(misc::SlotTableSlot &slot)
{
    slot.pointer = 0;
    slot.count = 0;
    slot.limit = misc::slot_table_unused_limit;
}

}  // namespace

/**
 *
 * Initialises a slot-table object: stores its vtable address point and size word, empties the three
 * leading slots, the lone pointer and the fourteen trailing slots, and sets the status and flags words.
 *
 * Nothing is returned; the caller overwrites RAX straight afterwards.
 */
extern "C" void bb_misc_init_slot_table_object(misc::SlotTableObject *object)
{
    object->size_word_0x08 = misc::slot_table_size_word;
    object->vtable = misc::slot_table_vtable.address() + engine::vtable_address_point;
    for (misc::SlotTableSlot &slot : object->head_slots) clear_slot(slot);
    object->lone_pointer = 0;
    object->status_word = misc::slot_table_status_default;
    object->flags_word = misc::slot_table_flags_default;
    for (misc::SlotTableSlot &slot : object->tail_slots) clear_slot(slot);
}
