// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05845228, plain_type_object, uint8_t);
RT_GLOBAL(0x04bb5c06, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_misc_register_plain_type(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}
