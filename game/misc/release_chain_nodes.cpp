// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"
#include "release_chain.h"

/**
 *
 * Hands every node of a release chain back to the scratch service, in chain order.
 *
 * The next node is read before each release, and the chain head is moved on after it, so the head
 * always names the nodes not yet released. The service is looked up again for each release.
 */
extern "C" void bb_misc_release_chain_nodes(misc::ReleaseChain *chain)
{
    misc::ReleaseChainNode *node = chain->head;
    while (node != nullptr) {
        misc::ReleaseChainNode *next = node->next;
        misc::Service *service = misc::scratch_service.get();
        service->vtable->release(service, node);
        chain->head = next;
        node = next;
    }
}
