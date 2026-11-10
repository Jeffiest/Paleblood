// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: give an id owner its vtable, then reserve its initial ids from the id heap, reporting an
// invalid heap through the fatal error report and carrying on.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

/** A vector of 32-bit ids and the heap its storage comes from. */
struct IdVector {
    uint8_t unknown_0x00[0x08];
    uint32_t *begin;         /**< First id, or null while none is reserved. */
    uint32_t *end;           /**< One past the last id. */
    uint32_t *capacity_end;  /**< One past the last reserved slot. */
    engine::Allocator *heap; /**< The allocator the ids are reserved from. */
};
static_assert(offsetof(IdVector, begin) == 0x08 && offsetof(IdVector, heap) == 0x20);

/** An owner of an id vector: its vtable, then the vector at +0x08. */
struct IdOwner {
    const void *vtable; /**< The owner's vtable, stored as is. */
    IdVector ids;       /**< The ids the owner keeps. */
};
static_assert(offsetof(IdOwner, ids) == 0x08 && sizeof(IdOwner) == 0x30);

/** The vtable the owner stores in itself. */
RT_GLOBAL(0x0574f2a0, id_owner_vtable, const uint8_t);
/** The heap the owner's ids are allocated from. */
RT_GLOBAL(0x05940450, id_heap, engine::Allocator *);
/** The message the fatal error report prints for an invalid heap. */
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02bc1ca0, reserve_ids, void(IdVector *ids, int32_t count));

/** Line the fatal error report gives for an invalid heap. */
constexpr int32_t invalid_heap_line = 0x3e;
/** Number of ids reserved when the owner is constructed. */
constexpr int32_t initial_id_capacity = 0x20;

}  // namespace

/**
 *
 * Constructs an id owner: stores its vtable, checks that the id heap is valid (reporting it through
 * the fatal error when it is not, then carrying on), and reserves the initial ids from the heap.
 *
 */
extern "C" void bb_misc_id_owner_construct_02242df0(IdOwner *owner)
{
    owner->vtable = id_owner_vtable.address();
    engine::Allocator *heap = id_heap.get();
    engine::AllocatorInfo info{};
    heap->vtable->info(&info, heap, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, invalid_heap_line, invalid_heap_message.address());
    }
    owner->ids.capacity_end = nullptr;
    owner->ids.end = nullptr;
    owner->ids.begin = nullptr;
    owner->ids.heap = heap;
    reserve_ids(&owner->ids, initial_id_capacity);
}
