// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clears a holder owner: its node holder is finished and released, its keyed table is freed and released, its spare is released, then the owner goes on to the remove routine.
#include <cstdint>

#include "holder_owner.h"
#include "misc.h"
#include "node_build_holder.h"
#include "node_build_state.h"
#include "runtime/original.h"

namespace {

using misc::HolderEntry;
using misc::HolderEntryHolder;
using misc::HolderEntryTable;
using misc::HolderOwner;
using misc::NodeBuildHolder;
using misc::NodeBuildNode;

RT_ORIGINAL(0x0045a4b0, retain_node, void(void *node));
RT_ORIGINAL(0x0045a4c0, release_object, void(void *object));
RT_ORIGINAL(0x0045a510, release_spare, void(void *object));
RT_ORIGINAL(0x004658d0, fn_004658d0, void(void *inner));
RT_ORIGINAL(0x00465ec0, fn_00465ec0, void(void *link));
RT_ORIGINAL(0x00465930, fn_00465930, uint64_t(void *inner));
RT_ORIGINAL(0x00410f10, fn_00410f10, uint64_t(void *owner));
RT_GLOBAL(0x0553c870, member_table, const uint8_t);

/** The offset of the member vtable inside its table. */
constexpr uint64_t member_vtable_offset = 0x10;
/** The mode bits the holder's state is read from, the state that starts the finish, and the state it is left in. */
constexpr uint32_t holder_state_mask = 0xf;
constexpr uint32_t holder_state_start = 0x1;
constexpr uint32_t holder_state_done = 0x3;
/** The key word a freed entry carries. */
constexpr int64_t free_key = -0x2;

}  // namespace

/**
 *
 * Clears the owner. The node holder, when there is one, is retained through its node and finished when its state
 * is the start state; then the holder is released and cleared. The keyed table's entries are set to the free
 * key, the table and its holder are released through the scratch service, and the spare is released. The node
 * is finished and released when it was kept. The owner is then passed to the remove routine, whose result is
 * the function's result.
 *
 */
extern "C" uint64_t bb_misc_clear_holder_owner(HolderOwner *owner)
{
    owner->vtable = static_cast<const uint8_t *>(member_table.address()) + member_vtable_offset;
    NodeBuildNode *node = nullptr;
    bool keep = true;
    NodeBuildHolder *holder = owner->holder;
    if (holder != nullptr) {
        node = holder->node;
        keep = node == nullptr;
        bool skip_holder = false;
        if (node != nullptr) {
            retain_node(node);
            holder = owner->holder;
            if (holder == nullptr) {
                keep = false;
                skip_holder = true;
            }
        }
        if (!skip_holder) {
            if ((holder->mode & holder_state_mask) == holder_state_start) {
                NodeBuildNode *inner_node = holder->node;
                if (inner_node != nullptr) {
                    fn_004658d0(inner_node->inner_0x0010);
                    holder->mode = holder_state_done;
                    fn_00465ec0(holder->node->link_0x0038);
                    fn_00465930(inner_node->inner_0x0010);
                } else {
                    holder->mode = holder_state_done;
                }
            }
            if (owner->holder != nullptr) {
                release_object(owner->holder);
            }
            owner->holder = nullptr;
        }
    }

    misc::Service *service = misc::scratch_service.get();
    HolderEntryHolder *entries = owner->entries;
    if (entries != nullptr) {
        HolderEntryTable *table = entries->table;
        if (table != nullptr) {
            for (uint64_t index = 0; index <= table->count; ++index) {
                HolderEntry &entry = table->entries[index];
                if (entry.key != free_key) {
                    entry.key = free_key;
                }
            }
            service->vtable->release(service, table);
            entries->table = nullptr;
        }
        service->vtable->release(service, entries);
    }

    if (owner->spare != nullptr) {
        release_spare(owner->spare);
    }
    owner->spare = nullptr;

    if (!keep) {
        fn_004658d0(node->inner_0x0010);
        node->finished = true;
        fn_00465ec0(node->link_0x0038);
        fn_00465930(node->inner_0x0010);
        release_object(node);
    }
    if (owner->holder != nullptr) {
        release_object(owner->holder);
    }
    if (owner->spare != nullptr) {
        release_spare(owner->spare);
    }
    return fn_00410f10(owner);
}
