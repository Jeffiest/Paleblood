// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_relay_member_call, in game/misc/relay_member_call.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../misc/member_thunk.h"

// auto_relay_member_call_0162eca0: misc_relay_member_call with other addresses.
namespace twin_0162eca0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0162eca0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0162eca0

// auto_relay_member_call_0162edd0: misc_relay_member_call with other addresses.
namespace twin_0162edd0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0162edd0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0162edd0

// auto_relay_member_call_0167d2f0: misc_relay_member_call with other addresses.
namespace twin_0167d2f0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0167d2f0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0167d2f0

// auto_relay_member_call_0179d510: misc_relay_member_call with other addresses.
namespace twin_0179d510 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0179d510(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0179d510

// auto_relay_member_call_0179eb10: misc_relay_member_call with other addresses.
namespace twin_0179eb10 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0179eb10(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0179eb10

// auto_relay_member_call_017a7810: misc_relay_member_call with other addresses.
namespace twin_017a7810 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_017a7810(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_017a7810

// auto_relay_member_call_017a9260: misc_relay_member_call with other addresses.
namespace twin_017a9260 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_017a9260(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_017a9260

// auto_relay_member_call_017a9430: misc_relay_member_call with other addresses.
namespace twin_017a9430 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_017a9430(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_017a9430

// auto_relay_member_call_017b3e60: misc_relay_member_call with other addresses.
namespace twin_017b3e60 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_017b3e60(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_017b3e60

// auto_relay_member_call_01856780: misc_relay_member_call with other addresses.
namespace twin_01856780 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01856780(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01856780

// auto_relay_member_call_01860220: misc_relay_member_call with other addresses.
namespace twin_01860220 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01860220(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01860220

// auto_relay_member_call_018636f0: misc_relay_member_call with other addresses.
namespace twin_018636f0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018636f0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018636f0

// auto_relay_member_call_0186b190: misc_relay_member_call with other addresses.
namespace twin_0186b190 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0186b190(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0186b190

// auto_relay_member_call_0186f390: misc_relay_member_call with other addresses.
namespace twin_0186f390 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0186f390(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0186f390

// auto_relay_member_call_0187f910: misc_relay_member_call with other addresses.
namespace twin_0187f910 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0187f910(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0187f910

// auto_relay_member_call_0188e3f0: misc_relay_member_call with other addresses.
namespace twin_0188e3f0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0188e3f0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0188e3f0

// auto_relay_member_call_0189e3c0: misc_relay_member_call with other addresses.
namespace twin_0189e3c0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0189e3c0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0189e3c0

// auto_relay_member_call_018a01d0: misc_relay_member_call with other addresses.
namespace twin_018a01d0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018a01d0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018a01d0

// auto_relay_member_call_018ad580: misc_relay_member_call with other addresses.
namespace twin_018ad580 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018ad580(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018ad580

// auto_relay_member_call_018afde0: misc_relay_member_call with other addresses.
namespace twin_018afde0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018afde0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018afde0

// auto_relay_member_call_018c1180: misc_relay_member_call with other addresses.
namespace twin_018c1180 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018c1180(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018c1180

// auto_relay_member_call_018c65c0: misc_relay_member_call with other addresses.
namespace twin_018c65c0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018c65c0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018c65c0

// auto_relay_member_call_018c81e0: misc_relay_member_call with other addresses.
namespace twin_018c81e0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018c81e0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018c81e0

// auto_relay_member_call_018d7cd0: misc_relay_member_call with other addresses.
namespace twin_018d7cd0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018d7cd0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018d7cd0

// auto_relay_member_call_018dd570: misc_relay_member_call with other addresses.
namespace twin_018dd570 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018dd570(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018dd570

// auto_relay_member_call_018dfbe0: misc_relay_member_call with other addresses.
namespace twin_018dfbe0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018dfbe0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018dfbe0

// auto_relay_member_call_018e1ad0: misc_relay_member_call with other addresses.
namespace twin_018e1ad0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018e1ad0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018e1ad0

// auto_relay_member_call_018ec740: misc_relay_member_call with other addresses.
namespace twin_018ec740 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018ec740(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018ec740

// auto_relay_member_call_018ed8b0: misc_relay_member_call with other addresses.
namespace twin_018ed8b0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018ed8b0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018ed8b0

// auto_relay_member_call_018ee7e0: misc_relay_member_call with other addresses.
namespace twin_018ee7e0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018ee7e0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018ee7e0

// auto_relay_member_call_018f0c00: misc_relay_member_call with other addresses.
namespace twin_018f0c00 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018f0c00(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018f0c00

// auto_relay_member_call_018f6030: misc_relay_member_call with other addresses.
namespace twin_018f6030 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_018f6030(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_018f6030

// auto_relay_member_call_0193e9f0: misc_relay_member_call with other addresses.
namespace twin_0193e9f0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0193e9f0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0193e9f0

// auto_relay_member_call_0196f540: misc_relay_member_call with other addresses.
namespace twin_0196f540 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_0196f540(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_0196f540

// auto_relay_member_call_01984e20: misc_relay_member_call with other addresses.
namespace twin_01984e20 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01984e20(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01984e20

// auto_relay_member_call_019bf860: misc_relay_member_call with other addresses.
namespace twin_019bf860 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_019bf860(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_019bf860

// auto_relay_member_call_019c1430: misc_relay_member_call with other addresses.
namespace twin_019c1430 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_019c1430(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_019c1430

// auto_relay_member_call_019c2db0: misc_relay_member_call with other addresses.
namespace twin_019c2db0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_019c2db0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_019c2db0

// auto_relay_member_call_019c6220: misc_relay_member_call with other addresses.
namespace twin_019c6220 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_019c6220(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_019c6220

// auto_relay_member_call_019c7300: misc_relay_member_call with other addresses.
namespace twin_019c7300 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_019c7300(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_019c7300

// auto_relay_member_call_019c96c0: misc_relay_member_call with other addresses.
namespace twin_019c96c0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_019c96c0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_019c96c0

// auto_relay_member_call_01b90390: misc_relay_member_call with other addresses.
namespace twin_01b90390 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01b90390(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01b90390

// auto_relay_member_call_01bc9b20: misc_relay_member_call with other addresses.
namespace twin_01bc9b20 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01bc9b20(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01bc9b20

// auto_relay_member_call_01bcc6d0: misc_relay_member_call with other addresses.
namespace twin_01bcc6d0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01bcc6d0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01bcc6d0

// auto_relay_member_call_01bce4b0: misc_relay_member_call with other addresses.
namespace twin_01bce4b0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01bce4b0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01bce4b0

// auto_relay_member_call_01bfe2e0: misc_relay_member_call with other addresses.
namespace twin_01bfe2e0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01bfe2e0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01bfe2e0

// auto_relay_member_call_01c272d0: misc_relay_member_call with other addresses.
namespace twin_01c272d0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01c272d0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01c272d0

// auto_relay_member_call_01c55b90: misc_relay_member_call with other addresses.
namespace twin_01c55b90 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01c55b90(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01c55b90

// auto_relay_member_call_01c626a0: misc_relay_member_call with other addresses.
namespace twin_01c626a0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01c626a0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01c626a0

// auto_relay_member_call_01c672d0: misc_relay_member_call with other addresses.
namespace twin_01c672d0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01c672d0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01c672d0

// auto_relay_member_call_01c6cf30: misc_relay_member_call with other addresses.
namespace twin_01c6cf30 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01c6cf30(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01c6cf30

// auto_relay_member_call_01c7c7b0: misc_relay_member_call with other addresses.
namespace twin_01c7c7b0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01c7c7b0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01c7c7b0

// auto_relay_member_call_01c859d0: misc_relay_member_call with other addresses.
namespace twin_01c859d0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01c859d0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01c859d0

// auto_relay_member_call_01c93480: misc_relay_member_call with other addresses.
namespace twin_01c93480 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01c93480(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01c93480

// auto_relay_member_call_01cdea80: misc_relay_member_call with other addresses.
namespace twin_01cdea80 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01cdea80(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01cdea80

// auto_relay_member_call_01ce3040: misc_relay_member_call with other addresses.
namespace twin_01ce3040 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01ce3040(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01ce3040

// auto_relay_member_call_01d75dc0: misc_relay_member_call with other addresses.
namespace twin_01d75dc0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01d75dc0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01d75dc0

// auto_relay_member_call_01d916c0: misc_relay_member_call with other addresses.
namespace twin_01d916c0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01d916c0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01d916c0

// auto_relay_member_call_01d96680: misc_relay_member_call with other addresses.
namespace twin_01d96680 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01d96680(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01d96680

// auto_relay_member_call_01da42a0: misc_relay_member_call with other addresses.
namespace twin_01da42a0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01da42a0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01da42a0

// auto_relay_member_call_01df3700: misc_relay_member_call with other addresses.
namespace twin_01df3700 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01df3700(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01df3700

// auto_relay_member_call_01dffff0: misc_relay_member_call with other addresses.
namespace twin_01dffff0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01dffff0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01dffff0

// auto_relay_member_call_01e04e50: misc_relay_member_call with other addresses.
namespace twin_01e04e50 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_01e04e50(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_01e04e50

// auto_relay_member_call_020dad70: misc_relay_member_call with other addresses.
namespace twin_020dad70 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_020dad70(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_020dad70

// auto_relay_member_call_02155320: misc_relay_member_call with other addresses.
namespace twin_02155320 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_02155320(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_02155320

// auto_relay_member_call_02436040: misc_relay_member_call with other addresses.
namespace twin_02436040 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_02436040(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_02436040

// auto_relay_member_call_024393f0: misc_relay_member_call with other addresses.
namespace twin_024393f0 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_024393f0(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_024393f0

// auto_relay_member_call_02dcb510: misc_relay_member_call with other addresses.
namespace twin_02dcb510 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_02dcb510(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_02dcb510

// auto_relay_member_call_02de3900: misc_relay_member_call with other addresses.
namespace twin_02de3900 {

// Misc: tail-calls a member-function thunk's target on its adjusted object, with a payload from an owner.


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
using MemberRelayTarget = void (*)(void *object, void *payload, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the owner's forwarded payload, as a tail call.
 *
 * A null owner, a null payload or a null object returns without a call. A virtual target is read from the
 * adjusted object's vtable first. Nothing is returned.
 */
extern "C" void bb_auto_relay_member_call_02de3900(MemberRelayThunk *thunk, MemberRelayOwner *owner)
{
    if (owner == nullptr || owner->payload == 0 || thunk->object == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    const uintptr_t forwarded = owner->payload + payload_forward_offset;
    reinterpret_cast<MemberRelayTarget>(callee)(reinterpret_cast<void *>(self),
                                                reinterpret_cast<void *>(forwarded), thunk->argument);
}

}  // namespace twin_02de3900
