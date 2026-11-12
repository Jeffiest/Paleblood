// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores whether the value is non-zero into one flag byte of the mode object.
#include <cstdint>

#include "mode_selected_object.h"

/**
 *
 * Stores one when the value is non-zero and zero otherwise, into the flag byte of the object.
 *
 */
extern "C" void bb_misc_set_active_flag_013b5350(misc::ModeSelectedObject *object, uint32_t value)
{
    object->active_0x90 = value != 0;
}
