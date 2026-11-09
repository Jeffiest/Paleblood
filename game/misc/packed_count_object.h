// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a counted object whose 32-bit word keeps a release count in its low half and leaves its high half alone.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct PackedCountObject;

/**
 *
 * The counted object's virtual table: the slot at +0x20 destroys the object.
 *
 */
struct PackedCountVtable {
    uint8_t unknown_0x0000[0x20];
    void (*destroy)(PackedCountObject *object); /**< Runs when the low count reaches zero. */
};
static_assert(offsetof(PackedCountVtable, destroy) == 0x20);

/**
 *
 * A counted object: its virtual table, then the packed count word at +0x8.
 *
 */
struct PackedCountObject {
    const PackedCountVtable *vtable; /**< Virtual table of the object. */
    uint32_t packed_count;           /**< Low 16 bits: the release count. High 16 bits: the gate, nonzero to allow releases. */
};
static_assert(offsetof(PackedCountObject, packed_count) == 0x8);

/** The gate of the packed count: releases happen only while its high half is nonzero. */
constexpr uint32_t packed_count_gate = 0x10000;

/** The high half of the packed count, which a release leaves unchanged. */
constexpr uint32_t packed_count_high_mask = 0xffff0000;

/**
 *
 * Releases one count from the low half of the packed count, leaving the high half unchanged.
 *
 * The caller checks the gate first. The result is true when the low half reached zero, which is
 * when the object must be destroyed.
 *
 */
inline bool release_packed_count(PackedCountObject *counted)
{
    uint32_t observed = 0;
    uint32_t expected = 0;
    uint32_t desired = 0;
    do {
        observed = counted->packed_count;
        desired = (observed & packed_count_high_mask) | static_cast<uint16_t>(observed - 1);
        expected = observed;
    } while (!__atomic_compare_exchange_n(&counted->packed_count, &expected, desired, false,
                                          __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST));
    return static_cast<uint16_t>(observed - 1) == 0;
}

}  // namespace misc
