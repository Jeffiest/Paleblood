// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the resources a holder releases on teardown: a block, two buffers and a counted object.
#pragma once

#include <cstddef>
#include <cstdint>

#include "packed_count_object.h"

namespace misc {

/**
 *
 * A holder of released resources: a block at +0x20, buffers at +0x218 and +0x220, and a counted object at +0x228.
 *
 */
struct ResourceHolder {
    uint8_t unknown_0x00[0x20];
    void *block_0x20;                 /**< Released and cleared when not null. */
    uint8_t unknown_0x28[0x1f0];
    void *buffer_0x218;               /**< Destroyed, freed and cleared when not null. */
    void *buffer_0x220;               /**< Destroyed, freed and cleared when not null. */
    PackedCountObject *counted_0x228; /**< Has one count released, then cleared, when not null. */
};
static_assert(offsetof(ResourceHolder, block_0x20) == 0x20 && offsetof(ResourceHolder, buffer_0x218) == 0x218);
static_assert(offsetof(ResourceHolder, buffer_0x220) == 0x220 && offsetof(ResourceHolder, counted_0x228) == 0x228);

}  // namespace misc
