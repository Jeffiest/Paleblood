// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"

namespace {
RT_ORIGINAL(0x00cda840, fn_00cda840, uint64_t(uint64_t embedded, uint64_t context, uint64_t first, uint64_t second));

/** Offset of the object that the forwarded routine works on, inside the context. */
constexpr uint64_t embedded_context_offset = 0x114;
}  // namespace

/**
 *
 * Forwards the context and the two arguments to the routine that works on the object embedded at
 * offset 0x114 of the context.
 *
 * The embedded object's address comes first, then the context itself, then the two arguments in
 * their original order, and the routine's result is returned unchanged.
 */
extern "C" uint64_t bb_misc_forward_embedded_context(uint64_t context, uint64_t first, uint64_t second)
{
    return fn_00cda840(context + embedded_context_offset, context, first, second);
}
