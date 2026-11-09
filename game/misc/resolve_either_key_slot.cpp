// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the value of the node the pair service resolves the first key or else the second key to.
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
 * Returns the value of the node the service resolves the first key to, or the second key when the first
 * is not found; when neither is found, returns the owner's third fallback value.
 *
 * Each key is kept in a local that the service's lookups read.
 */
extern "C" uint64_t bb_misc_resolve_either_key_slot(misc::SlotOwner *owner)
{
    misc::PairService *service = root_state_instance.get()->pair_service_0x5948;
    uint64_t first_key = service->key_0xf8;
    uint64_t second_key = service->key_0x100;

    uint64_t *selected = nullptr;
    if (fn_0261efb0(service, &first_key)) {
        selected = &first_key;
    } else if (fn_0261efb0(service, &second_key)) {
        selected = &second_key;
    }

    if (selected == nullptr) {
        return owner->value_0x158;
    }
    misc::PairHandle *handle = fn_0261eaa0(service, selected);
    return reinterpret_cast<uint64_t>(handle->node_0x48);
}
