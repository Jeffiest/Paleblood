// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"
#include "text_block_record.h"

namespace {

RT_ORIGINAL(0x0225b560, fn_0225b560, uint64_t(misc::TextBlockRecord *record));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *object));

}  // namespace

/**
 *
 * Resets a text block, then tail-calls the library release routine with the same block.
 *
 * The reset's result is not used; the release's result is returned as it is.
 *
 */
extern "C" uint64_t bb_misc_reset_then_free_text_block(misc::TextBlockRecord *record)
{
    fn_0225b560(record);
    return fn_02fbe588(record);
}
