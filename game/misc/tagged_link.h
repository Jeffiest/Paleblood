// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Bit of TaggedLink::tagged that marks the link as a tag and is not part of the address. */
constexpr uint64_t tagged_link_flag = 0x1;

/**
 *
 * A link whose value keeps a flag in its lowest bit next to the address it refers to.
 *
 */
struct TaggedLink {
    uint8_t unknown_0x00[0x10];
    uint64_t tagged; /**< The address with the flag in bit 0. */
};
static_assert(offsetof(TaggedLink, tagged) == 0x10);

}  // namespace misc
