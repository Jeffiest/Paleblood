// SPDX-License-Identifier: GPL-2.0-or-later
// Render: returns the wind system instance the game keeps in its global, or null before the system exists.
#include <cstdint>

#include "model_wind.h"

/**
 *
 * Returns the address of the wind system instance, or null when no wind system has been created.
 *
 */
extern "C" uint64_t bb_render_get_wind_system()
{
    return reinterpret_cast<uintptr_t>(render::wind::wind_system_instance.get());
}
