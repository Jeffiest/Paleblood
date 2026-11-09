// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a small record that a configured holder is given: its vtable, a kind, a width and a value.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A configured record: its vtable pointer, then the kind, the width and a value word.
 *
 */
struct ConfiguredRecord {
    const uint8_t *vtable; /**< Dispatch table of the record, which is the game's record table. */
    uint32_t kind;         /**< The kind the record is made with. */
    uint32_t width;        /**< The width the record is made with. */
    uint32_t value;        /**< The value word, cleared when the record is made. */
};
static_assert(offsetof(ConfiguredRecord, kind) == 0x08);
static_assert(offsetof(ConfiguredRecord, width) == 0x0c);
static_assert(offsetof(ConfiguredRecord, value) == 0x10);

}  // namespace misc
