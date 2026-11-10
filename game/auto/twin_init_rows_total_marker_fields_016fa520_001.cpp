// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_rows_total_marker_fields_5945ef0, in game/misc/init_rows_total_marker_fields_5945ef0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_total_marker_fields_016fa940: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_016fa940 {

// Misc: copy three constant rows into the record at 0x05945f40 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cecea0, row_constant, RowConstant);
RT_GLOBAL(0x05945f40, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_016fa940()
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

}  // namespace twin_016fa940

// auto_init_rows_total_marker_fields_016fd100: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_016fd100 {

// Misc: copy three constant rows into the record at 0x05945f90 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04ced2e0, row_constant, RowConstant);
RT_GLOBAL(0x05945f90, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_016fd100()
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

}  // namespace twin_016fd100

// auto_init_rows_total_marker_fields_016fd750: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_016fd750 {

// Misc: copy three constant rows into the record at 0x05945fe0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04ced340, row_constant, RowConstant);
RT_GLOBAL(0x05945fe0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_016fd750()
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

}  // namespace twin_016fd750

// auto_init_rows_total_marker_fields_016fe010: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_016fe010 {

// Misc: copy three constant rows into the record at 0x05946030 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04ced3a0, row_constant, RowConstant);
RT_GLOBAL(0x05946030, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_016fe010()
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

}  // namespace twin_016fe010

// auto_init_rows_total_marker_fields_016fe590: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_016fe590 {

// Misc: copy three constant rows into the record at 0x05946080 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04ced420, row_constant, RowConstant);
RT_GLOBAL(0x05946080, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_016fe590()
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

}  // namespace twin_016fe590

// auto_init_rows_total_marker_fields_016febf0: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_016febf0 {

// Misc: copy three constant rows into the record at 0x059460d0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04ced480, row_constant, RowConstant);
RT_GLOBAL(0x059460d0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_016febf0()
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

}  // namespace twin_016febf0

// auto_init_rows_total_marker_fields_016ff790: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_016ff790 {

// Misc: copy three constant rows into the record at 0x05946120 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04ced520, row_constant, RowConstant);
RT_GLOBAL(0x05946120, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_016ff790()
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

}  // namespace twin_016ff790

// auto_init_rows_total_marker_fields_017000e0: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_017000e0 {

// Misc: copy three constant rows into the record at 0x05946170 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04ced590, row_constant, RowConstant);
RT_GLOBAL(0x05946170, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_017000e0()
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

}  // namespace twin_017000e0

// auto_init_rows_total_marker_fields_01700df0: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_01700df0 {

// Misc: copy three constant rows into the record at 0x05946200 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04ced670, row_constant, RowConstant);
RT_GLOBAL(0x05946200, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01700df0()
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

}  // namespace twin_01700df0

// auto_init_rows_total_marker_fields_01702f30: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_01702f30 {

// Misc: copy three constant rows into the record at 0x05946250 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cedae0, row_constant, RowConstant);
RT_GLOBAL(0x05946250, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01702f30()
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

}  // namespace twin_01702f30

// auto_init_rows_total_marker_fields_017045e0: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_017045e0 {

// Misc: copy three constant rows into the record at 0x059462a0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cedc50, row_constant, RowConstant);
RT_GLOBAL(0x059462a0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_017045e0()
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

}  // namespace twin_017045e0

// auto_init_rows_total_marker_fields_01704c90: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_01704c90 {

// Misc: copy three constant rows into the record at 0x059462f0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cedcb0, row_constant, RowConstant);
RT_GLOBAL(0x059462f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01704c90()
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

}  // namespace twin_01704c90

// auto_init_rows_total_marker_fields_01705440: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_01705440 {

// Misc: copy three constant rows into the record at 0x05946380 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cedd40, row_constant, RowConstant);
RT_GLOBAL(0x05946380, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01705440()
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

}  // namespace twin_01705440

// auto_init_rows_total_marker_fields_01705c00: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_01705c00 {

// Misc: copy three constant rows into the record at 0x05946410 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cede00, row_constant, RowConstant);
RT_GLOBAL(0x05946410, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01705c00()
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

}  // namespace twin_01705c00

// auto_init_rows_total_marker_fields_017063f0: misc_init_rows_total_marker_fields_5945ef0 with other addresses.
namespace twin_017063f0 {

// Misc: copy three constant rows into the record at 0x05946460 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cede60, row_constant, RowConstant);
RT_GLOBAL(0x05946460, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_017063f0()
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

}  // namespace twin_017063f0
