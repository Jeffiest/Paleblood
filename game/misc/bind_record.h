// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record that binds a key to a bound target.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct BoundTarget;

/**
 *
 * A bind record: a key at +0x8 and the bound target at +0x10.
 *
 */
struct BindRecord {
    uint8_t unknown_0x00[0x8];
    uint64_t key_0x08;          /**< Passed to the binding call and stored before it. */
    BoundTarget *target_0x10;   /**< The target the binding call returns. */
};
static_assert(offsetof(BindRecord, key_0x08) == 0x8 && offsetof(BindRecord, target_0x10) == 0x10);

}  // namespace misc
