// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: looks up a member's text through a holder, lets a matcher accept the member's value, and otherwise reports the text to the member.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"
#include "text_matcher.h"
#include "text_member_holder.h"
#include "formatted_name.h"
#include "text_value.h"

namespace {

RT_ORIGINAL(0x013a3110, fn_013a3110, void(misc::FormattedName *copy, misc::TextMemberHolder *holder, uint64_t key));
RT_ORIGINAL(0x013abad0, fn_013abad0, misc::TextMatcher *(void *member, const void *text));
RT_ORIGINAL(0x013abac0, fn_013abac0, misc::TextValue *(void *member, uint64_t argument, uint64_t *tag, uint32_t flag));
RT_ORIGINAL(0x013aeaf0, fn_013aeaf0, void(void *scratch, const uint8_t *name));
RT_ORIGINAL(0x013aebc0, fn_013aebc0, void(void *scratch));
RT_ORIGINAL(0x0139d070, fn_0139d070, uint64_t(misc::TextMatcher *matcher, const uint16_t *text, void *context));
RT_ORIGINAL(0x013abd10, fn_013abd10, void(void *member, const uint16_t *text, uint32_t first, uint32_t second));
RT_ORIGINAL(0x02fbf228, fn_02fbf228, uint64_t(const uint16_t *text));
RT_GLOBAL(0x04cba0fc, match_registration_name, uint8_t);

}  // namespace

/**
 *
 * Copies the key's text, then looks the member's text up with a matcher; a matching value is returned, and otherwise a
 * fallback lookup runs and a non-empty text is reported through the member.
 *
 * Returns nothing unless the matcher accepts the value (or the fallback lookup does), then the value object is returned.
 *
 */
extern "C" void *bb_misc_match_text_member_013a0920(misc::TextMemberHolder *holder, uint64_t key,
                                                    uint64_t argument, void *context)
{
    if (holder->enabled_0x00 == 0) return nullptr;

    misc::FormattedName copy;
    fn_013a3110(&copy, holder, key);
    const void *text_data = copy.capacity_0x20 < misc::formatted_name_heap_capacity
                                ? static_cast<const void *>(copy.text_0x08.inline_text)
                                : copy.text_0x08.heap_text;

    misc::TextMatcher *matcher = nullptr;
    if (text_data != nullptr && holder->enabled_0x00 != 0 && holder->member_0x18 != nullptr)
        matcher = fn_013abad0(holder->member_0x18, text_data);

    if (copy.capacity_0x20 >= misc::formatted_name_heap_capacity) copy.allocator_0x28->free(copy.text_0x08.heap_text);
    if (matcher == nullptr) return nullptr;

    uint64_t tag = 0;
    uint64_t scratch;
    fn_013aeaf0(&scratch, match_registration_name.address());
    if (holder->enabled_0x00 == 0 || holder->member_0x18 == nullptr) {
        fn_013aebc0(&scratch);
        return nullptr;
    }
    misc::TextValue *value = fn_013abac0(holder->member_0x18, argument, &tag, 1);
    fn_013aebc0(&scratch);
    if (value == nullptr) return nullptr;

    const uint16_t *value_text = value->vtable->text_0x28(value);
    if (matcher->vtable->matches_0xa0(matcher, value_text, context)) return value;

    const uint16_t *fallback_text = value->vtable->text_0x28(value);
    if (fn_0139d070(matcher, fallback_text, context) != 0) return value;

    const uint16_t *reported_text = value->vtable->text_0x28(value);
    if (holder->enabled_0x00 == 0 || holder->member_0x18 == nullptr || reported_text == nullptr) return nullptr;
    if (fn_02fbf228(reported_text) == 0) return nullptr;
    fn_013abd10(holder->member_0x18, reported_text, 1, 1);
    return nullptr;
}
