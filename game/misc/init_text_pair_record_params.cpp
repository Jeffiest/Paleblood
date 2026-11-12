// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a text pair record like init_text_pair_record, with the first, second and third metric pairs and the two
// 16-byte blocks passed in by the caller.
#include <cstddef>
#include <cstdint>
#include <cstring>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../engine/vector.h"
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
 * name is empty, the flag bit of the caller goes into the flags byte, the caller's metric pairs and blocks are stored,
 * and the fourth metric pair is fixed.
 *
 */
extern "C" void bb_misc_init_text_pair_record_params_013a4e30(TextPairRecord *record, Allocator *allocator,
                                                             const uint16_t *first_text, uint32_t flags,
                                                             uint64_t first_metrics, uint64_t second_metrics,
                                                             uint64_t third_metrics, engine::Vec4 first_block,
                                                             engine::Vec4 second_block)
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

    std::memcpy(&record->metrics_0x7c, &first_metrics, sizeof(record->metrics_0x7c));
    std::memcpy(&record->metrics_0x84, &second_metrics, sizeof(record->metrics_0x84));
    std::memcpy(&record->metrics_0x8c, &third_metrics, sizeof(record->metrics_0x8c));
    record->metrics_0x94 = {misc::text_pair_metric_large, misc::text_pair_metric_small};

    std::memcpy(record->block_0xa0, &first_block, sizeof(first_block));
    std::memcpy(record->block_0xb0, &second_block, sizeof(second_block));
}
