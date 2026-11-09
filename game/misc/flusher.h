// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the flusher that a flush owner calls first, and the link it holds to its source.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct Flusher;
struct FlushLink;

/**
 *
 * The flusher's virtual table; the slot at +0x40 is the call the owner makes before it reads the link.
 *
 */
struct FlusherVtable {
    uint8_t unknown_0x0000[0x40];
    void (*flush_0x40)(Flusher *self); /**< Prepares the flusher for the flush. */
};
static_assert(offsetof(FlusherVtable, flush_0x40) == 0x40);

/**
 *
 * A flusher: its virtual table is the first word, and its link sits at +0x60.
 *
 */
struct Flusher {
    const FlusherVtable *vtable;
    uint8_t unknown_0x0008[0x58];
    FlushLink *link_0x60; /**< Link to the source the flush reads. */
};
static_assert(offsetof(Flusher, link_0x60) == 0x60);

}  // namespace misc
