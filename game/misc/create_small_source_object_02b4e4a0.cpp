// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: creates a small source object from the source's allocation argument, or from the cached one without a source.
#include <cstddef>
#include <cstdint>

#include "object_source.h"
#include "runtime/original.h"
#include "small_source_object.h"

namespace {

RT_GLOBAL(0x056c76e0, small_source_vtable, uint8_t);
RT_GLOBAL(0x05940670, cached_small_allocation_argument, uint64_t);
RT_ORIGINAL(0x0247c4e0, fn_0247c4e0, void *(uint32_t, uint32_t, uint64_t));
RT_ORIGINAL(0x02fa2b10, fn_02fa2b10, uint64_t(void));
RT_ORIGINAL(0x02bb7990, fn_02bb7990, void(misc::SmallSourceObject *));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

/** The size and alignment the object is allocated with. */
constexpr uint32_t object_bytes = 0x10;
constexpr uint32_t object_alignment = 8;

}  // namespace

/**
 *
 * Creates a small object and returns it, or null when no object could be allocated.
 *
 * With a source, the allocation argument is the source's own. Without one, it is the cached argument, which is fetched on
 * first use and then kept. The object's vtable is set after its base initializer, then its flags word is cleared.
 * The first argument is never read, and the source's readiness byte is not used.
 */
extern "C" misc::SmallSourceObject *bb_misc_create_small_source_object_02b4e4a0(uint64_t /* never read */,
                                                                              ObjectSource *source)
{
    uint64_t allocation_argument = 0;
    if (source != nullptr) {
        allocation_argument = source->alloc_arg_0x460;
    } else {
        allocation_argument = cached_small_allocation_argument.get();
        if (allocation_argument == 0) {
            allocation_argument = fn_02fa2b10();
            cached_small_allocation_argument.get() = allocation_argument;
        }
    }
    misc::SmallSourceObject *const created = static_cast<misc::SmallSourceObject *>(
        fn_0247c4e0(object_bytes, object_alignment, allocation_argument));
    if (created == nullptr) return nullptr;
    fn_02bb7990(created);
    created->vtable = small_source_vtable.address() + vtable_address_point;
    created->flags_0x08 = 0;
    return created;
}
