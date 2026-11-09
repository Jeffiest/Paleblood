// SPDX-License-Identifier: GPL-2.0-or-later
// Returns the owner's pending request when it holds one. Otherwise it resolves the owner's handle:
// a zero handle gives the fallback record, and a live handle gives the payload of the target that
// its page's table lists for the handle's slot.
#include "misc.h"

/**
 *
 * Returns the pending request when one is held, else the handle's target payload, else the fallback record for a zero handle.
 *
 */
extern "C" const void *bb_misc_resolve_request_target(misc::HandleOwner *owner)
{
    if (owner->pending_0x60 != nullptr) return owner->pending_0x60;

    const uint64_t handle = owner->handle_0x48;
    if (handle == 0) return misc::fallback_record.address();

    const uint64_t page_start = handle & ~misc::handle_page_mask;
    const uint64_t slot_offset = handle - (page_start + misc::handle_slot_base);
    const uint32_t slot = static_cast<uint32_t>(slot_offset >> misc::handle_slot_shift) * misc::handle_slot_inverse;

    const auto *page = reinterpret_cast<const misc::HandlePage *>(static_cast<uintptr_t>(page_start));
    const misc::HandleTarget *target = page->table->targets[slot];
    return target->payload_0x10;
}
