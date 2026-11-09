// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

/** Owner flag bit that answers true before the registry is checked. */
constexpr uint8_t owner_flag_answer = 0x8;

/** Answer for a true result. */
constexpr uint8_t answer_true = 1;

/** Answer for a false result. */
constexpr uint8_t answer_false = 0;

RT_GLOBAL(0x0593e880, latch_registry, void *);
RT_GLOBAL(0x0593e891, latch_byte, uint8_t);
RT_GLOBAL(0x04d35c4a, latch_registry_name, const char);

struct LatchOwner {
    uint8_t unknown_0x0000[0x200];
    uint8_t flags_0x0200;
};
static_assert(offsetof(LatchOwner, flags_0x0200) == 0x200);

}  // namespace

/**
 *
 * Answers true when the owner's answer flag is set, otherwise whether the latch byte is set.
 *
 * A missing registry is reported by name, and the latch is read after the report. The latch's
 * whole byte decides, so any set bit answers true.
 */
extern "C" uint8_t bb_misc_registry_latch_answer(LatchOwner *owner)
{
    if ((owner->flags_0x0200 & owner_flag_answer) != 0) return answer_true;

    if (latch_registry.get() == nullptr) engine::report_missing(latch_registry_name.address());
    return latch_byte.get() != 0 ? answer_true : answer_false;
}
