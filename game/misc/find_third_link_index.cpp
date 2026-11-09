// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "link_lookup_table.h"
#include "runtime/original.h"

namespace {

// The message prefix and the source file of the not-found report.
RT_GLOBAL(0x04bb5f6c, not_found_prefix, const char);
RT_GLOBAL(0x04bb5cd0, source_file, const char);

// Tests one link's address against the argument: zero when it is the one sought.
RT_ORIGINAL(0x008462b0, link_matches, uint32_t(uint64_t address, const char *argument));
// Initialises a message builder over its text storage, appends to it, reports it, and destroys it.
RT_ORIGINAL(0x00819350, init_message_builder, void(uint8_t *builder, uint8_t *text, uint32_t text_size));
RT_ORIGINAL(0x00825170, append_message, uint8_t *(uint8_t *builder, const char *text));
RT_ORIGINAL(0x00819800, report_message, void(uint32_t category, const uint8_t *text, const char *file, uint32_t line));
RT_ORIGINAL(0x00819460, destroy_message_builder, void(uint8_t *builder));

constexpr uint32_t report_category = 0x2a6fec1a;
constexpr uint32_t report_line = 0x136;
constexpr size_t builder_bytes = 0x18;
constexpr uint32_t message_bytes = 0x200;
constexpr int32_t not_found = -1;
// The flag bit of a tagged link: the address is the link without it.
constexpr uint64_t link_flag = 0x1;

// Reports that no entry of the list matched the argument.
void report_not_found(const char *argument)
{
    uint8_t builder[builder_bytes];
    uint8_t text[message_bytes];
    init_message_builder(builder, text, message_bytes);
    append_message(append_message(builder, not_found_prefix.address()), argument);
    report_message(report_category, text, source_file.address(), report_line);
    destroy_message_builder(builder);
}

}  // namespace

/**
 *
 * Returns the index of the first entry of the table's third list whose link address matches the
 * argument. When none matches, the miss is reported and the result is minus one.
 *
 */
extern "C" int32_t bb_misc_find_third_link_index(misc::LinkLookupTable *table, const char *argument)
{
    for (int32_t index = 0; index < table->third_count; index++) {
        const uint64_t address = table->third_entries[index].link & ~link_flag;
        if (link_matches(address, argument) == 0) return index;
    }
    report_not_found(argument);
    return not_found;
}
