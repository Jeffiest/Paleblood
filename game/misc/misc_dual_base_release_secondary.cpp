// SPDX-License-Identifier: GPL-2.0-or-later
#include "dual_base_object.h"

/**
 *
 * The same release as bb_misc_dual_base_release, entered through the object's secondary base.
 *
 * The object is found from the secondary base pointer. Nothing is returned.
 */
extern "C" void bb_misc_dual_base_release_secondary(uint8_t *secondary)
{
    misc::release_dual_base_object(misc::dual_base_from_secondary(secondary));
}
