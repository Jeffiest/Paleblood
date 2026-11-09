// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the node a pair service resolves its key to, or one of the owner's fallback values.
#include "pair_handle.h"
#include "pair_service.h"
#include "root_state.h"
#include "slot_owner.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0261efb0, fn_0261efb0, bool(misc::PairService *service, uint64_t *key));
RT_ORIGINAL(0x0261eaa0, fn_0261eaa0, misc::PairHandle *(misc::PairService *service, uint64_t *key));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

}  // namespace

/**
 *
 * Returns the value of the node the service resolves the key to when the key is found; otherwise it
 * returns the owner's preferred fallback value when that is set, and its first fallback value when not.
 *
 * The key is kept in a local that the service's lookups read.
 */
extern "C" uint64_t bb_misc_resolve_key_slot(misc::SlotOwner *owner)
{
    misc::PairService *service = root_state_instance.get()->pair_service_0x5948;
    uint64_t key = service->key_0x108;
    if (fn_0261efb0(service, &key)) {
        misc::PairHandle *handle = fn_0261eaa0(service, &key);
        return reinterpret_cast<uint64_t>(handle->node_0x48);
    }
    if (owner->value_0x1d0 != 0) {
        return owner->value_0x1d0;
    }
    return owner->value_0x150;
}
