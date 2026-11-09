// SPDX-License-Identifier: GPL-2.0-or-later
#include "int_queue.h"

#include <cstdint>

#include "runtime/original.h"

namespace {

/** Number of 32-bit cells that a cell allocation asks for. */
constexpr uint64_t cell_count = 4;

/** Size in bytes of the cell allocation's element. */
constexpr uint64_t cell_size = 4;

RT_ORIGINAL(0x0247c4e0, fn_0247c4e0, void *(uint64_t count, uint64_t size, void *hint));
RT_ORIGINAL(0x02b38c10, fn_02b38c10, void(void *list, void **cell));

}  // namespace

/**
 *
 * Reads an integer from the source, stores it in a newly allocated cell and pushes the cell onto the queue's list.
 *
 * When the allocation gives no cell, the list receives a null pointer and nothing is stored.
 */
extern "C" void bb_misc_int_queue_push_source(misc::IntQueue *queue, misc::IntSource *source)
{
    const int32_t value = source->vtable->read_0x18(source);
    void *cell = fn_0247c4e0(cell_count, cell_size, queue->hint_0x10);
    if (cell != nullptr) *static_cast<int32_t *>(cell) = value;
    fn_02b38c10(queue->unknown_0x38, &cell);
}
