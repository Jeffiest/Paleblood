// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as audio_fmod_output_defaults, in game/audio/fmod_output_defaults.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include <cstring>

// auto_fmod_output_defaults_0111b5d0: audio_fmod_output_defaults with other addresses.
namespace twin_0111b5d0 {

// FMOD output callback: write 132, 48000 and 6 through optional outputs in that order.
// Installed by 0x0111aed0 in the FMOD Orbis AudioOut output descriptor.
// 48000 may be a sample rate and 6 a 5.1 speaker mode; these meanings are hypotheses.

namespace {
constexpr uint32_t default_output_word = 0x84; // The meaning of this output is unknown.
// Sample rate and speaker mode meanings are hypotheses from the FMOD descriptor.
constexpr uint32_t sample_rate_hz = 48000;
constexpr uint32_t speaker_mode_5_1 = 6;
}

extern "C" uint64_t bb_auto_fmod_output_defaults_0111b5d0(uint64_t opaque0, uint64_t opaque1,
                                            void *output0, void *output1, void *output2)
{
    (void)opaque0;
    (void)opaque1;
    if (output0 != nullptr) {
        const uint32_t word0 = default_output_word;
        std::memcpy(output0, &word0, sizeof(word0));
    }
    if (output1 != nullptr) {
        const uint32_t word1 = sample_rate_hz;
        std::memcpy(output1, &word1, sizeof(word1));
    }
    if (output2 != nullptr) {
        const uint32_t word2 = speaker_mode_5_1;
        std::memcpy(output2, &word2, sizeof(word2));
    }
    return 0;
}

}  // namespace twin_0111b5d0
