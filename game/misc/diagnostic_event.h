// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct FormattedName;

/**
 *
 * A diagnostic event: its kind, then the name that the line is formatted into.
 *
 */
struct DiagnosticEvent {
    int32_t kind_0x00;                 /**< The kind of event; only the event kind two produces a line. */
    uint8_t unknown_0x04[0x4];         /**< Not read by the diagnostic line. */
    FormattedName *name_0x08;          /**< The name the line is formatted into. */
};
static_assert(offsetof(DiagnosticEvent, name_0x08) == 0x8);

}  // namespace misc
