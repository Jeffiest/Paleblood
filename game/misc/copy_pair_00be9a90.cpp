// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "record_pair.h"
#include "runtime/original.h"

namespace {

// The source file and the message of the out-of-range report.
RT_GLOBAL(0x04bb6938, source_file, const char);
RT_GLOBAL(0x04bb6a74, out_of_range_message, const char);

// Initialises a message builder over its text storage, appends to it, reports it, and destroys it.
RT_ORIGINAL(0x00819350, init_message_builder, void(uint8_t *builder, uint8_t *text, uint32_t text_size));
RT_ORIGINAL(0x00825170, append_message, uint8_t *(uint8_t *builder, const char *text));
RT_ORIGINAL(0x00819800, report_message, void(uint32_t category, const uint8_t *text, const char *file, uint32_t line));
RT_ORIGINAL(0x00819460, destroy_message_builder, void(uint8_t *builder));

constexpr uint32_t report_category = 0x2a6fec1a;
constexpr uint32_t report_line = 0x10a;
constexpr size_t builder_bytes = 0x18;
constexpr uint32_t message_bytes = 0x200;

// A table whose records are at 0x30 and whose record count is at 0x38.
struct PairTable {
    uint8_t unknown_0x00[0x30];
    misc::RecordPair *records;  /**< The records, at 0x30. */
    int32_t count;              /**< Number of records, at 0x38. */
};
static_assert(offsetof(PairTable, records) == 0x30);
static_assert(offsetof(PairTable, count) == 0x38);

// Reports an index that is past the end of the table.
void report_out_of_range()
{
    uint8_t builder[builder_bytes];
    uint8_t text[message_bytes];
    init_message_builder(builder, text, message_bytes);
    append_message(builder, out_of_range_message.address());
    report_message(report_category, text, source_file.address(), report_line);
    destroy_message_builder(builder);
}

}  // namespace

/**
 *
 * Copies the record at an index of the table to the output. An index past the last record is
 * reported, leaves the output alone and gives one; otherwise the result is zero.
 *
 * The count is taken as unsigned, so an empty table (count zero) wraps and accepts any index.
 */
extern "C" uint32_t bb_misc_copy_pair_00be9a90(PairTable *table, uint32_t index, misc::RecordPair *output)
{
    const uint32_t last_index = static_cast<uint32_t>(table->count) - 1;
    if (last_index < index) {
        report_out_of_range();
        return 1;
    }
    *output = table->records[static_cast<int32_t>(index)];
    return 0;
}
