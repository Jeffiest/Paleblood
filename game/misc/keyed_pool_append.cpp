// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

/**
 *
 * Appends a keyed node to a holder's pool, the way the pool-node append does, but with the caller's
 * argument instead of the pool's own binding.
 *
 * The shared object is retained for the call and its binding is handed to the pool append first.
 * The node takes the key read from the caller, and the argument, which replaces the one it held
 * after the old one is released. When no node was available, the shared object is released; when
 * one was, the binding's object is released if it still has one.
 */
extern "C" misc::Tagged *bb_misc_keyed_pool_append(misc::Tagged *tagged, misc::KeyedHolder *holder,
                                                  const uint32_t *key, uint64_t argument)
{
    misc::RetainedObject *shared = misc::shared_retained_object.address();
    shared->vtable->retain(shared, argument);

    misc::Binding binding{shared, argument};
    uint32_t key_copy = *key;
    misc::fn_0040dee0(tagged, holder, &key_copy, &binding);

    misc::KeyedPool *pool = holder->pool;
    misc::KeyedNode *node;
    if (pool->remaining < misc::pool_node_size) {
        node = reinterpret_cast<misc::KeyedNode *>(misc::fn_00414be0(
            reinterpret_cast<misc::PoolNode **>(&pool->cursor), static_cast<uint32_t>(misc::pool_node_size)));
    } else {
        node = pool->cursor;
        pool->cursor = reinterpret_cast<misc::KeyedNode *>(reinterpret_cast<uint8_t *>(node) + misc::pool_node_size);
        pool->remaining -= misc::pool_node_size;
    }

    if (node != nullptr) {
        node->argument = 0;
        node->tag = 0;
        node->next = nullptr;
        node->key = *key;

        if (argument != 0) misc::fn_0045a4b0(reinterpret_cast<void *>(argument));
        if (node->argument != 0) misc::fn_0045a4c0(reinterpret_cast<void *>(node->argument));
        node->argument = argument;
        node->tag = tagged->tag;

        if (holder->first == nullptr) holder->first = node;

        if (pool->head != nullptr) {
            pool->tail->next = node;
        } else {
            pool->head = node;
        }
        pool->tail = node;

        holder->count += 1;
        if (binding.object != nullptr) {
            binding.object->vtable->release(binding.object, binding.argument);
        }
    } else {
        shared->vtable->release(shared, binding.argument);
    }
    return tagged;
}
