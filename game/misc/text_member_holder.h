// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the holder whose enable flag and member object decide whether a text is matched through its member.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The holder: an enable word at offset 0x00 and the member object at offset 0x18.
 *
 */
struct TextMemberHolder {
    uint32_t enabled_0x00;        /**< Nonzero when the lookup runs. */
    uint8_t unknown_0x04[0x14];
    void *member_0x18;            /**< Member object the lookup is made through. */
};
static_assert(offsetof(TextMemberHolder, enabled_0x00) == 0x00);
static_assert(offsetof(TextMemberHolder, member_0x18) == 0x18);

}  // namespace misc
