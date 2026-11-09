// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.
#include <cstddef>
#include <cstdint>

#include "member_thunk.h"

namespace {

/** A member-function thunk with the object at 0x08, the target at 0x10 and a 32-bit argument at 0x20. */
struct MemberRelayThunk {
    uint8_t unknown_0x00[0x08];
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit. */
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberRelayThunk, object) == 0x08);
static_assert(offsetof(MemberRelayThunk, target) == 0x10);
static_assert(offsetof(MemberRelayThunk, adjustment) == 0x18);
static_assert(offsetof(MemberRelayThunk, argument) == 0x20);

/** An owner whose payload pointer at 0x08 gives the second argument, at a fixed offset into the payload. */
struct MemberRelayOwner {
    uint8_t unknown_0x00[0x08];
    uintptr_t payload;       /**< The payload block; the target receives its forwarded part. */
};
static_assert(offsetof(MemberRelayOwner, payload) == 0x08);

/** The payload offset that the target receives. */
constexpr uintptr_t payload_forward_offset = 0x28;

/** The signature of the targets: the adjusted object, the forwarded payload and the 32-bit argument. */
using MemberRelayTarget = uint64_t (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, and returns its result.
 *
 * A null owner, a null payload or a null object returns without a call, and the original leaves the
 * return register alone there. A virtual target is read from the adjusted object's vtable first.
 */
extern "C" uint64_t bb_misc_relay_member_call(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return 0;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    return reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                       reinterpret_cast<void *>(forwarded), thunk->argument);
}
