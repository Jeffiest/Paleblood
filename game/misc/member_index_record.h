// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One record of a member index group, 0x28 bytes each, whose first word the group's route hands out.
 *
 */
struct MemberIndexRecord {
    uint64_t head;                 /**< The record's first word. */
    uint8_t unknown_0x0008[0x20];
};
static_assert(offsetof(MemberIndexRecord, head) == 0x00);
static_assert(sizeof(MemberIndexRecord) == 0x28);

}  // namespace misc
