// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: destroys a name pair object: releases both names, then frees the object through the library release routine.
#include <cstdint>

#include "../engine/wide_string.h"
#include "name_pair_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *object));

}  // namespace

/**
 *
 * Destroys the object: its class vtable is set, the second name is released and emptied, then the first name is
 * released, and the object itself goes to the library release routine, whose result is returned.
 *
 */
extern "C" uint64_t bb_misc_destroy_name_pair_013b94b0(misc::NamePairObject *object)
{
    object->vtable = misc::name_pair_vtable.address();
    engine::wide_string_release(&object->second_name);
    misc::reset_name(&object->second_name);
    engine::wide_string_release(&object->first_name);
    return fn_02fbe588(object);
}
