// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: picks a probe's value from its owner's settings flag and frame block word: the first value when the flag is set, then the second when the word's bit is set.
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

}  // namespace

/**
 *
 * Returns the probe's value selected by its owner: unselected at first, then the first value when the config flag
 * is set, then the second value when the block word has its bit set.
 *
 */
extern "C" int32_t bb_misc_select_probe_value(misc::SelectionProbe *probe)
{
    int32_t value = unselected_value;
    if ((probe->owner->settings->config->flags_0x818 & config_flag_0x10) != 0) value = probe->value_0x10;
    if ((probe->owner->frame->block->word_0x5c & block_flag_0x40) != 0) value = probe->value_0x14;
    return value;
}
