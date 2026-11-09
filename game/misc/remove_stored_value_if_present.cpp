// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: removes the first stored value equal to the argument from the holder's vector, if one matches.
#include "vector_holder.h"

#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe658, move_bytes, void(void *destination, const void *source, uint64_t size));

}  // namespace

/**
 *
 * Removes the first stored value equal to the given one from the holder's vector, keeping the order of
 * the rest, and the end pointer drops by one slot.
 *
 * When no stored value matches, the vector is left as it is.
 */
extern "C" void bb_misc_remove_stored_value_if_present(misc::VectorHolder *holder, uint64_t value)
{
    misc::ValueVector &values = holder->values_0x08;
    uint64_t *const last = values.end;
    uint64_t *match = values.begin;
    while (match != last && *match != value) {
        ++match;
    }
    if (match == last) {
        return;
    }

    uint64_t *const next = match + 1;
    const uint64_t remaining_bytes = reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(next);
    move_bytes(match, next, remaining_bytes);
    values.end = last - 1;
}
