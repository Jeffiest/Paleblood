// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

/**
 *
 * Takes a node from the holder's pool, binds it to the caller's object and tag, and appends it to
 * the pool's chain.
 *
 * The caller's key is passed to the pool first. A node comes from the pool's cursor while enough
 * bytes remain, and otherwise from the slow allocator; when that gives none, nothing else happens.
 * The node drops the object it held (releasing it when there was one), then takes the pair's
 * object and argument, and the pair's object is retained before that. The function returns the
 * tagged value it was given.
 */
extern "C" misc::Tagged *bb_misc_pool_append_node(misc::Tagged *tagged, misc::PooledHolder *holder,
                                                  const uint32_t *key, misc::Binding *binding)
{
    uint32_t key_copy = *key;
    misc::fn_00418060(tagged, holder->pool, &key_copy);

    misc::NodePool *pool = holder->pool;
    misc::PoolNode *node;
    if (pool->remaining < misc::pool_node_size) {
        node = misc::fn_00414be0(&pool->cursor, static_cast<uint32_t>(misc::pool_node_size));
    } else {
        node = pool->cursor;
        pool->cursor = reinterpret_cast<misc::PoolNode *>(reinterpret_cast<uint8_t *>(node) + misc::pool_node_size);
        pool->remaining -= misc::pool_node_size;
    }
    if (node == nullptr) return tagged;

    node->argument = 0;
    node->object = nullptr;
    node->next = nullptr;

    if (binding->object != nullptr) {
        binding->object->vtable->retain(binding->object, binding->argument);
    }
    if (node->object != nullptr) {
        node->object->vtable->release(node->object, node->argument);
    }
    node->object = binding->object;
    node->argument = binding->argument;
    node->tag = tagged->tag;

    if (holder->first == nullptr) holder->first = node;

    if (pool->head != nullptr) {
        pool->tail->next = node;
    } else {
        pool->head = node;
    }
    pool->tail = node;

    holder->count += 1;
    return tagged;
}
