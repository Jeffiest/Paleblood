// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

/**
 *
 * Sets up a child holder: marks it with a kind and a width, gives it the child holder vtable, and
 * points it at a new child node from the dispatcher's allocator.
 *
 * The child's sub-object is initialised, then reported with the child name format; the report's
 * result is the function's result.
 */
extern "C" uint64_t bb_misc_init_child_holder(misc::ChildHolder *holder)
{
    holder->kind = 1;
    holder->width = misc::child_width;
    holder->vtable = static_cast<const uint8_t *>(misc::child_holder_table.address()) + misc::holder_vtable_offset;

    misc::Dispatcher *manager = misc::pending_dispatcher.get();
    auto *child = static_cast<misc::ChildNode *>(manager->vtable->slot_0x50(manager, misc::child_size, 0));
    child->third = 0;
    child->second = 0;
    child->first = 0;

    void *sub_object = reinterpret_cast<uint8_t *>(child) + misc::child_sub_offset;
    misc::fn_0045c6f0(sub_object);
    holder->child = child;
    return misc::fn_0045d5a0(sub_object, misc::child_name_format.address());
}
