// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: raises the engine's prebuilt error object through the throw helper, which never returns.
#include <cstdint>

#include "runtime/original.h"

namespace {

RT_GLOBAL(0x04d40ada, prebuilt_error, const uint8_t);
RT_ORIGINAL(0x02fbf1b8, throw_error, void(const void *error));

}  // namespace

/**
 *
 * Passes the prebuilt error object to the throw helper. The helper does not return, so nothing follows the call.
 *
 */
extern "C" void bb_misc_throw_prebuilt_error()
{
    throw_error(prebuilt_error.address());
    __builtin_unreachable();
}
