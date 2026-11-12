// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object holding two wide-string names, the allocator that owns them and the value its constructor stores last.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/wide_string.h"

namespace misc {

/**
 *
 * The name pair object: its class vtable, the allocator that owns both names, the first name at 0x10, the second name at
 * 0x48, and the fifth argument of its constructor, stored at 0x80.
 *
 */
struct NamePairObject {
    const uint8_t *vtable;                    /**< The class vtable, pointed at its address point. */
    engine::Allocator *allocator;             /**< Allocator shared by both names. */
    engine::WideString first_name;            /**< The first name, at offset 0x10. */
    engine::WideString second_name;           /**< The second name, at offset 0x48. */
    uint64_t callback;                        /**< The constructor's fifth argument, stored as it is. */
};
static_assert(offsetof(NamePairObject, allocator) == 0x08 && offsetof(NamePairObject, first_name) == 0x10);
static_assert(offsetof(NamePairObject, second_name) == 0x48 && offsetof(NamePairObject, callback) == 0x80);

/**
 *
 * Returns the characters of a name: the inline buffer while the name is short, otherwise its heap buffer.
 *
 */
inline const char16_t *name_text(const engine::WideString *name)
{
    return name->capacity < engine::wide_string_inline_capacity ? name->inline_text : name->heap;
}

}  // namespace misc
