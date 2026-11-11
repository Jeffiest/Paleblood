// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reports a non-empty text and two flags through an enabled holder's member, tail-calling the report routine.
#include <cstdint>

#include "runtime/original.h"
#include "text_member_holder.h"

namespace {

RT_ORIGINAL(0x02fbf228, fn_02fbf228, uint64_t(const uint16_t *text));
RT_ORIGINAL(0x013abd10, fn_013abd10, void(void *member, const uint16_t *text, uint32_t first, uint32_t second));

}  // namespace

/**
 *
 * Does nothing unless the holder is enabled, has a member, and the text is non-null and non-empty; otherwise it
 * reports the text and the two flags through the member.
 *
 */
extern "C" void bb_misc_report_member_text_013a3260(misc::TextMemberHolder *holder, const uint16_t *text,
                                                    uint32_t first, uint32_t second)
{
    if (holder->enabled_0x00 == 0 || holder->member_0x18 == nullptr) return;
    if (text == nullptr || fn_02fbf228(text) == 0) return;
    fn_013abd10(holder->member_0x18, text, first, second);
}
