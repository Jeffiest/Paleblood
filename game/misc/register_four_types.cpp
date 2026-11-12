// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"
#include "type_descriptor.h"

namespace {

// The four static objects the types are registered with, and the static descriptor of each type.
RT_GLOBAL(0x0584a678, first_type_object, uint8_t);
RT_GLOBAL(0x0584a6f8, second_type_object, uint8_t);
RT_GLOBAL(0x0584a778, third_type_object, uint8_t);
RT_GLOBAL(0x0584a7f8, fourth_type_object, uint8_t);
RT_GLOBAL(0x0584a6c8, first_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x0584a748, second_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x0584a7c8, third_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x0584a848, fourth_descriptor, misc::TypeDescriptor);

// The names of the four types: a first and a second name for each.
RT_GLOBAL(0x04bc12d0, first_name, const char);
RT_GLOBAL(0x04bc12f1, first_second_name, const char);
RT_GLOBAL(0x04bc1315, second_name, const char);
RT_GLOBAL(0x04bc1337, second_second_name, const char);
RT_GLOBAL(0x04bc135c, third_name, const char);
RT_GLOBAL(0x04bc1382, third_second_name, const char);
RT_GLOBAL(0x04bc13ab, fourth_name, const char);
RT_GLOBAL(0x04bc13bf, fourth_second_name, const char);

// The registry source shared by the first two types, the tables and the addresses the registrations are given.
RT_GLOBAL(0x05801a70, registry_source, const uint8_t);
RT_GLOBAL(0x05675980, first_table, const uint8_t);
RT_GLOBAL(0x05675af0, second_table, const uint8_t);
RT_GLOBAL(0x05675b70, third_table, const uint8_t);
RT_GLOBAL(0x05675d00, fourth_table, const uint8_t);
RT_GLOBAL(0x02fdc1b4, first_address, const uint8_t);
RT_GLOBAL(0x02fdc1dc, third_address, const uint8_t);

// The methods of the four types, stored by address only.
RT_ORIGINAL(0x00cb6d90, first_first_method, void());
RT_ORIGINAL(0x00cb6da0, first_second_method, void());
RT_ORIGINAL(0x00cb6dc0, second_first_method, void());
RT_ORIGINAL(0x00cb6dd0, second_second_method, void());
RT_ORIGINAL(0x00cb6df0, third_first_method, void());
RT_ORIGINAL(0x00cb6e00, third_second_method, void());
RT_ORIGINAL(0x00cb6ef0, fourth_second_method, void());

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The two record initialisers: each fills a record whose first word is the type's vtable address point.
struct LargeRecord {
    uint64_t vtable;
    uint8_t unknown_0x08[0xc8];
};
struct SmallRecord {
    uint64_t vtable;
};
RT_ORIGINAL(0x00ce7690, fn_00ce7690, void(LargeRecord *, uint32_t));
RT_ORIGINAL(0x00ce76d0, fn_00ce76d0, void(SmallRecord *, uint32_t));

// The instance sizes of the four types, and the table kinds and flags the registrations use.
constexpr uint32_t first_type_size = 0xd0;
constexpr uint32_t second_type_size = 0x40;
constexpr uint32_t third_type_size = 0x98;
constexpr uint32_t fourth_type_size = 0x1;
constexpr uint32_t first_kind = 9;
constexpr uint32_t first_flags = 0xa;
constexpr uint32_t second_kind = 3;
constexpr uint32_t third_kind = 9;
constexpr uint32_t third_flags = 2;
constexpr uint32_t fourth_kind = 1;

}  // namespace

/**
 *
 * Registers four types, each with its object, names and table, then fills each type's static descriptor
 * with its names, methods, vtable and instance size.
 *
 * The first two vtables come from record initialisers; the last two are null. Nothing is returned: the
 * original leaves the stack-guard word in RAX.
 */
extern "C" void bb_misc_register_four_types(void)
{
    fn_0081e9b0(first_type_object.address(), first_name.address(), registry_source.address(), first_type_size, 0, 0,
                0, 0, first_table.address(), first_kind, reinterpret_cast<uint64_t>(first_address.address()), 0, 0,
                first_flags);
    LargeRecord first_record;
    fn_00ce7690(&first_record, 0);
    misc::TypeDescriptor &first = first_descriptor.get();
    first.first_name = first_name.address();
    first.second_name = first_second_name.address();
    first.first_method = first_first_method.address();
    first.second_method = first_second_method.address();
    first.vtable = reinterpret_cast<const void *>(first_record.vtable);
    first.instance_size = first_type_size;

    fn_0081e9b0(second_type_object.address(), second_name.address(), registry_source.address(), second_type_size, 0,
                0, 0, 0, second_table.address(), second_kind, 0, 0, 0, 0);
    SmallRecord second_record;
    fn_00ce76d0(&second_record, 0);
    misc::TypeDescriptor &second = second_descriptor.get();
    second.first_name = second_name.address();
    second.second_name = second_second_name.address();
    second.first_method = second_first_method.address();
    second.second_method = second_second_method.address();
    second.vtable = reinterpret_cast<const void *>(second_record.vtable);
    second.instance_size = second_type_size;

    fn_0081e9b0(third_type_object.address(), third_name.address(), nullptr, third_type_size, 0, 0, 0, 0,
                third_table.address(), third_kind, reinterpret_cast<uint64_t>(third_address.address()), 0, 0,
                third_flags);
    misc::TypeDescriptor &third = third_descriptor.get();
    third.first_name = third_name.address();
    third.second_name = third_second_name.address();
    third.first_method = third_first_method.address();
    third.second_method = third_second_method.address();
    third.vtable = nullptr;
    third.instance_size = third_type_size;

    fn_0081e9b0(fourth_type_object.address(), fourth_name.address(), nullptr, fourth_type_size, 0, 0,
                reinterpret_cast<uint64_t>(fourth_table.address()), fourth_kind, nullptr, 0, 0, 0, 0, 0);
    misc::TypeDescriptor &fourth = fourth_descriptor.get();
    fourth.first_name = fourth_name.address();
    fourth.second_name = fourth_second_name.address();
    fourth.first_method = nullptr;
    fourth.second_method = fourth_second_method.address();
    fourth.vtable = nullptr;
    fourth.instance_size = fourth_type_size;
}
