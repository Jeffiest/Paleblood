// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a text pair record for an allocator: two wide-string names, the flag bit, fixed metrics and two default blocks.
#include <cstddef>
#include <cstdint>
#include <cstring>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../engine/wide_string.h"
#include "inline_text.h"
#include "runtime/original.h"
#include "text_pair_record.h"

namespace {

using engine::Allocator;
using engine::AllocatorInfo;
using engine::WideString;
using misc::TextPairRecord;

RT_ORIGINAL(0x02fbf228, fn_02fbf228, uint64_t(const uint16_t *text));
RT_ORIGINAL(0x02a2a720, fn_02a2a720, void(WideString *name, const uint16_t *text, uint64_t length));

/** The empty name that stands in for a null name, read from the executable's read-only data. */
RT_GLOBAL(0x04cba290, empty_text, const uint16_t);
/** The default block copied into the record twice, read from the executable's read-only data. */
RT_GLOBAL(0x04cba250, default_block, const uint8_t);
/** The message of the fatal error reported when the allocator's heap is not valid. */
RT_GLOBAL(0x04b37dc0, message_allocator_info, const char);
/** The source line of the fatal error reported when the allocator's heap is not valid. */
constexpr int32_t line_allocator_info = 0x3e;

/**
 *
 * Prepares a name for its text: the allocator's heap must be valid, then the name is empty and inline, owned by the
 * allocator.
 *
 */
void start_name(WideString *name, Allocator *allocator)
{
    AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, line_allocator_info, message_allocator_info.address());
    }
    name->allocator = allocator;
    name->capacity = misc::inline_text_inline_capacity;
    name->size = 0;
    name->inline_text[0] = u'\0';
}

}  // namespace

/**
 *
 * Fills the record for the allocator: the first name takes the text (or the empty text for a null pointer), the second
 * name is empty, the flag bit of the caller goes into the flags byte, and the metrics and the default block are copied in.
 *
 */
extern "C" void bb_misc_init_text_pair_record_013a4ca0(TextPairRecord *record, Allocator *allocator,
                                                      const uint16_t *first_text, uint32_t flags)
{
    record->allocator = allocator;

    start_name(&record->first_name, allocator);
    const uint16_t *text = first_text != nullptr ? first_text : empty_text.address();
    const uint64_t first_length = text[0] != 0 ? fn_02fbf228(text) : 0;
    fn_02a2a720(&record->first_name, text, first_length);
    record->first_name.owns = true;

    start_name(&record->second_name, allocator);
    fn_02a2a720(&record->second_name, empty_text.address(), 0);
    record->second_name.owns = true;

    record->flags = static_cast<uint8_t>((record->flags & ~misc::text_pair_flag_bit) | (flags & misc::text_pair_flag_bit));

    record->metrics_0x7c = {misc::text_pair_metric_wide, misc::text_pair_metric_wide};
    record->metrics_0x84 = {misc::text_pair_metric_mid, misc::text_pair_metric_mid};
    record->metrics_0x8c = {1.0f, 1.0f};
    record->metrics_0x94 = {misc::text_pair_metric_large, misc::text_pair_metric_small};

    std::memcpy(record->block_0xa0, default_block.address(), misc::text_pair_block_bytes);
    std::memcpy(record->block_0xb0, default_block.address(), misc::text_pair_block_bytes);
}
