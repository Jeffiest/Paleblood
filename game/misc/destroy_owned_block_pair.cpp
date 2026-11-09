// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: destroys an object that owns a plain block and an owned block node.
//
// misc_destroy_owned_block_pair (0x0139b630, a destructor called by the destroy-then-release routine at
// 0x0139b610) sets the object's vtable to its base class. It releases the plain block through the allocator
// the library returns for it, then clears the pointer. It then releases the node: the node's data is freed
// through the allocator stored in the node, and the node itself through the allocator the library returns
// for it. The original leaves the stack guard word in RAX, which this returns too.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "owned_block.h"
#include "owned_block_pair.h"
#include "runtime/original.h"

namespace {

// The record the original's call fills on the stack: its contents are never read here.
constexpr std::size_t node_record_bytes = 0x28;

RT_ORIGINAL(0x0247b720, fn_0247b720, engine::Allocator *(void *block));
RT_ORIGINAL(0x01440f50, fn_01440f50, void(void *block));
RT_ORIGINAL(0x02d858c0, fn_02d858c0, void(void *record, const misc::OwnedBlock *block));

RT_GLOBAL(0x056f1e60, owned_block_pair_vtable, misc::OwnedBlockPairVtable);
RT_GLOBAL(0x057e3be0, stack_guard, uint64_t *);

}  // namespace

/**
 *
 * Destroys the pair: publishes the base vtable, releases the plain block and the owned node, and clears both
 * pointers. The node's data block is read through its pointer before the node call, as the original does.
 *
 * It returns the stack guard word, the value the original leaves in RAX.
 */
extern "C" uint64_t bb_misc_destroy_owned_block_pair(misc::OwnedBlockPair *self)
{
    self->vtable = owned_block_pair_vtable.address();

    if (self->plain_block_0x08 != nullptr) {
        engine::Allocator *const plain_allocator = fn_0247b720(self->plain_block_0x08);
        fn_01440f50(self->plain_block_0x08);
        plain_allocator->free(self->plain_block_0x08);
        self->plain_block_0x08 = nullptr;
    }

    misc::OwnedBlock *const node = self->node_0x18;
    if (node != nullptr) {
        engine::Allocator *const node_allocator = fn_0247b720(node);
        // The original loads the first word of the data block before the call; the load is kept so a bad pointer faults alike.
        (void)*static_cast<volatile uint64_t *>(node->data_0x08);
        uint8_t record[node_record_bytes];
        fn_02d858c0(record, node);
        node->data_allocator_0x18->free(node->data_0x08);
        node_allocator->free(node);
        self->node_0x18 = nullptr;
    }
    return *stack_guard.get();
}
