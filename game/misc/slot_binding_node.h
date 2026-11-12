// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SlotBindingSource;

struct SlotBindingSourceVtable {
    uint8_t unknown_0x0000[0x40];
    void (*describe)(SlotBindingSource *self, const char *label);   /**< slot 0x40 */
    uint8_t unknown_0x0048[0x10];
    uint64_t (*slot_mask)(SlotBindingSource *self);   /**< slot 0x58: which of the node's slots to bind */
};
static_assert(offsetof(SlotBindingSourceVtable, describe) == 0x40);
static_assert(offsetof(SlotBindingSourceVtable, slot_mask) == 0x58);

/**
 *
 * The object a slot-binding node is attached to: a flag byte and two banks of key bytes.
 *
 * The top bit of the flag byte picks the bank, the low two bits pick the binding mode.
 */
constexpr size_t bank_count = 2;   /**< key banks in a source */
constexpr size_t bank_size = 8;   /**< bytes per bank */

struct SlotBindingSource {
    const SlotBindingSourceVtable *vtable;   /**< virtual calls */
    uint8_t flags;   /**< bit 7 picks the key bank, bits 0..1 the mode */
    uint8_t banks[bank_count][bank_size];   /**< key bytes of each bank, bank 0 starts at +0x09 */
};
static_assert(offsetof(SlotBindingSource, flags) == 0x08);
static_assert(offsetof(SlotBindingSource, banks) == 0x09);

constexpr size_t binding_slot_count = 10;   /**< pointers held by one node, +0x18 to +0x60 */

struct SlotBindingNode {
    uint8_t unknown_0x00[0x10];
    uint32_t value;   /**< caller's third argument */
    int32_t key;   /**< the 16-bit key the table is sorted by */
    SlotBindingSource *slots[binding_slot_count];   /**< sources bound to each slot */
    uint8_t mode;   /**< 0, 1 or 2 */
    uint8_t node_flags;   /**< bit 1 set: the node is not reusable */
    uint8_t unknown_0x6a[6];
};
static_assert(offsetof(SlotBindingNode, value) == 0x10);
static_assert(offsetof(SlotBindingNode, key) == 0x14);
static_assert(offsetof(SlotBindingNode, slots) == 0x18);
static_assert(offsetof(SlotBindingNode, mode) == 0x68);
static_assert(offsetof(SlotBindingNode, node_flags) == 0x69);

struct SlotBindingTable {
    uint8_t unknown_0x00[0x28];
    SlotBindingNode **nodes;   /**< sorted by key */
    int64_t count;   /**< entries in nodes */
};
static_assert(offsetof(SlotBindingTable, nodes) == 0x28);
static_assert(offsetof(SlotBindingTable, count) == 0x30);

constexpr uint8_t flag_bank_select = 0x80;   /**< bank picker in the source's flag byte */
constexpr uint8_t flag_mode_mask = 0x03;
constexpr uint8_t mode_index_three = 3;
constexpr uint8_t mode_index_one = 1;
constexpr uint8_t mode_exclusive = 2;   /**< all slots are rebound */
constexpr uint8_t mode_additive = 1;   /**< only the slots the source asks for */
constexpr uint8_t mode_replace_all = 0;
constexpr unsigned key_high_shift = 8;
constexpr uint8_t node_flag_busy = 2;

/** Bit of the source's slot mask that selects each of the node's slots (0 = none). */
constexpr uint32_t slot_mask_bits[binding_slot_count] = {0, 0x4, 0x8, 0x20, 0x80, 0x1, 0x40, 0x10, 0x2, 0x100};

/**
 *
 * Finds or creates the node for a source's key in a sorted table and binds the source into it.
 *
 * LowIndex picks which two bytes of the source's bank form the key; allocate makes a new node.
 */
template <size_t LowIndex, typename Allocate>
inline uint64_t bind_slot_node(SlotBindingSource *source, SlotBindingTable *table, uint32_t value,
                               const char *label, Allocate allocate)
{
    source->vtable->describe(source, label);

    const uint8_t flags = source->flags;
    const size_t bank = (flags & flag_bank_select) ? 1 : 0;
    const int32_t key = static_cast<int32_t>((static_cast<uint32_t>(source->banks[bank][LowIndex + 1]) << key_high_shift) |
                                             source->banks[bank][LowIndex]);
    const uint8_t low_bits = flags & flag_mode_mask;
    uint8_t mode = mode_exclusive;
    if (low_bits != mode_index_three) mode = (low_bits == mode_index_one) ? mode_additive : mode_replace_all;

    int64_t first = 0;
    int64_t remaining = table->count;
    while (remaining > 0) {
        const int64_t half = remaining >> 1;
        const int64_t middle = first + half;
        if (table->nodes[middle]->key > key) {
            remaining = half;
        } else {
            first = middle + 1;
            remaining = remaining - 1 - half;
        }
    }

    SlotBindingNode *node = nullptr;
    if (first != 0) {
        node = table->nodes[first - 1];
        if (node->key != key || !node || (node->node_flags & node_flag_busy)) node = nullptr;
    }
    if (!node) {
        node = allocate(table, key);
        node->mode = mode;
        for (size_t index = binding_slot_count; index-- > 0;) node->slots[index] = source;
        node->value = value;
        return reinterpret_cast<uint64_t>(node);
    }

    if (mode == mode_exclusive || mode == mode_additive) {
        if (mode == mode_exclusive && node->mode != 0) node->mode = mode_exclusive;
        const uint64_t mask = source->vtable->slot_mask(source);
        for (size_t index = 1; index < binding_slot_count; ++index)
            if (mask & slot_mask_bits[index]) node->slots[index] = source;
        if (mode == mode_additive) return mask;
    } else {
        for (size_t index = binding_slot_count; index-- > 0;) node->slots[index] = source;
    }
    node->value = value;
    return value;
}

}  // namespace misc
