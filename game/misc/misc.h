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

}  // namespace misc
