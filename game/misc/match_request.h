// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a request that looks for a candidate to match, and keeps a pending bit while it has no settled answer.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct MatchRequest;

/**
 *
 * The virtual functions of a match request: slot 0x10 gives its key and slot 0xa0 says whether it is settled.
 *
 */
struct MatchRequestVtable {
    uint8_t unknown_0x0000[0x10];
    uint64_t (*key)(MatchRequest *self);       /**< Slot at 0x10: the key the request is matched by. */
    uint8_t unknown_0x0018[0x88];
    uint8_t (*settled)(MatchRequest *self);    /**< Slot at 0xa0: nonzero when the request has a settled answer. */
};
static_assert(offsetof(MatchRequestVtable, key) == 0x10);
static_assert(offsetof(MatchRequestVtable, settled) == 0xa0);

/**
 *
 * A match request: its vtable and the flag word that candidates are compared with.
 *
 */
struct MatchRequest {
    const MatchRequestVtable *vtable; /**< Dispatch table for the request's methods. */
    uint8_t unknown_0x0008[0x10];
    uint32_t flags;                   /**< The request's flags; bit 6 is set once it is unsettled but keyed. */
};
static_assert(offsetof(MatchRequest, flags) == 0x18);

}  // namespace misc
