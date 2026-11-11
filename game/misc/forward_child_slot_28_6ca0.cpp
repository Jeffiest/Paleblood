// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: forwards a reference's child object to the routine in the child's vtable slot at +0x28, with a zero second argument.
#include <cstdint>

#include "child_object_ref.h"
#include "virtual_object.h"

namespace {

/** The child's routine as this thunk reaches it: the child, then the second argument the original passes. */
using ForwardedSlot = uint64_t (*)(misc::VirtualObject *child, uint64_t second);

/** The second argument the original passes: it clears the register before the call. */
constexpr uint64_t second_argument = 0x0;

}  // namespace

/**
 *
 * Forwards the reference's child to the routine in the child's slot at +0x28, with a zero second argument.
 *
 * The routine's result is returned as it is, so this is a tail call.
 */
extern "C" uint64_t bb_misc_forward_child_slot_28_6ca0(misc::ChildObjectRef *reference)
{
    misc::VirtualObject *child = reference->child_0x08;
    const auto slot = reinterpret_cast<uintptr_t>(child->vtable->slot_28);
    const auto routine = reinterpret_cast<ForwardedSlot>(slot);
    return routine(child, second_argument);
}
