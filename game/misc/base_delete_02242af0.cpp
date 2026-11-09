// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../loading/fios.h"
#include "base_object.h"

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size and returns the free's result.
 *
 * A null object gives the vtable address point back as the result, as the original leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_base_delete_02242af0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return reinterpret_cast<uint64_t>(misc::base_vtable.address() + engine::vtable_address_point);

    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, self, base_object_size);
}
