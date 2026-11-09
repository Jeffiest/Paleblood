// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner of a selection, with the frame and settings it reads.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SelectionFrame;
struct SelectionSettings;

/**
 *
 * An owner that keeps its frame at +0x58 and its settings at +0x3b0.
 *
 */
struct SelectionOwner {
    uint8_t unknown_0x00[0x58];
    SelectionFrame *frame;       /**< The frame the selection block is read from. */
    uint8_t unknown_0x60[0x350];
    SelectionSettings *settings; /**< The settings the selection flag is read from. */
};
static_assert(offsetof(SelectionOwner, frame) == 0x58 && offsetof(SelectionOwner, settings) == 0x3b0);

}  // namespace misc
