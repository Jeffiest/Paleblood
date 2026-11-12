// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Offset of the ready-checked slot inside its owner, the address that the readiness test and the forward take. */
constexpr size_t ready_checked_slot_offset = 0x40;

/**
 *
 * The slot that a readiness test reads and that a forwarding call then takes. The forwarding path
 * only passes its address on, so only the address of the slot matters here.
 *
 */
struct ReadyCheckedSlot {
    uint8_t unknown_0x0000[0x1];  /**< Not read by the forwarding path. */
};
static_assert(sizeof(ReadyCheckedSlot) == 0x1);

/**
 *
 * An owner whose slot sits at 0x40, after 0x40 bytes that the forwarding path never reads.
 *
 */
struct ReadyCheckedObject {
    uint8_t unknown_0x0000[0x40];  /**< Not read by the forwarding path. */
    ReadyCheckedSlot slot;         /**< The slot at 0x40 whose address is passed to both callees. */
};
static_assert(offsetof(ReadyCheckedObject, slot) == ready_checked_slot_offset);

}  // namespace misc
