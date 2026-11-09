// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574f2e0, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_misc_construct_member_owner_02243f10(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}
