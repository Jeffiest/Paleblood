// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a table of keyed counters, each entry holding a key and a count that a matching value increments.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace misc {

// The shared counter table the engine keeps, and the name the missing-singleton report gives for it.
RT_GLOBAL(0x0593e990, keyed_counter_table, struct KeyedCounterTable *);
RT_GLOBAL(0x04d35616, keyed_counter_table_name, const char);

/**
 *
 * One entry: a key compared with a whole value, and a count that a matching value increments.
 *
 */
struct KeyedCounterEntry {
    uint32_t key_0x00;      /**< Compared with the whole value. */
    int32_t count_0x04;     /**< Incremented when the key matches. */
};
static_assert(sizeof(KeyedCounterEntry) == 0x08);

/** The number of entries: every index that fits in sixteen bits except the all-ones index. */
constexpr size_t kKeyedCounterEntryCount = 0xffff;

/**
 *
 * The counter table: its entries start at 0x8008 and are indexed by the low sixteen bits of a value.
 *
 */
struct KeyedCounterTable {
    uint8_t unknown_0x0000[0x8008];
    KeyedCounterEntry entries_0x8008[kKeyedCounterEntryCount];
};
static_assert(offsetof(KeyedCounterTable, entries_0x8008) == 0x8008);
static_assert(sizeof(KeyedCounterTable) == 0x88000);

/**
 *
 * The shared counter table, which the engine must have: a missing one is reported by name, then read again.
 *
 * The two arguments are the registers after the first three that the report passes on: the report does not read them.
 *
 */
inline KeyedCounterTable *require_counter_table(uint64_t report_arg_0, uint64_t report_arg_1)
{
    KeyedCounterTable *table = keyed_counter_table.get();
    if (table == nullptr) {
        engine::fatal_error(engine::singleton_check_file.address(), engine::singleton_check_line,
                            engine::singleton_check_message.address(), keyed_counter_table_name.address(),
                            report_arg_0, report_arg_1);
        table = keyed_counter_table.get();
    }
    return table;
}

}  // namespace misc
