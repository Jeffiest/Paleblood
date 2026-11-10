// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as render_record_tuple_parameter_supported, in game/render/record_tuple_parameter_supported.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>

// auto_record_tuple_parameter_supported_015e5220: render_record_tuple_parameter_supported with other addresses.
namespace twin_015e5220 {

// The original clears the lowest set bit in EAX, then overwrites only AL
// with the predicate. AL is Boolean; bits 8..31 of the full result need not be.

extern "C" uint64_t bb_auto_record_tuple_parameter_supported_015e5220(uint32_t parameter)
{
    if (parameter == 0) {
        return 0;
    }

    constexpr uint32_t result_low_byte_mask = 0xffu;
    const uint32_t without_lowest_set_bit = parameter & (parameter - 1u);
    const uint32_t result = (without_lowest_set_bit & ~result_low_byte_mask) | static_cast<uint32_t>(without_lowest_set_bit == 0);
    return static_cast<uint64_t>(result);
}

}  // namespace twin_015e5220
