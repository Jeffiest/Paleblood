// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "limit_range_set.h"
#include "runtime/original.h"
#include "type_descriptor.h"

namespace {

// The three limit blocks, the three registry objects and the static descriptor of each type.
RT_GLOBAL(0x0585bd50, first_limits, misc::LimitRangeSet);
RT_GLOBAL(0x0585bd70, second_limits, misc::LimitRangeSet);
RT_GLOBAL(0x0585bd90, third_limits, misc::LimitRangeSet);
RT_GLOBAL(0x0585bbd0, first_type_object, uint8_t);
RT_GLOBAL(0x0585bc50, second_type_object, uint8_t);
RT_GLOBAL(0x0585bcd0, third_type_object, uint8_t);
RT_GLOBAL(0x0585bc20, first_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x0585bca0, second_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x0585bd20, third_descriptor, misc::TypeDescriptor);

// The names of the three types: a first and a second name for each.
RT_GLOBAL(0x04bebbc0, first_name, const char);
RT_GLOBAL(0x04bebbe8, first_second_name, const char);
RT_GLOBAL(0x04bebc13, second_name, const char);
RT_GLOBAL(0x04bebc3b, second_second_name, const char);
RT_GLOBAL(0x04bebcd5, third_name, const char);
RT_GLOBAL(0x04bebcf0, third_second_name, const char);

// The registry source of the third type, the tables and the addresses the registrations are given.
RT_GLOBAL(0x0584f620, third_source, const uint8_t);
RT_GLOBAL(0x0569d120, first_table, const uint8_t);
RT_GLOBAL(0x0569d1a0, second_table, const uint8_t);
RT_GLOBAL(0x0569d220, third_table, const uint8_t);
RT_GLOBAL(0x02fde714, first_address, const uint8_t);
RT_GLOBAL(0x02fde720, second_address, const uint8_t);
RT_GLOBAL(0x02fde72c, third_address, const uint8_t);

// The methods of the three types, stored by address only.
RT_ORIGINAL(0x00e97180, first_second_method, void());
RT_ORIGINAL(0x00e971a0, second_second_method, void());
RT_ORIGINAL(0x00e971c0, third_first_method, void());
RT_ORIGINAL(0x00e971d0, third_second_method, void());

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The record initialiser of the third type: its first word is the type's vtable address point.
struct ThirdTypeRecord {
    uint64_t vtable;
    uint8_t unknown_0x08[0xc0];
};
RT_ORIGINAL(0x00ea9400, fn_00ea9400, void(ThirdTypeRecord *, uint32_t));

constexpr float full_turn = 6.2831850f;
constexpr float hundred = 100.0f;
constexpr float ten = 10.0f;
constexpr uint32_t first_type_size = 0x10;
constexpr uint32_t second_type_size = 0x28;
constexpr uint32_t third_type_size = 0xb8;
constexpr uint32_t small_kind = 3;
constexpr uint32_t third_kind = 8;

}  // namespace

/**
 *
 * Fills three blocks of single-precision limits and registers three types, each with its object, names
 * and table, then fills each type's static descriptor with its names, methods, vtable and size.
 *
 * Only the third vtable comes from a record initialiser. Nothing is returned: the original leaves the
 * stack-guard word in RAX.
 */
extern "C" void bb_misc_register_types_with_limits(void)
{
    misc::LimitRangeSet &limits_a = first_limits.get();
    limits_a.first_low = 0;
    limits_a.first_high = full_turn;
    limits_a.second_low = 0;
    limits_a.second_high = full_turn;
    limits_a.third_low = 0;
    limits_a.third_high = hundred;
    limits_a.fourth_low = 0;
    limits_a.fourth_high = ten;

    fn_0081e9b0(first_type_object.address(), first_name.address(), nullptr, first_type_size, 0, 0, 0, 0,
                first_table.address(), small_kind, reinterpret_cast<uint64_t>(first_address.address()), 0, 0, 0);
    misc::TypeDescriptor &first = first_descriptor.get();
    first.first_name = first_name.address();
    first.second_name = first_second_name.address();
    first.first_method = nullptr;
    first.second_method = first_second_method.address();
    first.vtable = nullptr;
    first.instance_size = first_type_size;

    misc::LimitRangeSet &limits_b = second_limits.get();
    limits_b.first_low = 0;
    limits_b.first_high = full_turn;
    limits_b.second_low = 0;
    limits_b.second_high = full_turn;
    limits_b.third_low = 0;
    limits_b.third_high = full_turn;
    limits_b.fourth_low = 0;
    limits_b.fourth_high = full_turn;

    fn_0081e9b0(second_type_object.address(), second_name.address(), nullptr, second_type_size, 0, 0, 0, 0,
                second_table.address(), small_kind, reinterpret_cast<uint64_t>(second_address.address()), 0, 0, 0);
    misc::TypeDescriptor &second = second_descriptor.get();
    second.first_name = second_name.address();
    second.second_name = second_second_name.address();
    second.first_method = nullptr;
    second.second_method = second_second_method.address();
    second.vtable = nullptr;
    second.instance_size = second_type_size;

    misc::LimitRangeSet &limits_c = third_limits.get();
    limits_c.first_low = 0;
    limits_c.first_high = full_turn;
    limits_c.second_low = 0;
    limits_c.second_high = full_turn;
    limits_c.third_low = 0;
    limits_c.third_high = ten;
    limits_c.fourth_low = 0;
    limits_c.fourth_high = ten;

    fn_0081e9b0(third_type_object.address(), third_name.address(), third_source.address(), third_type_size, 0, 0,
                0, 0, third_table.address(), third_kind, reinterpret_cast<uint64_t>(third_address.address()), 0, 0,
                0);
    ThirdTypeRecord record;
    fn_00ea9400(&record, 0);
    misc::TypeDescriptor &third = third_descriptor.get();
    third.first_name = third_name.address();
    third.second_name = third_second_name.address();
    third.first_method = third_first_method.address();
    third.second_method = third_second_method.address();
    third.vtable = reinterpret_cast<const void *>(record.vtable);
    third.instance_size = third_type_size;
}
