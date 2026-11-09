// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a candidate a match request is compared with: a virtual object with a key and a readiness test.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct MatchCandidate;

/**
 *
 * The virtual functions of a match candidate: slot 0x10 gives its key and slot 0x98 says whether it is ready.
 *
 */
struct MatchCandidateVtable {
    uint8_t unknown_0x0000[0x10];
    uint64_t (*key)(MatchCandidate *self);     /**< Slot at 0x10: the key the candidate is matched by. */
    uint8_t unknown_0x0018[0x80];
    int32_t (*ready)(MatchCandidate *self);    /**< Slot at 0x98: nonzero when the candidate can be matched. */
};
static_assert(offsetof(MatchCandidateVtable, key) == 0x10);
static_assert(offsetof(MatchCandidateVtable, ready) == 0x98);

/**
 *
 * A match candidate: its vtable and the flag word that is compared with the request's flags.
 *
 */
struct MatchCandidate {
    const MatchCandidateVtable *vtable; /**< Dispatch table for the candidate's methods. */
    uint8_t unknown_0x0008[0x10];
    uint32_t flags;                     /**< Compared under the masks of the match; bits 8 and 9 widen the mask. */
};
static_assert(offsetof(MatchCandidate, flags) == 0x18);

}  // namespace misc
