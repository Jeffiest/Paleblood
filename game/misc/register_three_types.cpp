// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"
#include "type_descriptor.h"

namespace {

// The three static objects the types are registered with, and the static descriptor of each type.
RT_GLOBAL(0x05849b20, first_type_object, uint8_t);
RT_GLOBAL(0x05849ba0, second_type_object, uint8_t);
RT_GLOBAL(0x05849c20, third_type_object, uint8_t);
RT_GLOBAL(0x05849b70, first_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x05849bf0, second_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x05849c70, third_descriptor, misc::TypeDescriptor);

// The names of the three types: a first and a second name for each.
RT_GLOBAL(0x04bc066b, first_name, const char);
RT_GLOBAL(0x04bc068b, first_second_name, const char);
RT_GLOBAL(0x04bc06ae, second_name, const char);
RT_GLOBAL(0x04bc06d0, second_second_name, const char);
RT_GLOBAL(0x04bc06f5, third_name, const char);
RT_GLOBAL(0x04bc070a, third_second_name, const char);

// The tables and the address the registrations are given.
RT_GLOBAL(0x05674e20, first_table_a, const uint8_t);
RT_GLOBAL(0x05674d40, first_table_b, const uint8_t);
RT_GLOBAL(0x02fdc0e0, first_address, const uint8_t);
RT_GLOBAL(0x05674d90, second_table, const uint8_t);
RT_GLOBAL(0x05674f20, third_table, const uint8_t);

// The methods of the first and second types, stored by address only.
RT_ORIGINAL(0x00cb1200, first_first_method, void());
RT_ORIGINAL(0x00cb1210, first_second_method, void());
RT_ORIGINAL(0x00cb1230, second_second_method, void());
RT_ORIGINAL(0x00cb1250, third_second_method, void());

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance sizes of the three types, and the table kinds and flags the registrations use.
constexpr uint32_t first_type_size = 0x8;
constexpr uint32_t second_type_size = 0x10;
constexpr uint32_t third_type_size = 0x1;
constexpr uint32_t first_kind = 2;
constexpr uint32_t second_kind = 2;
constexpr uint32_t third_kind = 3;

}  // namespace

/**
 *
 * Registers three types, each with its object, names and table, then fills each type's static descriptor
 * with its names, methods and instance size. The third descriptor's address is returned, as the original
 * leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_register_three_types(void)
{
    fn_0081e9b0(first_type_object.address(), first_name.address(), nullptr, first_type_size, 0, 0,
                reinterpret_cast<uint64_t>(first_table_a.address()), first_kind,
                first_table_b.address(), first_kind, reinterpret_cast<uint64_t>(first_address.address()), 0, 0, 0);
    misc::TypeDescriptor &first = first_descriptor.get();
    first.first_name = first_name.address();
    first.second_name = first_second_name.address();
    first.first_method = first_first_method.address();
    first.second_method = first_second_method.address();
    first.vtable = nullptr;
    first.instance_size = first_type_size;

    fn_0081e9b0(second_type_object.address(), second_name.address(), nullptr, second_type_size, 0, 0, 0, 0,
                second_table.address(), second_kind, 0, 0, 0, 0);
    misc::TypeDescriptor &second = second_descriptor.get();
    second.first_name = second_name.address();
    second.second_name = second_second_name.address();
    second.first_method = nullptr;
    second.second_method = second_second_method.address();
    second.vtable = nullptr;
    second.instance_size = second_type_size;

    fn_0081e9b0(third_type_object.address(), third_name.address(), nullptr, third_type_size, 0, 0,
                reinterpret_cast<uint64_t>(third_table.address()), third_kind, nullptr, 0, 0, 0, 0, 0);
    misc::TypeDescriptor &third = third_descriptor.get();
    third.first_name = third_name.address();
    third.second_name = third_second_name.address();
    third.first_method = nullptr;
    third.second_method = third_second_method.address();
    third.vtable = nullptr;
    third.instance_size = third_type_size;

    return reinterpret_cast<uint64_t>(third_descriptor.address());
}
