// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: writes a setting's value into its holder's inner setting block and enables the block.
#include <cstdint>

#include "inner_setting.h"
#include "setting_holder.h"
#include "setting_source.h"

/**
 *
 * Copies the source's value into the inner setting block that the holder points at and sets the block's enabled flag.
 * The block's address is returned, as the original leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_set_inner_setting(misc::SettingHolder *holder, const misc::SettingSource *source)
{
    misc::InnerSetting *inner = holder->inner_0x08;
    inner->value_0xec = source->value_0x0c;
    inner->enabled_0xf0 = 1;
    return reinterpret_cast<uint64_t>(inner);
}
