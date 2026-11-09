// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"

namespace {

// The static object of the small type, registered by misc_register_type_pair.
RT_GLOBAL(0x058452f8, small_type_object, uint8_t);

}  // namespace

/**
 *
 * Returns the address of the small type's static object.
 *
 */
extern "C" uint64_t bb_misc_small_type_address(void)
{
    return reinterpret_cast<uint64_t>(small_type_object.address());
}
