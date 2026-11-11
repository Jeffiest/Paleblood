// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies the key's text through a holder, and returns the member's matcher result for that text.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "runtime/original.h"
#include "text_matcher.h"
#include "text_member_holder.h"
#include "text_scratch.h"

namespace {

RT_ORIGINAL(0x013a3110, fn_013a3110, void(misc::TextScratch *copy, misc::TextMemberHolder *holder, uint64_t key));
RT_ORIGINAL(0x013abad0, fn_013abad0, misc::TextMatcher *(void *member, const void *text));

}  // namespace

/**
 *
 * Copies the key's text, then returns the member's matcher result for it when the holder is enabled and has a
 * member and the text is present. A heap copy is freed through its allocator last.
 *
 */
extern "C" void *bb_misc_match_text_key_013a3060(misc::TextMemberHolder *holder, uint64_t key)
{
    if (holder->enabled_0x00 == 0) return nullptr;

    misc::TextScratch copy;
    fn_013a3110(&copy, holder, key);
    const void *text_data = copy.length < misc::text_scratch_heap_capacity
                                ? static_cast<const void *>(copy.inline_data)
                                : copy.heap_data;

    misc::TextMatcher *result = nullptr;
    if (text_data != nullptr && holder->enabled_0x00 != 0 && holder->member_0x18 != nullptr)
        result = fn_013abad0(holder->member_0x18, text_data);

    if (copy.length >= misc::text_scratch_heap_capacity) copy.allocator->free(copy.heap_data);
    return result;
}
