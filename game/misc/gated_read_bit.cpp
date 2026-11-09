// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reports bit 1 of the holder's payload, only when the owner's gating block is enabled.
#include <cstdint>

#include "gated_block.h"
#include "gated_holder.h"
#include "gated_owner.h"
#include "gated_payload.h"
#include "gated_settings.h"

namespace {

constexpr uint8_t payload_bit_1 = 0x2;

}  // namespace

/**
 *
 * Returns bit 1 of the holder's payload as zero or one. Returns zero when the owner's gating block is missing or
 * its enabled flag is clear.
 *
 */
extern "C" uint8_t bb_misc_gated_read_bit(misc::GatedHolder *holder)
{
    misc::GatedSettings *settings = holder->owner->settings;
    misc::GatedBlock *block = settings->block;
    if (block == nullptr || block->enabled_0x384 == 0) return 0;
    misc::GatedPayload *payload = settings->payload;
    return (payload->bits_0x10 & payload_bit_1) >> 1;
}
