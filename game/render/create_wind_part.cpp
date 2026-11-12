// SPDX-License-Identifier: GPL-2.0-or-later
// Render: allocates a wind part's 0x78-byte block, initialises it through its two callees and reports whether the block was taken.
#include <cstdint>

#include "../engine/allocator.h"
#include "runtime/original.h"

namespace {

/** Bytes that one wind part takes. */
constexpr uint64_t wind_part_size = 0x78;

/** The alignment asked of the allocator for the wind part. */
constexpr uint64_t wind_part_alignment = 0x08;

RT_ORIGINAL(0x02716820, initialize_wind_part, void(void *part));
RT_ORIGINAL(0x02716b40, bind_wind_part, void(void *part, engine::Allocator *allocator, uint32_t kind));

}  // namespace

/**
 *
 * Takes a block for a wind part from the allocator. When the allocator refuses the block, nothing else happens and the
 * function reports false; otherwise the part is initialised for the kind and reports true.
 *
 */
extern "C" uint8_t bb_render_create_wind_part(engine::Allocator *allocator, uint32_t kind)
{
    void *part = allocator->allocate(wind_part_size, wind_part_alignment);
    if (part == nullptr) {
        return 0;
    }
    initialize_wind_part(part);
    bind_wind_part(part, allocator, kind);
    return 1;
}
