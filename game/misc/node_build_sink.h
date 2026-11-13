// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the sink a node build hands its value to: its holder, its target and the owner the value is given.
#pragma once

#include <cstddef>
#include <cstdint>

#include "node_build_holder.h"

namespace misc {

struct SinkTarget;
struct SinkValue;
struct SinkDescriptor;

/**
 *
 * The vtable of a sink target, of which only the slot at 0x30 is used: it is told the sink is done.
 *
 */
struct SinkTargetVtable {
    uint8_t unknown_0x0000[0x30];
    void (*done)(SinkTarget *self); /**< Slot at 0x30. */
};
static_assert(offsetof(SinkTargetVtable, done) == 0x30);

/** The target a sink reports to: its vtable pointer, which is the only word read here. */
struct SinkTarget {
    const SinkTargetVtable *vtable; /**< Dispatch table of the target. */
};

/**
 *
 * The vtable of a sink value, of which only the slot at 0xd8 is used: it takes the descriptor and a kind.
 *
 */
struct SinkValueVtable {
    uint8_t unknown_0x0000[0xd8];
    void (*take)(SinkValue *self, SinkDescriptor *descriptor, uint32_t kind); /**< Slot at 0xd8. */
};
static_assert(offsetof(SinkValueVtable, take) == 0xd8);

/** The value a sink hands out: its vtable pointer, which is the only word read here. */
struct SinkValue {
    const SinkValueVtable *vtable; /**< Dispatch table of the value. */
};

/**
 *
 * The descriptor a sink value is taken with: a table pointer, the target and the owner.
 *
 */
struct SinkDescriptor {
    const uint8_t *table;   /**< The descriptor table the game uses for sinks. */
    SinkTarget *target;     /**< The target the sink reports to. */
    void *owner;            /**< The owner the sink was given. */
};
static_assert(offsetof(SinkDescriptor, target) == 0x08);
static_assert(offsetof(SinkDescriptor, owner) == 0x10);

/**
 *
 * The sink itself: its target at +0x30, its holder at +0x38 and its owner at +0x58.
 *
 */
struct NodeBuildSink {
    uint8_t unknown_0x0000[0x30];
    SinkTarget *target;         /**< The target the sink reports to, or null. */
    NodeBuildHolder *holder;    /**< The holder whose value is taken and whose ready flag is set. */
    uint8_t unknown_0x0040[0x18];
    void *owner;                /**< The owner given to the descriptor. */
};
static_assert(offsetof(NodeBuildSink, target) == 0x30);
static_assert(offsetof(NodeBuildSink, holder) == 0x38);
static_assert(offsetof(NodeBuildSink, owner) == 0x58);

}  // namespace misc
