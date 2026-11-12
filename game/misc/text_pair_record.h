// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record holding its allocator, two wide-string names and the metric values and blocks that go with them.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/wide_string.h"

namespace misc {

/** The caller's flag bit kept in the record's flags byte. */
constexpr uint8_t text_pair_flag_bit = 0x01;

/** First value of the first metric pair: both values of that pair are this. */
constexpr float text_pair_metric_wide = 96.0f;

/** First value of the second metric pair: both values of that pair are this. */
constexpr float text_pair_metric_mid = 512.0f;

/** First value of the fourth metric pair. */
constexpr float text_pair_metric_large = 1280.0f;

/** Second value of the fourth metric pair. */
constexpr float text_pair_metric_small = 720.0f;

/** Size of each of the two blocks copied in from read-only data. */
constexpr std::size_t text_pair_block_bytes = 0x10;

/** A pair of metric values. */
struct MetricPair {
    float first;                              /**< The first value. */
    float second;                             /**< The second value. */
};
static_assert(sizeof(MetricPair) == 0x08);

/**
 *
 * The record: the allocator that owns both names, the first name at 0x08, the second at 0x40, the flags byte at 0x78,
 * four metric pairs, and two copies of the 16-byte block from read-only data.
 *
 */
struct TextPairRecord {
    engine::Allocator *allocator;             /**< Allocator shared by both names. */
    engine::WideString first_name;            /**< The first name, at offset 0x08. */
    engine::WideString second_name;           /**< The second name, at offset 0x40. */
    uint8_t flags;                            /**< Flag bits; bit 0 is set from the caller's flag. */
    uint8_t unknown_0x79[0x03];
    MetricPair metrics_0x7c;                  /**< First metric pair. */
    MetricPair metrics_0x84;                  /**< Second metric pair. */
    MetricPair metrics_0x8c;                  /**< Third metric pair. */
    MetricPair metrics_0x94;                  /**< Fourth metric pair. */
    uint8_t unknown_0x9c[0x04];
    uint8_t block_0xa0[text_pair_block_bytes];  /**< Copy of the default block. */
    uint8_t block_0xb0[text_pair_block_bytes];  /**< Second copy of the default block. */
};
static_assert(offsetof(TextPairRecord, first_name) == 0x08 && offsetof(TextPairRecord, second_name) == 0x40);
static_assert(offsetof(TextPairRecord, flags) == 0x78 && offsetof(TextPairRecord, metrics_0x7c) == 0x7c);
static_assert(offsetof(TextPairRecord, block_0xa0) == 0xa0 && offsetof(TextPairRecord, block_0xb0) == 0xb0);
static_assert(sizeof(TextPairRecord) == 0xc0);

}  // namespace misc
