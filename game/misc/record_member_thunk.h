// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a member-function thunk that calls its target with a record on the stack and a 32-bit argument.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A member-function thunk: the object at +0x50, the target at +0x58, the adjustment at +0x60 and a 32-bit argument at +0x68.
 *
 */
struct RecordMemberThunk {
    uint8_t unknown_0x00[0x50];
    uintptr_t object_0x50;                /**< The object the member lives in, before the adjustment. */
    uint64_t target_0x58;                 /**< Function address, or the virtual slot offset plus the virtual bit. */
    uint64_t adjustment_0x60;             /**< Added to the object to give the object the target is called on. */
    uint32_t argument_0x68;               /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(RecordMemberThunk, object_0x50) == 0x50);
static_assert(offsetof(RecordMemberThunk, target_0x58) == 0x58);
static_assert(offsetof(RecordMemberThunk, adjustment_0x60) == 0x60);
static_assert(offsetof(RecordMemberThunk, argument_0x68) == 0x68);

}  // namespace misc
