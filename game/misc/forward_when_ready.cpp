// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "ready_checked_object.h"
#include "runtime/original.h"

namespace {
/** Mask of the low byte, the only byte of the readiness result that the test reads. */
constexpr uint64_t readiness_byte_mask = 0xff;

RT_ORIGINAL(0x010a1400, fn_010a1400, uint64_t(misc::ReadyCheckedSlot *slot));
RT_ORIGINAL(0x01086b20, fn_01086b20, uint64_t(misc::ReadyCheckedSlot *slot));
}  // namespace

/**
 *
 * Tests the object's slot for readiness and forwards the slot when the test passes.
 *
 * When the low byte of the readiness result is clear, the whole result is returned as it is. Otherwise
 * the same slot goes to the forwarding call and its result is returned.
 *
 */
extern "C" uint64_t bb_misc_forward_when_ready(misc::ReadyCheckedObject *object)
{
    misc::ReadyCheckedSlot *const slot = &object->slot;
    const uint64_t readiness = fn_010a1400(slot);
    if ((readiness & readiness_byte_mask) == 0) {
        return readiness;
    }
    return fn_01086b20(slot);
}
