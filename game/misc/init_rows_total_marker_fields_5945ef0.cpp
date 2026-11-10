// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copy three constant rows into the record at 0x05945ef0 and set its four fields, its marker and its total.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

/** The value the 16-bit marker starts with. */
constexpr uint16_t unset_marker = 0xffff;

/** The value three of the four fields start with. */
constexpr int32_t unset_field = -1;

/** The value the third field starts with. */
constexpr int32_t third_field_start = 30;

/** The constant the record is made from: the rows that are copied, then the rows that are added up. */
struct RowConstant {
    uint64_t copied_rows_0x0000[copied_words];
    Row summed_rows_0x0030[summed_rows];
};
static_assert(offsetof(RowConstant, summed_rows_0x0030) == 0x30);

/** The record that is filled in. */
struct RowRecord {
    uint64_t copied_rows_0x0000[copied_words];
    float total_0x0030;
    uint16_t marker_0x0034;
    int32_t first_field_0x0038;
    int32_t second_field_0x003c;
    int32_t third_field_0x0040;
    int32_t fourth_field_0x0044;
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);
static_assert(offsetof(RowRecord, marker_0x0034) == 0x34);
static_assert(offsetof(RowRecord, first_field_0x0038) == 0x38);
static_assert(offsetof(RowRecord, second_field_0x003c) == 0x3c);
static_assert(offsetof(RowRecord, third_field_0x0040) == 0x40);
static_assert(offsetof(RowRecord, fourth_field_0x0044) == 0x44);

RT_GLOBAL(0x04cece40, row_constant, RowConstant);
RT_GLOBAL(0x05945ef0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copy three constant rows into the record and set its four fields, its marker and its total.
 *
 * The third field starts at thirty and the other three at minus one.
 * The marker starts with all sixteen bits set; the two bytes after it are left as they were.
 * The total is a single float, the sum of the other three constant rows: each row is summed in
 * pairs, and the three row sums are added in order.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_misc_init_rows_total_marker_fields_5945ef0()
{
    const RowConstant &constant = row_constant.get();
    RowRecord &record = row_record.get();
    for (size_t index = 0; index < copied_words; ++index) {
        record.copied_rows_0x0000[index] = constant.copied_rows_0x0000[index];
    }
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0030 = total;
    record.marker_0x0034 = unset_marker;
    record.first_field_0x0038 = unset_field;
    record.second_field_0x003c = unset_field;
    record.third_field_0x0040 = third_field_start;
    record.fourth_field_0x0044 = unset_field;
}
