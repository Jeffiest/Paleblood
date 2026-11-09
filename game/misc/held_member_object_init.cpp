// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "held_member_object.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

// The vtable every held member object is given, and the name its tail member is initialised with.
RT_GLOBAL(0x0566e7f0, held_member_vtable, const misc::HeldMemberVtable);
RT_GLOBAL(0x04bb6450, tail_member_name, const char);

// The count word a new held member object starts with: one reference, and the counted flag.
constexpr uint32_t initial_ref_word = 0xffff0001;
// The scale stored with a new object: 1.0 as a float.
constexpr float unit_scale = 1.0f;
// The value stored at 0x70 when the object is built.
constexpr uint32_t initial_value = 0x100;

RT_ORIGINAL(0x00836630, init_tail_member, void(void *member));
RT_ORIGINAL(0x00836640, fill_member, void(void *member, int32_t value));
RT_ORIGINAL(0x00836890, init_named_member, void(void *member, const char *name));

}  // namespace

/**
 *
 * Builds a held member object around a reference item: it takes one reference of its own, initialises
 * its tail member, counts the held item when it is flagged, and zeroes its members and values.
 *
 * The scale fields are set to one and the value at 0x70 to 0x100, as the original does.
 */
extern "C" void bb_misc_held_member_object_init(misc::HeldMemberObject *object, misc::RefItem *item)
{
    object->refcount_word = initial_ref_word;
    object->vtable = held_member_vtable.address();
    init_tail_member(object->tail_member);

    if (item != nullptr && item->refcount_word >= misc::ref_counted_threshold)
        misc::increment_ref_count(&item->refcount_word);
    object->held = item;
    object->value_0x20 = 0;

    fill_member(object->member_0x28, 0);
    object->low_0x30 = 0;
    fill_member(object->member_0x38, 0);
    object->word_0x40 = 0;
    object->scale_0x44 = unit_scale;
    fill_member(object->member_0x48, 0);
    object->zero_0x50 = 0;
    object->scale_0x54 = unit_scale;
    fill_member(object->member_0x58, 0);

    object->zero_0x60 = 0;
    object->zero_0x68 = 0;
    init_named_member(object->tail_member, tail_member_name.address());
    object->value_0x70 = initial_value;
}
