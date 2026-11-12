// SPDX-License-Identifier: GPL-2.0-or-later
#include "dual_base_object.h"

/**
 *
 * Sets both base vtables of a two-base object, releases the item it holds and clears that item.
 *
 * Nothing is returned.
 */
extern "C" void bb_misc_dual_base_release(misc::DualBaseObject *object)
{
    misc::release_dual_base_object(object);
}
