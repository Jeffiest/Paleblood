// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_rows_total_fields_5946c40, in game/misc/init_rows_total_fields_5946c40.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_total_fields_017b57d0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_017b57d0 {

// Misc: copy three constant rows into the record at 0x0594c5e0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cef9e0, row_constant, RowConstant);
RT_GLOBAL(0x0594c5e0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_017b57d0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_017b57d0

// auto_init_rows_total_fields_017d27f0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_017d27f0 {

// Misc: copy three constant rows into the record at 0x0594c810, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf0030, row_constant, RowConstant);
RT_GLOBAL(0x0594c810, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_017d27f0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_017d27f0

// auto_init_rows_total_fields_017d7240: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_017d7240 {

// Misc: copy three constant rows into the record at 0x0594cb40, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf0570, row_constant, RowConstant);
RT_GLOBAL(0x0594cb40, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_017d7240()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_017d7240

// auto_init_rows_total_fields_017daf60: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_017daf60 {

// Misc: copy three constant rows into the record at 0x0594cd50, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf07a0, row_constant, RowConstant);
RT_GLOBAL(0x0594cd50, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_017daf60()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_017daf60

// auto_init_rows_total_fields_017e01f0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_017e01f0 {

// Misc: copy three constant rows into the record at 0x0594cf80, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf0bc0, row_constant, RowConstant);
RT_GLOBAL(0x0594cf80, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_017e01f0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_017e01f0

// auto_init_rows_total_fields_017e0a10: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_017e0a10 {

// Misc: copy three constant rows into the record at 0x0594cfd0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf0c20, row_constant, RowConstant);
RT_GLOBAL(0x0594cfd0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_017e0a10()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_017e0a10

// auto_init_rows_total_fields_0184efe0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_0184efe0 {

// Misc: copy three constant rows into the record at 0x059505c0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf2e20, row_constant, RowConstant);
RT_GLOBAL(0x059505c0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_0184efe0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_0184efe0

// auto_init_rows_total_fields_018f5a30: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_018f5a30 {

// Misc: copy three constant rows into the record at 0x059529d0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf4a90, row_constant, RowConstant);
RT_GLOBAL(0x059529d0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_018f5a30()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_018f5a30

// auto_init_rows_total_fields_01939040: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01939040 {

// Misc: copy three constant rows into the record at 0x05955880, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf6a10, row_constant, RowConstant);
RT_GLOBAL(0x05955880, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01939040()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01939040

// auto_init_rows_total_fields_01939360: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01939360 {

// Misc: copy three constant rows into the record at 0x059558d0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf6a70, row_constant, RowConstant);
RT_GLOBAL(0x059558d0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01939360()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01939360

// auto_init_rows_total_fields_01939fc0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01939fc0 {

// Misc: copy three constant rows into the record at 0x05955920, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf6ad0, row_constant, RowConstant);
RT_GLOBAL(0x05955920, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01939fc0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01939fc0

// auto_init_rows_total_fields_01abefe0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01abefe0 {

// Misc: copy three constant rows into the record at 0x0595f290, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfb760, row_constant, RowConstant);
RT_GLOBAL(0x0595f290, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01abefe0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01abefe0

// auto_init_rows_total_fields_01ad8c00: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01ad8c00 {

// Misc: copy three constant rows into the record at 0x0595ff50, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfbc80, row_constant, RowConstant);
RT_GLOBAL(0x0595ff50, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01ad8c00()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01ad8c00

// auto_init_rows_total_fields_01b55e80: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01b55e80 {

// Misc: copy three constant rows into the record at 0x059622c0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfd220, row_constant, RowConstant);
RT_GLOBAL(0x059622c0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01b55e80()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01b55e80

// auto_init_rows_total_fields_01b63670: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01b63670 {

// Misc: copy three constant rows into the record at 0x05962760, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfd550, row_constant, RowConstant);
RT_GLOBAL(0x05962760, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01b63670()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01b63670

// auto_init_rows_total_fields_01b9b8f0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01b9b8f0 {

// Misc: copy three constant rows into the record at 0x0596a800, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe030, row_constant, RowConstant);
RT_GLOBAL(0x0596a800, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01b9b8f0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01b9b8f0

// auto_init_rows_total_fields_01b9d170: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01b9d170 {

// Misc: copy three constant rows into the record at 0x0596a890, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe0f0, row_constant, RowConstant);
RT_GLOBAL(0x0596a890, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01b9d170()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01b9d170

// auto_init_rows_total_fields_01b9ddd0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01b9ddd0 {

// Misc: copy three constant rows into the record at 0x0596a8e0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe150, row_constant, RowConstant);
RT_GLOBAL(0x0596a8e0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01b9ddd0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01b9ddd0

// auto_init_rows_total_fields_01ba0640: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01ba0640 {

// Misc: copy three constant rows into the record at 0x0596a9f0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe2d0, row_constant, RowConstant);
RT_GLOBAL(0x0596a9f0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01ba0640()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01ba0640

// auto_init_rows_total_fields_01ba2c00: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01ba2c00 {

// Misc: copy three constant rows into the record at 0x0596aac0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe3f0, row_constant, RowConstant);
RT_GLOBAL(0x0596aac0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01ba2c00()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01ba2c00

// auto_init_rows_total_fields_01ba4ff0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01ba4ff0 {

// Misc: copy three constant rows into the record at 0x0596ab90, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe510, row_constant, RowConstant);
RT_GLOBAL(0x0596ab90, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01ba4ff0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01ba4ff0

// auto_init_rows_total_fields_01ba79e0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01ba79e0 {

// Misc: copy three constant rows into the record at 0x0596aca0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe690, row_constant, RowConstant);
RT_GLOBAL(0x0596aca0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01ba79e0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01ba79e0

// auto_init_rows_total_fields_01bb6ca0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01bb6ca0 {

// Misc: copy three constant rows into the record at 0x0596b1b0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfec00, row_constant, RowConstant);
RT_GLOBAL(0x0596b1b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01bb6ca0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01bb6ca0

// auto_init_rows_total_fields_01bcc540: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01bcc540 {

// Misc: copy three constant rows into the record at 0x0596b770, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cff3e0, row_constant, RowConstant);
RT_GLOBAL(0x0596b770, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01bcc540()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01bcc540

// auto_init_rows_total_fields_01be0040: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01be0040 {

// Misc: copy three constant rows into the record at 0x0596b8e0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cff880, row_constant, RowConstant);
RT_GLOBAL(0x0596b8e0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01be0040()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01be0040

// auto_init_rows_total_fields_01bea150: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01bea150 {

// Misc: copy three constant rows into the record at 0x0596b9b0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cffb70, row_constant, RowConstant);
RT_GLOBAL(0x0596b9b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01bea150()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01bea150

// auto_init_rows_total_fields_01bec8d0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01bec8d0 {

// Misc: copy three constant rows into the record at 0x0596ba60, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cffbd0, row_constant, RowConstant);
RT_GLOBAL(0x0596ba60, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01bec8d0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01bec8d0

// auto_init_rows_total_fields_01c22560: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01c22560 {

// Misc: copy three constant rows into the record at 0x0596c8f0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d01720, row_constant, RowConstant);
RT_GLOBAL(0x0596c8f0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01c22560()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01c22560

// auto_init_rows_total_fields_01c67140: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01c67140 {

// Misc: copy three constant rows into the record at 0x0596e380, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d030e0, row_constant, RowConstant);
RT_GLOBAL(0x0596e380, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01c67140()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01c67140

// auto_init_rows_total_fields_01cb7640: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01cb7640 {

// Misc: copy three constant rows into the record at 0x0596f770, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d05420, row_constant, RowConstant);
RT_GLOBAL(0x0596f770, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01cb7640()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01cb7640

// auto_init_rows_total_fields_01d0bea0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01d0bea0 {

// Misc: copy three constant rows into the record at 0x05971730, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d06860, row_constant, RowConstant);
RT_GLOBAL(0x05971730, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01d0bea0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01d0bea0

// auto_init_rows_total_fields_01dedb80: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01dedb80 {

// Misc: copy three constant rows into the record at 0x059797d0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d08660, row_constant, RowConstant);
RT_GLOBAL(0x059797d0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01dedb80()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01dedb80

// auto_init_rows_total_fields_01def8e0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01def8e0 {

// Misc: copy three constant rows into the record at 0x05979820, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d08750, row_constant, RowConstant);
RT_GLOBAL(0x05979820, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01def8e0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01def8e0

// auto_init_rows_total_fields_01df3570: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01df3570 {

// Misc: copy three constant rows into the record at 0x05979870, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d08a60, row_constant, RowConstant);
RT_GLOBAL(0x05979870, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01df3570()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01df3570

// auto_init_rows_total_fields_01e07dc0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01e07dc0 {

// Misc: copy three constant rows into the record at 0x05979d40, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d09cb0, row_constant, RowConstant);
RT_GLOBAL(0x05979d40, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01e07dc0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01e07dc0

// auto_init_rows_total_fields_01ee3a70: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01ee3a70 {

// Misc: copy three constant rows into the record at 0x0597fae0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0e490, row_constant, RowConstant);
RT_GLOBAL(0x0597fae0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01ee3a70()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01ee3a70

// auto_init_rows_total_fields_01f1dfa0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01f1dfa0 {

// Misc: copy three constant rows into the record at 0x0597fff0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0e880, row_constant, RowConstant);
RT_GLOBAL(0x0597fff0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01f1dfa0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01f1dfa0

// auto_init_rows_total_fields_01f33020: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01f33020 {

// Misc: copy three constant rows into the record at 0x059800e0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0e9a0, row_constant, RowConstant);
RT_GLOBAL(0x059800e0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01f33020()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01f33020

// auto_init_rows_total_fields_01f5fee0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01f5fee0 {

// Misc: copy three constant rows into the record at 0x05980640, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0ec70, row_constant, RowConstant);
RT_GLOBAL(0x05980640, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01f5fee0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01f5fee0

// auto_init_rows_total_fields_01f64a10: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_01f64a10 {

// Misc: copy three constant rows into the record at 0x05980690, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0ecd0, row_constant, RowConstant);
RT_GLOBAL(0x05980690, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_01f64a10()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_01f64a10

// auto_init_rows_total_fields_0200cde0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_0200cde0 {

// Misc: copy three constant rows into the record at 0x05981430, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0f330, row_constant, RowConstant);
RT_GLOBAL(0x05981430, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_0200cde0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_0200cde0

// auto_init_rows_total_fields_020572b0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_020572b0 {

// Misc: copy three constant rows into the record at 0x05981a90, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0f890, row_constant, RowConstant);
RT_GLOBAL(0x05981a90, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_020572b0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_020572b0

// auto_init_rows_total_fields_02057730: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_02057730 {

// Misc: copy three constant rows into the record at 0x05981ae0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0f8f0, row_constant, RowConstant);
RT_GLOBAL(0x05981ae0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_02057730()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_02057730

// auto_init_rows_total_fields_020620e0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_020620e0 {

// Misc: copy three constant rows into the record at 0x05981bc0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0f9b0, row_constant, RowConstant);
RT_GLOBAL(0x05981bc0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_020620e0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_020620e0

// auto_init_rows_total_fields_02090c30: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_02090c30 {

// Misc: copy three constant rows into the record at 0x05983090, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0fc30, row_constant, RowConstant);
RT_GLOBAL(0x05983090, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_02090c30()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_02090c30

// auto_init_rows_total_fields_022559d0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_022559d0 {

// Misc: copy three constant rows into the record at 0x0598f110, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d186e0, row_constant, RowConstant);
RT_GLOBAL(0x0598f110, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_022559d0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_022559d0

// auto_init_rows_total_fields_023147c0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_023147c0 {

// Misc: copy three constant rows into the record at 0x05992b30, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1a210, row_constant, RowConstant);
RT_GLOBAL(0x05992b30, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_023147c0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_023147c0

// auto_init_rows_total_fields_023aa630: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_023aa630 {

// Misc: copy three constant rows into the record at 0x05998960, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1c490, row_constant, RowConstant);
RT_GLOBAL(0x05998960, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_023aa630()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_023aa630

// auto_init_rows_total_fields_0243fc10: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_0243fc10 {

// Misc: copy three constant rows into the record at 0x05aa0e90, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1f130, row_constant, RowConstant);
RT_GLOBAL(0x05aa0e90, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_0243fc10()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_0243fc10

// auto_init_rows_total_fields_024447e0: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_024447e0 {

// Misc: copy three constant rows into the record at 0x05aa0ee0, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1f190, row_constant, RowConstant);
RT_GLOBAL(0x05aa0ee0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_024447e0()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_024447e0

// auto_init_rows_total_fields_02447320: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_02447320 {

// Misc: copy three constant rows into the record at 0x05aa0f30, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1f340, row_constant, RowConstant);
RT_GLOBAL(0x05aa0f30, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_02447320()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_02447320

// auto_init_rows_total_fields_02449d10: misc_init_rows_total_fields_5946c40 with other addresses.
namespace twin_02449d10 {

// Misc: copy three constant rows into the record at 0x05aa0f80, set its four fields and total.


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
    float total_0x0030;
    int32_t first_field_0x0034;
    int32_t second_field_0x0038;
    int32_t third_field_0x003c;
    int32_t fourth_field_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0034) == 0x34);
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1f430, row_constant, RowConstant);
RT_GLOBAL(0x05aa0f80, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record, sets its four fields, and stores the total
 * of the other three constant rows.
 *
 * The third field starts at thirty and the other three at minus one.
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_fields_02449d10()
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
    record.first_field_0x0034 = unset_field;
    record.second_field_0x0038 = unset_field;
    record.third_field_0x003c = third_field_start;
    record.fourth_field_0x0040 = unset_field;
}

}  // namespace twin_02449d10
