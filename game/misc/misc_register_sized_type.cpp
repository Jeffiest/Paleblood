// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"
#include "type_descriptor.h"

namespace {

// The type object the type is registered with, its names, the registry's table and the static descriptor.
RT_GLOBAL(0x0584b338, sized_type_object, uint8_t);
RT_GLOBAL(0x04bc25e6, sized_type_name, const char);
RT_GLOBAL(0x04bc25fd, sized_type_second_name, const char);
RT_GLOBAL(0x056768f0, sized_type_table, const uint8_t);
RT_GLOBAL(0x0584b388, sized_type_descriptor, misc::TypeDescriptor);

// The two methods of the type, stored by address only.
RT_ORIGINAL(0x00cd1a30, first_method_entry, void());
RT_ORIGINAL(0x00cd1a40, second_method_entry, void());

// Adds the type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The size of one instance, the table kind of the type, and the flag the registry is given.
constexpr uint32_t sized_type_instance_size = 0x90;
constexpr uint32_t sized_type_kind = 0xd;
constexpr uint32_t sized_type_flag = 7;

}  // namespace

/**
 *
 * Registers a type with a 0x90-byte instance and fills its static descriptor with its names, methods,
 * an empty vtable and its size.
 *
 * Returns the address of the descriptor.
 */
extern "C" uint64_t bb_misc_register_sized_type(void)
{
    fn_0081e9b0(sized_type_object.address(), sized_type_name.address(), nullptr, sized_type_instance_size, 0, 0,
                0, 0, sized_type_table.address(), sized_type_kind, 0, 0, 0, sized_type_flag);

    misc::TypeDescriptor &descriptor = sized_type_descriptor.get();
    descriptor.first_name = sized_type_name.address();
    descriptor.second_name = sized_type_second_name.address();
    descriptor.first_method = first_method_entry.address();
    descriptor.second_method = second_method_entry.address();
    descriptor.vtable = nullptr;
    descriptor.instance_size = sized_type_instance_size;
    return reinterpret_cast<uint64_t>(sized_type_descriptor.address());
}
