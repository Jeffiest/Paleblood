// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "pool_child.h"
#include "pool_descriptor.h"
#include "pool_entry.h"
#include "pool_extra.h"
#include "pool_owner.h"
#include "slot_pool.h"

using misc::PoolChild;
using misc::PoolDescriptor;
using misc::PoolEntry;
using misc::PoolExtra;
using misc::PoolOwner;
using misc::SlotPool;

/**
 *
 * Measures every entry of a slot pool and reports whether the pool's total exceeds its largest entry
 * sum scaled by the given factor.
 *
 * Each entry's sum is the visits of its descriptor's children (each visit contributes its signed
 * result), plus the largest measure among those children, plus the values of the non-null extras its
 * records name. The total is the sum over the entries (32-bit wrapping) and the largest sum is the
 * largest entry sum (unsigned). When the total is greater than the largest sum times the scale, the
 * total becomes that product and the changed flag is set; otherwise the total is kept and the flag is
 * clear.
 */
extern "C" void bb_misc_slot_pool_measure(SlotPool *pool, int32_t scale, uint8_t *changed, uint32_t *total)
{
    *total = 0;
    uint32_t largest_sum = 0;
    for (int32_t index = 0; index < pool->child_count; ++index) {
        PoolEntry *entry = pool->children[index];
        PoolOwner *owner = entry->owner;
        PoolDescriptor *descriptor = owner->descriptors[entry->descriptor_index];

        uint32_t sum = 0;
        uint32_t largest_measure = 0;
        for (int32_t child_slot = 0; child_slot < descriptor->child_count; ++child_slot) {
            PoolChild *child = owner->children[descriptor->child_indices[child_slot]];
            const uint32_t measure = child->vtable->measure(child, entry);
            if (measure > largest_measure) largest_measure = measure;
            const int32_t visited = child->vtable->visit(child, pool, entry);
            sum += static_cast<uint32_t>(visited);
        }
        sum += largest_measure;

        for (int32_t record = 0; record < descriptor->record_count; ++record) {
            PoolExtra *extra = entry->extras[descriptor->records[record].extra_index];
            if (extra != nullptr) sum += static_cast<uint32_t>(extra->vtable->value(extra));
        }

        *total += sum;
        if (sum > largest_sum) largest_sum = sum;
    }

    const uint32_t scaled = largest_sum * static_cast<uint32_t>(scale);
    if (*total > scaled) {
        *total = scaled;
        *changed = 1;
    } else {
        *changed = 0;
    }
}
