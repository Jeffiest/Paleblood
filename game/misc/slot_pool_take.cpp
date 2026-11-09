// SPDX-License-Identifier: GPL-2.0-or-later
#include "slot_pool.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe7e8, try_lock, int32_t(void *lock));
RT_ORIGINAL(0x02fbe598, lock_blocking, int32_t(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock, int32_t(void *lock));
RT_ORIGINAL(0x02fbe968, report_lock_error, void(const char *file, const char *function, int32_t line, const char *message));
RT_ORIGINAL(0x02fbeba8, stop_after_report, void(const char *message));

RT_GLOBAL(0x04bb2c8f, pool_source_file, const char);
RT_GLOBAL(0x04bb2d08, lock_function_name, const char);
RT_GLOBAL(0x04bb2c99, unlock_function_name, const char);
RT_GLOBAL(0x04bb2d3e, lock_failed_message, const char);
RT_GLOBAL(0x04bb2ce3, unlock_failed_message, const char);
RT_GLOBAL(0x04bb2d55, lock_stop_message, const char);
RT_GLOBAL(0x04bb2ce9, unlock_stop_message, const char);

constexpr int32_t line_lock_failed = 0x3b;
constexpr int32_t line_unlock_failed = 0x26;

// The original stops on an int3 breakpoint, so the replacement executes the same instruction.
[[noreturn]] void trap_breakpoint()
{
    __asm__ volatile("int3");
    __builtin_unreachable();
}

// The engine reports a failed lock or unlock and then traps; the pool is never used afterwards.
[[noreturn]] void lock_failed()
{
    report_lock_error(pool_source_file.address(), lock_function_name.address(), line_lock_failed,
                      lock_failed_message.address());
    stop_after_report(lock_stop_message.address());
    trap_breakpoint();
}

[[noreturn]] void unlock_failed()
{
    report_lock_error(pool_source_file.address(), unlock_function_name.address(), line_unlock_failed,
                      unlock_failed_message.address());
    stop_after_report(unlock_stop_message.address());
    trap_breakpoint();
}

// Releases the pool lock; a failure is fatal.
void release(misc::SlotPool *pool)
{
    if (unlock(pool->lock) != 0) unlock_failed();
}

}  // namespace

/**
 *
 * Claims the first unclaimed slot of a lock-guarded pool and returns its value.
 *
 * The lock is tried spin_count times, then taken with a blocking call. The first slot whose used
 * flag is clear is marked used under the lock and its value is returned after the lock is released.
 * When every slot is claimed, or there are none, nothing changes and the result is 0.
 */
extern "C" uint64_t bb_misc_slot_pool_take(misc::SlotPool *pool)
{
    bool held = false;
    for (uint32_t attempts = pool->spin_count; attempts != 0; --attempts) {
        if (try_lock(pool->lock) == 0) {
            held = true;
            break;
        }
    }
    if (!held && lock_blocking(pool->lock) != 0) lock_failed();

    int32_t slot = 0;
    while (slot < pool->slot_count && pool->used[slot] != 0) ++slot;

    if (slot < pool->slot_count) {
        pool->used[slot] = 1;
        release(pool);
        return pool->values[slot];
    }
    release(pool);
    return 0;
}
