// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A small configuration record whose defaults are written when it is made, with one word at its end
 * that a separate routine initialises.
 *
 */
struct ConfigDefaultsRecord {
    uint8_t kind;                  /**< Configuration kind, set to the default kind. */
    uint8_t enabled;               /**< Set when the record is enabled by default. */
    uint8_t option_c;              /**< Cleared by default. */
    uint8_t unknown_0x0003[1];
    int32_t count;                 /**< Default count of entries. */
    uint64_t link_a;               /**< Cleared by default. */
    uint64_t link_b;               /**< Cleared by default. */
    float scale_a;                 /**< Default scale, one tenth. */
    float scale_b;                 /**< Default scale, one tenth. */
    uint32_t limit_a;              /**< Default limit. */
    uint32_t limit_b;              /**< Default limit. */
    uint32_t limit_c;              /**< Default limit. */
    uint32_t limit_d;              /**< Default limit. */
    uint8_t flag_d;                /**< Cleared by default. */
    uint8_t unknown_0x0031[0x07];
    uint64_t tail_word;            /**< Initialised by a separate routine at the end of the record. */
};
static_assert(offsetof(ConfigDefaultsRecord, kind) == 0x00);
static_assert(offsetof(ConfigDefaultsRecord, count) == 0x04);
static_assert(offsetof(ConfigDefaultsRecord, link_a) == 0x08);
static_assert(offsetof(ConfigDefaultsRecord, link_b) == 0x10);
static_assert(offsetof(ConfigDefaultsRecord, scale_a) == 0x18);
static_assert(offsetof(ConfigDefaultsRecord, scale_b) == 0x1c);
static_assert(offsetof(ConfigDefaultsRecord, limit_a) == 0x20);
static_assert(offsetof(ConfigDefaultsRecord, limit_d) == 0x2c);
static_assert(offsetof(ConfigDefaultsRecord, flag_d) == 0x30);
static_assert(offsetof(ConfigDefaultsRecord, tail_word) == 0x38);

}  // namespace misc
