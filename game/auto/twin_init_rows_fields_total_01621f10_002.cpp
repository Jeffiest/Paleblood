// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_rows_fields_total_5940ef0, in game/misc/init_rows_fields_total_5940ef0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_fields_total_017d6530: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017d6530 {

// Misc: copy three constant rows into the record at 0x0594ca60, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf0480, row_constant, RowConstant);
RT_GLOBAL(0x0594ca60, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017d6530()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_017d6530

// auto_init_rows_fields_total_017d6eb0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017d6eb0 {

// Misc: copy three constant rows into the record at 0x0594caf0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf0510, row_constant, RowConstant);
RT_GLOBAL(0x0594caf0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017d6eb0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_017d6eb0

// auto_init_rows_fields_total_017d9570: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017d9570 {

// Misc: copy three constant rows into the record at 0x0594cc60, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf06e0, row_constant, RowConstant);
RT_GLOBAL(0x0594cc60, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017d9570()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_017d9570

// auto_init_rows_fields_total_017d9d80: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017d9d80 {

// Misc: copy three constant rows into the record at 0x0594cd00, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf0740, row_constant, RowConstant);
RT_GLOBAL(0x0594cd00, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017d9d80()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_017d9d80

// auto_init_rows_fields_total_017db6b0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017db6b0 {

// Misc: copy three constant rows into the record at 0x0594cde0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf0830, row_constant, RowConstant);
RT_GLOBAL(0x0594cde0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017db6b0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_017db6b0

// auto_init_rows_fields_total_017e1830: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017e1830 {

// Misc: copy three constant rows into the record at 0x0594d020, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf0d80, row_constant, RowConstant);
RT_GLOBAL(0x0594d020, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017e1830()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_017e1830

// auto_init_rows_fields_total_018565f0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_018565f0 {

// Misc: copy three constant rows into the record at 0x05950820, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf3130, row_constant, RowConstant);
RT_GLOBAL(0x05950820, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_018565f0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_018565f0

// auto_init_rows_fields_total_01858e90: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01858e90 {

// Misc: copy three constant rows into the record at 0x059508a0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf31c0, row_constant, RowConstant);
RT_GLOBAL(0x059508a0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01858e90()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01858e90

// auto_init_rows_fields_total_01863310: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01863310 {

// Misc: copy three constant rows into the record at 0x059509b0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf32d0, row_constant, RowConstant);
RT_GLOBAL(0x059509b0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01863310()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01863310

// auto_init_rows_fields_total_01868510: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01868510 {

// Misc: copy three constant rows into the record at 0x05950a00, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf3340, row_constant, RowConstant);
RT_GLOBAL(0x05950a00, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01868510()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01868510

// auto_init_rows_fields_total_01874d00: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01874d00 {

// Misc: copy three constant rows into the record at 0x05950bf0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf36c0, row_constant, RowConstant);
RT_GLOBAL(0x05950bf0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01874d00()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01874d00

// auto_init_rows_fields_total_018b3fb0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_018b3fb0 {

// Misc: copy three constant rows into the record at 0x05951d50, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf42e0, row_constant, RowConstant);
RT_GLOBAL(0x05951d50, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_018b3fb0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_018b3fb0

// auto_init_rows_fields_total_018c1b10: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_018c1b10 {

// Misc: copy three constant rows into the record at 0x05952140, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf4470, row_constant, RowConstant);
RT_GLOBAL(0x05952140, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_018c1b10()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_018c1b10

// auto_init_rows_fields_total_018ec560: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_018ec560 {

// Misc: copy three constant rows into the record at 0x059525f0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf48f0, row_constant, RowConstant);
RT_GLOBAL(0x059525f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_018ec560()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_018ec560

// auto_init_rows_fields_total_018ffe20: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_018ffe20 {

// Misc: copy three constant rows into the record at 0x05952bf0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf4d50, row_constant, RowConstant);
RT_GLOBAL(0x05952bf0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_018ffe20()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_018ffe20

// auto_init_rows_fields_total_019002f0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_019002f0 {

// Misc: copy three constant rows into the record at 0x05952c40, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf4db0, row_constant, RowConstant);
RT_GLOBAL(0x05952c40, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_019002f0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_019002f0

// auto_init_rows_fields_total_01900b80: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01900b80 {

// Misc: copy three constant rows into the record at 0x05952c90, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf4e10, row_constant, RowConstant);
RT_GLOBAL(0x05952c90, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01900b80()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01900b80

// auto_init_rows_fields_total_019044c0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_019044c0 {

// Misc: copy three constant rows into the record at 0x05952ce0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf4e70, row_constant, RowConstant);
RT_GLOBAL(0x05952ce0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_019044c0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_019044c0

// auto_init_rows_fields_total_01906610: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01906610 {

// Misc: copy three constant rows into the record at 0x05952d30, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf4ed0, row_constant, RowConstant);
RT_GLOBAL(0x05952d30, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01906610()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01906610

// auto_init_rows_fields_total_01908330: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01908330 {

// Misc: copy three constant rows into the record at 0x05952df0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf4f90, row_constant, RowConstant);
RT_GLOBAL(0x05952df0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01908330()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01908330

// auto_init_rows_fields_total_01908bb0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01908bb0 {

// Misc: copy three constant rows into the record at 0x05952e40, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf4ff0, row_constant, RowConstant);
RT_GLOBAL(0x05952e40, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01908bb0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01908bb0

// auto_init_rows_fields_total_01909000: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01909000 {

// Misc: copy three constant rows into the record at 0x05952e90, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf5050, row_constant, RowConstant);
RT_GLOBAL(0x05952e90, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01909000()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01909000

// auto_init_rows_fields_total_0190a200: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0190a200 {

// Misc: copy three constant rows into the record at 0x05952f30, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf5160, row_constant, RowConstant);
RT_GLOBAL(0x05952f30, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0190a200()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_0190a200

// auto_init_rows_fields_total_01922390: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01922390 {

// Misc: copy three constant rows into the record at 0x05954020, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf5c40, row_constant, RowConstant);
RT_GLOBAL(0x05954020, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01922390()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01922390

// auto_init_rows_fields_total_01922590: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01922590 {

// Misc: copy three constant rows into the record at 0x05954070, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf5ca0, row_constant, RowConstant);
RT_GLOBAL(0x05954070, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01922590()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01922590

// auto_init_rows_fields_total_019458f0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_019458f0 {

// Misc: copy three constant rows into the record at 0x059561f0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf6f50, row_constant, RowConstant);
RT_GLOBAL(0x059561f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_019458f0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_019458f0

// auto_init_rows_fields_total_0199f0b0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0199f0b0 {

// Misc: copy three constant rows into the record at 0x059581b0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cf7bb0, row_constant, RowConstant);
RT_GLOBAL(0x059581b0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0199f0b0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_0199f0b0

// auto_init_rows_fields_total_01afc700: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01afc700 {

// Misc: copy three constant rows into the record at 0x05960ac0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cfc410, row_constant, RowConstant);
RT_GLOBAL(0x05960ac0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01afc700()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01afc700

// auto_init_rows_fields_total_01bca7a0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01bca7a0 {

// Misc: copy three constant rows into the record at 0x0596b720, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04cff380, row_constant, RowConstant);
RT_GLOBAL(0x0596b720, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01bca7a0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01bca7a0

// auto_init_rows_fields_total_01bf37e0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01bf37e0 {

// Misc: copy three constant rows into the record at 0x0596bbf0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d00120, row_constant, RowConstant);
RT_GLOBAL(0x0596bbf0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01bf37e0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01bf37e0

// auto_init_rows_fields_total_01c14dd0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c14dd0 {

// Misc: copy three constant rows into the record at 0x0596c250, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d00dc0, row_constant, RowConstant);
RT_GLOBAL(0x0596c250, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c14dd0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c14dd0

// auto_init_rows_fields_total_01c1ba50: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c1ba50 {

// Misc: copy three constant rows into the record at 0x0596c520, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d01090, row_constant, RowConstant);
RT_GLOBAL(0x0596c520, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c1ba50()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c1ba50

// auto_init_rows_fields_total_01c2ebd0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c2ebd0 {

// Misc: copy three constant rows into the record at 0x0596ce90, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d01ab0, row_constant, RowConstant);
RT_GLOBAL(0x0596ce90, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c2ebd0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c2ebd0

// auto_init_rows_fields_total_01c2eff0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c2eff0 {

// Misc: copy three constant rows into the record at 0x0596cf40, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d01b70, row_constant, RowConstant);
RT_GLOBAL(0x0596cf40, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c2eff0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c2eff0

// auto_init_rows_fields_total_01c2f390: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c2f390 {

// Misc: copy three constant rows into the record at 0x0596cfd0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d01c00, row_constant, RowConstant);
RT_GLOBAL(0x0596cfd0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c2f390()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c2f390

// auto_init_rows_fields_total_01c2fe40: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c2fe40 {

// Misc: copy three constant rows into the record at 0x0596d190, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d01d80, row_constant, RowConstant);
RT_GLOBAL(0x0596d190, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c2fe40()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c2fe40

// auto_init_rows_fields_total_01c30a90: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c30a90 {

// Misc: copy three constant rows into the record at 0x0596d360, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d01f00, row_constant, RowConstant);
RT_GLOBAL(0x0596d360, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c30a90()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c30a90

// auto_init_rows_fields_total_01c3bd50: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c3bd50 {

// Misc: copy three constant rows into the record at 0x0596d6e0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d02210, row_constant, RowConstant);
RT_GLOBAL(0x0596d6e0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c3bd50()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c3bd50

// auto_init_rows_fields_total_01c499f0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c499f0 {

// Misc: copy three constant rows into the record at 0x0596ddf0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d02570, row_constant, RowConstant);
RT_GLOBAL(0x0596ddf0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c499f0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c499f0

// auto_init_rows_fields_total_01c5b560: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c5b560 {

// Misc: copy three constant rows into the record at 0x0596e180, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d029a0, row_constant, RowConstant);
RT_GLOBAL(0x0596e180, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c5b560()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c5b560

// auto_init_rows_fields_total_01c5d040: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c5d040 {

// Misc: copy three constant rows into the record at 0x0596e2a0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d02a90, row_constant, RowConstant);
RT_GLOBAL(0x0596e2a0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c5d040()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c5d040

// auto_init_rows_fields_total_01c62510: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c62510 {

// Misc: copy three constant rows into the record at 0x0596e2f0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d03030, row_constant, RowConstant);
RT_GLOBAL(0x0596e2f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c62510()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c62510

// auto_init_rows_fields_total_01c70bb0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c70bb0 {

// Misc: copy three constant rows into the record at 0x0596e4c0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d03490, row_constant, RowConstant);
RT_GLOBAL(0x0596e4c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c70bb0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c70bb0

// auto_init_rows_fields_total_01c932f0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c932f0 {

// Misc: copy three constant rows into the record at 0x0596e9c0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d03dc0, row_constant, RowConstant);
RT_GLOBAL(0x0596e9c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c932f0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c932f0

// auto_init_rows_fields_total_01c9bd20: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c9bd20 {

// Misc: copy three constant rows into the record at 0x0596ea50, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d03f00, row_constant, RowConstant);
RT_GLOBAL(0x0596ea50, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c9bd20()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c9bd20

// auto_init_rows_fields_total_01c9cbb0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c9cbb0 {

// Misc: copy three constant rows into the record at 0x0596eaa0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d03f80, row_constant, RowConstant);
RT_GLOBAL(0x0596eaa0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c9cbb0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c9cbb0

// auto_init_rows_fields_total_01c9ee50: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c9ee50 {

// Misc: copy three constant rows into the record at 0x0596eaf0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04020, row_constant, RowConstant);
RT_GLOBAL(0x0596eaf0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c9ee50()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c9ee50

// auto_init_rows_fields_total_01c9f640: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c9f640 {

// Misc: copy three constant rows into the record at 0x0596eb40, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d040a0, row_constant, RowConstant);
RT_GLOBAL(0x0596eb40, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c9f640()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c9f640

// auto_init_rows_fields_total_01c9fac0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01c9fac0 {

// Misc: copy three constant rows into the record at 0x0596eb90, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04100, row_constant, RowConstant);
RT_GLOBAL(0x0596eb90, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01c9fac0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01c9fac0

// auto_init_rows_fields_total_01ca12d0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca12d0 {

// Misc: copy three constant rows into the record at 0x0596ebe0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04160, row_constant, RowConstant);
RT_GLOBAL(0x0596ebe0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca12d0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca12d0

// auto_init_rows_fields_total_01ca1570: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca1570 {

// Misc: copy three constant rows into the record at 0x0596ec30, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d041c0, row_constant, RowConstant);
RT_GLOBAL(0x0596ec30, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca1570()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca1570

// auto_init_rows_fields_total_01ca1770: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca1770 {

// Misc: copy three constant rows into the record at 0x0596ec80, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04220, row_constant, RowConstant);
RT_GLOBAL(0x0596ec80, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca1770()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca1770

// auto_init_rows_fields_total_01ca2a90: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca2a90 {

// Misc: copy three constant rows into the record at 0x0596ecd0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d042f0, row_constant, RowConstant);
RT_GLOBAL(0x0596ecd0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca2a90()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca2a90

// auto_init_rows_fields_total_01ca47b0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca47b0 {

// Misc: copy three constant rows into the record at 0x0596ed20, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04470, row_constant, RowConstant);
RT_GLOBAL(0x0596ed20, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca47b0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca47b0

// auto_init_rows_fields_total_01ca6120: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca6120 {

// Misc: copy three constant rows into the record at 0x0596ed70, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d045c0, row_constant, RowConstant);
RT_GLOBAL(0x0596ed70, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca6120()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca6120

// auto_init_rows_fields_total_01ca6e20: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca6e20 {

// Misc: copy three constant rows into the record at 0x0596edc0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04620, row_constant, RowConstant);
RT_GLOBAL(0x0596edc0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca6e20()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca6e20

// auto_init_rows_fields_total_01ca71e0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca71e0 {

// Misc: copy three constant rows into the record at 0x0596ee10, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04680, row_constant, RowConstant);
RT_GLOBAL(0x0596ee10, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca71e0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca71e0

// auto_init_rows_fields_total_01ca7c20: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca7c20 {

// Misc: copy three constant rows into the record at 0x0596ee60, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d046e0, row_constant, RowConstant);
RT_GLOBAL(0x0596ee60, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca7c20()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca7c20

// auto_init_rows_fields_total_01ca89a0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca89a0 {

// Misc: copy three constant rows into the record at 0x0596eeb0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04740, row_constant, RowConstant);
RT_GLOBAL(0x0596eeb0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca89a0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca89a0

// auto_init_rows_fields_total_01ca8fb0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ca8fb0 {

// Misc: copy three constant rows into the record at 0x0596ef00, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d047a0, row_constant, RowConstant);
RT_GLOBAL(0x0596ef00, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ca8fb0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ca8fb0

// auto_init_rows_fields_total_01caa880: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01caa880 {

// Misc: copy three constant rows into the record at 0x0596f1e0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d049a0, row_constant, RowConstant);
RT_GLOBAL(0x0596f1e0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01caa880()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01caa880

// auto_init_rows_fields_total_01caad30: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01caad30 {

// Misc: copy three constant rows into the record at 0x0596f230, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04a00, row_constant, RowConstant);
RT_GLOBAL(0x0596f230, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01caad30()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01caad30

// auto_init_rows_fields_total_01cab470: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cab470 {

// Misc: copy three constant rows into the record at 0x0596f280, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04a70, row_constant, RowConstant);
RT_GLOBAL(0x0596f280, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cab470()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cab470

// auto_init_rows_fields_total_01cac5f0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cac5f0 {

// Misc: copy three constant rows into the record at 0x0596f2d0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04af0, row_constant, RowConstant);
RT_GLOBAL(0x0596f2d0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cac5f0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cac5f0

// auto_init_rows_fields_total_01cace50: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cace50 {

// Misc: copy three constant rows into the record at 0x0596f320, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04b50, row_constant, RowConstant);
RT_GLOBAL(0x0596f320, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cace50()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cace50

// auto_init_rows_fields_total_01cad3c0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cad3c0 {

// Misc: copy three constant rows into the record at 0x0596f370, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04bb0, row_constant, RowConstant);
RT_GLOBAL(0x0596f370, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cad3c0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cad3c0

// auto_init_rows_fields_total_01cadb20: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cadb20 {

// Misc: copy three constant rows into the record at 0x0596f3c0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04c10, row_constant, RowConstant);
RT_GLOBAL(0x0596f3c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cadb20()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cadb20

// auto_init_rows_fields_total_01cae5f0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cae5f0 {

// Misc: copy three constant rows into the record at 0x0596f410, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04c70, row_constant, RowConstant);
RT_GLOBAL(0x0596f410, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cae5f0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cae5f0

// auto_init_rows_fields_total_01cafb20: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cafb20 {

// Misc: copy three constant rows into the record at 0x0596f460, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04cd0, row_constant, RowConstant);
RT_GLOBAL(0x0596f460, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cafb20()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cafb20

// auto_init_rows_fields_total_01cb0a40: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb0a40 {

// Misc: copy three constant rows into the record at 0x0596f4b0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04d30, row_constant, RowConstant);
RT_GLOBAL(0x0596f4b0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb0a40()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb0a40

// auto_init_rows_fields_total_01cb2620: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb2620 {

// Misc: copy three constant rows into the record at 0x0596f500, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04f70, row_constant, RowConstant);
RT_GLOBAL(0x0596f500, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb2620()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb2620

// auto_init_rows_fields_total_01cb2a10: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb2a10 {

// Misc: copy three constant rows into the record at 0x0596f550, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d04fd0, row_constant, RowConstant);
RT_GLOBAL(0x0596f550, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb2a10()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb2a10

// auto_init_rows_fields_total_01cb4120: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb4120 {

// Misc: copy three constant rows into the record at 0x0596f5a0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d051f0, row_constant, RowConstant);
RT_GLOBAL(0x0596f5a0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb4120()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb4120

// auto_init_rows_fields_total_01cb46d0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb46d0 {

// Misc: copy three constant rows into the record at 0x0596f5f0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d05250, row_constant, RowConstant);
RT_GLOBAL(0x0596f5f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb46d0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb46d0

// auto_init_rows_fields_total_01cb48d0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb48d0 {

// Misc: copy three constant rows into the record at 0x0596f640, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d052b0, row_constant, RowConstant);
RT_GLOBAL(0x0596f640, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb48d0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb48d0

// auto_init_rows_fields_total_01cb5f10: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb5f10 {

// Misc: copy three constant rows into the record at 0x0596f690, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d05310, row_constant, RowConstant);
RT_GLOBAL(0x0596f690, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb5f10()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb5f10

// auto_init_rows_fields_total_01cb6c50: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb6c50 {

// Misc: copy three constant rows into the record at 0x0596f6e0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d05380, row_constant, RowConstant);
RT_GLOBAL(0x0596f6e0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb6c50()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb6c50

// auto_init_rows_fields_total_01cb8bb0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb8bb0 {

// Misc: copy three constant rows into the record at 0x0596f800, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d05570, row_constant, RowConstant);
RT_GLOBAL(0x0596f800, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb8bb0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb8bb0

// auto_init_rows_fields_total_01cb9050: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb9050 {

// Misc: copy three constant rows into the record at 0x0596f850, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d055d0, row_constant, RowConstant);
RT_GLOBAL(0x0596f850, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb9050()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb9050

// auto_init_rows_fields_total_01cb9400: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cb9400 {

// Misc: copy three constant rows into the record at 0x0596f8a0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d05650, row_constant, RowConstant);
RT_GLOBAL(0x0596f8a0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cb9400()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cb9400

// auto_init_rows_fields_total_01cd9720: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cd9720 {

// Misc: copy three constant rows into the record at 0x0596fc40, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d06050, row_constant, RowConstant);
RT_GLOBAL(0x0596fc40, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cd9720()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cd9720

// auto_init_rows_fields_total_01cd9920: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cd9920 {

// Misc: copy three constant rows into the record at 0x0596fc90, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d060b0, row_constant, RowConstant);
RT_GLOBAL(0x0596fc90, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cd9920()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cd9920

// auto_init_rows_fields_total_01cdbe70: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01cdbe70 {

// Misc: copy three constant rows into the record at 0x0596fd20, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d06140, row_constant, RowConstant);
RT_GLOBAL(0x0596fd20, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01cdbe70()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01cdbe70

// auto_init_rows_fields_total_01ceb250: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ceb250 {

// Misc: copy three constant rows into the record at 0x0596ffa0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d06400, row_constant, RowConstant);
RT_GLOBAL(0x0596ffa0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ceb250()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ceb250

// auto_init_rows_fields_total_01dec660: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01dec660 {

// Misc: copy three constant rows into the record at 0x059796c0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d08510, row_constant, RowConstant);
RT_GLOBAL(0x059796c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01dec660()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01dec660

// auto_init_rows_fields_total_01decf80: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01decf80 {

// Misc: copy three constant rows into the record at 0x05979780, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d085a0, row_constant, RowConstant);
RT_GLOBAL(0x05979780, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01decf80()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01decf80

// auto_init_rows_fields_total_01df6140: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01df6140 {

// Misc: copy three constant rows into the record at 0x05979b90, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d08d30, row_constant, RowConstant);
RT_GLOBAL(0x05979b90, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01df6140()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01df6140

// auto_init_rows_fields_total_01e27290: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01e27290 {

// Misc: copy three constant rows into the record at 0x0597a530, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0a360, row_constant, RowConstant);
RT_GLOBAL(0x0597a530, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01e27290()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01e27290

// auto_init_rows_fields_total_01e7ed30: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01e7ed30 {

// Misc: copy three constant rows into the record at 0x0597d5c0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0cfd0, row_constant, RowConstant);
RT_GLOBAL(0x0597d5c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01e7ed30()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01e7ed30

// auto_init_rows_fields_total_01e860d0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01e860d0 {

// Misc: copy three constant rows into the record at 0x0597d850, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0d420, row_constant, RowConstant);
RT_GLOBAL(0x0597d850, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01e860d0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01e860d0

// auto_init_rows_fields_total_01ee71d0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ee71d0 {

// Misc: copy three constant rows into the record at 0x0597fb30, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0e510, row_constant, RowConstant);
RT_GLOBAL(0x0597fb30, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ee71d0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ee71d0

// auto_init_rows_fields_total_01ee9820: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ee9820 {

// Misc: copy three constant rows into the record at 0x0597fb80, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0e570, row_constant, RowConstant);
RT_GLOBAL(0x0597fb80, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ee9820()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ee9820

// auto_init_rows_fields_total_01ef5140: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ef5140 {

// Misc: copy three constant rows into the record at 0x0597fcc0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0e660, row_constant, RowConstant);
RT_GLOBAL(0x0597fcc0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ef5140()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ef5140

// auto_init_rows_fields_total_01f027a0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01f027a0 {

// Misc: copy three constant rows into the record at 0x0597fd10, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0e6c0, row_constant, RowConstant);
RT_GLOBAL(0x0597fd10, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01f027a0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01f027a0

// auto_init_rows_fields_total_01f082d0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01f082d0 {

// Misc: copy three constant rows into the record at 0x0597fe10, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0e730, row_constant, RowConstant);
RT_GLOBAL(0x0597fe10, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01f082d0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01f082d0

// auto_init_rows_fields_total_01f24110: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01f24110 {

// Misc: copy three constant rows into the record at 0x05980040, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0e8e0, row_constant, RowConstant);
RT_GLOBAL(0x05980040, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01f24110()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01f24110

// auto_init_rows_fields_total_01f2f150: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01f2f150 {

// Misc: copy three constant rows into the record at 0x05980090, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0e940, row_constant, RowConstant);
RT_GLOBAL(0x05980090, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01f2f150()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01f2f150

// auto_init_rows_fields_total_01f55940: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01f55940 {

// Misc: copy three constant rows into the record at 0x05980430, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0eac0, row_constant, RowConstant);
RT_GLOBAL(0x05980430, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01f55940()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01f55940

// auto_init_rows_fields_total_01fb33d0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01fb33d0 {

// Misc: copy three constant rows into the record at 0x05980df0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0ef60, row_constant, RowConstant);
RT_GLOBAL(0x05980df0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01fb33d0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01fb33d0

// auto_init_rows_fields_total_01fe0610: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01fe0610 {

// Misc: copy three constant rows into the record at 0x05981010, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f050, row_constant, RowConstant);
RT_GLOBAL(0x05981010, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01fe0610()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01fe0610

// auto_init_rows_fields_total_01fe3970: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01fe3970 {

// Misc: copy three constant rows into the record at 0x05981060, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f0b0, row_constant, RowConstant);
RT_GLOBAL(0x05981060, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01fe3970()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01fe3970

// auto_init_rows_fields_total_01ff0b00: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01ff0b00 {

// Misc: copy three constant rows into the record at 0x05981290, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f260, row_constant, RowConstant);
RT_GLOBAL(0x05981290, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01ff0b00()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_01ff0b00

// auto_init_rows_fields_total_0201e1a0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0201e1a0 {

// Misc: copy three constant rows into the record at 0x05981640, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f4b0, row_constant, RowConstant);
RT_GLOBAL(0x05981640, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0201e1a0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_0201e1a0

// auto_init_rows_fields_total_02023b30: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02023b30 {

// Misc: copy three constant rows into the record at 0x05981690, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f510, row_constant, RowConstant);
RT_GLOBAL(0x05981690, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02023b30()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02023b30

// auto_init_rows_fields_total_0202d2a0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0202d2a0 {

// Misc: copy three constant rows into the record at 0x05981720, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f570, row_constant, RowConstant);
RT_GLOBAL(0x05981720, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0202d2a0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_0202d2a0

// auto_init_rows_fields_total_02033d10: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02033d10 {

// Misc: copy three constant rows into the record at 0x05981770, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f5d0, row_constant, RowConstant);
RT_GLOBAL(0x05981770, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02033d10()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02033d10

// auto_init_rows_fields_total_0203d2e0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0203d2e0 {

// Misc: copy three constant rows into the record at 0x059817c0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f630, row_constant, RowConstant);
RT_GLOBAL(0x059817c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0203d2e0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_0203d2e0

// auto_init_rows_fields_total_0204c410: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0204c410 {

// Misc: copy three constant rows into the record at 0x05981850, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f6c0, row_constant, RowConstant);
RT_GLOBAL(0x05981850, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0204c410()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_0204c410

// auto_init_rows_fields_total_02056540: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02056540 {

// Misc: copy three constant rows into the record at 0x059819c0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d0f7d0, row_constant, RowConstant);
RT_GLOBAL(0x059819c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02056540()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02056540

// auto_init_rows_fields_total_020dabe0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_020dabe0 {

// Misc: copy three constant rows into the record at 0x05985130, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d10730, row_constant, RowConstant);
RT_GLOBAL(0x05985130, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_020dabe0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_020dabe0

// auto_init_rows_fields_total_020db430: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_020db430 {

// Misc: copy three constant rows into the record at 0x05985180, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d10790, row_constant, RowConstant);
RT_GLOBAL(0x05985180, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_020db430()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_020db430

// auto_init_rows_fields_total_020deb80: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_020deb80 {

// Misc: copy three constant rows into the record at 0x059851d0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d10a60, row_constant, RowConstant);
RT_GLOBAL(0x059851d0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_020deb80()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_020deb80

// auto_init_rows_fields_total_021c0d90: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_021c0d90 {

// Misc: copy three constant rows into the record at 0x0598bda0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d15f70, row_constant, RowConstant);
RT_GLOBAL(0x0598bda0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_021c0d90()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_021c0d90

// auto_init_rows_fields_total_02222060: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02222060 {

// Misc: copy three constant rows into the record at 0x0598de20, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d17970, row_constant, RowConstant);
RT_GLOBAL(0x0598de20, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02222060()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02222060

// auto_init_rows_fields_total_02232c30: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02232c30 {

// Misc: copy three constant rows into the record at 0x0598e140, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d17e70, row_constant, RowConstant);
RT_GLOBAL(0x0598e140, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02232c30()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02232c30

// auto_init_rows_fields_total_02241b30: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02241b30 {

// Misc: copy three constant rows into the record at 0x0598e690, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d183d0, row_constant, RowConstant);
RT_GLOBAL(0x0598e690, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02241b30()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02241b30

// auto_init_rows_fields_total_02379bc0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02379bc0 {

// Misc: copy three constant rows into the record at 0x05996b60, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1bb80, row_constant, RowConstant);
RT_GLOBAL(0x05996b60, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02379bc0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02379bc0

// auto_init_rows_fields_total_02394a10: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02394a10 {

// Misc: copy three constant rows into the record at 0x05997bb0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1c170, row_constant, RowConstant);
RT_GLOBAL(0x05997bb0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02394a10()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02394a10

// auto_init_rows_fields_total_023b3610: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_023b3610 {

// Misc: copy three constant rows into the record at 0x05999070, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1c6b0, row_constant, RowConstant);
RT_GLOBAL(0x05999070, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_023b3610()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_023b3610

// auto_init_rows_fields_total_023e9730: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_023e9730 {

// Misc: copy three constant rows into the record at 0x05a9e9d0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1dcc0, row_constant, RowConstant);
RT_GLOBAL(0x05a9e9d0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_023e9730()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_023e9730

// auto_init_rows_fields_total_023eb200: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_023eb200 {

// Misc: copy three constant rows into the record at 0x05a9ea20, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1dd20, row_constant, RowConstant);
RT_GLOBAL(0x05a9ea20, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_023eb200()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_023eb200

// auto_init_rows_fields_total_023ef2b0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_023ef2b0 {

// Misc: copy three constant rows into the record at 0x05a9eb30, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1ddf0, row_constant, RowConstant);
RT_GLOBAL(0x05a9eb30, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_023ef2b0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_023ef2b0

// auto_init_rows_fields_total_023f68d0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_023f68d0 {

// Misc: copy three constant rows into the record at 0x05a9ebc0, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1de80, row_constant, RowConstant);
RT_GLOBAL(0x05a9ebc0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_023f68d0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_023f68d0

// auto_init_rows_fields_total_023f78b0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_023f78b0 {

// Misc: copy three constant rows into the record at 0x05a9ec10, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1def0, row_constant, RowConstant);
RT_GLOBAL(0x05a9ec10, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_023f78b0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_023f78b0

// auto_init_rows_fields_total_02413200: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02413200 {

// Misc: copy three constant rows into the record at 0x05a9f700, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1e340, row_constant, RowConstant);
RT_GLOBAL(0x05a9f700, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02413200()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02413200

// auto_init_rows_fields_total_02439f40: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_02439f40 {

// Misc: copy three constant rows into the record at 0x05aa0e00, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1edf0, row_constant, RowConstant);
RT_GLOBAL(0x05aa0e00, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_02439f40()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_02439f40

// auto_init_rows_fields_total_0244ccb0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0244ccb0 {

// Misc: copy three constant rows into the record at 0x05aa1010, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1f4e0, row_constant, RowConstant);
RT_GLOBAL(0x05aa1010, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0244ccb0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_0244ccb0

// auto_init_rows_fields_total_0244f1f0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0244f1f0 {

// Misc: copy three constant rows into the record at 0x05aa1060, set its four fields and total.


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
    int32_t second_field_0x0034;
    int32_t third_field_0x0038;
    int32_t fourth_field_0x003c;
    float total_0x0040;
};
static_assert(offsetof(RowRecord, first_field_0x0030) == 0x30);
static_assert(offsetof(RowRecord, total_0x0040) == 0x40);

RT_GLOBAL(0x04d1f560, row_constant, RowConstant);
RT_GLOBAL(0x05aa1060, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0244f1f0()
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
    const Row *rows = constant.summed_rows_0x0030;
    float total = row_sum(rows[0]);
    for (size_t row = 1; row < summed_rows; ++row) {
        total += row_sum(rows[row]);
    }
    record.total_0x0040 = total;
}

}  // namespace twin_0244f1f0
