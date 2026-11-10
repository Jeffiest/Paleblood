// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as audio_fmod_output_driver_count, in game/audio/fmod_output_driver_count.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include <cstring>

// auto_fmod_output_driver_count_0111b580: audio_fmod_output_driver_count with other addresses.
namespace twin_0111b580 {

// FMOD output callback: write one driver when the output is present.
// Installed by 0x0111aed0 in the FMOD Orbis AudioOut output descriptor.
// Its descriptor slot corresponds to FMOD getnumdrivers; the callback reports one driver.

extern "C" uint64_t bb_auto_fmod_output_driver_count_0111b580(uint64_t opaque0, void *output)
{
    (void)opaque0;
    if (output != nullptr) {
        const uint32_t word = 1;
        std::memcpy(output, &word, sizeof(word));
    }
    return 0;
}

}  // namespace twin_0111b580
