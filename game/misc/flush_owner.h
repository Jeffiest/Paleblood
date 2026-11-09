// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner of a one-time flush, with its flusher, its locator and its done flag.
#pragma once

#include <cstddef>
#include <cstdint>

#include "flusher.h"

namespace misc {

struct FlushLocator;

/**
 *
 * The owner: its flusher sits at +0x13b0, its locator at +0x13b8 and its done flag at +0x13c0.
 *
 */
struct FlushOwner {
    uint8_t unknown_0x0000[0x13b0];
    Flusher *flusher_0x13b0;     /**< Flusher called first, or null. */
    FlushLocator *locator_0x13b8; /**< Locator resolved to a second source, or null. */
    uint8_t done_0x13c0;         /**< Set once the flush has run. */
};
static_assert(offsetof(FlushOwner, flusher_0x13b0) == 0x13b0);
static_assert(offsetof(FlushOwner, locator_0x13b8) == 0x13b8);
static_assert(offsetof(FlushOwner, done_0x13c0) == 0x13c0);

}  // namespace misc
