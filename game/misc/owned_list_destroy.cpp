// SPDX-License-Identifier: GPL-2.0-or-later
#include "owned_list.h"

#include "../engine/allocator.h"

namespace {

// The allocator a node was created with, from the node's address.
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::OwnedNode *));

}  // namespace

/**
 *
 * Destroys an owned list without freeing the object: sets the vtable, frees every node through its
 * allocator, then clears the word at 0x20 and the head.
 *
 * Each node's next link is read before the node is freed, so the walk never reads a freed node.
 */
extern "C" void bb_misc_owned_list_destroy(misc::OwnedList *list)
{
    list->vtable = misc::owned_list_vtable.address();
    misc::OwnedNode *node = list->head;
    while (node != nullptr) {
        misc::OwnedNode *next = node->next;
        allocator_of(node)->free(node);
        node = next;
    }
    list->word_0x20 = 0;
    list->head = nullptr;
}
