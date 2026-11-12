// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: creates an object for a source record from its allocation argument, or from the cached one without a source.
#include <cstddef>
#include <cstdint>

#include "object_source.h"
#include "source_created_object.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x056c74c0, source_created_object_vtable, uint8_t);
RT_GLOBAL(0x05940670, cached_allocation_argument, uint64_t);
RT_ORIGINAL(0x0247c4e0, fn_0247c4e0, void *(uint32_t, uint32_t, uint64_t));
RT_ORIGINAL(0x02fa2b10, fn_02fa2b10, uint64_t(void));
RT_ORIGINAL(0x02bb7990, fn_02bb7990, void(misc::SourceCreatedObject *));
RT_ORIGINAL(0x02baa950, fn_02baa950, void(void *, uint64_t));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

/** The size and alignment the object is allocated with. */
constexpr uint32_t object_bytes = 0x78;
constexpr uint32_t object_alignment = 8;

/** The value both sub-objects are initialised with. */
constexpr uint64_t sub_object_value = 0x0;

}  // namespace

/**
 *
 * Creates an object and returns it, or null when no object could be allocated.
 *
 * With a source, the allocation argument is the source's own. Without one, it is the cached argument, which is
 * fetched on first use and then kept. The object's vtable is set after its base initializer, and both
 * sub-objects are initialised after that. The source's readiness word is not used, and the first argument is never read.
 */
extern "C" misc::SourceCreatedObject *bb_misc_create_source_object_02b4ce70(uint64_t /* never read */,
                                                                          ObjectSource *source)
{
    uint64_t allocation_argument = 0;
    if (source != nullptr) {
        allocation_argument = source->alloc_arg_0x460;
    } else {
        allocation_argument = cached_allocation_argument.get();
        if (allocation_argument == 0) {
            allocation_argument = fn_02fa2b10();
            cached_allocation_argument.get() = allocation_argument;
        }
    }
    misc::SourceCreatedObject *const created = static_cast<misc::SourceCreatedObject *>(
        fn_0247c4e0(object_bytes, object_alignment, allocation_argument));
    if (created == nullptr) return nullptr;
    fn_02bb7990(created);
    created->vtable = source_created_object_vtable.address() + vtable_address_point;
    fn_02baa950(created->unknown_0x08, sub_object_value);
    fn_02baa950(created->unknown_0x40, sub_object_value);
    return created;
}
