// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_call_object_slot_38, in game/misc/call_object_slot_38.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/virtual_object.h"
#include <cstdint>

// auto_call_object_slot_38_0133f010: misc_call_object_slot_38 with other addresses.
namespace twin_0133f010 {

namespace {

/** The slot's routine as this thunk reaches it: the object, then the caller's other arguments as they came. */
using ForwardedSlot = uint64_t (*)(misc::VirtualObject *object, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

}  // namespace

/**
 *
 * Forwards a reference's object to the virtual routine in the object's slot at +0x38.
 *
 * The routine receives the object in place of the reference and the other five arguments unchanged, and its
 * result is returned as it is, so this is a tail call. How many of the arguments the routine reads is not
 * known here.
 */
extern "C" uint64_t bb_auto_call_object_slot_38_0133f010(misc::VirtualObjectRef *reference, uint64_t second, uint64_t third,
                                                uint64_t fourth, uint64_t fifth, uint64_t sixth)
{
    misc::VirtualObject *object = reference->object;
    const auto slot = reinterpret_cast<uintptr_t>(object->vtable->slot_38);
    const auto routine = reinterpret_cast<ForwardedSlot>(slot);
    return routine(object, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0133f010
