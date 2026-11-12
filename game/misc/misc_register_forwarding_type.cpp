// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"
#include "type_descriptor.h"

namespace {

// The type object the type is registered with, its names, the registry's table and the static descriptor.
RT_GLOBAL(0x0584b758, forwarding_type_object, uint8_t);
RT_GLOBAL(0x04bc2aea, forwarding_type_name, const char);
RT_GLOBAL(0x04bc2b06, forwarding_type_second_name, const char);
RT_GLOBAL(0x056771f0, forwarding_type_table, const uint8_t);
RT_GLOBAL(0x0584b7a8, forwarding_type_descriptor, misc::TypeDescriptor);

// The two methods of the type, which are the setup and destroy routines of a forwarding pair, stored by address.
RT_ORIGINAL(0x00cd4390, first_method_entry, void());
RT_ORIGINAL(0x00cd43d0, second_method_entry, void());

// Adds the type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The size of one instance, the table kind of the type, and the flag the registry is given.
constexpr uint32_t forwarding_type_instance_size = 0x270;
constexpr uint32_t forwarding_type_kind = 2;

}  // namespace

/**
 *
 * Registers a type with a 0x270-byte instance and fills its static descriptor with its names, methods,
 * an empty vtable and its size.
 *
 * Returns the address of the descriptor.
 */
extern "C" uint64_t bb_misc_register_forwarding_type(void)
{
    fn_0081e9b0(forwarding_type_object.address(), forwarding_type_name.address(), nullptr,
                forwarding_type_instance_size, 0, 0, 0, 0, forwarding_type_table.address(), forwarding_type_kind,
                0, 0, 0, 0);

    misc::TypeDescriptor &descriptor = forwarding_type_descriptor.get();
    descriptor.first_name = forwarding_type_name.address();
    descriptor.second_name = forwarding_type_second_name.address();
    descriptor.first_method = first_method_entry.address();
    descriptor.second_method = second_method_entry.address();
    descriptor.vtable = nullptr;
    descriptor.instance_size = forwarding_type_instance_size;
    return reinterpret_cast<uint64_t>(forwarding_type_descriptor.address());
}
