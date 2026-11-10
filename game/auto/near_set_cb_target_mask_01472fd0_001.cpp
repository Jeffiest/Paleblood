// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of render_set_cb_target_mask, in game/render/set_cb_target_mask.cpp, each using other addresses and constants.
// Every block below is that function's source with the addresses and constants exchanged: the
// names and comments in a block were written for that function and are carried over.
#include "../render/present_register_packets.h"
#include "../render/render_observe.h"

// auto_set_cb_target_mask_01473030: render_set_cb_target_mask with other addresses and constants.
namespace near_01473030 {

// Write the complete CB_TARGET_MASK value, preserving all supplied component-enable bits.

extern "C" void bb_auto_set_cb_target_mask_01473030(render::PacketBuffer *commands, uint32_t value)
{
    constexpr uint32_t color_target_mask_index = 0x2dc;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, color_target_mask_index, value);
    render::write_present_register_packet(commands, cursor, color_target_mask_index, value);
}

}  // namespace near_01473030

// auto_set_cb_target_mask_01473260: render_set_cb_target_mask with other addresses and constants.
namespace near_01473260 {

// Write the complete CB_TARGET_MASK value, preserving all supplied component-enable bits.

extern "C" void bb_auto_set_cb_target_mask_01473260(render::PacketBuffer *commands, uint32_t value)
{
    constexpr uint32_t color_target_mask_index = 0x2b0;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, color_target_mask_index, value);
    render::write_present_register_packet(commands, cursor, color_target_mask_index, value);
}

}  // namespace near_01473260

// auto_set_cb_target_mask_014732c0: render_set_cb_target_mask with other addresses and constants.
namespace near_014732c0 {

// Write the complete CB_TARGET_MASK value, preserving all supplied component-enable bits.

extern "C" void bb_auto_set_cb_target_mask_014732c0(render::PacketBuffer *commands, uint32_t value)
{
    constexpr uint32_t color_target_mask_index = 0x2b1;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, color_target_mask_index, value);
    render::write_present_register_packet(commands, cursor, color_target_mask_index, value);
}

}  // namespace near_014732c0

// auto_set_cb_target_mask_01474040: render_set_cb_target_mask with other addresses and constants.
namespace near_01474040 {

// Write the complete CB_TARGET_MASK value, preserving all supplied component-enable bits.

extern "C" void bb_auto_set_cb_target_mask_01474040(render::PacketBuffer *commands, uint32_t value)
{
    constexpr uint32_t color_target_mask_index = 0x102;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, color_target_mask_index, value);
    render::write_present_register_packet(commands, cursor, color_target_mask_index, value);
}

}  // namespace near_01474040

// auto_set_cb_target_mask_01474a30: render_set_cb_target_mask with other addresses and constants.
namespace near_01474a30 {

// Write the complete CB_TARGET_MASK value, preserving all supplied component-enable bits.

extern "C" void bb_auto_set_cb_target_mask_01474a30(render::PacketBuffer *commands, uint32_t value)
{
    constexpr uint32_t color_target_mask_index = 0x2dd;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, color_target_mask_index, value);
    render::write_present_register_packet(commands, cursor, color_target_mask_index, value);
}

}  // namespace near_01474a30

// auto_set_cb_target_mask_01476da0: render_set_cb_target_mask with other addresses and constants.
namespace near_01476da0 {

// Write the complete CB_TARGET_MASK value, preserving all supplied component-enable bits.

extern "C" void bb_auto_set_cb_target_mask_01476da0(render::PacketBuffer *commands, uint32_t value)
{
    constexpr uint32_t color_target_mask_index = 0x103;
    constexpr uint32_t required_words = 3;
    uintptr_t cursor;
    if (!render::reserve_words(commands, required_words, cursor)) return;
    render::observe_context_register(commands, cursor, color_target_mask_index, value);
    render::write_present_register_packet(commands, cursor, color_target_mask_index, value);
}

}  // namespace near_01476da0
