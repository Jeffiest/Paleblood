// SPDX-License-Identifier: GPL-2.0-or-later
#include "owned_list.h"
#include "sized_free_vtable.h"

namespace {

/**
 *
 * An object whose size tag sits at 0x08, after its vtable.
 *
 */
struct TaggedObject {
    const void *vtable;
    uint32_t tag; /**< Size tag: the object's size in the high 16 bits, 0xffff for the default. */
};
static_assert(offsetof(TaggedObject, tag) == 0x08);

/** Object size used when the size tag holds the default value. */
constexpr uint32_t tagged_default_size = 0x130;

// Runs the object's release step before it is freed; it receives the object and nothing else is read.
RT_ORIGINAL(0x00f2e050, fn_00f2e050, void(TaggedObject *));

}  // namespace

/**
 *
 * Runs the release step on the object, then frees it through the thread's allocator with the size its
 * tag gives.
 *
 * The size is the tag's high 16 bits, or the default size when they hold 0xffff. The free's result is
 * returned, as the original's tail jump does.
 */
extern "C" uint64_t bb_misc_sized_delete_02242bb0(TaggedObject *self)
{
    fn_00f2e050(self);
    const uint32_t size_tag = self->tag >> misc::size_tag_shift;
    const uint32_t size = size_tag != misc::size_tag_default ? size_tag : tagged_default_size;
    return misc::thread_sized_free(self, size);
}
