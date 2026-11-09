// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an array of 16-byte entries, some holding a reference to a counted object, and its owner.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../engine/ref_object.h"
#include "runtime/original.h"

namespace misc {

/** Kind tag of an entry that holds a reference which is dropped when the entry is released. */
constexpr uint32_t ref_entry_kind_counted = 3;

/** The class vtable of the array owner, pointed at the address point. */
RT_GLOBAL(0x056c70b0, ref_entry_array_vtable, const uint8_t);

/** Fatal error message for a reference count that is already zero or less when it is dropped. */
RT_GLOBAL(0x04c7774c, message_entry_unref, const char);

/**
 *
 * One 16-byte entry: the object it holds a reference to, then its kind tag.
 *
 */
struct RefEntry {
    engine::RefObject *object; /**< Object whose reference the entry holds. */
    uint32_t kind;             /**< Kind tag; only the counted kind holds a reference. */
    uint8_t unknown_0x000c[0x4];
};
static_assert(offsetof(RefEntry, object) == 0x00);
static_assert(offsetof(RefEntry, kind) == 0x08);
static_assert(sizeof(RefEntry) == 0x10);

/**
 *
 * The owner of an entry array: its vtable, the range of entries and the allocator for their storage.
 *
 */
struct RefEntryArray {
    const uint8_t *vtable;        /**< Class vtable at the address point. */
    uint8_t unknown_0x0008[0x08];
    RefEntry *begin;              /**< First entry of the storage, or null when there is none. */
    RefEntry *end;                /**< One past the last entry. */
    uint64_t word_0x0020;         /**< Cleared together with the range when the array is reset. */
    engine::Allocator *allocator; /**< Allocator that frees the storage. */
};
static_assert(offsetof(RefEntryArray, vtable) == 0x00);
static_assert(offsetof(RefEntryArray, begin) == 0x10);
static_assert(offsetof(RefEntryArray, end) == 0x18);
static_assert(offsetof(RefEntryArray, word_0x0020) == 0x20);
static_assert(offsetof(RefEntryArray, allocator) == 0x28);

}  // namespace misc
