// SPDX-License-Identifier: GPL-2.0-or-later
#include "slot_binding_node.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x00438210, fn_00438210, misc::SlotBindingNode *(misc::SlotBindingTable *table, int32_t key));
RT_GLOBAL(0x04b3cbe3, slot_binding_label, const char);

constexpr size_t key_low_index = 1;   /**< first of the two bank bytes that form the key */

}  // namespace

/**
 *
 * Binds a source into the second key layout of a sorted slot table, creating the node when needed.
 *
 * The key comes from the source's selected bank; the return value is whatever the original leaves in RAX.
 */
extern "C" uint64_t bb_misc_bind_slot_node_0043a9f0(misc::SlotBindingSource *source, misc::SlotBindingTable *table,
                                              uint32_t value)
{
    return misc::bind_slot_node<key_low_index>(source, table, value, slot_binding_label.address(),
                                               [](misc::SlotBindingTable *owner, int32_t key) {
                                                   return fn_00438210(owner, key);
                                               });
}
