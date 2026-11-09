// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"
#include "type_descriptor.h"

namespace {

// The two static objects the types are registered with, their names, and the descriptor's table.
RT_GLOBAL(0x05845278, descriptor_type_object, uint8_t);
RT_GLOBAL(0x058452f8, small_type_object, uint8_t);
RT_GLOBAL(0x04bb5c1d, descriptor_type_name, const char);
RT_GLOBAL(0x04bb5c39, descriptor_type_second_name, const char);
RT_GLOBAL(0x04bb5c58, small_type_name, const char);
RT_GLOBAL(0x0566e2b0, descriptor_table, const uint8_t);
// The static descriptor of the descriptor type, filled after its registration.
RT_GLOBAL(0x058452c8, descriptor, misc::TypeDescriptor);

// The two methods of the descriptor type, stored by address only.
RT_ORIGINAL(0x00be1740, first_method_entry, void());
RT_ORIGINAL(0x00be1750, second_method_entry, void());

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance sizes, the table kind of the descriptor type, and the flag of the small type.
constexpr uint32_t descriptor_type_size = 0xc;
constexpr uint32_t descriptor_type_kind = 1;
constexpr uint32_t small_type_size = 8;
constexpr uint32_t small_type_flag = 1;

}  // namespace

/**
 *
 * Registers two types: the descriptor type, with its table and kind, whose static descriptor is then
 * filled with its names, methods and size; and the small type, with a flag set.
 *
 */
extern "C" void bb_misc_register_type_pair(void)
{
    fn_0081e9b0(descriptor_type_object.address(), descriptor_type_name.address(), nullptr, descriptor_type_size,
                0, 0, 0, 0, descriptor_table.address(), descriptor_type_kind, 0, 0, 0, 0);

    misc::TypeDescriptor &desc = descriptor.get();
    desc.first_name = descriptor_type_name.address();
    desc.second_name = descriptor_type_second_name.address();
    desc.first_method = first_method_entry.address();
    desc.second_method = second_method_entry.address();
    desc.vtable = nullptr;
    desc.instance_size = descriptor_type_size;

    fn_0081e9b0(small_type_object.address(), small_type_name.address(), nullptr, small_type_size, 0,
                small_type_flag, 0, 0, nullptr, 0, 0, 0, 0, 0);
}
