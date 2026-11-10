// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as engine_ascii_to_lower, in game/engine/ascii_to_lower.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>

// auto_ascii_to_lower_008460d0: engine_ascii_to_lower with other addresses.
namespace twin_008460d0 {

// Engine ASCII lowercase: map A-Z to a-z, leaving other input bytes unchanged.
// Like a signed char result, extend the selected byte to 32 bits; the original
// writes EAX, so the upper 32 bits of RAX are zero.

namespace {
constexpr uint32_t first_uppercase = 0x41;
constexpr uint32_t last_uppercase = 0x5a;
constexpr uint32_t case_distance = 0x20;
}

extern "C" uint64_t bb_auto_ascii_to_lower_008460d0(uint64_t value)
{
    uint8_t mapped = static_cast<uint8_t>(value);
    if (mapped >= first_uppercase && mapped <= last_uppercase) {
        mapped = static_cast<uint8_t>(mapped + case_distance);
    }
    return static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(mapped)));
}

}  // namespace twin_008460d0
