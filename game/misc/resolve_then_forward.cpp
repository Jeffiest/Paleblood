// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

namespace {
RT_ORIGINAL(0x00400300, fn_00400300, uint64_t(uint64_t));
}  // namespace

/**
 *
 * Resolves the first argument through a callee, then forwards the result with the second argument.
 *
 * The second argument is kept across the first call and passed on unchanged, and the second stage's
 * result is returned as it is.
 */
extern "C" uint64_t bb_misc_resolve_then_forward(uint64_t first, uint64_t second)
{
    const uint64_t resolved = fn_00400300(first);
    return misc::fn_004de260(resolved, second);
}
