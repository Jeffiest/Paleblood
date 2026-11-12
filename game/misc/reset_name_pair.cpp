// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: empties both names of a name pair object: each heap buffer goes back to its allocator and the names become inline.
#include "../engine/wide_string.h"
#include "name_pair_object.h"

/**
 *
 * Resets the object: its class vtable is set, the second name is released and emptied, then the first name is released
 * and emptied. The result is not returned: the callers do not read it.
 *
 */
extern "C" void bb_misc_reset_name_pair_013b9520(misc::NamePairObject *object)
{
    object->vtable = misc::name_pair_vtable.address();
    engine::wide_string_release(&object->second_name);
    misc::reset_name(&object->second_name);
    engine::wide_string_release(&object->first_name);
    misc::reset_name(&object->first_name);
}
