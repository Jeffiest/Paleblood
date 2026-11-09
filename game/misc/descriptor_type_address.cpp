// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"

namespace {

// The static object of the descriptor type, registered by misc_register_type_pair.
RT_GLOBAL(0x05845278, descriptor_type_object, uint8_t);

}  // namespace

/**
 *
 * Returns the address of the descriptor type's static object.
 *
 */
extern "C" uint64_t bb_misc_descriptor_type_address(void)
{
    return reinterpret_cast<uint64_t>(descriptor_type_object.address());
}
