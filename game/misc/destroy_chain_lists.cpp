// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets an object's vtable, then releases its six chain lists in turn: each list's chain is destroyed,
// its sentinel relinked to itself and freed, and its count zeroed.
#include <cstddef>
#include <cstdint>

#include "chain_list_node.h"
#include "chain_list_owner.h"
#include "runtime/original.h"

namespace {

using misc::ChainListNode;
using misc::ChainListOwner;

/** The object's vtable block: the object's vtable pointer addresses it, and its slots are not read here. */
struct ChainListHolderVtable {
    uint8_t unknown_0x0000[0x08];
};

/** The object: its vtable pointer, then six chain lists at +0x08 to +0xc8, each 0x20 bytes. */
struct ChainListHolder {
    const void *vtable;          /**< Virtual table of the object. */
    ChainListOwner list_0x08;    /**< Released last. */
    ChainListOwner list_0x28;
    ChainListOwner list_0x48;
    ChainListOwner list_0x68;
    ChainListOwner list_0x88;
    ChainListOwner list_0xa8;    /**< Released first. */
};
static_assert(offsetof(ChainListHolder, list_0x08) == 0x08 && offsetof(ChainListHolder, list_0x28) == 0x28);
static_assert(offsetof(ChainListHolder, list_0x48) == 0x48 && offsetof(ChainListHolder, list_0x68) == 0x68);
static_assert(offsetof(ChainListHolder, list_0x88) == 0x88 && offsetof(ChainListHolder, list_0xa8) == 0xa8);

RT_GLOBAL(0x05761370, chain_list_holder_vtable, ChainListHolderVtable);

RT_ORIGINAL(0x026f3db0, destroy_chain_3db0, void(ChainListOwner *owner, ChainListNode *node));
RT_ORIGINAL(0x026f3d30, destroy_chain_3d30, void(ChainListOwner *owner, ChainListNode *node));
RT_ORIGINAL(0x026f3cb0, destroy_chain_3cb0, void(ChainListOwner *owner, ChainListNode *node));
RT_ORIGINAL(0x026f3c30, destroy_chain_3c30, void(ChainListOwner *owner, ChainListNode *node));
RT_ORIGINAL(0x026f3bb0, destroy_chain_3bb0, void(ChainListOwner *owner, ChainListNode *node));
RT_ORIGINAL(0x026f3e30, destroy_chain_3e30, void(ChainListOwner *owner, ChainListNode *node));

}  // namespace

/**
 *
 * Releases one chain list: the chain from its sentinel's first node is destroyed through the given routine,
 * the sentinel relinks to itself, the count is zeroed, and the sentinel is freed through the node allocator.
 *
 */
template <typename DestroyChain>
void release_chain_list(ChainListOwner *list, DestroyChain destroy_chain)
{
    destroy_chain(list, list->sentinel->link_0x08);
    ChainListNode *sentinel = list->sentinel;
    sentinel->link_0x08 = sentinel;
    sentinel->next = sentinel;
    sentinel->left = sentinel;
    list->count_0x10 = 0;
    list->node_allocator->free(sentinel);
}

/**
 *
 * Gives the object its vtable, then releases its six chain lists, the one at +0xa8 first and the one at +0x08 last.
 *
 * The routine returns nothing: the original's last call is a tail call through the allocator's free slot,
 * whose result no caller reads.
 */
extern "C" void bb_misc_destroy_chain_lists(ChainListHolder *holder)
{
    holder->vtable = &chain_list_holder_vtable.address()->unknown_0x0000;
    release_chain_list(&holder->list_0xa8, destroy_chain_3db0);
    release_chain_list(&holder->list_0x88, destroy_chain_3d30);
    release_chain_list(&holder->list_0x68, destroy_chain_3cb0);
    release_chain_list(&holder->list_0x48, destroy_chain_3c30);
    release_chain_list(&holder->list_0x28, destroy_chain_3bb0);
    release_chain_list(&holder->list_0x08, destroy_chain_3e30);
}
