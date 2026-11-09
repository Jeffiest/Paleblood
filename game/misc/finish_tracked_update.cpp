// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

namespace {
RT_ORIGINAL(0x00400300, fn_00400300, uint64_t(uint64_t));
RT_ORIGINAL(0x004de720, fn_004de720, void(misc::RefCounted *));
}  // namespace

/**
 *
 * Finishes a pending update of a tracked object: dispatches its target, refreshes the owned
 * subobject, and releases the references the update took.
 *
 * Nothing happens unless the pending bit is set. The keep argument counts only its low byte, and
 * the refresh runs only when that byte is nonzero and the third slot is filled.
 */
extern "C" void bb_misc_finish_tracked_update(misc::Tracked *self, uint32_t keep)
{
    if ((self->flags & misc::pending_flag) == 0) return;

    misc::RefCounted *held = reinterpret_cast<misc::RefCounted *>(
        fn_00400300(reinterpret_cast<uint64_t>(self)));
    if (held != nullptr) ++held->count;

    if (self->target->flag != 0) {
        fn_004de720(held);
    } else {
        misc::fn_004de620(held);
        misc::fn_004de6a0(held, self->target);
    }
    if (misc::Target *target = self->target; target != nullptr) {
        misc::Dispatcher *dispatcher = misc::pending_dispatcher.get();
        dispatcher->vtable->slot_0x68(dispatcher, target);
    }

    self->target = nullptr;
    self->flags &= static_cast<uint8_t>(~misc::pending_flag);

    misc::Pending pending{};
    misc::fn_0042b850(&pending, self->source->value, self);

    const uint8_t keep_byte = static_cast<uint8_t>(keep);
    if (keep_byte != 0 && pending.third != nullptr) {
        void *subobject = static_cast<uint8_t *>(pending.third) + misc::owned_subobject_offset;
        const int64_t result = misc::fn_004f3e80(subobject, self);
        if (result != -1) misc::fn_004f4410(subobject, pending.third, result);
    }

    misc::fn_004deb80(held, 0);
    if (pending.third != nullptr) misc::fn_0045a510(pending.third);
    if (pending.second != nullptr) misc::fn_0045a510(pending.second);
    if (pending.first != nullptr && --pending.first->count == 0) misc::fn_00482790(pending.first);
    if (held != nullptr && --held->count == 0) misc::fn_00482790(held);
}
