// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the holder that gives a flush its sink.
#pragma once

#include <cstddef>
#include <cstdint>

#include "flush_sink.h"

namespace misc {

/**
 *
 * A holder: the sink the flush writes into sits at +0x08.
 *
 */
struct FlushHolder {
    uint8_t unknown_0x0000[0x08];
    FlushSink *sink_0x08; /**< Sink the flush writes into. */
};
static_assert(offsetof(FlushHolder, sink_0x08) == 0x08);

}  // namespace misc
