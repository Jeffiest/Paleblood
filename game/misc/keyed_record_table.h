// SPDX-License-Identifier: GPL-2.0-or-later
// A table of keyed records: a ring that new records are inserted into, and the ring of queues that hold them.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "object_queue.h"

namespace misc {

/**
 *
 * The record table held by the registry: the ring of child queues, the sentinel of the record ring, its count,
 * and the allocator that frees its nodes.
 *
 */
struct KeyedRecordTable {
    uint8_t unknown_0x00[0x10];
    ObjectQueueNode *ring;      /**< Sentinel of the ring of child queues; the first node follows it. */
    uint8_t unknown_0x18[0x18];
    ObjectQueueNode *sentinel;  /**< Sentinel of the record ring; the list is empty when its next is itself. */
    uint64_t count_0x38;        /**< Number of records in the ring. */
    engine::Allocator *allocator; /**< Allocator of the table's nodes. */
};
static_assert(offsetof(KeyedRecordTable, ring) == 0x10);
static_assert(offsetof(KeyedRecordTable, sentinel) == 0x30);
static_assert(offsetof(KeyedRecordTable, count_0x38) == 0x38);
static_assert(offsetof(KeyedRecordTable, allocator) == 0x40);

}  // namespace misc
