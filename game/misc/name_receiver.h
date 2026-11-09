// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct NameReceiver;

/**
 *
 * The vtable slot of a NameReceiver that takes the name's text.
 *
 */
struct NameReceiverVtable {
    uint8_t unknown_0x00[0x98];
    void (*accept_0x98)(NameReceiver *self, const char *text);
};
static_assert(offsetof(NameReceiverVtable, accept_0x98) == 0x98);

/**
 *
 * An object that receives the text of a formatted name through its vtable.
 *
 */
struct NameReceiver {
    const NameReceiverVtable *vtable;   /**< Dispatch table of the receiver's methods. */
};
static_assert(offsetof(NameReceiver, vtable) == 0x0);

}  // namespace misc
