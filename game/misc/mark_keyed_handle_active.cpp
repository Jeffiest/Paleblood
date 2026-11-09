// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: marks a keyed handle active by adding the active bit to its flags, leaving the other bits as they are.
#include <cstdint>

#include "keyed_handle.h"

namespace {

/** The bit of the handle's flags that marks it as active. */
constexpr uint8_t flag_active = 0x01;

}  // namespace

/**
 *
 * Adds the active bit to the handle's flags. Nothing else in the handle is changed.
 *
 */
extern "C" void bb_misc_mark_keyed_handle_active(misc::KeyedHandle *handle)
{
    handle->flags_0x18 |= flag_active;
}
