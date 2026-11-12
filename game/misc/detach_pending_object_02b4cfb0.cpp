// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: detaches the pending object when the shared singleton is on the list, handing it to the target's slot 0x70.
#include <cstdint>

#include "detachable_list.h"
#include "detachable_object.h"
#include "forwarding_singleton.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0247b720, fn_0247b720, misc::DetachableObject *(misc::DetachableObject *));

/** The value returned when no detach happens: the original leaves RAX as the caller had it. */
constexpr uint64_t no_detach_result = 0x0;

}  // namespace

/**
 *
 * Takes the list's pending object off the list when the shared singleton is one of the list's nodes.
 *
 * The singleton is taken first (built when missing), then the chain is searched for it. When it is found, the
 * target (or, when there is none, the object the owner-lookup routine returns for the pending object) receives the
 * pending object through its slot 0x70 after the pending object's own slot 0 routine has run, and the slot 0x70
 * result is returned. The pending word is cleared last, on every path past the first test.
 */
extern "C" uint64_t bb_misc_detach_pending_object_02b4cfb0(uint64_t /* never read */, misc::DetachableListHead *list,
                                                          misc::DetachableObject *target)
{
    misc::DetachableObject *const pending = list->pending_0x08;
    if (pending == nullptr) return no_detach_result;
    misc::ForwardingSingleton *const singleton = misc::ensure_forwarding_singleton();
    misc::DetachableObject *found = nullptr;
    for (misc::DetachableNode *node = list->head_0x00; node != nullptr; node = node->next_0x08) {
        if (static_cast<const void *>(node) == static_cast<const void *>(singleton)) {
            found = pending;
            break;
        }
    }
    uint64_t result = no_detach_result;
    if (found != nullptr) {
        misc::DetachableObject *owner = target;
        if (owner == nullptr) owner = fn_0247b720(found);
        found->vtable->slot_00(found);
        result = owner->vtable->slot_70(owner, found);
    }
    list->pending_0x08 = nullptr;
    return result;
}
