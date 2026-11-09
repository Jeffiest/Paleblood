// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "bounded_range_object.h"
#include "runtime/original.h"

namespace {

// The object's own vtable address point and the vtable of its second base, both set when it is built.
RT_GLOBAL(0x0566e890, bounded_vtable, const uint8_t);
RT_GLOBAL(0x0566e958, bounded_secondary_vtable, const uint8_t);

// The count word a new object starts with: one reference, and the counted flag.
constexpr uint32_t initial_ref_word = 0xffff0001;

}  // namespace

/**
 *
 * Builds a bounded range object: it takes one reference of its own, stores both vtables, zeroes the first
 * word, sets every range slot's lowest value with a zero word, and sets the final lowest value.
 */
extern "C" void bb_misc_bounded_range_object_init(misc::BoundedRangeObject *object)
{
    object->refcount_word = initial_ref_word;
    object->vtable = bounded_vtable.address();
    object->secondary_vtable = bounded_secondary_vtable.address();
    object->zero_0x20 = 0;

    for (misc::RangeSlot &slot : object->slots) {
        slot.lowest_value = misc::lowest_int64_value;
        slot.zero_word = 0;
    }
    object->lowest_0xb8 = misc::lowest_int64_value;
}
