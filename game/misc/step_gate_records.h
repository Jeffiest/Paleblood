// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the step gate's record set: a vector of record pointers and a flag byte that its routines set and clear.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The record set the step gate keeps: its record pointers lie between begin and end, and a flag byte sits at +0x7c.
 *
 */
struct StepGateRecords {
    uint8_t unknown_0x0000[0x58];
    void **begin;                  /**< The first record pointer of the set. */
    void **end;                    /**< One past the last record pointer of the set. */
    uint8_t unknown_0x0068[0x14];
    uint8_t flags;                 /**< Bit 0 is the records flag, which the step gate's routines set and clear. */
};
static_assert(offsetof(StepGateRecords, begin) == 0x58);
static_assert(offsetof(StepGateRecords, end) == 0x60);
static_assert(offsetof(StepGateRecords, flags) == 0x7c);

/**
 *
 * The step gate singleton's view of its record set, which is held at +0xca8.
 *
 */
struct StepGateRecordsHolder {
    uint8_t unknown_0x0000[0xca8];
    StepGateRecords *records;      /**< The record set of the step gate. */
};
static_assert(offsetof(StepGateRecordsHolder, records) == 0xca8);

}  // namespace misc
