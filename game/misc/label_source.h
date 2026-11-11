// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that sends its label to a receiver when its pending flag is set.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct LabelSource;

/**
 *
 * The vtable of a label source: its readiness slot is at +0x20.
 *
 */
struct LabelSourceVtable {
    uint8_t unknown_0x00[0x20];
    bool (*ready_0x20)(LabelSource *source);   /**< Reports whether the source's name is ready to be formatted. */
};
static_assert(offsetof(LabelSourceVtable, ready_0x20) == 0x20);

/**
 *
 * A label source: its vtable is first, and a pending flag at +0x68 says whether it sends its label.
 *
 */
struct LabelSource {
    const LabelSourceVtable *vtable;   /**< The source's vtable. */
    uint8_t unknown_0x0008[0x60];
    uint8_t pending_0x68;              /**< Nonzero makes the source send its label; zero leaves it alone. */
};
static_assert(offsetof(LabelSource, pending_0x68) == 0x68);

}  // namespace misc
