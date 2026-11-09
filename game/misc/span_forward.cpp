// SPDX-License-Identifier: GPL-2.0-or-later
#include "element_span.h"
#include "runtime/original.h"

#include <cstdint>

namespace {
RT_ORIGINAL(0x02b787e0, fn_02b787e0, uint64_t(uint64_t, uint64_t, uint64_t, uint64_t));
}  // namespace

/**
 *
 * Forwards two arguments to a callee together with the first entry and the entry count of a run.
 *
 * The run's first entry is passed as the third argument and its count, widened to 64 bits, as the
 * fourth. The callee's result is returned as it is, so this is a tail call.
 */
extern "C" uint64_t bb_misc_span_forward(const misc::ElementSpan *span, uint64_t first, uint64_t second)
{
    return fn_02b787e0(first, second, span->first_entry, span->entry_count);
}
