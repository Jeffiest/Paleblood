// SPDX-License-Identifier: GPL-2.0-or-later
#include "value_owner.h"

#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe658, move_bytes, void(void *destination, const void *source, uint64_t size));

}  // namespace

/**
 *
 * Removes the first stored value equal to the given one from the owner's vector, keeping the order of the rest.
 *
 * The values after the match move down one slot and the end pointer drops by one. When no value
 * matches, the game still moves the bytes past the end and drops the end pointer by one, so that
 * is kept as it is.
 */
extern "C" void bb_misc_remove_value_from_vector(misc::ValueOwner *owner, uint64_t value)
{
    misc::ValueVector &values = owner->values_0xd8;
    uint64_t *const last = values.end;
    uint64_t *match = values.begin;
    while (match != last && *match != value) ++match;

    uint64_t *const next = match + 1;
    const uint64_t remaining_bytes = reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(next);
    move_bytes(match, next, remaining_bytes);
    values.end = last - 1;
}
