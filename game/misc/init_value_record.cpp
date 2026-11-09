// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets a record's vtable, its 32-bit value, a cleared flag byte and a cleared trailing word.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** A record with a vtable pointer, a 32-bit value at 0x08, a flag byte at 0x0c and a trailing word at 0x10. */
struct ValueRecord {
    const void *vtable;      /**< The record's vtable block. */
    int32_t value_0x08;      /**< The value the caller supplies. */
    uint8_t flag_0x0c;       /**< Starts cleared. */
    uint8_t unknown_0x0d[0x03];
    uint64_t trailer_0x10;   /**< Starts cleared. */
};
static_assert(offsetof(ValueRecord, value_0x08) == 0x08);
static_assert(offsetof(ValueRecord, flag_0x0c) == 0x0c);
static_assert(offsetof(ValueRecord, trailer_0x10) == 0x10);

RT_GLOBAL(0x05722620, value_record_vtable, uint8_t);

}  // namespace

/**
 *
 * Initializes the record with its vtable and the given value, and clears its flag and trailing word.
 *
 * Only the low 32 bits of the value are stored; the upper bits of the argument register are ignored.
 */
extern "C" void bb_misc_init_value_record(ValueRecord *record, int32_t value)
{
    record->vtable = value_record_vtable.address();
    record->value_0x08 = value;
    record->flag_0x0c = 0;
    record->trailer_0x10 = 0;
}
