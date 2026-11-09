// SPDX-License-Identifier: GPL-2.0-or-later
#include "object_queue.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01884b50, fn_01884b50, void(misc::ObjectQueue *queue));
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::QueuedObject *object));

}  // namespace

/**
 *
 * Runs one pass over a queue's ring: an object that is not yet marked is only marked; an object that is
 * already marked is destroyed and freed, and its node is then unlinked and freed.
 *
 * The first call is made with the queue. The sentinel is read again before each node is unlinked, so
 * a change made while an object is destroyed keeps that node in the ring. The count is lowered once for
 * each node freed.
 */
extern "C" void bb_misc_drain_object_queue(misc::ObjectQueue *queue)
{
    fn_01884b50(queue);
    misc::ObjectQueueNode *const first_sentinel = queue->sentinel;
    misc::ObjectQueueNode *node = first_sentinel->next;
    while (node != first_sentinel) {
        misc::QueuedObject *object = node->object;
        if (object != nullptr && object->marked_0x0c == 0) {
            object->marked_0x0c = 1;
            node = node->next;
            continue;
        }
        if (object != nullptr) {
            engine::Allocator *allocator = allocator_of(object);
            object->vtable->destroy(object);
            allocator->free(object);
            node->object = nullptr;
        }
        misc::ObjectQueueNode *const next = node->next;
        if (node != queue->sentinel) {
            misc::ObjectQueueNode *const previous = node->prev;
            previous->next = next;
            next->prev = previous;
            queue->allocator->free(node);
            queue->count_0x38--;
        }
        node = next;
    }
}
