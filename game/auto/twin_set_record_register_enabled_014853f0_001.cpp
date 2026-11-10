// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as render_set_record_register_enabled, in game/render/set_record_register_enabled.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../render/present_register_state.h"

// auto_set_record_register_enabled_01485040: render_set_record_register_enabled with other addresses.
namespace twin_01485040 {

// Preserve the native byte-wide input: doubling it can contribute bits beyond bit one.

extern "C" uint32_t bb_auto_set_record_register_enabled_01485040(render::RecordRegisterState *state,
                                                          uint32_t enabled)
{
    using namespace render;
    auto *word = record_register_word(state);
    const uint32_t preserved = word->get() & record_register_enabled_preserve;
    const uint32_t input = static_cast<uint8_t>(enabled);
    word->set(preserved | (input + input));
    return preserved;
}

}  // namespace twin_01485040

// auto_set_record_register_enabled_014852d0: render_set_record_register_enabled with other addresses.
namespace twin_014852d0 {

// Preserve the native byte-wide input: doubling it can contribute bits beyond bit one.

extern "C" uint32_t bb_auto_set_record_register_enabled_014852d0(render::RecordRegisterState *state,
                                                          uint32_t enabled)
{
    using namespace render;
    auto *word = record_register_word(state);
    const uint32_t preserved = word->get() & record_register_enabled_preserve;
    const uint32_t input = static_cast<uint8_t>(enabled);
    word->set(preserved | (input + input));
    return preserved;
}

}  // namespace twin_014852d0
