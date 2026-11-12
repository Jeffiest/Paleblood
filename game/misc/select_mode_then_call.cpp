// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: runs a check on the mode object, then calls the shared routine in the mode its flags pick.
#include <cstdint>

#include "runtime/original.h"
#include "mode_selected_object.h"

namespace {

using misc::ModeSelectedObject;

/** The check, seen as taking the object, a second argument and four more argument registers. */
using CheckTarget = uint64_t(void *object, uint64_t second, uint64_t third, uint64_t fourth, uint64_t fifth,
                             uint64_t sixth);
/** The shared routine, seen as taking the object and the mode; the check leaves the other registers clobbered. */
using ModeTarget = uint64_t(void *object, uint64_t mode);

RT_ORIGINAL(0x01392cf0, fn_01392cf0, CheckTarget);
RT_ORIGINAL(0x01391c60, fn_01391c60, ModeTarget);

/** The second argument the check is run with: zero. */
constexpr uint64_t check_kind_zero = 0;
/** The mode the shared routine runs in while the active flag is set. */
constexpr uint64_t mode_active = 2;
/** The mode while the active flag is clear and the alternate byte is zero. */
constexpr uint64_t mode_inactive_alternate_zero = 1;
/** The mode while the active flag is clear and the alternate byte is set. */
constexpr uint64_t mode_inactive_alternate_set = 3;

}  // namespace

/**
 *
 * Runs the check on the object with a zero second argument. A check that reports anything but zero ends the call with
 * zero. Otherwise the shared routine runs on the object in the mode picked by the active flag and the alternate byte,
 * and its low byte is returned. The other argument registers pass through the check only: it clobbers them.
 *
 */
extern "C" uint8_t bb_misc_select_mode_then_call_013b5100(ModeSelectedObject *object, uint64_t /* second: replaced */,
                                                         uint64_t third, uint64_t fourth, uint64_t fifth,
                                                         uint64_t sixth)
{
    uint64_t mode = mode_active;
    if (object->active_0x90 == 0) {
        const uint8_t alternate = object->alternate_0x91;
        if (static_cast<uint8_t>(fn_01392cf0(object, check_kind_zero, third, fourth, fifth, sixth)) != 0) return 0;
        mode = alternate == 0 ? mode_inactive_alternate_zero : mode_inactive_alternate_set;
    } else {
        if (static_cast<uint8_t>(fn_01392cf0(object, check_kind_zero, third, fourth, fifth, sixth)) != 0) return 0;
    }
    return static_cast<uint8_t>(fn_01391c60(object, mode));
}
