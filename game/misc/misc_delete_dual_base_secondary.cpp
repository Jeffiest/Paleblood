// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "dual_base_object.h"

// The deleting release of the whole object, entered through its primary base.
extern "C" uint64_t bb_misc_delete_dual_base(misc::DualBaseObject *object);

/**
 *
 * Releases a two-base object entered through its secondary base, as bb_misc_delete_dual_base does for the
 * whole object.
 *
 * The object is found from the secondary base pointer, and the releaser's result is returned as it is.
 */
extern "C" uint64_t bb_misc_delete_dual_base_secondary(uint8_t *secondary)
{
    return bb_misc_delete_dual_base(misc::dual_base_from_secondary(secondary));
}
