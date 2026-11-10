// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_value_record, in game/misc/init_value_record.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_value_record_018a3860: misc_init_value_record with other addresses.
namespace twin_018a3860 {

// Misc: sets a record's vtable, its 32-bit value, a cleared flag byte and a cleared trailing word.


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

RT_GLOBAL(0x05722a20, value_record_vtable, uint8_t);

}  // namespace

/**
 *
 * Initializes the record with its vtable and the given value, and clears its flag and trailing word.
 *
 * Only the low 32 bits of the value are stored; the upper bits of the argument register are ignored.
 */
extern "C" void bb_auto_init_value_record_018a3860(ValueRecord *record, int32_t value)
{
    record->vtable = value_record_vtable.address();
    record->value_0x08 = value;
    record->flag_0x0c = 0;
    record->trailer_0x10 = 0;
}

}  // namespace twin_018a3860
