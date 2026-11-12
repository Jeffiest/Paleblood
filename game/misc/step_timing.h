// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The step's timing: the elapsed time that tracked timers are advanced by.
 *
 */
struct StepTiming {
    uint8_t unknown_0x0000[0x08];
    float delta;                    /**< The elapsed time of this step, in seconds. */
};
static_assert(offsetof(StepTiming, delta) == 0x08);

}  // namespace misc
