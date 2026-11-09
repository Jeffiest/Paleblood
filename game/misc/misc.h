// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

/**
 *
 * An opaque object that the block builder receives and only passes back to the game.
 *
 */
struct ScratchSource;

/** Starting value of the doubles that the game sets to 100 before the builder runs. */
constexpr double scratch_initial_value = 100.0;

/** Starting value of the floats that the game sets to 1 before the builder runs. */
constexpr float scratch_initial_scale = 1.0f;

/**
 *
 * A fixed 0x60-byte block that the builder fills, with the game's starting values where known.
 *
 */
struct ScratchBlock {
    int32_t word_00;     /**< Written by the builder. */
    int32_t word_04;     /**< Written by the builder. */
    double value_08;     /**< Starts at 100. */
    double value_10;     /**< Starts at 100. */
    double value_18;     /**< Written by the builder. */
    float scale_20;      /**< Starts at 1. */
    uint8_t unknown_0x24[0x10];
    float scale_34;      /**< Starts at 1. */
    uint8_t unknown_0x38[0x10];
    double value_48;     /**< Starts at 100. */
    double value_50;     /**< Written by the builder. */
    double value_58;     /**< Written by the builder. */
};
static_assert(offsetof(ScratchBlock, word_00) == 0x00);
static_assert(offsetof(ScratchBlock, value_08) == 0x08);
static_assert(offsetof(ScratchBlock, value_10) == 0x10);
static_assert(offsetof(ScratchBlock, value_18) == 0x18);
static_assert(offsetof(ScratchBlock, scale_20) == 0x20);
static_assert(offsetof(ScratchBlock, scale_34) == 0x34);
static_assert(offsetof(ScratchBlock, value_48) == 0x48);
static_assert(offsetof(ScratchBlock, value_50) == 0x50);
static_assert(offsetof(ScratchBlock, value_58) == 0x58);
static_assert(sizeof(ScratchBlock) == 0x60);

/**
 *
 * Returns a block holding the starting values the game sets before it calls the builder.
 *
 */
inline ScratchBlock default_scratch_block()
{
    ScratchBlock block{};
    block.value_08 = scratch_initial_value;
    block.value_10 = scratch_initial_value;
    block.scale_20 = scratch_initial_scale;
    block.scale_34 = scratch_initial_scale;
    block.value_48 = scratch_initial_value;
    return block;
}

/**
 *
 * Runs the block builder (0x00403570) on the source and the block, and returns the pointer it gives back.
 *
 * Callers read the result from the returned pointer, which the builder may choose.
 *
 */
RT_ORIGINAL(0x00403570, build_scratch_block, ScratchBlock *(ScratchSource *source, ScratchBlock *block));

/**
 *
 * An object owned by a ChildOwner, whose first word is its vtable.
 *
 */
struct ChildObject;

/**
 *
 * The vtable of a ChildObject, of which only the query slot is used.
 *
 */
struct ChildVtable {
    uint8_t unknown_0x00[0x20];
    int32_t (*query)(ChildObject *child); /**< Slot at 0x20. Zero reports that the child is finished. */
};
static_assert(offsetof(ChildVtable, query) == 0x20);

/**
 *
 * The first word of a ChildObject is its vtable pointer.
 *
 */
struct ChildObject {
    const ChildVtable *vtable; /**< Dispatch table for the child's methods. */
};
static_assert(offsetof(ChildObject, vtable) == 0x00);

/**
 *
 * An object that owns a child and a counter that the game sets elsewhere.
 *
 */
struct ChildOwner {
    uint8_t unknown_0x00[0x38];
    ChildObject *child;  /**< The owned child, always present. */
    uint8_t unknown_0x40[0x38];
    int32_t counter_78;  /**< Compared with zero once the child has reported work. */
};
static_assert(offsetof(ChildOwner, child) == 0x38);
static_assert(offsetof(ChildOwner, counter_78) == 0x78);

/**
 *
 * A record that the lookup hands out, and which the caller releases when done.
 *
 */
struct LookupRecord {
    uint8_t unknown_0x00[0x10];
    uint64_t tagged_word_10; /**< Pointer-like word whose low two bits are tag bits. */
};
static_assert(offsetof(LookupRecord, tagged_word_10) == 0x10);

/** Record id that the payload lookup asks for. */
constexpr int32_t lookup_record_id = 0x15;

/** Low bits of a tagged word that are cleared before use. */
constexpr uint64_t tag_bits_mask = 0x3;

/** Offset added to a tag-cleared word to form the payload. */
constexpr uint64_t payload_offset = 0xc;

/**
 *
 * An opaque table of records, of which only the lookup vtable slot is used.
 *
 */
struct LookupTable;

/**
 *
 * The vtable of a LookupTable, of which only the find slot is used.
 *
 */
struct LookupTableVtable {
    uint8_t unknown_0x00[0x20];
    LookupRecord *(*find)(LookupTable *table, int32_t id); /**< Slot at 0x20. Null when no record has the id. */
};
static_assert(offsetof(LookupTableVtable, find) == 0x20);

/**
 *
 * The first word of a LookupTable is its vtable pointer.
 *
 */
struct LookupTable {
    const LookupTableVtable *vtable; /**< Dispatch table for the table's methods. */
};
static_assert(offsetof(LookupTable, vtable) == 0x00);

/**
 *
 * Releases a record that the lookup handed out (0x0045a4c0).
 *
 */
RT_ORIGINAL(0x0045a4c0, release_record, void(LookupRecord *record));

/**
 *
 * A pending request that an owner holds (defined with the store that fills it).
 *
 */
struct PendingRequest;

/** Mask of the handle bits below the page start; the page start is the handle with these bits cleared. */
constexpr uint64_t handle_page_mask = 0xfff;

/** Offset from the page start to the slot that a handle of the page names, at slot index zero. */
constexpr uint64_t handle_slot_base = 0x38;

/** Shift that turns a byte offset from the first slot into a count of eight-byte units. */
constexpr uint64_t handle_slot_shift = 3;

/** Multiplicative inverse of seven modulo 2^32: the game divides a slot offset by seven this way. */
constexpr uint32_t handle_slot_inverse = 0xb6db6db7;

/** Offset of the payload field inside a HandleTarget, which is the address the lookup returns. */
constexpr uint64_t handle_target_payload_offset = 0x10;

/**
 *
 * The entry a handle page's table gives for one slot, whose payload field the lookup returns.
 *
 */
struct HandleTarget {
    uint8_t unknown_0x0000[0x10];
    uint8_t payload_0x10[1]; /**< Its address is the lookup result; the contents are not read. */
};
static_assert(offsetof(HandleTarget, payload_0x10) == 0x10);

/**
 *
 * The table of a handle page: one target pointer per slot, after the table's leading fields.
 *
 */
struct HandleTable {
    uint8_t unknown_0x0000[0x28];
    HandleTarget *targets[1]; /**< Indexed by slot; the table holds one pointer for each slot. */
};
static_assert(offsetof(HandleTable, targets) == 0x28);

/**
 *
 * A page-aligned block that a handle points into, whose table holds the slots' targets.
 *
 */
struct HandlePage {
    uint8_t unknown_0x0000[0x20];
    const HandleTable *table; /**< Table of the page's targets. */
};
static_assert(offsetof(HandlePage, table) == 0x20);

/**
 *
 * An object that refers to a pooled entry by handle and may hold a pending request.
 *
 */
struct HandleOwner {
    uint8_t unknown_0x0000[0x48];
    uint64_t handle_0x48;             /**< Handle into a handle page; zero means no entry. */
    uint8_t unknown_0x0050[0x10];
    PendingRequest *pending_0x60;     /**< Pending request, or null when none is held. */
};
static_assert(offsetof(HandleOwner, handle_0x48) == 0x48);
static_assert(offsetof(HandleOwner, pending_0x60) == 0x60);

/**
 *
 * The record that a zero handle resolves to: a static block in the game, whose contents are not read here.
 *
 */
RT_GLOBAL(0x05ac5540, fallback_record, uint8_t);

}  // namespace misc
