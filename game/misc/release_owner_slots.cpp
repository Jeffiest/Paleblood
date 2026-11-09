// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases what an owner holds. Its items are handed to a callee from the last one down, its
// items array goes back to the scratch service, its tagged reference is dropped, and its twelve
// record slots are released from the last to the first. The base teardown runs last.
#include <cstdint>

#include "../engine/ref_object.h"
#include "misc.h"

namespace {
using engine::RefObject;

/** The number of record slots an owner holds. */
constexpr uint64_t slot_count = 12;

/**
 *
 * An owner: its vtable, twelve record slots, a tagged reference, and an array of items with a count.
 *
 */
struct SlotOwner {
    const void *vtable;             /**< The owner's vtable, set on entry. */
    uint8_t unknown_0x08[0x08];
    void *slots[slot_count];              /**< Records, released from the last one to the first. */
    uint64_t tagged_reference;      /**< Tagged pointer whose object goes back to the scratch service. */
    uint8_t unknown_0x78[0x08];
    void **items;                   /**< The items array; each non-null item is handed to the callee. */
    uint64_t item_count;            /**< The number of items, walked from the last one down. */
};
static_assert(offsetof(SlotOwner, slots) == 0x10);
static_assert(offsetof(SlotOwner, tagged_reference) == 0x70);
static_assert(offsetof(SlotOwner, items) == 0x80);
static_assert(offsetof(SlotOwner, item_count) == 0x88);

RT_GLOBAL(0x0553bd30, owner_vtable, const uint8_t);
RT_ORIGINAL(0x0042e5d0, fn_0042e5d0, void(void *item));
RT_ORIGINAL(0x0045a480, fn_0045a480, uint64_t(SlotOwner *));

/**
 *
 * Hands a block to the scratch service's release slot.
 *
 */
void release_to_scratch(void *block)
{
    misc::Service *service = misc::scratch_service.get();
    service->vtable->release(service, block);
}

/**
 *
 * Drops one reference held through a word whose low bits are tags. The object goes back to the
 * scratch service when that was its last reference.
 *
 */
void drop_reference(uint64_t word)
{
    RefObject *object = reinterpret_cast<RefObject *>(word & ~misc::tag_bits_mask);
    const int32_t before = __atomic_fetch_sub(&object->references, 1, __ATOMIC_SEQ_CST);
    if (before == 1) release_to_scratch(object);
}
}  // namespace

/**
 *
 * Releases an owner's items, items array, tagged reference and record slots, then runs the base
 * teardown, which the result comes from.
 *
 */
extern "C" uint64_t bb_misc_release_owner_slots(SlotOwner *self)
{
    self->vtable = owner_vtable.address();

    void **items = self->items;
    for (uint64_t remaining = self->item_count; remaining != 0; remaining -= 1) {
        void *item = items[remaining - 1];
        if (item != nullptr) fn_0042e5d0(item);
    }

    if (self->items != nullptr) release_to_scratch(self->items);
    drop_reference(self->tagged_reference);

    for (uint64_t remaining = slot_count; remaining != 0; remaining -= 1) {
        void *record = self->slots[remaining - 1];
        if (record != nullptr) misc::fn_0045a4c0(record);
    }

    return fn_0045a480(self);
}
