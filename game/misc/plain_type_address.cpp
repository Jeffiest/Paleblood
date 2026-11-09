// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"

namespace {

// The static object of the plain type, registered by misc_register_plain_type.
RT_GLOBAL(0x05845228, plain_type_object, uint8_t);

}  // namespace

/**
 *
 * Returns the address of the plain type's static object.
 *
 */
extern "C" uint64_t bb_misc_plain_type_address(void)
{
    return reinterpret_cast<uint64_t>(plain_type_object.address());
}
