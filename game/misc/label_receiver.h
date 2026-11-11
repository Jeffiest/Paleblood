// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that takes the text of a label, through its accept slot at +0x80.
#pragma once

#include <cstddef>

namespace misc {

struct LabelReceiver;

/**
 *
 * The vtable of a label receiver: its accept slot is at +0x80.
 *
 */
struct LabelReceiverVtable {
    uint8_t unknown_0x00[0x80];
    void (*accept_0x80)(LabelReceiver *receiver, const char *text);   /**< Takes the label's text. */
};
static_assert(offsetof(LabelReceiverVtable, accept_0x80) == 0x80);

/**
 *
 * A label receiver: its vtable is first.
 *
 */
struct LabelReceiver {
    const LabelReceiverVtable *vtable;   /**< The receiver's vtable. */
};
static_assert(offsetof(LabelReceiver, vtable) == 0x0);

}  // namespace misc
