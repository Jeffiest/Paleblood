// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_rows_spaced_fields_total_5953390, in game/misc/init_rows_spaced_fields_total_5953390.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_spaced_fields_total_019210b0: misc_init_rows_spaced_fields_total_5953390 with other addresses.
namespace twin_019210b0 {

// Misc: copy three constant rows into the record at 0x05953ab0 and set its four fields and its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
    int32_t first_field_0x0030;
    uint32_t unknown_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
    float total_0x0044;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, second_field_0x0038) == 0x38);
static_assert(offsetof(RowRecord, third_field_0x003c) == 0x3c);
static_assert(offsetof(RowRecord, fourth_field_0x0040) == 0x40);
static_assert(offsetof(RowRecord, total_0x0044) == 0x44);

RT_GLOBAL(0x04cf5b90, row_constant, RowConstant);
RT_GLOBAL(0x05953ab0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copy three constant rows into the record and set its four fields and its total.
 *
 * The third field starts at thirty and the other three at minus one.
 * The four bytes between the first and the second field are left as they were.
 * The total is a single float, the sum of the other three constant rows: each row is summed in
 * pairs, and the three row sums are added in order.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_spaced_fields_total_019210b0()
{
    const RowConstant &constant = row_constant.get();
    RowRecord &record = row_record.get();
    for (size_t index = 0; index < copied_words; ++index) {
        record.copied_rows_0x0000[index] = constant.copied_rows_0x0000[index];
    }
    record.first_field_0x0030 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0044 = total;
}

}  // namespace twin_019210b0

// auto_init_rows_spaced_fields_total_019300d0: misc_init_rows_spaced_fields_total_5953390 with other addresses.
namespace twin_019300d0 {

// Misc: copy three constant rows into the record at 0x05954780 and set its four fields and its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
    int32_t first_field_0x0030;
    uint32_t unknown_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
    float total_0x0044;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, second_field_0x0038) == 0x38);
static_assert(offsetof(RowRecord, third_field_0x003c) == 0x3c);
static_assert(offsetof(RowRecord, fourth_field_0x0040) == 0x40);
static_assert(offsetof(RowRecord, total_0x0044) == 0x44);

RT_GLOBAL(0x04cf65f0, row_constant, RowConstant);
RT_GLOBAL(0x05954780, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copy three constant rows into the record and set its four fields and its total.
 *
 * The third field starts at thirty and the other three at minus one.
 * The four bytes between the first and the second field are left as they were.
 * The total is a single float, the sum of the other three constant rows: each row is summed in
 * pairs, and the three row sums are added in order.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_spaced_fields_total_019300d0()
{
    const RowConstant &constant = row_constant.get();
    RowRecord &record = row_record.get();
    for (size_t index = 0; index < copied_words; ++index) {
        record.copied_rows_0x0000[index] = constant.copied_rows_0x0000[index];
    }
    record.first_field_0x0030 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0044 = total;
}

}  // namespace twin_019300d0

// auto_init_rows_spaced_fields_total_01931780: misc_init_rows_spaced_fields_total_5953390 with other addresses.
namespace twin_01931780 {

// Misc: copy three constant rows into the record at 0x05954b40 and set its four fields and its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
    int32_t first_field_0x0030;
    uint32_t unknown_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
    float total_0x0044;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, second_field_0x0038) == 0x38);
static_assert(offsetof(RowRecord, third_field_0x003c) == 0x3c);
static_assert(offsetof(RowRecord, fourth_field_0x0040) == 0x40);
static_assert(offsetof(RowRecord, total_0x0044) == 0x44);

RT_GLOBAL(0x04cf66e0, row_constant, RowConstant);
RT_GLOBAL(0x05954b40, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copy three constant rows into the record and set its four fields and its total.
 *
 * The third field starts at thirty and the other three at minus one.
 * The four bytes between the first and the second field are left as they were.
 * The total is a single float, the sum of the other three constant rows: each row is summed in
 * pairs, and the three row sums are added in order.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_spaced_fields_total_01931780()
{
    const RowConstant &constant = row_constant.get();
    RowRecord &record = row_record.get();
    for (size_t index = 0; index < copied_words; ++index) {
        record.copied_rows_0x0000[index] = constant.copied_rows_0x0000[index];
    }
    record.first_field_0x0030 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0044 = total;
}

}  // namespace twin_01931780

// auto_init_rows_spaced_fields_total_01937070: misc_init_rows_spaced_fields_total_5953390 with other addresses.
namespace twin_01937070 {

// Misc: copy three constant rows into the record at 0x05954be0 and set its four fields and its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
    int32_t first_field_0x0030;
    uint32_t unknown_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
    float total_0x0044;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, second_field_0x0038) == 0x38);
static_assert(offsetof(RowRecord, third_field_0x003c) == 0x3c);
static_assert(offsetof(RowRecord, fourth_field_0x0040) == 0x40);
static_assert(offsetof(RowRecord, total_0x0044) == 0x44);

RT_GLOBAL(0x04cf68e0, row_constant, RowConstant);
RT_GLOBAL(0x05954be0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copy three constant rows into the record and set its four fields and its total.
 *
 * The third field starts at thirty and the other three at minus one.
 * The four bytes between the first and the second field are left as they were.
 * The total is a single float, the sum of the other three constant rows: each row is summed in
 * pairs, and the three row sums are added in order.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_spaced_fields_total_01937070()
{
    const RowConstant &constant = row_constant.get();
    RowRecord &record = row_record.get();
    for (size_t index = 0; index < copied_words; ++index) {
        record.copied_rows_0x0000[index] = constant.copied_rows_0x0000[index];
    }
    record.first_field_0x0030 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0044 = total;
}

}  // namespace twin_01937070
