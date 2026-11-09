// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

/**
 *
 * Appends a node to the holder's chain and numbers it with the holder's next index.
 *
 * The node takes the next index, and the holder counts it. The first node appended is kept in the
 * holder once. The chain's tail becomes the node, and the previous tail, when there is one, links
 * to it.
 */
extern "C" void bb_misc_append_indexed_node(misc::IndexedHolder *holder, misc::IndexedNode *node)
{
    node->index = holder->next_index;
    holder->next_index += 1;

    if (holder->first == nullptr) holder->first = node;

    misc::NodeChain *chain = holder->chain;
    if (chain->head == nullptr) {
        chain->head = node;
    } else {
        chain->tail->next = node;
    }
    chain->tail = node;

    holder->count += 1;
}
