// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_rows_fields_total_5940ef0, in game/misc/init_rows_fields_total_5940ef0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_fields_total_01624110: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_01624110 {

// Misc: copy three constant rows into the record at 0x05940f50, set its four fields and total.


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

RT_GLOBAL(0x04ce8490, row_constant, RowConstant);
RT_GLOBAL(0x05940f50, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_01624110()
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

}  // namespace twin_01624110

// auto_init_rows_fields_total_0162c740: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0162c740 {

// Misc: copy three constant rows into the record at 0x05941170, set its four fields and total.


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

RT_GLOBAL(0x04ce8af0, row_constant, RowConstant);
RT_GLOBAL(0x05941170, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0162c740()
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

}  // namespace twin_0162c740

// auto_init_rows_fields_total_0162ea10: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0162ea10 {

// Misc: copy three constant rows into the record at 0x05941250, set its four fields and total.


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

RT_GLOBAL(0x04ce8b90, row_constant, RowConstant);
RT_GLOBAL(0x05941250, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0162ea10()
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

}  // namespace twin_0162ea10

// auto_init_rows_fields_total_0163f750: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0163f750 {

// Misc: copy three constant rows into the record at 0x05941910, set its four fields and total.


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

RT_GLOBAL(0x04ce9640, row_constant, RowConstant);
RT_GLOBAL(0x05941910, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0163f750()
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

}  // namespace twin_0163f750

// auto_init_rows_fields_total_0169a890: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0169a890 {

// Misc: copy three constant rows into the record at 0x05943f70, set its four fields and total.


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

RT_GLOBAL(0x04ceada0, row_constant, RowConstant);
RT_GLOBAL(0x05943f70, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0169a890()
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

}  // namespace twin_0169a890

// auto_init_rows_fields_total_0169b250: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0169b250 {

// Misc: copy three constant rows into the record at 0x05943fc0, set its four fields and total.


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

RT_GLOBAL(0x04ceae50, row_constant, RowConstant);
RT_GLOBAL(0x05943fc0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0169b250()
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

}  // namespace twin_0169b250

// auto_init_rows_fields_total_0169bda0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0169bda0 {

// Misc: copy three constant rows into the record at 0x05944090, set its four fields and total.


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

RT_GLOBAL(0x04ceaf40, row_constant, RowConstant);
RT_GLOBAL(0x05944090, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0169bda0()
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

}  // namespace twin_0169bda0

// auto_init_rows_fields_total_0169de90: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0169de90 {

// Misc: copy three constant rows into the record at 0x059441a0, set its four fields and total.


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

RT_GLOBAL(0x04ceb300, row_constant, RowConstant);
RT_GLOBAL(0x059441a0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0169de90()
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

}  // namespace twin_0169de90

// auto_init_rows_fields_total_0169eac0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0169eac0 {

// Misc: copy three constant rows into the record at 0x059441f0, set its four fields and total.


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

RT_GLOBAL(0x04ceb400, row_constant, RowConstant);
RT_GLOBAL(0x059441f0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0169eac0()
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

}  // namespace twin_0169eac0

// auto_init_rows_fields_total_016a4ac0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_016a4ac0 {

// Misc: copy three constant rows into the record at 0x05944530, set its four fields and total.


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

RT_GLOBAL(0x04ceb530, row_constant, RowConstant);
RT_GLOBAL(0x05944530, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_016a4ac0()
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

}  // namespace twin_016a4ac0

// auto_init_rows_fields_total_016a80e0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_016a80e0 {

// Misc: copy three constant rows into the record at 0x059445c0, set its four fields and total.


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

RT_GLOBAL(0x04ceb870, row_constant, RowConstant);
RT_GLOBAL(0x059445c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_016a80e0()
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

}  // namespace twin_016a80e0

// auto_init_rows_fields_total_016b5c90: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_016b5c90 {

// Misc: copy three constant rows into the record at 0x05944880, set its four fields and total.


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

RT_GLOBAL(0x04cebcf0, row_constant, RowConstant);
RT_GLOBAL(0x05944880, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_016b5c90()
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

}  // namespace twin_016b5c90

// auto_init_rows_fields_total_016baa00: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_016baa00 {

// Misc: copy three constant rows into the record at 0x059449c0, set its four fields and total.


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

RT_GLOBAL(0x04cebe90, row_constant, RowConstant);
RT_GLOBAL(0x059449c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_016baa00()
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

}  // namespace twin_016baa00

// auto_init_rows_fields_total_016d3820: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_016d3820 {

// Misc: copy three constant rows into the record at 0x05945040, set its four fields and total.


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

RT_GLOBAL(0x04cec070, row_constant, RowConstant);
RT_GLOBAL(0x05945040, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_016d3820()
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

}  // namespace twin_016d3820

// auto_init_rows_fields_total_0179f810: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_0179f810 {

// Misc: copy three constant rows into the record at 0x0594bfe0, set its four fields and total.


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

RT_GLOBAL(0x04cef3e0, row_constant, RowConstant);
RT_GLOBAL(0x0594bfe0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_0179f810()
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

}  // namespace twin_0179f810

// auto_init_rows_fields_total_017a8e20: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017a8e20 {

// Misc: copy three constant rows into the record at 0x0594c230, set its four fields and total.


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

RT_GLOBAL(0x04cef730, row_constant, RowConstant);
RT_GLOBAL(0x0594c230, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017a8e20()
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

}  // namespace twin_017a8e20

// auto_init_rows_fields_total_017c3950: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017c3950 {

// Misc: copy three constant rows into the record at 0x0594c630, set its four fields and total.


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

RT_GLOBAL(0x04cefa40, row_constant, RowConstant);
RT_GLOBAL(0x0594c630, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017c3950()
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

}  // namespace twin_017c3950

// auto_init_rows_fields_total_017d49e0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017d49e0 {

// Misc: copy three constant rows into the record at 0x0594c920, set its four fields and total.


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

RT_GLOBAL(0x04cf0300, row_constant, RowConstant);
RT_GLOBAL(0x0594c920, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017d49e0()
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

}  // namespace twin_017d49e0

// auto_init_rows_fields_total_017d56f0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017d56f0 {

// Misc: copy three constant rows into the record at 0x0594c9c0, set its four fields and total.


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

RT_GLOBAL(0x04cf03c0, row_constant, RowConstant);
RT_GLOBAL(0x0594c9c0, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017d56f0()
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

}  // namespace twin_017d56f0

// auto_init_rows_fields_total_017d5ec0: misc_init_rows_fields_total_5940ef0 with other addresses.
namespace twin_017d5ec0 {

// Misc: copy three constant rows into the record at 0x0594ca10, set its four fields and total.


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

RT_GLOBAL(0x04cf0420, row_constant, RowConstant);
RT_GLOBAL(0x0594ca10, row_record, RowRecord);

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
extern "C" void bb_auto_init_rows_fields_total_017d5ec0()
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

}  // namespace twin_017d5ec0
