// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record with a base sub-object, a release flag and a text whose heap block is freed through its allocator.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "formatted_name.h"

namespace misc {

/** Bytes of the base sub-object that sits at +0x10 of a destructible record. */
constexpr size_t destructible_base_bytes = 0x58;

/**
 *
 * A destructible record: its virtual table first, a base sub-object at +0x10, a release flag at +0x68, a text at +0x80
 * with its size, capacity and the allocator that frees its heap block.
 *
 */
struct DestructibleRecord {
    const void *vtable;                              /**< The record's virtual table address point. */
    uint8_t unknown_0x0008[0x8];                     /**< Not used by the release path. */
    uint8_t base_subobject[destructible_base_bytes]; /**< The base sub-object the release path finishes first. */
    bool release_flag;                               /**< When set, the release path calls the flag helper. */
    uint8_t unknown_0x0069[0x17];                    /**< Not used by the release path. */
    FormattedNameText text;                          /**< The text: inline while it is short, otherwise on the heap. */
    uint8_t unknown_0x0088[0x8];                     /**< Not used by the release path. */
    uint64_t size;                                   /**< The number of characters, zeroed on release. */
    uint64_t capacity;                               /**< Seven while the text is inline, at least eight on the heap. */
    engine::Allocator *allocator;                    /**< Frees the text's heap block. */
};
static_assert(offsetof(DestructibleRecord, base_subobject) == 0x10);
static_assert(offsetof(DestructibleRecord, release_flag) == 0x68);
static_assert(offsetof(DestructibleRecord, text) == 0x80);
static_assert(offsetof(DestructibleRecord, size) == 0x90);
static_assert(offsetof(DestructibleRecord, capacity) == 0x98);
static_assert(offsetof(DestructibleRecord, allocator) == 0xa0);

}  // namespace misc
