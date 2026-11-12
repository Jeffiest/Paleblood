// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: makes a keyed slot table from the thread's allocator and registers a group's indexed members in it.
#include <cstdint>

#include "../engine/thread.h"
#include "member_index_group.h"
#include "keyed_slot_table.h"
#include "runtime/original.h"
#include "thread_block.h"
#include "thread_block_allocator.h"

namespace {

// Where the thread's block record sits, from the thread pointer.
RT_GLOBAL(0x057e40f8, thread_block_offset, const int64_t);
// The descriptor every slot of the table is keyed with.
RT_GLOBAL(0x058018b0, slot_descriptor, const uint8_t);
// Reserves room in a slot table for a count of entries.
RT_ORIGINAL(0x028c8350, reserve_slots, void(misc::KeyedSlotTable *table, const uint8_t *descriptor, uint32_t count));
// Adds one slot keyed by an index, with its value; the descriptor argument is not read.
RT_ORIGINAL(0x028c7b90, add_slot,
            void(misc::KeyedSlotTable *table, const uint8_t *unused, int64_t index, uint64_t value));

/** The size of the slot table block the allocator returns. */
constexpr uint64_t slot_table_size = 0x10;
/** The index mask a new slot table starts with. */
constexpr int32_t empty_index_mask = -1;
/** The slot index an unregistered member has. */
constexpr int32_t unset_slot_index = 0;
/** The first position a loop over the members visits; position zero is registered before it. */
constexpr int32_t first_loop_position = 1;

}  // namespace

/**
 *
 * Makes the group's slot table from the thread's allocator and stores it in the group. A group with members
 * reserves room for them, registers its first member under its index, then registers each further member in
 * order, giving a member that has no index its position first. The group's source word is copied into its two
 * copy fields at the end. Nothing is returned.
 */
extern "C" void bb_misc_register_indexed_members(misc::MemberIndexGroup *group)
{
    misc::ThreadBlock *block =
        *reinterpret_cast<misc::ThreadBlock **>(engine::thread_pointer() + thread_block_offset.get());
    auto *allocator = reinterpret_cast<misc::ThreadBlockAllocator *>(block->releaser);
    auto *table = static_cast<misc::KeyedSlotTable *>(allocator->vtable->allocate(allocator, slot_table_size));
    table->storage = 0;
    table->used_count = 0;
    table->index_mask = empty_index_mask;
    group->cell = table;

    if (group->member_count != 0) {
        reserve_slots(table, slot_descriptor.address(), static_cast<uint32_t>(group->member_count));
        const int64_t first_index = group->members[0]->slot_index;
        if (first_index != 0) add_slot(table, slot_descriptor.address(), first_index, 0);
        for (int32_t position = first_loop_position; position < group->member_count; ++position) {
            misc::MemberIndexEntry *member = group->members[position];
            if (member->slot_index == unset_slot_index) member->slot_index = position;
            add_slot(table, slot_descriptor.address(), group->members[position]->slot_index, position);
        }
    }

    group->copy_word_a = group->source_word;
    group->copy_word_b = group->source_word;
}
