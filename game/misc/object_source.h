// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the source record an object is created from, and the keyed entries it searches.
#pragma once

#include <cstddef>
#include <cstdint>

/**
 *
 * One keyed entry of a source's list: the link to the next entry is at +0x8.
 *
 */
struct SourceEntry {
    uint8_t unknown_0x0000[0x08];
    SourceEntry *next_0x08; /**< The following entry, or null at the end of the list. */
};
static_assert(offsetof(SourceEntry, next_0x08) == 0x08);

/**
 *
 * The source record an object is created from: its entry list, two candidate words, a readiness
 * byte and a selector whose low bit chooses which candidate word is used.
 *
 */
struct ObjectSource {
    uint8_t unknown_0x0000[0x110];
    SourceEntry *entries_0x110;  /**< The head of the entry list searched when the selector is set. */
    uint64_t field_0x118;        /**< A candidate word, used when the selector is set. */
    uint8_t unknown_0x0120[0xf0];
    uint64_t field_0x210;        /**< The other candidate word, used when the selector is clear. */
    uint8_t unknown_0x0218[0x240];
    uint8_t ready_0x458;         /**< Must be one for the source to be used. */
    uint8_t unknown_0x0459[0x01];
    uint8_t selector_0x45a;      /**< Bit zero chooses the candidate word and enables the entry search. */
    uint8_t unknown_0x045b[0x05];
    uint64_t alloc_arg_0x460;    /**< Passed as the third argument of the object allocation. */
    uint8_t flag_0x468;          /**< Read by the original but not used in the result. */
};
static_assert(offsetof(ObjectSource, entries_0x110) == 0x110);
static_assert(offsetof(ObjectSource, field_0x118) == 0x118);
static_assert(offsetof(ObjectSource, field_0x210) == 0x210);
static_assert(offsetof(ObjectSource, ready_0x458) == 0x458);
static_assert(offsetof(ObjectSource, selector_0x45a) == 0x45a);
static_assert(offsetof(ObjectSource, alloc_arg_0x460) == 0x460);
static_assert(offsetof(ObjectSource, flag_0x468) == 0x468);
