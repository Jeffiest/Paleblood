// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the characters of the second name of a name pair object.
#include <cstdint>

#include "name_pair_object.h"

/**
 *
 * Returns the characters of the second name: its inline buffer while the name is short, otherwise its heap buffer.
 *
 */
extern "C" const char16_t *bb_misc_name_pair_second_text_013b95c0(const misc::NamePairObject *object)
{
    return misc::name_text(&object->second_name);
}
