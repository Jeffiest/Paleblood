// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases what an owned state holds, resets its counters and flags, and returns the base reset's result.
#include "owned_state.h"

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x026e4ce0, fn_026e4ce0, void(misc::OwnedState *));
RT_ORIGINAL(0x0122da70, fn_0122da70, void(void *));
RT_ORIGINAL(0x026de680, fn_026de680, uint64_t(void *));
RT_GLOBAL(0x04d40298, counter_limit_file, const char);
RT_GLOBAL(0x04d40300, counter_limit_message, const char);

/**
 *
 * The counter at or above this is reduced by the reset, and its flag bit is cleared.
 *
 */
constexpr uint64_t counter_reset_threshold = 8;

/**
 *
 * The counter plus one must stay below this; the reset reports it through the fatal error otherwise.
 *
 */
constexpr uint64_t counter_limit = 0x41;

/** The counter after the reset. */
constexpr uint64_t counter_reset_value = 7;

/** Line the counter report names. */
constexpr int32_t counter_limit_line = 0x120;

/** The flag bit the reset clears when the counter reached the threshold. */
constexpr uint8_t flag_bit_1 = 0x02;

/**
 *
 * Drops one reference from a packed object: the count is taken down by one inside its field, and the
 * object is destroyed when the count was one. The other bits of the word are kept.
 *
 */
void release_packed_ref(misc::PackedRefObject *object)
{
    const uint32_t before = object->packed_count;
    const uint32_t count = ((before >> misc::packed_count_shift) + misc::packed_count_mask) & misc::packed_count_mask;
    object->packed_count = (before & misc::packed_other_bits) | (count << misc::packed_count_shift);
    if (count == 0) {
        object->packed_count = before | misc::packed_count_field;
        object->vtable->destroy(object);
    }
}

/**
 *
 * Unlinks every node of the list and frees each one, then frees the sentinel.
 *
 * The list is empty afterwards: the sentinel links to itself and the count is zero.
 *
 */
void release_nodes(misc::OwnedState *self)
{
    misc::OwnedNode *node = self->sentinel->next;
    self->sentinel->next = self->sentinel;
    self->sentinel->prev = self->sentinel;
    self->node_count = 0;
    while (node != self->sentinel) {
        misc::OwnedNode *next = node->next;
        self->node_allocator->free(node);
        node = next;
    }
    self->node_allocator->free(self->sentinel);
}

}  // namespace

/**
 *
 * Releases everything the owned state holds, then returns the result of its base reset.
 *
 * Runs in this order: a reset of the member object, the first item and its release, the second item,
 * the packed reference, the held object, the node list and finally the base reset whose result is
 * returned. The counter is checked against its limit before it is set to 7, and the flag bit is cleared
 * only when the counter reached the threshold.
 */
extern "C" uint64_t bb_misc_release_owned_state(misc::OwnedState *self)
{
    fn_026e4ce0(self);

    if (self->item_0x0978) {
        fn_0122da70(self->item_0x0978);
        self->allocator->free(self->item_0x0978);
        self->item_0x0978 = nullptr;
    }
    if (self->item_0x0980) {
        self->allocator->free(self->item_0x0980);
        self->item_0x0980 = nullptr;
    }
    if (self->packed_ref) {
        release_packed_ref(self->packed_ref);
        self->packed_ref = nullptr;
    }

    fn_026de680(self->unknown_0x0670);

    if (self->counter_0x05e0 >= counter_reset_threshold) {
        if (self->counter_0x05e0 + 1 >= counter_limit)
            engine::fatal_error(counter_limit_file.address(), counter_limit_line, counter_limit_message.address());
        self->flags_0x0669 &= static_cast<uint8_t>(~flag_bit_1);
    }
    self->counter_0x05e0 = counter_reset_value;
    self->value_0x05d8 = 0;
    self->word_0x05c8 = 0;

    if (self->held_object) {
        self->held_allocator->free(self->held_object);
        self->unknown_0x0348 = 0;
        self->unknown_0x0340 = 0;
        self->held_object = nullptr;
    }

    release_nodes(self);
    return fn_026de680(self->unknown_0x0010);
}
