// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a member-function thunk whose object is kept at +0x08 and whose target is at +0x10.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t offset_thunk_virtual_bit = 1;

/**
 *
 * A member-function thunk: the object at +0x08, the target at +0x10, the adjustment at +0x18 and a 32-bit argument at +0x28.
 *
 */
struct OffsetMemberThunk {
    uint8_t unknown_0x00[0x08];
    uintptr_t object_0x08;        /**< The object the member lives in, before the adjustment; null means no call. */
    uint64_t target_0x10;         /**< Function address, or the virtual slot offset plus the virtual bit. */
    uint64_t adjustment_0x18;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x08];
    uint32_t argument_0x28;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(OffsetMemberThunk, object_0x08) == 0x08);
static_assert(offsetof(OffsetMemberThunk, target_0x10) == 0x10);
static_assert(offsetof(OffsetMemberThunk, adjustment_0x18) == 0x18);
static_assert(offsetof(OffsetMemberThunk, argument_0x28) == 0x28);

}  // namespace misc
