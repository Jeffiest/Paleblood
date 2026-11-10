// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copy three constant rows into the record at 0x05940ea0 and set its four fields.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The value three of the four fields start with. */
constexpr int32_t unset_field = -1;

/** The value the third field starts with. */
constexpr int32_t third_field_start = 30;

/** The constant the record is made from: the rows that are copied. */
struct RowConstant {
    uint64_t copied_rows_0x0000[copied_words];
};

/** The record that is filled in. */
struct RowRecord {
    uint64_t copied_rows_0x0000[copied_words];
    int32_t first_field_0x0030;
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);

RT_GLOBAL(0x04ce8310, row_constant, RowConstant);
RT_GLOBAL(0x05940ea0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_misc_init_rows_fields_5940ea0()
{
    const RowConstant &constant = row_constant.get();
    RowRecord &record = row_record.get();
    for (size_t index = 0; index < copied_words; ++index) {
        record.copied_rows_0x0000[index] = constant.copied_rows_0x0000[index];
    }
    record.first_field_0x0030 = unset_field;
    record.second_field_0x0034 = unset_field;
    record.third_field_0x0038 = third_field_start;
    record.fourth_field_0x003c = unset_field;
}
