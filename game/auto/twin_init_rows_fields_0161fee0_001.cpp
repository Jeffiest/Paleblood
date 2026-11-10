// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_rows_fields_5940ea0, in game/misc/init_rows_fields_5940ea0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_fields_01626170: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01626170 {

// Misc: copy three constant rows into the record at 0x05940ff0 and set its four fields.


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

RT_GLOBAL(0x04ce85c0, row_constant, RowConstant);
RT_GLOBAL(0x05940ff0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01626170()
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

}  // namespace twin_01626170

// auto_init_rows_fields_01626490: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01626490 {

// Misc: copy three constant rows into the record at 0x05941040 and set its four fields.


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

RT_GLOBAL(0x04ce86f0, row_constant, RowConstant);
RT_GLOBAL(0x05941040, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01626490()
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

}  // namespace twin_01626490

// auto_init_rows_fields_01627da0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01627da0 {

// Misc: copy three constant rows into the record at 0x059410d0 and set its four fields.


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

RT_GLOBAL(0x04ce8750, row_constant, RowConstant);
RT_GLOBAL(0x059410d0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01627da0()
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

}  // namespace twin_01627da0

// auto_init_rows_fields_0162a300: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_0162a300 {

// Misc: copy three constant rows into the record at 0x05941120 and set its four fields.


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

RT_GLOBAL(0x04ce8940, row_constant, RowConstant);
RT_GLOBAL(0x05941120, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_0162a300()
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

}  // namespace twin_0162a300

// auto_init_rows_fields_0162fb50: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_0162fb50 {

// Misc: copy three constant rows into the record at 0x059413e0 and set its four fields.


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

RT_GLOBAL(0x04ce8bf0, row_constant, RowConstant);
RT_GLOBAL(0x059413e0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_0162fb50()
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

}  // namespace twin_0162fb50

// auto_init_rows_fields_0163e7e0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_0163e7e0 {

// Misc: copy three constant rows into the record at 0x059418c0 and set its four fields.


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

RT_GLOBAL(0x04ce9570, row_constant, RowConstant);
RT_GLOBAL(0x059418c0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_0163e7e0()
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

}  // namespace twin_0163e7e0

// auto_init_rows_fields_01644710: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01644710 {

// Misc: copy three constant rows into the record at 0x05941be0 and set its four fields.


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

RT_GLOBAL(0x04ce9940, row_constant, RowConstant);
RT_GLOBAL(0x05941be0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01644710()
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

}  // namespace twin_01644710

// auto_init_rows_fields_01645420: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01645420 {

// Misc: copy three constant rows into the record at 0x05941c70 and set its four fields.


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

RT_GLOBAL(0x04ce9a10, row_constant, RowConstant);
RT_GLOBAL(0x05941c70, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01645420()
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

}  // namespace twin_01645420

// auto_init_rows_fields_01648170: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01648170 {

// Misc: copy three constant rows into the record at 0x05941d00 and set its four fields.


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

RT_GLOBAL(0x04ce9e60, row_constant, RowConstant);
RT_GLOBAL(0x05941d00, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01648170()
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

}  // namespace twin_01648170

// auto_init_rows_fields_0164ef70: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_0164ef70 {

// Misc: copy three constant rows into the record at 0x05941f10 and set its four fields.


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

RT_GLOBAL(0x04cea040, row_constant, RowConstant);
RT_GLOBAL(0x05941f10, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_0164ef70()
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

}  // namespace twin_0164ef70

// auto_init_rows_fields_016d1e80: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_016d1e80 {

// Misc: copy three constant rows into the record at 0x05944ff0 and set its four fields.


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

RT_GLOBAL(0x04cec000, row_constant, RowConstant);
RT_GLOBAL(0x05944ff0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_016d1e80()
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

}  // namespace twin_016d1e80

// auto_init_rows_fields_016d5450: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_016d5450 {

// Misc: copy three constant rows into the record at 0x059450e0 and set its four fields.


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

RT_GLOBAL(0x04cec0f0, row_constant, RowConstant);
RT_GLOBAL(0x059450e0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_016d5450()
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

}  // namespace twin_016d5450

// auto_init_rows_fields_016df940: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_016df940 {

// Misc: copy three constant rows into the record at 0x059454b0 and set its four fields.


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

RT_GLOBAL(0x04cec300, row_constant, RowConstant);
RT_GLOBAL(0x059454b0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_016df940()
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

}  // namespace twin_016df940

// auto_init_rows_fields_016e5ca0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_016e5ca0 {

// Misc: copy three constant rows into the record at 0x05945540 and set its four fields.


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

RT_GLOBAL(0x04cec360, row_constant, RowConstant);
RT_GLOBAL(0x05945540, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_016e5ca0()
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

}  // namespace twin_016e5ca0

// auto_init_rows_fields_016e65b0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_016e65b0 {

// Misc: copy three constant rows into the record at 0x05945590 and set its four fields.


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

RT_GLOBAL(0x04cec390, row_constant, RowConstant);
RT_GLOBAL(0x05945590, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_016e65b0()
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

}  // namespace twin_016e65b0

// auto_init_rows_fields_016e6af0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_016e6af0 {

// Misc: copy three constant rows into the record at 0x059455e0 and set its four fields.


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

RT_GLOBAL(0x04cec3c0, row_constant, RowConstant);
RT_GLOBAL(0x059455e0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_016e6af0()
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

}  // namespace twin_016e6af0

// auto_init_rows_fields_016e7b70: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_016e7b70 {

// Misc: copy three constant rows into the record at 0x05945730 and set its four fields.


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

RT_GLOBAL(0x04cec4b0, row_constant, RowConstant);
RT_GLOBAL(0x05945730, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_016e7b70()
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

}  // namespace twin_016e7b70

// auto_init_rows_fields_0192e760: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_0192e760 {

// Misc: copy three constant rows into the record at 0x05954730 and set its four fields.


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

RT_GLOBAL(0x04cf6530, row_constant, RowConstant);
RT_GLOBAL(0x05954730, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_0192e760()
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

}  // namespace twin_0192e760

// auto_init_rows_fields_01998d60: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01998d60 {

// Misc: copy three constant rows into the record at 0x05957df0 and set its four fields.


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

RT_GLOBAL(0x04cf7b20, row_constant, RowConstant);
RT_GLOBAL(0x05957df0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01998d60()
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

}  // namespace twin_01998d60

// auto_init_rows_fields_01999060: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01999060 {

// Misc: copy three constant rows into the record at 0x05957e40 and set its four fields.


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

RT_GLOBAL(0x04cf7b50, row_constant, RowConstant);
RT_GLOBAL(0x05957e40, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01999060()
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

}  // namespace twin_01999060
