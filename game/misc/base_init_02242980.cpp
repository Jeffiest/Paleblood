// SPDX-License-Identifier: GPL-2.0-or-later
#include "base_object.h"

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_misc_base_init_02242980(misc::BaseObject *self)
{
    misc::base_init(self);
}
