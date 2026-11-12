// SPDX-License-Identifier: GPL-2.0-or-later
// Render: starts the wind system's settling when a wind system exists and the caller asks for it.
#include <cstdint>

#include "model_wind.h"

namespace {

/** The request value that asks for the settling; any other value leaves the system alone. */
constexpr uint8_t settle_requested = 0x01;

/** The flag value that marks the reset and the settling as set. */
constexpr uint8_t flag_set = 0x01;

/** The number of wind updates the settling lasts. */
constexpr uint32_t settle_update_count = 0x3c;

}  // namespace

/**
 *
 * Starts the wind system's settling when a system exists and the caller requests it: the reset flag and the settling
 * flag are set and the settling count is loaded. The request is read from its low byte only.
 *
 */
extern "C" void bb_render_begin_wind_settle(uint8_t request)
{
    render::wind::WindSystem *system = render::wind::wind_system_instance.get();
    if (system == nullptr || request != settle_requested) {
        return;
    }
    system->reset_pending = flag_set;
    system->settling = flag_set;
    system->settle_count = settle_update_count;
}
