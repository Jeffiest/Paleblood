// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The enable byte the game sets to 1 on the target it reaches. */
constexpr uint8_t target_enabled = 1;

struct ProbeTarget {
    uint8_t unknown_0x0000[0x22c];
    uint8_t enabled_0x022c;
};
static_assert(offsetof(ProbeTarget, enabled_0x022c) == 0x22c);

struct ProbeOwner {
    uint8_t unknown_0x0000[0xb0];
    ProbeTarget *target;
};
static_assert(offsetof(ProbeOwner, target) == 0xb0);

struct ProbeNode;

struct ProbeVtable {
    uint8_t unknown_0x0000[0x160];
    ProbeOwner *(*owner_of)(ProbeNode *node);
};
static_assert(offsetof(ProbeVtable, owner_of) == 0x160);

struct ProbeNode {
    const ProbeVtable *vtable;
};

struct ProbeRequest {
    uint8_t unknown_0x0000[0x8];
    ProbeNode *node;
};
static_assert(offsetof(ProbeRequest, node) == 0x8);

}  // namespace

/**
 *
 * Sets the enable byte of the target that a node's owner refers to, when each link exists.
 *
 * The node is taken from the request and its owner comes from the node's virtual query. A missing
 * node, owner or target ends the call without a write. Otherwise the target's enable byte is set
 * to 1, whatever it held before.
 */
extern "C" void bb_misc_enable_owner_target(ProbeRequest *request)
{
    ProbeNode *node = request->node;
    if (node == nullptr) return;

    ProbeOwner *owner = node->vtable->owner_of(node);
    if (owner == nullptr) return;

    ProbeTarget *target = owner->target;
    if (target == nullptr) return;

    target->enabled_0x022c = target_enabled;
}
