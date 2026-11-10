// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_init_rows_total_marker_fields_5945ef0, in game/misc/init_rows_total_marker_fields_5945ef0.cpp, each using other addresses and constants.
// Every block below is that function's source with the addresses and constants exchanged: the
// names and comments in a block were written for that function and are carried over.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_total_marker_fields_016f5000: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_016f5000 {

// Misc: copy three constant rows into the record at 0x05945e50 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cec960, row_constant, RowConstant);
RT_GLOBAL(0x05945e50, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_016f5000()
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

}  // namespace near_016f5000

// auto_init_rows_total_marker_fields_01799070: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_01799070 {

// Misc: copy three constant rows into the record at 0x0594b8f0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cef150, row_constant, RowConstant);
RT_GLOBAL(0x0594b8f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01799070()
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

}  // namespace near_01799070

// auto_init_rows_total_marker_fields_017d3660: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_017d3660 {

// Misc: copy three constant rows into the record at 0x0594c860 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cf0200, row_constant, RowConstant);
RT_GLOBAL(0x0594c860, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_017d3660()
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

}  // namespace near_017d3660

// auto_init_rows_total_marker_fields_017d4ee0: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_017d4ee0 {

// Misc: copy three constant rows into the record at 0x0594c970 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cf0360, row_constant, RowConstant);
RT_GLOBAL(0x0594c970, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_017d4ee0()
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

}  // namespace near_017d4ee0

// auto_init_rows_total_marker_fields_017d7b40: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_017d7b40 {

// Misc: copy three constant rows into the record at 0x0594cb90 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cf05d0, row_constant, RowConstant);
RT_GLOBAL(0x0594cb90, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_017d7b40()
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

}  // namespace near_017d7b40

// auto_init_rows_total_marker_fields_017dca50: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_017dca50 {

// Misc: copy three constant rows into the record at 0x0594ce70 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cf0940, row_constant, RowConstant);
RT_GLOBAL(0x0594ce70, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_017dca50()
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

}  // namespace near_017dca50

// auto_init_rows_total_marker_fields_018500e0: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_018500e0 {

// Misc: copy three constant rows into the record at 0x05950610 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cf2e80, row_constant, RowConstant);
RT_GLOBAL(0x05950610, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_018500e0()
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

}  // namespace near_018500e0

// auto_init_rows_total_marker_fields_0193e850: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_0193e850 {

// Misc: copy three constant rows into the record at 0x059559b0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cf6c10, row_constant, RowConstant);
RT_GLOBAL(0x059559b0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0193e850()
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

}  // namespace near_0193e850

// auto_init_rows_total_marker_fields_019bf6c0: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_019bf6c0 {

// Misc: copy three constant rows into the record at 0x059588f0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cf80f0, row_constant, RowConstant);
RT_GLOBAL(0x059588f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_019bf6c0()
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

}  // namespace near_019bf6c0

// auto_init_rows_total_marker_fields_01b87520: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_01b87520 {

// Misc: copy three constant rows into the record at 0x059635f0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cfdb80, row_constant, RowConstant);
RT_GLOBAL(0x059635f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01b87520()
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

}  // namespace near_01b87520

// auto_init_rows_total_marker_fields_01bbd100: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_01bbd100 {

// Misc: copy three constant rows into the record at 0x0596b380 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cfee40, row_constant, RowConstant);
RT_GLOBAL(0x0596b380, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01bbd100()
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

}  // namespace near_01bbd100

// auto_init_rows_total_marker_fields_01bc2e90: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_01bc2e90 {

// Misc: copy three constant rows into the record at 0x0596b3d0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cfef00, row_constant, RowConstant);
RT_GLOBAL(0x0596b3d0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01bc2e90()
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

}  // namespace near_01bc2e90

// auto_init_rows_total_marker_fields_01c7ef70: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_01c7ef70 {

// Misc: copy three constant rows into the record at 0x0596e710 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04d03650, row_constant, RowConstant);
RT_GLOBAL(0x0596e710, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01c7ef70()
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

}  // namespace near_01c7ef70

// auto_init_rows_total_marker_fields_01cd9020: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_01cd9020 {

// Misc: copy three constant rows into the record at 0x0596fbb0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04d05fc0, row_constant, RowConstant);
RT_GLOBAL(0x0596fbb0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01cd9020()
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

}  // namespace near_01cd9020

// auto_init_rows_total_marker_fields_01cf1190: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_01cf1190 {

// Misc: copy three constant rows into the record at 0x05970040 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04d06510, row_constant, RowConstant);
RT_GLOBAL(0x05970040, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01cf1190()
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

}  // namespace near_01cf1190

// auto_init_rows_total_marker_fields_01d1c490: misc_init_rows_total_marker_fields_5945ef0 with other addresses and constants.
namespace near_01d1c490 {

// Misc: copy three constant rows into the record at 0x059719b0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04d06af0, row_constant, RowConstant);
RT_GLOBAL(0x059719b0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01d1c490()
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

}  // namespace near_01d1c490
