// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: checks a keyed slot cache's guards, reporting each one that is not in its expected state, then clears its first flag.
#include <cstdint>

#include "../engine/engine.h"
#include "keyed_slot_cache.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x04d3309c, cache_check_file, const char);
RT_GLOBAL(0x04b388a8, cache_check_message, const char);

/** Line numbers the guard reports give: the held block, then the two flags. */
constexpr int32_t held_check_line = 0x355;
constexpr int32_t first_flag_check_line = 0x356;
constexpr int32_t second_flag_check_line = 0x357;

}  // namespace

/**
 *
 * Reports a held block, a first flag that is clear, and a second flag that is set, then clears the first flag.
 *
 * The last three integer registers are the variadic arguments the reports pass on: the reports do not read them.
 *
 */
extern "C" void bb_misc_check_guards_clear_01e88630(misc::KeyedSlotCache *cache, uint64_t, uint64_t,
                                                    uint64_t report_arg_0, uint64_t report_arg_1, uint64_t report_arg_2)
{
    if (cache->held_block_0x14028 != nullptr) {
        engine::fatal_error(cache_check_file.address(), held_check_line, cache_check_message.address(),
                            report_arg_0, report_arg_1, report_arg_2);
    }
    if (cache->must_be_clear_0x14030 == 0) {
        engine::fatal_error(cache_check_file.address(), first_flag_check_line, cache_check_message.address(),
                            report_arg_0, report_arg_1, report_arg_2);
    }
    if (cache->must_be_clear_0x14031 != 0) {
        engine::fatal_error(cache_check_file.address(), second_flag_check_line, cache_check_message.address(),
                            report_arg_0, report_arg_1, report_arg_2);
    }
    cache->must_be_clear_0x14030 = 0;
}
