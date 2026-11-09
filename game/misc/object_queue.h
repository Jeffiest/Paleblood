// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"

namespace misc {

struct QueuedObject;

/**
 *
 * The virtual table of a queued object: its destroy method runs before the object is freed.
 *
 */
struct QueuedObjectVtable {
    void (*destroy)(QueuedObject *);
};

/**
 *
 * An object held by a queue node. Its marked byte is set by the first pass over the queue, and the
 * second pass destroys and frees it.
 *
 */
struct QueuedObject {
    const QueuedObjectVtable *vtable;
    uint8_t unknown_0x08[0x4];
    uint8_t marked_0x0c; /**< Zero until the first pass sets it. */
};
static_assert(offsetof(QueuedObject, marked_0x0c) == 0x0c);

/**
 *
 * One node of the queue's doubly linked ring. The object pointer is null once the object is gone.
 *
 */
struct ObjectQueueNode {
    ObjectQueueNode *next;
    ObjectQueueNode *prev;
    QueuedObject *object;
};
static_assert(offsetof(ObjectQueueNode, object) == 0x10);

/**
 *
 * A queue of objects: a sentinel node that closes the ring, the number of nodes, and the allocator that
 * frees the nodes and objects.
 *
 */
struct ObjectQueue {
    uint8_t unknown_0x00[0x30];
    ObjectQueueNode *sentinel;    /**< Head of the ring; the list is empty when its next is itself. */
    uint64_t count_0x38;          /**< Number of nodes, lowered each time a node is freed. */
    engine::Allocator *allocator; /**< Frees the nodes and, after their destruction, the objects. */
};
static_assert(offsetof(ObjectQueue, sentinel) == 0x30);
static_assert(offsetof(ObjectQueue, count_0x38) == 0x38);
static_assert(offsetof(ObjectQueue, allocator) == 0x40);

}  // namespace misc
