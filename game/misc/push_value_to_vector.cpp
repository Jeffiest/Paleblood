// SPDX-License-Identifier: GPL-2.0-or-later
#include "value_owner.h"

#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02b3a3c0, fn_02b3a3c0, void(misc::ValueVector *vector, const uint64_t *value));

}  // namespace

/**
 *
 * Appends the value to the owner's vector, passing the vector's push routine a pointer to a copy of it.
 *
 * The owner's other words are not read or changed.
 */
extern "C" void bb_misc_push_value_to_vector(misc::ValueOwner *owner, uint64_t value)
{
    uint64_t stored = value;
    fn_02b3a3c0(&owner->values_0xd8, &stored);
}
