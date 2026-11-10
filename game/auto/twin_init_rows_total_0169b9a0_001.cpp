// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_rows_total_5944010, in game/misc/init_rows_total_5944010.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_total_016eb730: misc_init_rows_total_5944010 with other addresses.
namespace twin_016eb730 {

// Misc: copy three constant rows into the record at 0x05945940 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cec630, row_constant, RowConstant);
RT_GLOBAL(0x05945940, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_016eb730()
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
}

}  // namespace twin_016eb730

// auto_init_rows_total_016eddb0: misc_init_rows_total_5944010 with other addresses.
namespace twin_016eddb0 {

// Misc: copy three constant rows into the record at 0x05945a80 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cec750, row_constant, RowConstant);
RT_GLOBAL(0x05945a80, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_016eddb0()
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
}

}  // namespace twin_016eddb0

// auto_init_rows_total_017b4c40: misc_init_rows_total_5944010 with other addresses.
namespace twin_017b4c40 {

// Misc: copy three constant rows into the record at 0x0594c5a0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cef980, row_constant, RowConstant);
RT_GLOBAL(0x0594c5a0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_017b4c40()
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
}

}  // namespace twin_017b4c40

// auto_init_rows_total_017c6840: misc_init_rows_total_5944010 with other addresses.
namespace twin_017c6840 {

// Misc: copy three constant rows into the record at 0x0594c680 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cefaa0, row_constant, RowConstant);
RT_GLOBAL(0x0594c680, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_017c6840()
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
}

}  // namespace twin_017c6840

// auto_init_rows_total_017c80b0: misc_init_rows_total_5944010 with other addresses.
namespace twin_017c80b0 {

// Misc: copy three constant rows into the record at 0x0594c700 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cefe10, row_constant, RowConstant);
RT_GLOBAL(0x0594c700, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_017c80b0()
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
}

}  // namespace twin_017c80b0

// auto_init_rows_total_017d4320: misc_init_rows_total_5944010 with other addresses.
namespace twin_017d4320 {

// Misc: copy three constant rows into the record at 0x0594c8b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf02a0, row_constant, RowConstant);
RT_GLOBAL(0x0594c8b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_017d4320()
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
}

}  // namespace twin_017d4320

// auto_init_rows_total_017ddce0: misc_init_rows_total_5944010 with other addresses.
namespace twin_017ddce0 {

// Misc: copy three constant rows into the record at 0x0594cec0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf09a0, row_constant, RowConstant);
RT_GLOBAL(0x0594cec0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_017ddce0()
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
}

}  // namespace twin_017ddce0

// auto_init_rows_total_018522e0: misc_init_rows_total_5944010 with other addresses.
namespace twin_018522e0 {

// Misc: copy three constant rows into the record at 0x059506e0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf2f70, row_constant, RowConstant);
RT_GLOBAL(0x059506e0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018522e0()
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
}

}  // namespace twin_018522e0

// auto_init_rows_total_01855070: misc_init_rows_total_5944010 with other addresses.
namespace twin_01855070 {

// Misc: copy three constant rows into the record at 0x059507e0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf3060, row_constant, RowConstant);
RT_GLOBAL(0x059507e0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01855070()
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
}

}  // namespace twin_01855070

// auto_init_rows_total_0186f220: misc_init_rows_total_5944010 with other addresses.
namespace twin_0186f220 {

// Misc: copy three constant rows into the record at 0x05950ad0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf3400, row_constant, RowConstant);
RT_GLOBAL(0x05950ad0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_0186f220()
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
}

}  // namespace twin_0186f220

// auto_init_rows_total_018aa430: misc_init_rows_total_5944010 with other addresses.
namespace twin_018aa430 {

// Misc: copy three constant rows into the record at 0x05951af0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf3ed0, row_constant, RowConstant);
RT_GLOBAL(0x05951af0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018aa430()
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
}

}  // namespace twin_018aa430

// auto_init_rows_total_018ad410: misc_init_rows_total_5944010 with other addresses.
namespace twin_018ad410 {

// Misc: copy three constant rows into the record at 0x05951b70 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf3f60, row_constant, RowConstant);
RT_GLOBAL(0x05951b70, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018ad410()
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
}

}  // namespace twin_018ad410

// auto_init_rows_total_018ae3c0: misc_init_rows_total_5944010 with other addresses.
namespace twin_018ae3c0 {

// Misc: copy three constant rows into the record at 0x05951bb0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf3fc0, row_constant, RowConstant);
RT_GLOBAL(0x05951bb0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018ae3c0()
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
}

}  // namespace twin_018ae3c0

// auto_init_rows_total_018dd3b0: misc_init_rows_total_5944010 with other addresses.
namespace twin_018dd3b0 {

// Misc: copy three constant rows into the record at 0x05952450 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf46d0, row_constant, RowConstant);
RT_GLOBAL(0x05952450, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018dd3b0()
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
}

}  // namespace twin_018dd3b0

// auto_init_rows_total_018dfa70: misc_init_rows_total_5944010 with other addresses.
namespace twin_018dfa70 {

// Misc: copy three constant rows into the record at 0x059524b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf4730, row_constant, RowConstant);
RT_GLOBAL(0x059524b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018dfa70()
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
}

}  // namespace twin_018dfa70

// auto_init_rows_total_018e1960: misc_init_rows_total_5944010 with other addresses.
namespace twin_018e1960 {

// Misc: copy three constant rows into the record at 0x059524f0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf4790, row_constant, RowConstant);
RT_GLOBAL(0x059524f0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018e1960()
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
}

}  // namespace twin_018e1960

// auto_init_rows_total_018e4b30: misc_init_rows_total_5944010 with other addresses.
namespace twin_018e4b30 {

// Misc: copy three constant rows into the record at 0x059525b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf4850, row_constant, RowConstant);
RT_GLOBAL(0x059525b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018e4b30()
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
}

}  // namespace twin_018e4b30

// auto_init_rows_total_018efd80: misc_init_rows_total_5944010 with other addresses.
namespace twin_018efd80 {

// Misc: copy three constant rows into the record at 0x05952950 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf4a00, row_constant, RowConstant);
RT_GLOBAL(0x05952950, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018efd80()
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
}

}  // namespace twin_018efd80

// auto_init_rows_total_018f98d0: misc_init_rows_total_5944010 with other addresses.
namespace twin_018f98d0 {

// Misc: copy three constant rows into the record at 0x05952a20 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf4af0, row_constant, RowConstant);
RT_GLOBAL(0x05952a20, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018f98d0()
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
}

}  // namespace twin_018f98d0

// auto_init_rows_total_018fc3d0: misc_init_rows_total_5944010 with other addresses.
namespace twin_018fc3d0 {

// Misc: copy three constant rows into the record at 0x05952a60 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf4b50, row_constant, RowConstant);
RT_GLOBAL(0x05952a60, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018fc3d0()
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
}

}  // namespace twin_018fc3d0

// auto_init_rows_total_018fd970: misc_init_rows_total_5944010 with other addresses.
namespace twin_018fd970 {

// Misc: copy three constant rows into the record at 0x05952aa0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf4be0, row_constant, RowConstant);
RT_GLOBAL(0x05952aa0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_018fd970()
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
}

}  // namespace twin_018fd970

// auto_init_rows_total_0193a2d0: misc_init_rows_total_5944010 with other addresses.
namespace twin_0193a2d0 {

// Misc: copy three constant rows into the record at 0x05955970 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf6b30, row_constant, RowConstant);
RT_GLOBAL(0x05955970, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_0193a2d0()
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
}

}  // namespace twin_0193a2d0

// auto_init_rows_total_01972c30: misc_init_rows_total_5944010 with other addresses.
namespace twin_01972c30 {

// Misc: copy three constant rows into the record at 0x05956690 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf7700, row_constant, RowConstant);
RT_GLOBAL(0x05956690, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01972c30()
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
}

}  // namespace twin_01972c30

// auto_init_rows_total_019c9b90: misc_init_rows_total_5944010 with other addresses.
namespace twin_019c9b90 {

// Misc: copy three constant rows into the record at 0x05958c80 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf8450, row_constant, RowConstant);
RT_GLOBAL(0x05958c80, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_019c9b90()
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
}

}  // namespace twin_019c9b90

// auto_init_rows_total_019eaba0: misc_init_rows_total_5944010 with other addresses.
namespace twin_019eaba0 {

// Misc: copy three constant rows into the record at 0x05959e00 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf89b0, row_constant, RowConstant);
RT_GLOBAL(0x05959e00, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_019eaba0()
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
}

}  // namespace twin_019eaba0

// auto_init_rows_total_01a03380: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a03380 {

// Misc: copy three constant rows into the record at 0x0595a5e0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf8e20, row_constant, RowConstant);
RT_GLOBAL(0x0595a5e0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a03380()
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
}

}  // namespace twin_01a03380

// auto_init_rows_total_01a29b80: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a29b80 {

// Misc: copy three constant rows into the record at 0x0595b030 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf93a0, row_constant, RowConstant);
RT_GLOBAL(0x0595b030, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a29b80()
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
}

}  // namespace twin_01a29b80

// auto_init_rows_total_01a3f880: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a3f880 {

// Misc: copy three constant rows into the record at 0x0595b880 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf97a0, row_constant, RowConstant);
RT_GLOBAL(0x0595b880, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a3f880()
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
}

}  // namespace twin_01a3f880

// auto_init_rows_total_01a46bf0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a46bf0 {

// Misc: copy three constant rows into the record at 0x0595bdd0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cf9b50, row_constant, RowConstant);
RT_GLOBAL(0x0595bdd0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a46bf0()
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
}

}  // namespace twin_01a46bf0

// auto_init_rows_total_01a75a70: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a75a70 {

// Misc: copy three constant rows into the record at 0x0595d320 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfa530, row_constant, RowConstant);
RT_GLOBAL(0x0595d320, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a75a70()
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
}

}  // namespace twin_01a75a70

// auto_init_rows_total_01a75c50: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a75c50 {

// Misc: copy three constant rows into the record at 0x0595d360 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfa590, row_constant, RowConstant);
RT_GLOBAL(0x0595d360, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a75c50()
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
}

}  // namespace twin_01a75c50

// auto_init_rows_total_01a952d0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a952d0 {

// Misc: copy three constant rows into the record at 0x0595e070 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfac30, row_constant, RowConstant);
RT_GLOBAL(0x0595e070, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a952d0()
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
}

}  // namespace twin_01a952d0

// auto_init_rows_total_01a96850: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a96850 {

// Misc: copy three constant rows into the record at 0x0595e170 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfacf0, row_constant, RowConstant);
RT_GLOBAL(0x0595e170, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a96850()
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
}

}  // namespace twin_01a96850

// auto_init_rows_total_01a96a30: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a96a30 {

// Misc: copy three constant rows into the record at 0x0595e1b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfad50, row_constant, RowConstant);
RT_GLOBAL(0x0595e1b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a96a30()
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
}

}  // namespace twin_01a96a30

// auto_init_rows_total_01a96c10: misc_init_rows_total_5944010 with other addresses.
namespace twin_01a96c10 {

// Misc: copy three constant rows into the record at 0x0595e1f0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfadb0, row_constant, RowConstant);
RT_GLOBAL(0x0595e1f0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01a96c10()
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
}

}  // namespace twin_01a96c10

// auto_init_rows_total_01aa7fe0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01aa7fe0 {

// Misc: copy three constant rows into the record at 0x0595e7f0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfb0b0, row_constant, RowConstant);
RT_GLOBAL(0x0595e7f0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01aa7fe0()
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
}

}  // namespace twin_01aa7fe0

// auto_init_rows_total_01ab8750: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ab8750 {

// Misc: copy three constant rows into the record at 0x0595f010 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfb540, row_constant, RowConstant);
RT_GLOBAL(0x0595f010, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ab8750()
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
}

}  // namespace twin_01ab8750

// auto_init_rows_total_01ab8930: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ab8930 {

// Misc: copy three constant rows into the record at 0x0595f050 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfb5a0, row_constant, RowConstant);
RT_GLOBAL(0x0595f050, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ab8930()
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
}

}  // namespace twin_01ab8930

// auto_init_rows_total_01abd7b0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01abd7b0 {

// Misc: copy three constant rows into the record at 0x0595f210 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfb6a0, row_constant, RowConstant);
RT_GLOBAL(0x0595f210, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01abd7b0()
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
}

}  // namespace twin_01abd7b0

// auto_init_rows_total_01abe720: misc_init_rows_total_5944010 with other addresses.
namespace twin_01abe720 {

// Misc: copy three constant rows into the record at 0x0595f250 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfb700, row_constant, RowConstant);
RT_GLOBAL(0x0595f250, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01abe720()
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
}

}  // namespace twin_01abe720

// auto_init_rows_total_01ad44e0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ad44e0 {

// Misc: copy three constant rows into the record at 0x0595fa30 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfbb00, row_constant, RowConstant);
RT_GLOBAL(0x0595fa30, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ad44e0()
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
}

}  // namespace twin_01ad44e0

// auto_init_rows_total_01ad50c0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ad50c0 {

// Misc: copy three constant rows into the record at 0x0595fd90 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfbb60, row_constant, RowConstant);
RT_GLOBAL(0x0595fd90, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ad50c0()
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
}

}  // namespace twin_01ad50c0

// auto_init_rows_total_01addbe0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01addbe0 {

// Misc: copy three constant rows into the record at 0x059600b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfbd70, row_constant, RowConstant);
RT_GLOBAL(0x059600b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01addbe0()
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
}

}  // namespace twin_01addbe0

// auto_init_rows_total_01af8d70: misc_init_rows_total_5944010 with other addresses.
namespace twin_01af8d70 {

// Misc: copy three constant rows into the record at 0x059608b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfc160, row_constant, RowConstant);
RT_GLOBAL(0x059608b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01af8d70()
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
}

}  // namespace twin_01af8d70

// auto_init_rows_total_01af9d70: misc_init_rows_total_5944010 with other addresses.
namespace twin_01af9d70 {

// Misc: copy three constant rows into the record at 0x05960a30 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfc2b0, row_constant, RowConstant);
RT_GLOBAL(0x05960a30, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01af9d70()
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
}

}  // namespace twin_01af9d70

// auto_init_rows_total_01b1ef00: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b1ef00 {

// Misc: copy three constant rows into the record at 0x059616b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfca80, row_constant, RowConstant);
RT_GLOBAL(0x059616b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b1ef00()
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
}

}  // namespace twin_01b1ef00

// auto_init_rows_total_01b31330: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b31330 {

// Misc: copy three constant rows into the record at 0x05961a80 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfccd0, row_constant, RowConstant);
RT_GLOBAL(0x05961a80, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b31330()
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
}

}  // namespace twin_01b31330

// auto_init_rows_total_01b48400: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b48400 {

// Misc: copy three constant rows into the record at 0x05961ef0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfcf60, row_constant, RowConstant);
RT_GLOBAL(0x05961ef0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b48400()
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
}

}  // namespace twin_01b48400

// auto_init_rows_total_01b4e6d0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b4e6d0 {

// Misc: copy three constant rows into the record at 0x05962180 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfd110, row_constant, RowConstant);
RT_GLOBAL(0x05962180, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b4e6d0()
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
}

}  // namespace twin_01b4e6d0

// auto_init_rows_total_01b728b0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b728b0 {

// Misc: copy three constant rows into the record at 0x05962ee0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfd670, row_constant, RowConstant);
RT_GLOBAL(0x05962ee0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b728b0()
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
}

}  // namespace twin_01b728b0

// auto_init_rows_total_01b739f0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b739f0 {

// Misc: copy three constant rows into the record at 0x05962f60 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfd700, row_constant, RowConstant);
RT_GLOBAL(0x05962f60, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b739f0()
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
}

}  // namespace twin_01b739f0

// auto_init_rows_total_01b74f50: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b74f50 {

// Misc: copy three constant rows into the record at 0x05962fa0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfd760, row_constant, RowConstant);
RT_GLOBAL(0x05962fa0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b74f50()
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
}

}  // namespace twin_01b74f50

// auto_init_rows_total_01b81740: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b81740 {

// Misc: copy three constant rows into the record at 0x059635b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfdb10, row_constant, RowConstant);
RT_GLOBAL(0x059635b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b81740()
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
}

}  // namespace twin_01b81740

// auto_init_rows_total_01b9c540: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b9c540 {

// Misc: copy three constant rows into the record at 0x0596a850 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe090, row_constant, RowConstant);
RT_GLOBAL(0x0596a850, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b9c540()
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
}

}  // namespace twin_01b9c540

// auto_init_rows_total_01b9ea40: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b9ea40 {

// Misc: copy three constant rows into the record at 0x0596a930 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe1b0, row_constant, RowConstant);
RT_GLOBAL(0x0596a930, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b9ea40()
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
}

}  // namespace twin_01b9ea40

// auto_init_rows_total_01b9f630: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b9f630 {

// Misc: copy three constant rows into the record at 0x0596a970 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe210, row_constant, RowConstant);
RT_GLOBAL(0x0596a970, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b9f630()
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
}

}  // namespace twin_01b9f630

// auto_init_rows_total_01b9fbf0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01b9fbf0 {

// Misc: copy three constant rows into the record at 0x0596a9b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe270, row_constant, RowConstant);
RT_GLOBAL(0x0596a9b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01b9fbf0()
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
}

}  // namespace twin_01b9fbf0

// auto_init_rows_total_01ba38e0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ba38e0 {

// Misc: copy three constant rows into the record at 0x0596ab10 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe450, row_constant, RowConstant);
RT_GLOBAL(0x0596ab10, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ba38e0()
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
}

}  // namespace twin_01ba38e0

// auto_init_rows_total_01ba4480: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ba4480 {

// Misc: copy three constant rows into the record at 0x0596ab50 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe4b0, row_constant, RowConstant);
RT_GLOBAL(0x0596ab50, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ba4480()
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
}

}  // namespace twin_01ba4480

// auto_init_rows_total_01ba5ef0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ba5ef0 {

// Misc: copy three constant rows into the record at 0x0596abe0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe570, row_constant, RowConstant);
RT_GLOBAL(0x0596abe0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ba5ef0()
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
}

}  // namespace twin_01ba5ef0

// auto_init_rows_total_01ba6380: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ba6380 {

// Misc: copy three constant rows into the record at 0x0596ac20 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe5d0, row_constant, RowConstant);
RT_GLOBAL(0x0596ac20, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ba6380()
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
}

}  // namespace twin_01ba6380

// auto_init_rows_total_01ba6d80: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ba6d80 {

// Misc: copy three constant rows into the record at 0x0596ac60 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe630, row_constant, RowConstant);
RT_GLOBAL(0x0596ac60, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ba6d80()
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
}

}  // namespace twin_01ba6d80

// auto_init_rows_total_01ba9e70: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ba9e70 {

// Misc: copy three constant rows into the record at 0x0596ad70 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe750, row_constant, RowConstant);
RT_GLOBAL(0x0596ad70, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ba9e70()
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
}

}  // namespace twin_01ba9e70

// auto_init_rows_total_01baddb0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01baddb0 {

// Misc: copy three constant rows into the record at 0x0596aeb0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe870, row_constant, RowConstant);
RT_GLOBAL(0x0596aeb0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01baddb0()
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
}

}  // namespace twin_01baddb0

// auto_init_rows_total_01baea60: misc_init_rows_total_5944010 with other addresses.
namespace twin_01baea60 {

// Misc: copy three constant rows into the record at 0x0596aef0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe8d0, row_constant, RowConstant);
RT_GLOBAL(0x0596aef0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01baea60()
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
}

}  // namespace twin_01baea60

// auto_init_rows_total_01baf940: misc_init_rows_total_5944010 with other addresses.
namespace twin_01baf940 {

// Misc: copy three constant rows into the record at 0x0596af30 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfe930, row_constant, RowConstant);
RT_GLOBAL(0x0596af30, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01baf940()
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
}

}  // namespace twin_01baf940

// auto_init_rows_total_01bb43a0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bb43a0 {

// Misc: copy three constant rows into the record at 0x0596b0b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfeab0, row_constant, RowConstant);
RT_GLOBAL(0x0596b0b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bb43a0()
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
}

}  // namespace twin_01bb43a0

// auto_init_rows_total_01bb4870: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bb4870 {

// Misc: copy three constant rows into the record at 0x0596b0f0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfeb10, row_constant, RowConstant);
RT_GLOBAL(0x0596b0f0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bb4870()
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
}

}  // namespace twin_01bb4870

// auto_init_rows_total_01bb52b0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bb52b0 {

// Misc: copy three constant rows into the record at 0x0596b130 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfeb70, row_constant, RowConstant);
RT_GLOBAL(0x0596b130, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bb52b0()
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
}

}  // namespace twin_01bb52b0

// auto_init_rows_total_01bb7280: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bb7280 {

// Misc: copy three constant rows into the record at 0x0596b200 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfec60, row_constant, RowConstant);
RT_GLOBAL(0x0596b200, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bb7280()
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
}

}  // namespace twin_01bb7280

// auto_init_rows_total_01bb7610: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bb7610 {

// Misc: copy three constant rows into the record at 0x0596b240 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfecc0, row_constant, RowConstant);
RT_GLOBAL(0x0596b240, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bb7610()
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
}

}  // namespace twin_01bb7610

// auto_init_rows_total_01bb8020: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bb8020 {

// Misc: copy three constant rows into the record at 0x0596b280 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfed20, row_constant, RowConstant);
RT_GLOBAL(0x0596b280, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bb8020()
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
}

}  // namespace twin_01bb8020

// auto_init_rows_total_01bc3470: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bc3470 {

// Misc: copy three constant rows into the record at 0x0596b420 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfef60, row_constant, RowConstant);
RT_GLOBAL(0x0596b420, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bc3470()
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
}

}  // namespace twin_01bc3470

// auto_init_rows_total_01bc36e0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bc36e0 {

// Misc: copy three constant rows into the record at 0x0596b460 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cfefc0, row_constant, RowConstant);
RT_GLOBAL(0x0596b460, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bc36e0()
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
}

}  // namespace twin_01bc36e0

// auto_init_rows_total_01bc5cd0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bc5cd0 {

// Misc: copy three constant rows into the record at 0x0596b520 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cff0e0, row_constant, RowConstant);
RT_GLOBAL(0x0596b520, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bc5cd0()
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
}

}  // namespace twin_01bc5cd0

// auto_init_rows_total_01bc6a10: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bc6a10 {

// Misc: copy three constant rows into the record at 0x0596b5a0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cff1a0, row_constant, RowConstant);
RT_GLOBAL(0x0596b5a0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bc6a10()
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
}

}  // namespace twin_01bc6a10

// auto_init_rows_total_01bc70c0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bc70c0 {

// Misc: copy three constant rows into the record at 0x0596b5e0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cff200, row_constant, RowConstant);
RT_GLOBAL(0x0596b5e0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bc70c0()
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
}

}  // namespace twin_01bc70c0

// auto_init_rows_total_01bc8590: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bc8590 {

// Misc: copy three constant rows into the record at 0x0596b620 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cff260, row_constant, RowConstant);
RT_GLOBAL(0x0596b620, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bc8590()
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
}

}  // namespace twin_01bc8590

// auto_init_rows_total_01bc8f20: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bc8f20 {

// Misc: copy three constant rows into the record at 0x0596b660 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cff2c0, row_constant, RowConstant);
RT_GLOBAL(0x0596b660, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bc8f20()
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
}

}  // namespace twin_01bc8f20

// auto_init_rows_total_01bd18a0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01bd18a0 {

// Misc: copy three constant rows into the record at 0x0596b800 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04cff470, row_constant, RowConstant);
RT_GLOBAL(0x0596b800, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01bd18a0()
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
}

}  // namespace twin_01bd18a0

// auto_init_rows_total_01c25790: misc_init_rows_total_5944010 with other addresses.
namespace twin_01c25790 {

// Misc: copy three constant rows into the record at 0x0596c9c0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d017e0, row_constant, RowConstant);
RT_GLOBAL(0x0596c9c0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01c25790()
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
}

}  // namespace twin_01c25790

// auto_init_rows_total_01c25970: misc_init_rows_total_5944010 with other addresses.
namespace twin_01c25970 {

// Misc: copy three constant rows into the record at 0x0596ca00 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d01840, row_constant, RowConstant);
RT_GLOBAL(0x0596ca00, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01c25970()
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
}

}  // namespace twin_01c25970

// auto_init_rows_total_01c50530: misc_init_rows_total_5944010 with other addresses.
namespace twin_01c50530 {

// Misc: copy three constant rows into the record at 0x0596dfc0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d02700, row_constant, RowConstant);
RT_GLOBAL(0x0596dfc0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01c50530()
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
}

}  // namespace twin_01c50530

// auto_init_rows_total_01c84580: misc_init_rows_total_5944010 with other addresses.
namespace twin_01c84580 {

// Misc: copy three constant rows into the record at 0x0596e7b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d038b0, row_constant, RowConstant);
RT_GLOBAL(0x0596e7b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01c84580()
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
}

}  // namespace twin_01c84580

// auto_init_rows_total_01c964b0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01c964b0 {

// Misc: copy three constant rows into the record at 0x0596ea10 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d03e20, row_constant, RowConstant);
RT_GLOBAL(0x0596ea10, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01c964b0()
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
}

}  // namespace twin_01c964b0

// auto_init_rows_total_01cb7960: misc_init_rows_total_5944010 with other addresses.
namespace twin_01cb7960 {

// Misc: copy three constant rows into the record at 0x0596f7c0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d05480, row_constant, RowConstant);
RT_GLOBAL(0x0596f7c0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01cb7960()
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
}

}  // namespace twin_01cb7960

// auto_init_rows_total_01d4f9d0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01d4f9d0 {

// Misc: copy three constant rows into the record at 0x05973530 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d07190, row_constant, RowConstant);
RT_GLOBAL(0x05973530, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01d4f9d0()
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
}

}  // namespace twin_01d4f9d0

// auto_init_rows_total_01df4dd0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01df4dd0 {

// Misc: copy three constant rows into the record at 0x05979b10 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d08be0, row_constant, RowConstant);
RT_GLOBAL(0x05979b10, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01df4dd0()
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
}

}  // namespace twin_01df4dd0

// auto_init_rows_total_01df5330: misc_init_rows_total_5944010 with other addresses.
namespace twin_01df5330 {

// Misc: copy three constant rows into the record at 0x05979b50 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d08c50, row_constant, RowConstant);
RT_GLOBAL(0x05979b50, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01df5330()
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
}

}  // namespace twin_01df5330

// auto_init_rows_total_01e675c0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01e675c0 {

// Misc: copy three constant rows into the record at 0x0597cf90 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0c6e0, row_constant, RowConstant);
RT_GLOBAL(0x0597cf90, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01e675c0()
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
}

}  // namespace twin_01e675c0

// auto_init_rows_total_01e6c3a0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01e6c3a0 {

// Misc: copy three constant rows into the record at 0x0597d2f0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0c7f0, row_constant, RowConstant);
RT_GLOBAL(0x0597d2f0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01e6c3a0()
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
}

}  // namespace twin_01e6c3a0

// auto_init_rows_total_01e82cb0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01e82cb0 {

// Misc: copy three constant rows into the record at 0x0597d690 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0d2a0, row_constant, RowConstant);
RT_GLOBAL(0x0597d690, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01e82cb0()
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
}

}  // namespace twin_01e82cb0

// auto_init_rows_total_01e9d8e0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01e9d8e0 {

// Misc: copy three constant rows into the record at 0x0597e150 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0db10, row_constant, RowConstant);
RT_GLOBAL(0x0597e150, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01e9d8e0()
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
}

}  // namespace twin_01e9d8e0

// auto_init_rows_total_01ec4b90: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ec4b90 {

// Misc: copy three constant rows into the record at 0x0597eca0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0dd50, row_constant, RowConstant);
RT_GLOBAL(0x0597eca0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ec4b90()
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
}

}  // namespace twin_01ec4b90

// auto_init_rows_total_01ec6790: misc_init_rows_total_5944010 with other addresses.
namespace twin_01ec6790 {

// Misc: copy three constant rows into the record at 0x0597ed60 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0de10, row_constant, RowConstant);
RT_GLOBAL(0x0597ed60, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01ec6790()
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
}

}  // namespace twin_01ec6790

// auto_init_rows_total_01eddd50: misc_init_rows_total_5944010 with other addresses.
namespace twin_01eddd50 {

// Misc: copy three constant rows into the record at 0x0597f990 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0e370, row_constant, RowConstant);
RT_GLOBAL(0x0597f990, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01eddd50()
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
}

}  // namespace twin_01eddd50

// auto_init_rows_total_01f656d0: misc_init_rows_total_5944010 with other addresses.
namespace twin_01f656d0 {

// Misc: copy three constant rows into the record at 0x059806e0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0ed30, row_constant, RowConstant);
RT_GLOBAL(0x059806e0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_01f656d0()
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
}

}  // namespace twin_01f656d0

// auto_init_rows_total_02076ea0: misc_init_rows_total_5944010 with other addresses.
namespace twin_02076ea0 {

// Misc: copy three constant rows into the record at 0x05982dd0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0faa0, row_constant, RowConstant);
RT_GLOBAL(0x05982dd0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02076ea0()
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
}

}  // namespace twin_02076ea0

// auto_init_rows_total_02088bd0: misc_init_rows_total_5944010 with other addresses.
namespace twin_02088bd0 {

// Misc: copy three constant rows into the record at 0x05982e10 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d0fb30, row_constant, RowConstant);
RT_GLOBAL(0x05982e10, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02088bd0()
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
}

}  // namespace twin_02088bd0

// auto_init_rows_total_020ebb80: misc_init_rows_total_5944010 with other addresses.
namespace twin_020ebb80 {

// Misc: copy three constant rows into the record at 0x059854b0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d10cf0, row_constant, RowConstant);
RT_GLOBAL(0x059854b0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_020ebb80()
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
}

}  // namespace twin_020ebb80

// auto_init_rows_total_020ec120: misc_init_rows_total_5944010 with other addresses.
namespace twin_020ec120 {

// Misc: copy three constant rows into the record at 0x05985530 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d10d80, row_constant, RowConstant);
RT_GLOBAL(0x05985530, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_020ec120()
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
}

}  // namespace twin_020ec120

// auto_init_rows_total_020ff9b0: misc_init_rows_total_5944010 with other addresses.
namespace twin_020ff9b0 {

// Misc: copy three constant rows into the record at 0x05985d20 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d11030, row_constant, RowConstant);
RT_GLOBAL(0x05985d20, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_020ff9b0()
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
}

}  // namespace twin_020ff9b0

// auto_init_rows_total_0212b1e0: misc_init_rows_total_5944010 with other addresses.
namespace twin_0212b1e0 {

// Misc: copy three constant rows into the record at 0x05986f50 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d122d0, row_constant, RowConstant);
RT_GLOBAL(0x05986f50, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_0212b1e0()
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
}

}  // namespace twin_0212b1e0

// auto_init_rows_total_02255fb0: misc_init_rows_total_5944010 with other addresses.
namespace twin_02255fb0 {

// Misc: copy three constant rows into the record at 0x0598f160 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d18740, row_constant, RowConstant);
RT_GLOBAL(0x0598f160, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02255fb0()
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
}

}  // namespace twin_02255fb0

// auto_init_rows_total_0225bed0: misc_init_rows_total_5944010 with other addresses.
namespace twin_0225bed0 {

// Misc: copy three constant rows into the record at 0x0598f460 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d18860, row_constant, RowConstant);
RT_GLOBAL(0x0598f460, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_0225bed0()
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
}

}  // namespace twin_0225bed0

// auto_init_rows_total_02301e40: misc_init_rows_total_5944010 with other addresses.
namespace twin_02301e40 {

// Misc: copy three constant rows into the record at 0x05992330 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d19e20, row_constant, RowConstant);
RT_GLOBAL(0x05992330, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02301e40()
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
}

}  // namespace twin_02301e40

// auto_init_rows_total_02306bb0: misc_init_rows_total_5944010 with other addresses.
namespace twin_02306bb0 {

// Misc: copy three constant rows into the record at 0x05992370 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d19e80, row_constant, RowConstant);
RT_GLOBAL(0x05992370, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02306bb0()
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
}

}  // namespace twin_02306bb0

// auto_init_rows_total_02312820: misc_init_rows_total_5944010 with other addresses.
namespace twin_02312820 {

// Misc: copy three constant rows into the record at 0x059929f0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1a0f0, row_constant, RowConstant);
RT_GLOBAL(0x059929f0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02312820()
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
}

}  // namespace twin_02312820

// auto_init_rows_total_02315540: misc_init_rows_total_5944010 with other addresses.
namespace twin_02315540 {

// Misc: copy three constant rows into the record at 0x05992c00 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1a2d0, row_constant, RowConstant);
RT_GLOBAL(0x05992c00, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02315540()
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
}

}  // namespace twin_02315540

// auto_init_rows_total_02319250: misc_init_rows_total_5944010 with other addresses.
namespace twin_02319250 {

// Misc: copy three constant rows into the record at 0x05992d00 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1a400, row_constant, RowConstant);
RT_GLOBAL(0x05992d00, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02319250()
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
}

}  // namespace twin_02319250

// auto_init_rows_total_0231aec0: misc_init_rows_total_5944010 with other addresses.
namespace twin_0231aec0 {

// Misc: copy three constant rows into the record at 0x05992d40 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1a460, row_constant, RowConstant);
RT_GLOBAL(0x05992d40, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_0231aec0()
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
}

}  // namespace twin_0231aec0

// auto_init_rows_total_0231b440: misc_init_rows_total_5944010 with other addresses.
namespace twin_0231b440 {

// Misc: copy three constant rows into the record at 0x05992d80 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1a4c0, row_constant, RowConstant);
RT_GLOBAL(0x05992d80, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_0231b440()
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
}

}  // namespace twin_0231b440

// auto_init_rows_total_0231f3e0: misc_init_rows_total_5944010 with other addresses.
namespace twin_0231f3e0 {

// Misc: copy three constant rows into the record at 0x05993000 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1a6d0, row_constant, RowConstant);
RT_GLOBAL(0x05993000, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_0231f3e0()
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
}

}  // namespace twin_0231f3e0

// auto_init_rows_total_02322640: misc_init_rows_total_5944010 with other addresses.
namespace twin_02322640 {

// Misc: copy three constant rows into the record at 0x05993480 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1a8d0, row_constant, RowConstant);
RT_GLOBAL(0x05993480, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02322640()
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
}

}  // namespace twin_02322640

// auto_init_rows_total_02325d40: misc_init_rows_total_5944010 with other addresses.
namespace twin_02325d40 {

// Misc: copy three constant rows into the record at 0x059935c0 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1a9f0, row_constant, RowConstant);
RT_GLOBAL(0x059935c0, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_02325d40()
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
}

}  // namespace twin_02325d40

// auto_init_rows_total_0232c470: misc_init_rows_total_5944010 with other addresses.
namespace twin_0232c470 {

// Misc: copy three constant rows into the record at 0x05993b40 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1acc0, row_constant, RowConstant);
RT_GLOBAL(0x05993b40, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_0232c470()
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
}

}  // namespace twin_0232c470

// auto_init_rows_total_0243aa50: misc_init_rows_total_5944010 with other addresses.
namespace twin_0243aa50 {

// Misc: copy three constant rows into the record at 0x05aa0e50 and set its total.


namespace {

/** Number of 8-byte words in the three copied rows. */
constexpr size_t copied_words = 6;

/** The four floats of a row, in the order they are stored. */
enum Column : size_t { column_first, column_second, column_third, column_fourth, column_count };

/** Number of rows that are added up. */
constexpr size_t summed_rows = 3;

/** One row of four floats. */
using Row = float[column_count];

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
};
static_assert(offsetof(RowRecord, total_0x0030) == 0x30);

RT_GLOBAL(0x04d1ee50, row_constant, RowConstant);
RT_GLOBAL(0x05aa0e50, row_record, RowRecord);

/** The sum of a row, added as the original adds it: each pair first, then the two pairs. */
float row_sum(const Row &row)
{
    return (row[column_first] + row[column_second]) + (row[column_third] + row[column_fourth]);
}

}  // namespace

/**
 *
 * Copies the three constant rows into the record and stores the total of the other three
 * constant rows.
 *
 * The total is a single float: each row is summed in pairs, and the three row sums are added in
 * order. Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_total_0243aa50()
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
}

}  // namespace twin_0243aa50
