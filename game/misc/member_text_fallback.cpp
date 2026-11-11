// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the member's value for the text unless the member's matcher already accepts the text.
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
 * Does nothing for a disabled holder or one without a member, and gives nothing when the member's matcher accepts the
 * text. Otherwise returns the member's value for the text and the argument.
 *
 */
extern "C" void *bb_misc_member_text_fallback_013a2df0(misc::TextMemberHolder *holder, const void *text,
                                                       uint64_t argument)
{
    if (holder->enabled_0x00 == 0 || holder->member_0x18 == nullptr) return nullptr;
    if (fn_013abad0(holder->member_0x18, text) != nullptr) return nullptr;
    return fn_013abac0(holder->member_0x18, text, argument, 1);
}
