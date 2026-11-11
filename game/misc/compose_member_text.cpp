// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: joins two texts with a separator into a formatted name, looks the member up with it, and frees the heap text.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "formatted_name.h"
#include "runtime/original.h"
#include "text_member_holder.h"

namespace {

using engine::Allocator;
using engine::AllocatorInfo;
using misc::FormattedName;

RT_ORIGINAL(0x0247d7a0, fn_0247d7a0, Allocator *());
RT_ORIGINAL(0x02fbf228, fn_02fbf228, uint64_t(const uint16_t *text));
RT_ORIGINAL(0x02fbf3b8, fn_02fbf3b8, uint32_t(const uint16_t *text, const uint16_t *name));
RT_ORIGINAL(0x02a39560, fn_02a39560, void(FormattedName *name, const uint16_t *text, uint64_t length));
RT_ORIGINAL(0x013abac0, fn_013abac0, void *(void *member, const void *text, void *context, uint32_t flag));

/** The name that both texts must match before they are joined. */
RT_GLOBAL(0x04cba0fc, required_text_name, uint16_t);
/** The separator that goes between the two texts. */
RT_GLOBAL(0x04cb9a3a, text_separator, uint16_t);
/** The message of the fatal error reported when the allocator's heap is not valid. */
RT_GLOBAL(0x04b37dc0, message_allocator_info, const char);
/** The source line of the fatal error reported when the allocator's heap is not valid. */
constexpr int32_t line_allocator_info = 0x3e;

}  // namespace

/**
 *
 * Joins the two texts with the separator into a formatted name, and returns the member's value for that name.
 *
 * Returns nothing for a disabled holder, a missing text, or a text that does not match the required name. A
 * heap name is freed through the allocator after the lookup.
 *
 */
extern "C" void *bb_misc_compose_member_text_013a2a40(misc::TextMemberHolder *holder, const uint16_t *first,
                                                      const uint16_t *second, void *context)
{
    if (holder->enabled_0x00 == 0) return nullptr;
    if (first == nullptr || second == nullptr) return nullptr;
    if (fn_02fbf3b8(first, required_text_name.address()) == 0) return nullptr;
    if (fn_02fbf3b8(second, required_text_name.address()) == 0) return nullptr;

    Allocator *const allocator = fn_0247d7a0();
    AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, line_allocator_info, message_allocator_info.address());
    }

    FormattedName name;
    name.size_0x18 = 0;
    name.text_0x08.inline_text[0] = '\0';
    name.text_0x08.inline_text[1] = '\0';
    name.capacity_0x20 = misc::formatted_name_inline_capacity;
    name.allocator_0x28 = allocator;
    name.flag_0x30 = true;

    const uint64_t first_length = first[0] != 0 ? fn_02fbf228(first) : 0;
    fn_02a39560(&name, first, first_length);
    fn_02a39560(&name, text_separator.address(), fn_02fbf228(text_separator.address()));
    const uint64_t second_length = second[0] != 0 ? fn_02fbf228(second) : 0;
    fn_02a39560(&name, second, second_length);

    void *const value = fn_013abac0(holder->member_0x18, name.text(), context, 1);
    if (name.on_heap()) name.allocator_0x28->free(name.text_0x08.heap_text);
    return value;
}
