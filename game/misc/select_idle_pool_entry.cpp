// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: selects the first idle entry of a holder's pool and clears its flag, or hands the pool's sub-object to the other selection.
#include <cstdint>

#include "indexed_pool.h"
#include "retainable_pool_entry.h"
#include "pool_holder.h"
#include "runtime/original.h"

namespace {

using misc::IndexedPool;
using misc::RetainablePoolEntry;
using misc::PoolHolder;

RT_ORIGINAL(0x01c96990, fn_01c96990, uint64_t(void *sub_object, uint32_t value));

/** The kind an idle entry carries in the low 15 bits of its kind word. */
constexpr uint16_t idle_kind = 0x4000;

/** The bits of the kind word that hold the kind; bit 15 is ignored. */
constexpr uint16_t kind_mask = 0x7fff;

/** The bit of the entry's flags that the selection clears. */
constexpr uint8_t flag_selected = 0x01;

}  // namespace

/**
 *
 * Selects the first idle entry of the holder's pool and clears its flag, returning the entry.
 *
 * Only the low byte of the flag argument decides the path. A nonzero byte hands the pool's
 * sub-object and the value to the other selection and returns its result. Otherwise the list is
 * searched for an entry with no references and the idle kind; none found gives zero.
 *
 */
extern "C" uint64_t bb_misc_select_idle_pool_entry(PoolHolder *holder, uint8_t through_sub_object, uint32_t value)
{
    IndexedPool *pool = holder->pool_0x08;
    if (through_sub_object != 0) return fn_01c96990(pool->sub_object, value);

    RetainablePoolEntry *entry = pool->first_0x2a8;
    while (entry != nullptr && !(entry->references_0x08 == 0 && (entry->kind_0x0c & kind_mask) == idle_kind))
        entry = entry->next_0x10;
    if (entry == nullptr) return 0;
    entry->flags_0x20 &= static_cast<uint8_t>(~flag_selected);
    return reinterpret_cast<uint64_t>(entry);
}
