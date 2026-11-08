// SPDX-License-Identifier: GPL-2.0-or-later
// Input: sets a pad output's two motor speeds (input_pad_set_vibration, 0x02a9c790).
//
// The vibration step (0x01395be0) calls it with the small motor's speed in the second argument
// (a 0 or 1 bit) and the large motor's in the third. Nothing is sent while the output's
// vibration_enabled byte is zero, and the result is true only when scePadSetVibration returns 0.
#include "input.h"

namespace {

/**
 * The enable byte's value that turns vibration off.
 *
 * Any other value enables it.
 */
constexpr uint8_t vibration_disabled = 0;

}  // namespace

/**
 * Sets a pad output's large and small motor speeds.
 *
 * Returns false when vibration is disabled or scePadSetVibration fails.
 */
extern "C" bool bb_input_pad_set_vibration(input::PadVibrationOwner *owner, uint8_t small_motor, uint8_t large_motor)
{
    if (owner->vibration_enabled == vibration_disabled) return false;
    const input::PadVibrationParam speeds{large_motor, small_motor};
    return input::pad_set_vibration(owner->handle, &speeds) == 0;
}
