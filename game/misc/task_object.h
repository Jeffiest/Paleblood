// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a task object built from a source word, a flag and a shared object, and torn down with it.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace misc {

/** Size in bytes of each word copied from the source when a task object is built. */
constexpr size_t task_source_word_bytes = 8;
/** Size in bytes of the sub-object initialised from the source when a task object is built. */
constexpr size_t task_sub_object_bytes = 0x30;

/**
 *
 * The task object's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c7140, task_object_vtable, const uint8_t);

/**
 *
 * A task object: its vtable, the source it was built from, and the words its owner uses.
 *
 */
struct TaskObject {
    const void *vtable;                /**< The object's vtable, at its address point. */
    uint8_t unknown_0x08[0x8];
    const uint64_t *source_0x10;       /**< The source the object was built from, kept as given. */
    uint8_t flag_0x18;                 /**< Flag byte given by the caller. */
    uint8_t zero_0x19;                 /**< Cleared when the object is built. */
    uint8_t zero_0x1a;                 /**< Cleared when the object is built. */
    uint8_t unknown_0x1b[0x5];
    uint64_t zero_0x20;                /**< Cleared when the object is built. */
    uint64_t value_0x28;               /**< Value given by the caller when the object is built. */
    uint64_t zero_0x30;                /**< Cleared when the object is built. */
    uint8_t copy_0x38[task_source_word_bytes];            /**< Word copied from the source when the object is built. */
    uint8_t unknown_0x40[0x28];
    uint64_t zero_0x68;                /**< Cleared when the object is built. */
    uint8_t copy_0x70[task_source_word_bytes];            /**< Second word copied from the source when the object is built. */
    uint8_t unknown_0x78[0x28];
    int32_t limit_0xa0;                /**< Limit set when the object is built. */
    uint8_t unknown_0xa4[0x4];
    int32_t state_0xa8;                /**< State set when the object is built. */
    uint8_t unknown_0xac[0xc];
    uint64_t zero_0xb8;                /**< Cleared when the object is built. */
    uint64_t zero_0xc0;                /**< Cleared when the object is built. */
    uint64_t zero_0xc8;                /**< Cleared when the object is built. */
    void *shared_0xd0;                 /**< The shared object the task uses. */
    uint8_t sub_0xd8[task_sub_object_bytes];            /**< Sub-object initialised from the source when the object is built. */
    uint64_t zero_0x108;               /**< Cleared when the object is built. */
    uint64_t zero_0x110;               /**< Cleared when the object is built. */
    uint64_t zero_0x118;               /**< Cleared when the object is built. */
    int32_t kind_0x120;                /**< Kind set when the object is built. */
    uint8_t unknown_0x124[0x4];
    uint64_t value_0x128;              /**< Value given by the caller when the object is built. */
    int32_t index_0x130;               /**< Index set to no index when the object is built. */
    uint8_t unknown_0x134[0x4];
    uint64_t zero_0x138;               /**< Cleared when the object is built. */
};
static_assert(offsetof(TaskObject, vtable) == 0x00);
static_assert(offsetof(TaskObject, source_0x10) == 0x10);
static_assert(offsetof(TaskObject, flag_0x18) == 0x18);
static_assert(offsetof(TaskObject, zero_0x20) == 0x20);
static_assert(offsetof(TaskObject, value_0x28) == 0x28);
static_assert(offsetof(TaskObject, zero_0x30) == 0x30);
static_assert(offsetof(TaskObject, copy_0x38) == 0x38);
static_assert(offsetof(TaskObject, zero_0x68) == 0x68);
static_assert(offsetof(TaskObject, copy_0x70) == 0x70);
static_assert(offsetof(TaskObject, limit_0xa0) == 0xa0);
static_assert(offsetof(TaskObject, state_0xa8) == 0xa8);
static_assert(offsetof(TaskObject, zero_0xb8) == 0xb8);
static_assert(offsetof(TaskObject, shared_0xd0) == 0xd0);
static_assert(offsetof(TaskObject, sub_0xd8) == 0xd8);
static_assert(offsetof(TaskObject, zero_0x108) == 0x108);
static_assert(offsetof(TaskObject, kind_0x120) == 0x120);
static_assert(offsetof(TaskObject, value_0x128) == 0x128);
static_assert(offsetof(TaskObject, index_0x130) == 0x130);
static_assert(offsetof(TaskObject, zero_0x138) == 0x138);

}  // namespace misc
