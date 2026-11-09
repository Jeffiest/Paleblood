// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "linked_object.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

// The vtable every linked object is given, and the name its tail member is initialised with.
RT_GLOBAL(0x0566d970, linked_object_vtable, const misc::LinkedObjectVtable);
RT_GLOBAL(0x04bb5300, tail_member_name, const char);

// The count word a new linked object starts with: one reference, and the counted flag.
constexpr uint32_t initial_ref_word = 0xffff0001;
// The scale stored with a new linked object: 1.0 as a float.
constexpr float unit_scale = 1.0f;

RT_ORIGINAL(0x00836630, init_tail_member, void(void *member));
RT_ORIGINAL(0x00836640, fill_member, void(void *member, int32_t value));
RT_ORIGINAL(0x00836890, init_named_member, void(void *member, const char *name));

}  // namespace

/**
 *
 * Builds a linked object around a reference item: it takes one reference of its own, initialises its
 * tail member, counts the held item when it is flagged, and zeroes its members and values.
 */
extern "C" void bb_misc_linked_object_init(misc::LinkedObject *object, misc::RefItem *item)
{
    object->refcount_word = initial_ref_word;
    object->vtable = linked_object_vtable.address();
    init_tail_member(object->tail_member);

    if (item != nullptr && item->refcount_word >= misc::ref_counted_threshold)
        misc::increment_ref_count(&item->refcount_word);
    object->held = item;
    object->value_0x20 = 0;

    fill_member(object->second_member, 0);
    object->low_0x30 = 0;
    object->scale_0x34 = 0.0f;
    fill_member(object->first_member, 0);
    init_named_member(object->tail_member, tail_member_name.address());

    object->low_0x30 = 0;
    object->scale_0x34 = unit_scale;
    object->flag_0x40 = 0;
}
