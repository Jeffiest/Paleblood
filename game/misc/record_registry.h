// SPDX-License-Identifier: GPL-2.0-or-later
// The record registry: the singleton whose record table holds every keyed record.
#pragma once

#include <cstddef>
#include <cstdint>

#include "keyed_record_table.h"
#include "runtime/original.h"

namespace misc {

/**
 *
 * The registry singleton: its record table is at +0xc80.
 *
 */
struct RecordRegistry {
    uint8_t unknown_0x0000[0xa60];
    uint64_t mode_word_0xa60;   /**< A mode word: its bit 22 is the mode bit that the registry flag reads. */
    uint8_t unknown_0xa68[0x218];
    KeyedRecordTable *table; /**< The table every keyed record is kept in. */
};
static_assert(offsetof(RecordRegistry, mode_word_0xa60) == 0xa60);
static_assert(offsetof(RecordRegistry, table) == 0xc80);

RT_GLOBAL(0x0593b120, record_registry, RecordRegistry *);
RT_GLOBAL(0x04d3ad45, record_registry_name, const char);

}  // namespace misc
