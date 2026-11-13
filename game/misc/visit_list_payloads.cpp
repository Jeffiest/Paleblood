// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls the visit slot of every payload on a list, in order, with the argument, skipping nodes that carry no payload.
#include <cstddef>
#include <cstdint>

namespace {

struct VisitPayload;

/** The vtable of a payload: the visit routine sits at slot 0x18. */
struct VisitPayloadVtable {
    uint8_t unknown_0x0000[0x18];
    void (*visit)(VisitPayload *payload, uint64_t argument); /**< Visits the payload with the argument. */
};

/** A payload object whose first word is its vtable. */
struct VisitPayload {
    const VisitPayloadVtable *vtable; /**< The payload's vtable. */
};

/** A list node: the next link at 0x00 and the payload at 0x10. */
struct VisitNode {
    VisitNode *next;                  /**< The next node of the list; the sentinel ends it. */
    uint8_t unknown_0x0008[0x08];
    VisitPayload *payload;            /**< The payload of the node; null when the node has none. */
};
static_assert(offsetof(VisitNode, payload) == 0x10);

/** A list whose sentinel node sits at 0x08. */
struct VisitList {
    uint8_t unknown_0x0000[0x08];
    VisitNode *sentinel;              /**< The sentinel that ends the list and that the first node follows. */
};
static_assert(offsetof(VisitList, sentinel) == 0x08);

}  // namespace

/**
 *
 * Visits the payload of every node after the sentinel, in list order, passing the argument on. Nodes with no payload
 * are skipped. The sentinel is read again on each step, as a visit may change the list.
 *
 * Returns the sentinel: the routine leaves it in the return register on every path.
 */
extern "C" VisitNode *bb_misc_visit_list_payloads(VisitList *list, uint64_t argument)
{
    VisitNode *node = list->sentinel->next;
    while (node != list->sentinel) {
        VisitPayload *const payload = node->payload;
        if (payload != nullptr) {
            payload->vtable->visit(payload, argument);
        }
        node = node->next;
    }
    return list->sentinel;
}
