// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_base_delete_02242990, in game/misc/base_delete_02242990.cpp, each using other addresses and constants.
// Every block below is that function's source with the addresses and constants exchanged: the
// names and comments in a block were written for that function and are carried over.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../misc/thread_allocator.h"
#include "../misc/base_object.h"

// auto_base_delete_02987b00: misc_base_delete_02242990 with other addresses and constants.
namespace near_02987b00 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x18;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02987b00(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = misc::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace near_02987b00
