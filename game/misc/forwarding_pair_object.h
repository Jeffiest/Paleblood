// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object with a sub-object at 0x30 and a member at 0x268, which two forwarding routines act on.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Size of the sub-object that starts at 0x30 of a forwarding pair object. */
constexpr size_t forwarding_sub_object_size = 0x238;
/** Size of the member that starts at 0x268 of a forwarding pair object. */
constexpr size_t forwarding_member_size = 0x10;

/**
 *
 * The sub-object of a forwarding pair object, which takes an id; its layout is not read here.
 *
 */
struct ForwardingSubObject {
    uint8_t unknown_0x0000[forwarding_sub_object_size];
};

/**
 *
 * The member of a forwarding pair object, which is released or initialised and then forwarded.
 *
 */
struct ForwardingMember {
    uint8_t unknown_0x0000[forwarding_member_size];
};

/**
 *
 * An object with a sub-object at 0x30 that takes an id, and a member at 0x268 that is handed on.
 *
 */
struct ForwardingPairObject {
    uint8_t unknown_0x0000[0x30];
    ForwardingSubObject sub_object;
    ForwardingMember member;
};
static_assert(offsetof(ForwardingPairObject, sub_object) == 0x30);
static_assert(offsetof(ForwardingPairObject, member) == 0x268);

}  // namespace misc
