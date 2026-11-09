// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the holder state whose body is searched by key, and the offset of the search table in the body.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The holder's body: the search tables sit at +0x28 of it.
 *
 */
struct HolderBody {
    uint8_t unknown_0x0000[0x40];
};

/** Offset of the search table within the holder's body. */
constexpr uint64_t holder_table_offset = 0x28;

/**
 *
 * The holder state: a pointer to its body at +0x12d0.
 *
 */
struct HolderState {
    uint8_t unknown_0x0000[0x12d0];
    HolderBody *body_0x12d0;     /**< Body whose search table is used. */
};
static_assert(offsetof(HolderState, body_0x12d0) == 0x12d0);

}  // namespace misc
