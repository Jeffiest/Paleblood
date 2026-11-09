// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A record that a holder points at: a pending flag byte and a 32-bit key.
 *
 */
struct HeldRecord {
    uint8_t unknown_0x00;
    uint8_t pending_0x01; /**< Zero while the record still waits to be handled. */
    uint8_t unknown_0x02[2];
    uint32_t key_0x04;    /**< Passed on when the record is handled. */
};
static_assert(offsetof(HeldRecord, pending_0x01) == 0x01);
static_assert(offsetof(HeldRecord, key_0x04) == 0x04);

/**
 *
 * A holder that owns a pointer to one record, used as a list entry payload.
 *
 */
struct RecordHolder {
    uint8_t unknown_0x00[0x8];
    HeldRecord *record; /**< Null when the holder has nothing to report. */
};
static_assert(offsetof(RecordHolder, record) == 0x08);

}  // namespace misc
