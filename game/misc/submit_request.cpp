// SPDX-License-Identifier: GPL-2.0-or-later
// Adds the request's node entry to the owner's queue, with its tag bits cleared and the payload offset
// added. Then the queue's flag word is read: when its low byte is nonzero that word is the result,
// otherwise the queue is handed on to 0x0045dfc0 and its result is the result.
#include "misc.h"

namespace {

/** Mask of the low byte, the part of the flag word that is tested. */
constexpr uint64_t flag_byte_mask = 0xff;

}  // namespace

/**
 *
 * Adds the request's entry to the owner's queue and returns the queue's flag word, or the handed-on result when its low byte is zero.
 *
 */
extern "C" uint64_t bb_misc_submit_request(misc::SubmitOwner *owner, const misc::SubmitRequest *request)
{
    const uint64_t tagged = request->node_0x40->tagged_word_0x48;
    const uint64_t entry = (tagged & ~misc::tag_bits_mask) + misc::payload_offset;
    misc::fn_0045d5a0(owner->queue_0x70, entry);

    const uint64_t flags = misc::fn_0040fa50(owner->queue_0x70);
    if ((flags & flag_byte_mask) != 0) return flags;
    return misc::fn_0045dfc0(owner->queue_0x70);
}
