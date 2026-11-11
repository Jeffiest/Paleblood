// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a member's matcher accepts the text, or else the member's value is returned for the same text.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"
#include "text_member_holder.h"

namespace {

RT_ORIGINAL(0x013abad0, fn_013abad0, void *(void *member, const void *text));
RT_ORIGINAL(0x013abac0, fn_013abac0, void *(void *member, const void *text, uint64_t argument, uint32_t flag));

}  // namespace

/**
 *
 * Returns nothing when the holder is disabled or has no member. Otherwise the member's matcher is asked about the
 * text, and when it gives nothing the member's value for the text and the argument is returned.
 *
 */
extern "C" void *bb_misc_match_member_text_013a2bd0(misc::TextMemberHolder *holder, const void *text,
                                                    uint64_t argument)
{
    if (holder->enabled_0x00 == 0 || holder->member_0x18 == nullptr) return nullptr;
    if (void *const matched = fn_013abad0(holder->member_0x18, text)) return matched;
    return fn_013abac0(holder->member_0x18, text, argument, 1);
}
