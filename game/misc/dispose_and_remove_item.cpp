// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "../engine/thread.h"
#include "runtime/original.h"
#include "sweep_item_owner.h"

namespace {

// The per-thread offset of the block that caches the manager of the item being removed.
RT_GLOBAL(0x057e44a8, manager_cache_offset, const int64_t);
// Finds the manager an item is registered with.
RT_ORIGINAL(0x0247b720, fn_0247b720, misc::SweepItemManager *(misc::SweepItem *item));
// The report for an item with no manager: the file and the message the engine prints.
RT_GLOBAL(0x04d3bac3, missing_manager_file, const char);
RT_GLOBAL(0x04d40207, missing_manager_message, const char);
constexpr int32_t missing_manager_line = 0x64;

// The thread's block: the manager cached by the last removal, zero once it is taken.
struct ManagerCacheBlock {
    uint8_t unknown_0x00[0x10];
    misc::SweepItemManager *cached_manager; /**< At 0x10: the cached manager, or null when none. */
};
static_assert(offsetof(ManagerCacheBlock, cached_manager) == 0x10);

}  // namespace

/**
 *
 * Disposes of a sweep item, then removes it from its manager through the manager's remove slot.
 *
 * The manager comes from the thread's cache when one is held, which the cache then gives up; otherwise
 * it is looked up from the item. The remove routine's result is returned as it is.
 *
 */
extern "C" uint64_t bb_misc_dispose_and_remove_item(misc::SweepItem *item)
{
    item->vtable->dispose(item);
    ManagerCacheBlock *block =
        reinterpret_cast<ManagerCacheBlock *>(engine::thread_pointer() + manager_cache_offset.get());
    misc::SweepItemManager *manager = block->cached_manager;
    block->cached_manager = nullptr;
    if (manager == nullptr) {
        manager = fn_0247b720(item);
        if (manager == nullptr)
            engine::fatal_error(missing_manager_file.address(), missing_manager_line,
                                missing_manager_message.address());
    }
    return manager->vtable->remove_item(manager, item);
}
