// SPDX-License-Identifier: GPL-2.0-or-later
#include <cmath>
#include <cstring>

#include "misc.h"

namespace {

/**
 *
 * Tells whether the span's chunk entry carries the direct flag, which selects the direct path.
 *
 * A null chunk has no entry and selects the vtable path. The entry is found from the chunk's
 * position in its page: the page's pool lists the entries by slot index.
 *
 */
bool has_direct_chunk(const misc::Span *self)
{
    if (self->chunk == 0) return false;

    const uint64_t page_address = self->chunk & ~(misc::chunk_page_size - 1);
    const auto *page = reinterpret_cast<const misc::ChunkPage *>(page_address);
    const uint64_t offset_in_page = (self->chunk - (page_address + misc::chunk_first_offset)) >> 3;
    const uint32_t slot_index = static_cast<uint32_t>(offset_in_page) * misc::inverse_of_seven;

    misc::ChunkEntry *entry;
    const auto *slots = reinterpret_cast<const uint8_t *>(page->pool);
    std::memcpy(&entry, slots + misc::pool_slots_offset + static_cast<uint64_t>(slot_index) * sizeof(entry),
                sizeof(entry));
    return (entry->flags & misc::direct_flag) != 0;
}

}  // namespace

/**
 *
 * Returns the width of a span, rounded down after a constant is added, times a second constant.
 *
 * The span comes from fn_004060a0 when the object's chunk entry carries the direct flag, and from
 * the vtable otherwise: the span slot is read before the value slot is called, and the value slot's
 * result is its argument. The width is the end minus the start in single precision.
 */
extern "C" double bb_misc_quantized_span(misc::Span *self)
{
    misc::SpanValue value;
    if (has_direct_chunk(self)) {
        misc::fn_004060a0(&value, self);
    } else {
        const misc::SpanVtable *vtable = self->vtable;
        const auto span_slot = vtable->span_0x1f0;
        const uint64_t argument = vtable->value_0x18(self);
        span_slot(&value, self, argument);
    }

    const double width = static_cast<double>(value.end - value.start);
    return std::floor(width + misc::span_bias.get()) * misc::span_scale.get();
}
