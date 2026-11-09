// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "link_lookup_table.h"
#include "runtime/original.h"

namespace {

// The source file and the message of the out-of-range report.
RT_GLOBAL(0x04bb5cd0, source_file, const char);
RT_GLOBAL(0x04bb5e65, link_message, const char);

// Initialises a message builder over its text storage, appends to it, reports it, and destroys it.
RT_ORIGINAL(0x00819350, init_message_builder, void(uint8_t *builder, uint8_t *text, uint32_t text_size));
RT_ORIGINAL(0x00825170, append_message, uint8_t *(uint8_t *builder, const char *text));
RT_ORIGINAL(0x00819800, report_message, void(uint32_t category, const uint8_t *text, const char *file, uint32_t line));
RT_ORIGINAL(0x00819460, destroy_message_builder, void(uint8_t *builder));

constexpr uint32_t report_category = 0x2a6fec1a;
constexpr uint32_t report_line = 0xe0;
constexpr size_t builder_bytes = 0x18;
constexpr uint32_t message_bytes = 0x200;
// The flag bit of a tagged link: the address is the link without it.
constexpr uint64_t link_flag = 0x1;

// Reports an index that is past the end of the table.
void report_out_of_range()
{
    uint8_t builder[builder_bytes];
    uint8_t text[message_bytes];
    init_message_builder(builder, text, message_bytes);
    append_message(builder, link_message.address());
    report_message(report_category, text, source_file.address(), report_line);
    destroy_message_builder(builder);
}

}  // namespace

/**
 *
 * Returns the address held in a table entry's tagged link, with its flag cleared. An index past the
 * last entry is reported and gives zero.
 *
 * The count is taken as unsigned, so an empty table (count zero) wraps and accepts any index.
 */
extern "C" uint64_t bb_misc_lookup_entry_link(misc::LinkLookupTable *table, uint32_t index)
{
    const uint32_t last_index = static_cast<uint32_t>(table->count) - 1;
    if (last_index < index) {
        report_out_of_range();
        return 0;
    }
    return table->entries[static_cast<int32_t>(index)].link & ~link_flag;
}
