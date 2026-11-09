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

}  // namespace misc
