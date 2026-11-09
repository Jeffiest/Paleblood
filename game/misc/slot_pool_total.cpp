// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>
#include <cstring>

#include "runtime/original.h"
#include "slot_pool.h"

namespace {

RT_GLOBAL(0x057e3be0, stack_guard_pointer, const uint64_t *);
RT_ORIGINAL(0x02fbe4f8, stack_guard_failure, void());

// Computes the pool's child totals with the given scale: a changed flag and the total.
RT_ORIGINAL(0x00b685f0, fn_00b685f0, void(misc::SlotPool *pool, int32_t scale, uint8_t *changed, uint32_t *total));

uint64_t read_stack_guard()
{
    uint64_t value;
    std::memcpy(&value, stack_guard_pointer.get(), sizeof(value));
    return value;
}

}  // namespace

/**
 *
 * Returns the total of a pool's child computation for a scale, discarding the changed flag.
 *
 * The total is the unsigned 32-bit value the computation stores; the stack guard is checked after
 * the computation returns.
 */
extern "C" uint32_t bb_misc_slot_pool_total(misc::SlotPool *pool, int32_t scale)
{
    const uint64_t guard = read_stack_guard();
    uint8_t changed = 0;
    uint32_t total = 0;
    fn_00b685f0(pool, scale, &changed, &total);
    if (read_stack_guard() != guard) stack_guard_failure();
    return total;
}
