// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A record of four 32-bit values, two of them written under each of two groups of field keys.
 *
 */
struct FieldPairRecord {
    uint8_t unknown_0x00[0x8];
    uint32_t value_0x08;      /**< The second value of the first group. */
    uint32_t value_0x0c;      /**< The first value of the first group. */
    uint8_t unknown_0x10[0x18];
    uint32_t value_0x28;      /**< The second value of the second group. */
    uint32_t value_0x2c;      /**< The first value of the second group. */
};
static_assert(offsetof(FieldPairRecord, value_0x08) == 0x8 && offsetof(FieldPairRecord, value_0x0c) == 0xc);
static_assert(offsetof(FieldPairRecord, value_0x28) == 0x28 && offsetof(FieldPairRecord, value_0x2c) == 0x2c);

}  // namespace misc
