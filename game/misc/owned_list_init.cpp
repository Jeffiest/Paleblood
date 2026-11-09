// SPDX-License-Identifier: GPL-2.0-or-later
#include "owned_list.h"

/**
 *
 * Sets up an owned list: its size tag and vtable, the argument it was given, and an empty list.
 *
 * The size tag is written first, then the vtable, the argument, and the cleared word at 0x20 and head.
 */
extern "C" void bb_misc_owned_list_init(misc::OwnedList *list, uint64_t argument)
{
    list->tag = misc::owned_list_tag;
    list->vtable = misc::owned_list_vtable.address();
    list->argument = argument;
    list->word_0x20 = 0;
    list->head = nullptr;
}
