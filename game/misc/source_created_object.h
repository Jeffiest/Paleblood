// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object created from a source record, with its vtable first and two sub-objects after it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The object a source creates: its vtable, a sub-object at +0x08 and a second sub-object at +0x40.
 *
 */
struct SourceCreatedObject {
    const void *vtable;                  /**< The object's vtable. */
    static constexpr auto sub_object_bytes = 0x38;
    uint8_t unknown_0x08[sub_object_bytes];
    uint8_t unknown_0x40[sub_object_bytes];
};
static_assert(offsetof(SourceCreatedObject, unknown_0x08) == 0x08);
static_assert(offsetof(SourceCreatedObject, unknown_0x40) == 0x40);
static_assert(sizeof(SourceCreatedObject) == 0x78);

}  // namespace misc
