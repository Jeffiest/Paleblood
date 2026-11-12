// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: drops expired listener nodes (running their callbacks), moves the pending nodes onto the active list, then forwards to the owner's final slot.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/thread.h"
#include "runtime/original.h"

namespace {

/** The bytes and alignment of one listener node's block. */
constexpr uint64_t listener_node_size = 0x28;
constexpr uint64_t listener_node_alignment = 0x08;

/** The line number the engine's fatal report carries for a failed node allocation. */
constexpr uint32_t allocation_failed_line = 0x109;

/** The value the throw helper is called with. */
constexpr uint32_t throw_helper_code = 0x1;

/** The largest node count a list may hold before it refuses to grow. */
constexpr uint64_t listener_list_max_count = 0x666666666666665;

/** The argument the owner's first slot is called with once the expired nodes are gone. */
constexpr int32_t owner_reset_argument = -1;

struct ListenerOwner;
struct CallbackVector;

/** A listener object whose notify slot runs one stored callback. */
struct ListenerVtable {
    uint8_t unknown_0x0000[0x10];
    void (*notify)(struct Listener *listener, uint64_t argument);   /**< Runs one callback. */
};
static_assert(offsetof(ListenerVtable, notify) == 0x10);

/** An object that is told when one of its callbacks runs. */
struct Listener {
    const ListenerVtable *vtable;   /**< The listener's slots. */
};

/** One stored callback: the argument to pass and the listener to tell. */
struct ListenerCallback {
    uint64_t argument;   /**< The value handed to the notify slot. */
    Listener *listener;  /**< The listener to tell. */
};

/** A growable block of callbacks. */
struct CallbackVector {
    uint8_t unknown_0x0000[0x08];
    ListenerCallback *begin;       /**< The first callback. */
    ListenerCallback *end;         /**< One past the last callback. */
    ListenerCallback *capacity_end;/**< One past the reserved space. */
    engine::Allocator *allocator;  /**< The allocator the block came from. */
};
static_assert(offsetof(CallbackVector, begin) == 0x08);
static_assert(offsetof(CallbackVector, end) == 0x10);
static_assert(offsetof(CallbackVector, capacity_end) == 0x18);
static_assert(offsetof(CallbackVector, allocator) == 0x20);

/** A link of a circular doubly linked list. */
struct ListenerLink {
    ListenerLink *next;   /**< The next link. */
    ListenerLink *prev;   /**< The previous link. */
};

/** A list node: the link, three payload words, the countdown and the callbacks. */
struct ListenerNode {
    ListenerNode *next;           /**< The next node. */
    ListenerNode *prev;           /**< The previous node. */
    uint64_t identifier;          /**< The node's identifying word. */
    int32_t countdown;            /**< Passes left before the node expires. */
    int32_t countdown_upper;      /**< The upper half of the countdown word. */
    CallbackVector *callbacks;    /**< The callbacks run when the node expires. */
};
static_assert(offsetof(ListenerNode, identifier) == 0x10);
static_assert(offsetof(ListenerNode, countdown) == 0x18);
static_assert(offsetof(ListenerNode, callbacks) == 0x20);
static_assert(sizeof(ListenerNode) == listener_node_size);

/** A list of nodes with a sentinel, a count and the allocator of its nodes. */
struct ListenerList {
    uint8_t unknown_0x0000[0x08];
    ListenerNode *sentinel;        /**< The sentinel node, whose next is the first node. */
    uint64_t count;                /**< The number of nodes. */
    engine::Allocator *allocator;  /**< The allocator of the nodes. */
};
static_assert(offsetof(ListenerList, sentinel) == 0x08);
static_assert(offsetof(ListenerList, count) == 0x10);
static_assert(offsetof(ListenerList, allocator) == 0x18);

/** The owner's slots used here. */
struct ListenerOwnerVtable {
    uint8_t unknown_0x0000[0x18];
    void (*reset)(ListenerOwner *owner, int32_t argument);   /**< Called once the expired nodes are gone. */
    uint8_t unknown_0x0020[0x08];
    uint64_t (*finish)(ListenerOwner *owner);                /**< Tail-called at the end. */
};
static_assert(offsetof(ListenerOwnerVtable, reset) == 0x18);
static_assert(offsetof(ListenerOwnerVtable, finish) == 0x28);

/** The object that holds the active and pending listener lists. */
struct ListenerOwner {
    const ListenerOwnerVtable *vtable;   /**< The owner's slots. */
    uint8_t unknown_0x0008[0x10];
    ListenerList *active;                /**< The nodes that are live. */
    ListenerList *pending;               /**< The nodes waiting to join the active list. */
    uint8_t unknown_0x0028[0x488];
    engine::Allocator *vector_allocator; /**< The allocator that frees callback vectors. */
};
static_assert(offsetof(ListenerOwner, active) == 0x18);
static_assert(offsetof(ListenerOwner, pending) == 0x20);
static_assert(offsetof(ListenerOwner, vector_allocator) == 0x4b0);

RT_GLOBAL(0x057e4318, thread_flag_offset, const int64_t);
RT_GLOBAL(0x057e4320, thread_lock_offset, const int64_t);
RT_GLOBAL(0x04b37d80, allocation_failed_message, const uint8_t);
RT_GLOBAL(0x04c9d841, length_error_object, const uint8_t);

RT_ORIGINAL(0x024b55b0, fatal_report, void(void *, uint32_t, const uint8_t *));
RT_ORIGINAL(0x02fbe978, throw_helper, void(uint8_t *, uint32_t));
RT_ORIGINAL(0x02fbf1b8, throw_error, void(const void *error));

/** Runs and clears the callbacks of an expired node, then frees its vector. */
void release_callbacks(ListenerOwner *owner, ListenerNode *node)
{
    CallbackVector *vector = node->callbacks;
    ListenerCallback *callback = vector->begin;
    if (callback != vector->end) {
        do {
            callback->listener->vtable->notify(callback->listener, callback->argument);
            ++callback;
            vector = node->callbacks;
        } while (callback != vector->end);
        callback = vector->begin;
    }
    vector->end = callback;
    if (vector != nullptr) {
        engine::Allocator *vector_allocator = owner->vector_allocator;
        if (callback != nullptr) {
            vector->allocator->free(callback);
            vector->capacity_end = nullptr;
            vector->end = nullptr;
            vector->begin = nullptr;
        }
        vector_allocator->free(vector);
    }
}

}  // namespace

/**
 *
 * Counts down each active node and, for the ones that expire, runs their callbacks and unlinks them. Then it
 * tells the owner, copies every pending node onto the end of the active list and empties the pending list.
 *
 * It ends by jumping to the owner's final slot, so the function returns whatever that slot returns.
 *
 */
extern "C" uint64_t bb_misc_merge_pending_listeners(ListenerOwner *owner)
{
    ListenerList *list = owner->active;
    ListenerNode *node = list->sentinel->next;
    if (node != list->sentinel) {
        do {
            ListenerNode *next;
            const int32_t before = node->countdown;
            node->countdown = before - 1;
            if (before > 0) {
                next = node->next;
            } else {
                release_callbacks(owner, node);
                list = owner->active;
                next = node->next;
                if (node != list->sentinel) {
                    node->prev->next = next;
                    node->next->prev = node->prev;
                    list->allocator->free(node);
                    --list->count;
                    list = owner->active;
                }
            }
            node = next;
        } while (node != list->sentinel);
    }

    owner->vtable->reset(owner, owner_reset_argument);

    ListenerList *pending = owner->pending;
    ListenerNode *pending_sentinel = pending->sentinel;
    ListenerNode *source = pending_sentinel->next;
    if (source != pending_sentinel) {
        do {
            ListenerList *active = owner->active;
            ListenerNode *sentinel = active->sentinel;
            ListenerNode *tail = sentinel->prev;
            ListenerNode *created = static_cast<ListenerNode *>(
                active->allocator->allocate(listener_node_size, listener_node_alignment));
            if (created == nullptr) {
                if (*reinterpret_cast<uint32_t *>(engine::thread_pointer() + thread_flag_offset.get()) != 0) {
                    throw_helper(engine::thread_pointer() + thread_lock_offset.get(), throw_helper_code);
                    __builtin_unreachable();
                }
                fatal_report(nullptr, allocation_failed_line, allocation_failed_message.address());
            }
            ListenerNode *following = sentinel != nullptr ? sentinel : created;
            created->next = following;
            created->prev = sentinel != nullptr ? tail : created;
            created->callbacks = source->callbacks;
            created->countdown = source->countdown;
            created->countdown_upper = source->countdown_upper;
            created->identifier = source->identifier;
            if (active->count == listener_list_max_count) {
                throw_error(length_error_object.address());
                __builtin_unreachable();
            }
            ++active->count;
            sentinel->prev = created;
            created->prev->next = created;
            source = source->next;
            pending = owner->pending;
        } while (source != pending->sentinel);
    }

    ListenerNode *first = source->next;
    source->next = source;
    pending->sentinel->prev = pending->sentinel;
    pending->count = 0;
    while (first != pending->sentinel) {
        ListenerNode *following = first->next;
        pending->allocator->free(first);
        first = following;
    }
    return owner->vtable->finish(owner);
}
