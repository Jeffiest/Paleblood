// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: picks a probe's value as the probe value does, then adds the scale times 100 to it, or returns minus one when the value or the scale is negative.
#include <cstdint>

#include "selection_block.h"
#include "selection_config.h"
#include "selection_frame.h"
#include "selection_owner.h"
#include "selection_probe.h"
#include "selection_settings.h"

namespace {

/** The flag bit in the config that selects the probe's first value. */
constexpr uint8_t config_flag_0x10 = 0x10;

/** The bit of the block word that selects the probe's second value. */
constexpr uint16_t block_flag_0x40 = 0x40;

/** The value of a probe that is not selected by either test. */
constexpr int32_t unselected_value = -1;

/** The step each unit of scale adds to the selected value. */
constexpr uint32_t scale_step = 100;

}  // namespace

/**
 *
 * Adds the scale, in steps of one hundred, to the probe's selected value. A negative selected value or scale gives minus one.
 *
 * The selected value is chosen as the probe's value selection does; the sum is taken modulo 2^32.
 *
 */
extern "C" int32_t bb_misc_select_probe_scaled(misc::SelectionProbe *probe, int32_t scale)
{
    int32_t selected = unselected_value;
    if ((probe->owner->settings->config->flags_0x818 & config_flag_0x10) != 0) selected = probe->value_0x10;
    if ((probe->owner->frame->block->word_0x5c & block_flag_0x40) != 0) selected = probe->value_0x14;
    if ((selected | scale) < 0) return unselected_value;
    return static_cast<int32_t>(static_cast<uint32_t>(selected) + static_cast<uint32_t>(scale) * scale_step);
}
