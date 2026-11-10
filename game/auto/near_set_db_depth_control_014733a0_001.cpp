// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of render_set_db_depth_control, in game/render/set_db_depth_control.cpp, each using other addresses and constants.
// Every block below is that function's source with the addresses and constants exchanged: the
// names and comments in a block were written for that function and are carried over.
#include "../render/present_register_packets.h"
#include "../render/render_observe.h"

// auto_set_db_depth_control_01473460: render_set_db_depth_control with other addresses and constants.
namespace near_01473460 {

// Write the observed mask of DB_DEPTH_CONTROL depth/stencil test and write-control fields.

extern "C" void bb_auto_set_db_depth_control_01473460(render::PacketBuffer *commands,
                                                  uint32_t value)
{
    constexpr uint32_t depth_control_index = 0x201;
    constexpr uint32_t value_mask = 0xf3f7777;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, depth_control_index, value & value_mask);
    render::write_present_register_packet(commands, cursor, depth_control_index, value & value_mask);
}

}  // namespace near_01473460

// auto_set_db_depth_control_01475a90: render_set_db_depth_control with other addresses and constants.
namespace near_01475a90 {

// Write the observed mask of DB_DEPTH_CONTROL depth/stencil test and write-control fields.

extern "C" void bb_auto_set_db_depth_control_01475a90(render::PacketBuffer *commands,
                                                  uint32_t value)
{
    constexpr uint32_t depth_control_index = 0x2ab;
    constexpr uint32_t value_mask = 0x7fff;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, depth_control_index, value & value_mask);
    render::write_present_register_packet(commands, cursor, depth_control_index, value & value_mask);
}

}  // namespace near_01475a90

// auto_set_db_depth_control_01476b30: render_set_db_depth_control with other addresses and constants.
namespace near_01476b30 {

// Write the observed mask of DB_DEPTH_CONTROL depth/stencil test and write-control fields.

extern "C" void bb_auto_set_db_depth_control_01476b30(render::PacketBuffer *commands,
                                                  uint32_t value)
{
    constexpr uint32_t depth_control_index = 0x204;
    constexpr uint32_t value_mask = 0xf7fe03f;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, depth_control_index, value & value_mask);
    render::write_present_register_packet(commands, cursor, depth_control_index, value & value_mask);
}

}  // namespace near_01476b30

// auto_set_db_depth_control_01476e00: render_set_db_depth_control with other addresses and constants.
namespace near_01476e00 {

// Write the observed mask of DB_DEPTH_CONTROL depth/stencil test and write-control fields.

extern "C" void bb_auto_set_db_depth_control_01476e00(render::PacketBuffer *commands,
                                                  uint32_t value)
{
    constexpr uint32_t depth_control_index = 0x205;
    constexpr uint32_t value_mask = 0x393fff;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, depth_control_index, value & value_mask);
    render::write_present_register_packet(commands, cursor, depth_control_index, value & value_mask);
}

}  // namespace near_01476e00
