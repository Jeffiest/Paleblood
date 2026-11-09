// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: drains a holder's pool list: each entry is kept on the list with its idle bit set, or destroyed and freed through its allocator.
#include <cstdint>

#include "../engine/allocator.h"
#include "indexed_pool.h"
#include "retainable_pool_entry.h"
#include "pool_holder.h"
#include "runtime/original.h"

namespace {

using misc::IndexedPool;
using misc::RetainablePoolEntry;
using misc::PoolHolder;

RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(RetainablePoolEntry *entry));

/** The bit of the entry's kind word that a kept entry gets set. */
constexpr uint16_t kept_kind_bit = 0x4000;

}  // namespace

/**
 *
 * Drains the holder's pool list. The list is detached first, then each entry is visited in order.
 *
 * An entry the virtual test keeps is pushed back onto the list with its kind's idle bit set. The
 * others are destroyed and freed through the allocator that is found for them.
 *
 */
extern "C" void bb_misc_drain_pool_entries(PoolHolder *holder)
{
    IndexedPool *pool = holder->pool_0x08;
    RetainablePoolEntry *entry = pool->first_0x2a8;
    pool->first_0x2a8 = nullptr;
    while (entry != nullptr) {
        RetainablePoolEntry *next = entry->next_0x10;
        if (entry->vtable->is_retained(entry)) {
            entry->next_0x10 = pool->first_0x2a8;
            pool->first_0x2a8 = entry;
            entry->kind_0x0c |= kept_kind_bit;
        } else {
            engine::Allocator *allocator = allocator_of(entry);
            entry->vtable->destroy(entry);
            allocator->free(entry);
        }
        entry = next;
    }
}
