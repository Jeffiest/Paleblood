// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

/**
 *
 * Clears a pointer slot to null and returns nothing: the original leaves RAX untouched.
 *
 */
extern "C" void bb_misc_clear_pointer_slot(void **pointer_slot)
{
    *pointer_slot = nullptr;
}
