// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a named record that a tagged word points at, with a count of its references and its name text.
#pragma once

#include <cstddef>
#include <cstdint>

#include "misc.h"

namespace misc {

/** The room the name text takes in a record. */
constexpr size_t name_text_size = 16;

/**
 *
 * A named record: its reference count at +0x8 and the name text at the payload offset.
 *
 */
struct NameRecord {
    uint8_t unknown_0x0000[0x08];
    int32_t references;             /**< The number of references; the last one releases the record. */
    char text[name_text_size];      /**< The name, starting at the payload offset. */
};
static_assert(offsetof(NameRecord, references) == 0x08);
static_assert(offsetof(NameRecord, text) == payload_offset);

}  // namespace misc
