// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as render_emit_present_context_section, in game/render/emit_present_context_section.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"
#include "../render/command_capacity_result.h"

namespace context_section_calls {}
namespace render {}

// auto_emit_present_context_section_01489c50: render_emit_present_context_section with other addresses.
namespace twin_01489c50 {
namespace context_section_calls { using namespace ::context_section_calls; }
namespace render { using namespace ::render; }

// Initialize a hardware-state command section in the current packet buffer.
// A successful capacity callback can replace the storage before initialization.


namespace render {

namespace context_section_calls {
// sceGnmDrawInitDefaultHardwareState200 receives the full available-word count
// and returns the number of words emitted as a DWORD.
RT_ORIGINAL(0x02fc07b8, draw_init_default_hardware_state_200,
            uint32_t(uintptr_t destination, uint64_t available_words));
}  // namespace context_section_calls

}  // namespace render

// Keep the low-DWORD capacity decision separate from the full remaining-word
// count sent to the original import. Its effects may change the live cursor.

namespace {
constexpr uint32_t capacity_last_insufficient_word = 0xff;
constexpr uint32_t requested_capacity_words = 0x100;
constexpr uint32_t command_word_shift = 2;
}

extern "C" uint64_t bb_auto_emit_present_context_section_01489c50(render::PacketBuffer *section)
{
    uintptr_t limit = render::packet_limit(section);
    uintptr_t cursor = render::packet_cursor(section);
    const uint64_t initial_words = (limit - cursor) >> command_word_shift;
    if (static_cast<uint32_t>(initial_words) <= capacity_last_insufficient_word) {
        // Native reads the argument before reading the indirect callback target.
        const uintptr_t argument = render::packet_callback_argument(section);
        const auto capacity = render::packet_callback<render::PacketCapacityResultCallback>(section);
        const uint64_t result = capacity(section, requested_capacity_words, argument);
        if (static_cast<uint8_t>(result) == 0) return result;
        limit = render::packet_limit(section);
        cursor = render::packet_cursor(section);
    }

    const uint64_t available_words = (limit - cursor) >> command_word_shift;
    const uint32_t emitted_words = render::context_section_calls::draw_init_default_hardware_state_200(
        cursor, available_words);
    const uint64_t emitted_bytes = static_cast<uint64_t>(emitted_words) << command_word_shift;
    // The import can alias the section; ADDQ uses the cursor as it stands now.
    const uintptr_t live_cursor = render::packet_cursor(section);
    render::set_packet_cursor(section, live_cursor + emitted_bytes);
    return emitted_bytes;
}

}  // namespace twin_01489c50
