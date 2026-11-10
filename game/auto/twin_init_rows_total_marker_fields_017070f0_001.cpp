// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_rows_total_marker_fields_59464b0, in game/misc/init_rows_total_marker_fields_59464b0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_total_marker_fields_01707310: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_01707310 {

// Misc: copy three constant rows into the record at 0x05946500 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cedf20, row_constant, RowConstant);
RT_GLOBAL(0x05946500, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01707310()
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

}  // namespace twin_01707310

// auto_init_rows_total_marker_fields_017076e0: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_017076e0 {

// Misc: copy three constant rows into the record at 0x05946550 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cedf80, row_constant, RowConstant);
RT_GLOBAL(0x05946550, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_017076e0()
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

}  // namespace twin_017076e0

// auto_init_rows_total_marker_fields_01707900: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_01707900 {

// Misc: copy three constant rows into the record at 0x059465a0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cedfe0, row_constant, RowConstant);
RT_GLOBAL(0x059465a0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01707900()
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

}  // namespace twin_01707900

// auto_init_rows_total_marker_fields_01707e70: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_01707e70 {

// Misc: copy three constant rows into the record at 0x059465f0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee080, row_constant, RowConstant);
RT_GLOBAL(0x059465f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01707e70()
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

}  // namespace twin_01707e70

// auto_init_rows_total_marker_fields_017087e0: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_017087e0 {

// Misc: copy three constant rows into the record at 0x05946680 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee140, row_constant, RowConstant);
RT_GLOBAL(0x05946680, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_017087e0()
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

}  // namespace twin_017087e0

// auto_init_rows_total_marker_fields_01708c80: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_01708c80 {

// Misc: copy three constant rows into the record at 0x059466d0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee1a0, row_constant, RowConstant);
RT_GLOBAL(0x059466d0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01708c80()
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

}  // namespace twin_01708c80

// auto_init_rows_total_marker_fields_01709380: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_01709380 {

// Misc: copy three constant rows into the record at 0x05946720 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee200, row_constant, RowConstant);
RT_GLOBAL(0x05946720, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01709380()
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

}  // namespace twin_01709380

// auto_init_rows_total_marker_fields_01709940: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_01709940 {

// Misc: copy three constant rows into the record at 0x05946770 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee260, row_constant, RowConstant);
RT_GLOBAL(0x05946770, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01709940()
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

}  // namespace twin_01709940

// auto_init_rows_total_marker_fields_01709fc0: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_01709fc0 {

// Misc: copy three constant rows into the record at 0x05946800 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee320, row_constant, RowConstant);
RT_GLOBAL(0x05946800, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_01709fc0()
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

}  // namespace twin_01709fc0

// auto_init_rows_total_marker_fields_0170a7a0: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_0170a7a0 {

// Misc: copy three constant rows into the record at 0x05946850 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee3a0, row_constant, RowConstant);
RT_GLOBAL(0x05946850, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0170a7a0()
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

}  // namespace twin_0170a7a0

// auto_init_rows_total_marker_fields_0170af10: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_0170af10 {

// Misc: copy three constant rows into the record at 0x059468a0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee400, row_constant, RowConstant);
RT_GLOBAL(0x059468a0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0170af10()
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

}  // namespace twin_0170af10

// auto_init_rows_total_marker_fields_0170b840: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_0170b840 {

// Misc: copy three constant rows into the record at 0x059468f0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee480, row_constant, RowConstant);
RT_GLOBAL(0x059468f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0170b840()
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

}  // namespace twin_0170b840

// auto_init_rows_total_marker_fields_0170ccb0: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_0170ccb0 {

// Misc: copy three constant rows into the record at 0x059469c0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee5a0, row_constant, RowConstant);
RT_GLOBAL(0x059469c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0170ccb0()
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

}  // namespace twin_0170ccb0

// auto_init_rows_total_marker_fields_0170d0f0: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_0170d0f0 {

// Misc: copy three constant rows into the record at 0x05946a10 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee600, row_constant, RowConstant);
RT_GLOBAL(0x05946a10, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0170d0f0()
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

}  // namespace twin_0170d0f0

// auto_init_rows_total_marker_fields_0170d880: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_0170d880 {

// Misc: copy three constant rows into the record at 0x05946aa0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee6c0, row_constant, RowConstant);
RT_GLOBAL(0x05946aa0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0170d880()
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

}  // namespace twin_0170d880

// auto_init_rows_total_marker_fields_0170de40: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_0170de40 {

// Misc: copy three constant rows into the record at 0x05946b50 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee780, row_constant, RowConstant);
RT_GLOBAL(0x05946b50, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0170de40()
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

}  // namespace twin_0170de40

// auto_init_rows_total_marker_fields_0170e230: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_0170e230 {

// Misc: copy three constant rows into the record at 0x05946ba0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee7e0, row_constant, RowConstant);
RT_GLOBAL(0x05946ba0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0170e230()
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

}  // namespace twin_0170e230

// auto_init_rows_total_marker_fields_0170f800: misc_init_rows_total_marker_fields_59464b0 with other addresses.
namespace twin_0170f800 {

// Misc: copy three constant rows into the record at 0x05946bf0 and set its four fields, its marker and its total.


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

RT_GLOBAL(0x04cee840, row_constant, RowConstant);
RT_GLOBAL(0x05946bf0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_total_marker_fields_0170f800()
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

}  // namespace twin_0170f800
