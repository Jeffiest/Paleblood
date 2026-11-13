// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: creates a node from a source word, inserts it into the owner's list and, when the insertion succeeds, releases the held node.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** Bytes that the new node takes, and the alignment asked of its allocation. */
constexpr uint64_t source_node_size = 0xb0;
constexpr uint64_t source_node_alignment = 0x08;

/** The vtable of a held object: slot 0 releases it, slot 0x70 visits it with a node. */
struct HeldObjectVtable {
    void (*release)(void *object);                  /**< Releases the object. */
    uint8_t unknown_0x0008[0x68];
    uint64_t (*visit)(void *object, void *node);    /**< Visits the object with the node and returns the result. */
};
static_assert(offsetof(HeldObjectVtable, visit) == 0x70);

/** An object whose first word is its vtable. */
struct HeldObject {
    const HeldObjectVtable *vtable;
};

/** An owner whose held node sits at 0x20; the insertion routine uses the owner's list fields below it. */
struct HeldNodeOwner {
    uint8_t unknown_0x0000[0x20];
    void *held_node;                                /**< The node held while it is inserted; cleared when done. */
};
static_assert(offsetof(HeldNodeOwner, held_node) == 0x20);

RT_ORIGINAL(0x02d9f4e0, fn_02d9f4e0, void(HeldNodeOwner *owner, const uint64_t *source));
RT_ORIGINAL(0x0247c4e0, fn_0247c4e0, void *(uint64_t size, uint64_t alignment, uint64_t tag));
RT_ORIGINAL(0x013be980, fn_013be980, void(void *node, const uint64_t *source));
RT_ORIGINAL(0x013bc380, fn_013bc380, uint64_t(HeldNodeOwner *owner, void *node));
RT_ORIGINAL(0x0247b720, fn_0247b720, HeldObject *(void *object));

}  // namespace

/**
 *
 * Makes the owner's held-node preparations from the source word, then allocates a node for it. A refused allocation
 * clears the held node and returns the null node. Otherwise the node is initialised, held, and inserted into the
 * owner's list. When the insertion reports failure, the result is returned as it is. When it succeeds and the held
 * node is still set, the object returned by the lookup is visited with the node and the held node is released.
 *
 * The result is the value the last call left in RAX on the path taken.
 */
extern "C" uint64_t bb_misc_insert_source_node(HeldNodeOwner *owner, const uint64_t *source)
{
    fn_02d9f4e0(owner, source);
    void *const node = fn_0247c4e0(source_node_size, source_node_alignment, *source);
    if (node == nullptr) {
        owner->held_node = nullptr;
        return 0;
    }
    fn_013be980(node, source);
    owner->held_node = node;
    const uint64_t inserted = fn_013bc380(owner, node);
    if (static_cast<uint8_t>(inserted) != 0) return inserted;

    void *const held = owner->held_node;
    if (held == nullptr) return inserted;

    HeldObject *const lookup_object = fn_0247b720(held);
    static_cast<HeldObject *>(held)->vtable->release(held);
    const uint64_t visited = lookup_object->vtable->visit(lookup_object, held);
    owner->held_node = nullptr;
    return visited;
}
