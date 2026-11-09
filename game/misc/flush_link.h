// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the link from a flusher to the source it reads.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct FlushSource;

/**
 *
 * A link: its first word is the source the flush reads.
 *
 */
struct FlushLink {
    FlushSource *source_0x00; /**< Source the link leads to. */
};
static_assert(offsetof(FlushLink, source_0x00) == 0x00);

}  // namespace misc
