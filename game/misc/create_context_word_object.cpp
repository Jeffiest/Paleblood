// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: creates a two-word context object from the source's allocation argument, or from the cached one without a source.
#include <cstddef>
#include <cstdint>

#include "context_word_object.h"
#include "object_source.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x056c78f0, context_word_vtable, uint8_t);
RT_GLOBAL(0x05940670, cached_context_allocation_argument, uint64_t);
RT_ORIGINAL(0x0247c4e0, allocate_object, void *(uint32_t, uint32_t, uint64_t));
RT_ORIGINAL(0x02fa2b10, fetch_allocation_argument, uint64_t(void));
RT_ORIGINAL(0x02bacb60, initialize_base, void(misc::ContextWordObject *));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

/** The size and alignment the object is allocated with. */
constexpr uint32_t object_bytes = 0x10;
constexpr uint32_t object_alignment = 8;

}  // namespace

/**
 *
 * Creates a two-word object and returns it, or null when no object could be allocated.
 *
 * With a source, the allocation argument is the source's own. Without one, it is the cached argument, which is fetched on
 * first use and then kept. The object's vtable is set after its base initializer, then its second word is cleared.
 * The first argument is never read, and the source's flag byte is not used.
 */
extern "C" misc::ContextWordObject *bb_misc_create_context_word_object_02b50a50(uint64_t /* never read */,
                                                                              ObjectSource *source)
{
    uint64_t allocation_argument = 0;
    if (source != nullptr) {
        allocation_argument = source->alloc_arg_0x460;
    } else {
        allocation_argument = cached_context_allocation_argument.get();
        if (allocation_argument == 0) {
            allocation_argument = fetch_allocation_argument();
            cached_context_allocation_argument.get() = allocation_argument;
        }
    }
    misc::ContextWordObject *const created = static_cast<misc::ContextWordObject *>(
        allocate_object(object_bytes, object_alignment, allocation_argument));
    if (created == nullptr) return nullptr;
    initialize_base(created);
    created->vtable = context_word_vtable.address() + vtable_address_point;
    created->value_0x08 = 0;
    return created;
}
