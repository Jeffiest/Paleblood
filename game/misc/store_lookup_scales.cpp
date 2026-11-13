// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: for each of twelve entries, looks up its key and stores three times the found scale, or minus one for an unset scale, beside the key.
#include <cstddef>
#include <cstdint>

#include "index_lookup_result.h"
#include "runtime/original.h"

namespace {

using misc::IndexLookupResult;

RT_ORIGINAL(0x023210e0, fn_023210e0, void(IndexLookupResult *result, uint32_t id));

/** The requested id a lookup result holds before its lookup runs. */
constexpr int32_t lookup_unset = -1;
/** The number of keyed entries the record holds. */
constexpr size_t keyed_entry_count = 12;
/** The scale value that means none: the stored result is minus one. */
constexpr int16_t scale_unset = -1;
/** The stored result for an unset scale. */
constexpr int32_t result_unset = -1;
/** The factor applied to a found scale. */
constexpr int32_t scale_factor = 3;

/** A found object: its signed scale at 0x18. */
struct ScaleMatch {
    uint8_t unknown_0x0000[0x18];
    int16_t scale;
};
static_assert(offsetof(ScaleMatch, scale) == 0x18);

/** A keyed entry: the key looked up, then the stored result. */
struct KeyedEntry {
    uint32_t key;
    int32_t result;
};
static_assert(sizeof(KeyedEntry) == 0x8);

/** The record whose keyed entries start at 0x18. */
struct KeyedRecord {
    uint8_t unknown_0x0000[0x18];
    KeyedEntry entries[keyed_entry_count];
};
static_assert(offsetof(KeyedRecord, entries) == 0x18);

}  // namespace

/**
 *
 * Looks up each entry's key and stores the scale result beside it.
 *
 * A found scale is stored three times over, and an unset scale as minus one. An entry the lookup does not
 * find keeps its stored result as it was. The routine returns nothing.
 */
extern "C" void bb_misc_store_lookup_scales(KeyedRecord *record)
{
    for (KeyedEntry &entry : record->entries) {
        IndexLookupResult found;
        found.requested_0x00 = lookup_unset;
        found.entry_0x08 = nullptr;
        fn_023210e0(&found, entry.key);
        const ScaleMatch *match = static_cast<const ScaleMatch *>(found.entry_0x08);
        if (match == nullptr) continue;
        int32_t result = result_unset;
        if (match->scale != scale_unset) result = static_cast<int32_t>(match->scale) * scale_factor;
        entry.result = result;
    }
}
