// SPDX-License-Identifier: GPL-2.0-or-later
// Stores a request in its owner. When the owner holds a pending request, the request's six words are
// copied into it and its flag is set, then the owner's handle is passed to 0x00482a70 with flag 1.
// Otherwise the owner's handle and the request are passed to 0x004de720. Both paths end by returning
// the result of 0x00400ab0 on the owner.
#include "misc.h"

/**
 *
 * Stores the request in the owner's pending request, or hands it to the game when none is held, and returns the tail result.
 *
 */
extern "C" uint64_t bb_misc_store_request(misc::HandleOwner *owner, const misc::RequestWords *request)
{
    misc::PendingRequest *pending = owner->pending_0x60;
    if (pending != nullptr) {
        // The words are copied in the game's order, so a request that overlaps the pending copy reads what the game reads.
        pending->words.word_28 = request->word_28;
        pending->words.word_20 = request->word_20;
        pending->words.word_18 = request->word_18;
        pending->words.word_10 = request->word_10;
        const uint64_t word_00 = request->word_00;
        const uint64_t word_08 = request->word_08;
        pending->words.word_08 = word_08;
        pending->words.word_00 = word_00;
        pending->flag_0x30 = 1;

        const uint64_t handle = misc::fn_00400300(owner);
        misc::fn_00482a70(handle, 1);
    } else {
        const uint64_t handle = misc::fn_00400300(owner);
        misc::fn_004de720(handle, request);
    }
    return misc::fn_00400ab0(owner);
}
