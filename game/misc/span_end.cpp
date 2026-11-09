// SPDX-License-Identifier: GPL-2.0-or-later
#include "element_span.h"

#include <cstdint>

/**
 *
 * Returns the address just past the last entry of a run: its first entry plus its entry count.
 *
 * The count is a 32-bit field, so it is widened before the addition and the upper bits of the
 * record's count slot are never read.
 */
extern "C" uint64_t bb_misc_span_end(const misc::ElementSpan *span)
{
    return span->first_entry + span->entry_count;
}
