// SPDX-License-Identifier: GPL-2.0-or-later
// A record holding twelve 8-byte entries, each led by a signed 32-bit value.
#pragma once

#include <cstddef>
#include <cstdint>

/** The number of entries the record holds. */
constexpr size_t signed_entry_count = 12;

/** One entry: a signed value, then four bytes the routines never read. */
struct SignedEntry {
    int32_t value;                  /**< Tested for its sign bit. */
    uint8_t unknown_0x04[0x4];
};
static_assert(sizeof(SignedEntry) == 0x8);

/** A record whose entries start at 0x18. */
struct NonnegativeEntryRecord {
    uint8_t unknown_0x0000[0x18];
    SignedEntry entries[signed_entry_count];
};
static_assert(offsetof(NonnegativeEntryRecord, entries) == 0x18);
