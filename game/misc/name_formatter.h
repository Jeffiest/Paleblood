// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "formatted_name.h"

namespace misc {

struct NameFormatter;
struct NameReceiver;

/**
 *
 * The vtable slots of a NameFormatter that the name call uses: the first call, and the one that fills a name.
 *
 */
struct NameFormatterVtable {
    uint8_t unknown_0x00[0x40];
    uint64_t (*call_0x40)(NameFormatter *self, uint64_t argument, NameReceiver *receiver, uint32_t value);
    uint8_t unknown_0x48[0x30];
    void (*format_0x78)(NameFormatter *self, FormattedName *name);
};
static_assert(offsetof(NameFormatterVtable, call_0x40) == 0x40 && offsetof(NameFormatterVtable, format_0x78) == 0x78);

/**
 *
 * An object that calls a receiver with the first call and formats a name into a frame name.
 *
 */
struct NameFormatter {
    const NameFormatterVtable *vtable;   /**< Dispatch table of the formatter's methods. */
};
static_assert(offsetof(NameFormatter, vtable) == 0x0);

}  // namespace misc
