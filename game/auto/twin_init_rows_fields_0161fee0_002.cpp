// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_rows_fields_5940ea0, in game/misc/init_rows_fields_5940ea0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_rows_fields_019ae870: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_019ae870 {

// Misc: copy three constant rows into the record at 0x059586f0 and set its four fields.


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

RT_GLOBAL(0x04cf7eb0, row_constant, RowConstant);
RT_GLOBAL(0x059586f0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_019ae870()
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

}  // namespace twin_019ae870

// auto_init_rows_fields_019afb10: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_019afb10 {

// Misc: copy three constant rows into the record at 0x059587d0 and set its four fields.


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

RT_GLOBAL(0x04cf7f10, row_constant, RowConstant);
RT_GLOBAL(0x059587d0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_019afb10()
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

}  // namespace twin_019afb10

// auto_init_rows_fields_01adbd90: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01adbd90 {

// Misc: copy three constant rows into the record at 0x05960060 and set its four fields.


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

RT_GLOBAL(0x04cfbd40, row_constant, RowConstant);
RT_GLOBAL(0x05960060, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01adbd90()
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

}  // namespace twin_01adbd90

// auto_init_rows_fields_01afb990: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01afb990 {

// Misc: copy three constant rows into the record at 0x05960a70 and set its four fields.


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

RT_GLOBAL(0x04cfc330, row_constant, RowConstant);
RT_GLOBAL(0x05960a70, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01afb990()
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

}  // namespace twin_01afb990

// auto_init_rows_fields_01afcba0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01afcba0 {

// Misc: copy three constant rows into the record at 0x05960b10 and set its four fields.


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

RT_GLOBAL(0x04cfc480, row_constant, RowConstant);
RT_GLOBAL(0x05960b10, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01afcba0()
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

}  // namespace twin_01afcba0

// auto_init_rows_fields_01afd110: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01afd110 {

// Misc: copy three constant rows into the record at 0x05960b60 and set its four fields.


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

RT_GLOBAL(0x04cfc4b0, row_constant, RowConstant);
RT_GLOBAL(0x05960b60, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01afd110()
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

}  // namespace twin_01afd110

// auto_init_rows_fields_01bed760: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01bed760 {

// Misc: copy three constant rows into the record at 0x0596bab0 and set its four fields.


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

RT_GLOBAL(0x04cffc70, row_constant, RowConstant);
RT_GLOBAL(0x0596bab0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01bed760()
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

}  // namespace twin_01bed760

// auto_init_rows_fields_01beece0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01beece0 {

// Misc: copy three constant rows into the record at 0x0596bb00 and set its four fields.


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

RT_GLOBAL(0x04cffd50, row_constant, RowConstant);
RT_GLOBAL(0x0596bb00, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01beece0()
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

}  // namespace twin_01beece0

// auto_init_rows_fields_01bf0280: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01bf0280 {

// Misc: copy three constant rows into the record at 0x0596bb50 and set its four fields.


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

RT_GLOBAL(0x04cffe10, row_constant, RowConstant);
RT_GLOBAL(0x0596bb50, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01bf0280()
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

}  // namespace twin_01bf0280

// auto_init_rows_fields_01bf0bc0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01bf0bc0 {

// Misc: copy three constant rows into the record at 0x0596bba0 and set its four fields.


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

RT_GLOBAL(0x04cffe40, row_constant, RowConstant);
RT_GLOBAL(0x0596bba0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01bf0bc0()
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

}  // namespace twin_01bf0bc0

// auto_init_rows_fields_01bf87e0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01bf87e0 {

// Misc: copy three constant rows into the record at 0x0596bd70 and set its four fields.


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

RT_GLOBAL(0x04d00410, row_constant, RowConstant);
RT_GLOBAL(0x0596bd70, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01bf87e0()
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

}  // namespace twin_01bf87e0

// auto_init_rows_fields_01bfc090: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01bfc090 {

// Misc: copy three constant rows into the record at 0x0596be00 and set its four fields.


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

RT_GLOBAL(0x04d004c0, row_constant, RowConstant);
RT_GLOBAL(0x0596be00, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01bfc090()
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

}  // namespace twin_01bfc090

// auto_init_rows_fields_01bfe480: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01bfe480 {

// Misc: copy three constant rows into the record at 0x0596bfe0 and set its four fields.


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

RT_GLOBAL(0x04d00550, row_constant, RowConstant);
RT_GLOBAL(0x0596bfe0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01bfe480()
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

}  // namespace twin_01bfe480

// auto_init_rows_fields_01c35da0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01c35da0 {

// Misc: copy three constant rows into the record at 0x0596d690 and set its four fields.


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

RT_GLOBAL(0x04d02150, row_constant, RowConstant);
RT_GLOBAL(0x0596d690, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01c35da0()
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

}  // namespace twin_01c35da0

// auto_init_rows_fields_01c3e1a0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01c3e1a0 {

// Misc: copy three constant rows into the record at 0x0596d930 and set its four fields.


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

RT_GLOBAL(0x04d022a0, row_constant, RowConstant);
RT_GLOBAL(0x0596d930, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01c3e1a0()
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

}  // namespace twin_01c3e1a0

// auto_init_rows_fields_01c40140: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01c40140 {

// Misc: copy three constant rows into the record at 0x0596d980 and set its four fields.


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

RT_GLOBAL(0x04d022d0, row_constant, RowConstant);
RT_GLOBAL(0x0596d980, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01c40140()
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

}  // namespace twin_01c40140

// auto_init_rows_fields_01c42720: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01c42720 {

// Misc: copy three constant rows into the record at 0x0596d9d0 and set its four fields.


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

RT_GLOBAL(0x04d02300, row_constant, RowConstant);
RT_GLOBAL(0x0596d9d0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01c42720()
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

}  // namespace twin_01c42720

// auto_init_rows_fields_01c43530: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01c43530 {

// Misc: copy three constant rows into the record at 0x0596da20 and set its four fields.


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

RT_GLOBAL(0x04d02330, row_constant, RowConstant);
RT_GLOBAL(0x0596da20, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01c43530()
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

}  // namespace twin_01c43530

// auto_init_rows_fields_01c446f0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01c446f0 {

// Misc: copy three constant rows into the record at 0x0596da70 and set its four fields.


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

RT_GLOBAL(0x04d02380, row_constant, RowConstant);
RT_GLOBAL(0x0596da70, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01c446f0()
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

}  // namespace twin_01c446f0

// auto_init_rows_fields_01c46b70: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01c46b70 {

// Misc: copy three constant rows into the record at 0x0596db40 and set its four fields.


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

RT_GLOBAL(0x04d02420, row_constant, RowConstant);
RT_GLOBAL(0x0596db40, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01c46b70()
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

}  // namespace twin_01c46b70

// auto_init_rows_fields_01c48e40: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01c48e40 {

// Misc: copy three constant rows into the record at 0x0596db90 and set its four fields.


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

RT_GLOBAL(0x04d02540, row_constant, RowConstant);
RT_GLOBAL(0x0596db90, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01c48e40()
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

}  // namespace twin_01c48e40

// auto_init_rows_fields_01c5c560: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01c5c560 {

// Misc: copy three constant rows into the record at 0x0596e1d0 and set its four fields.


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

RT_GLOBAL(0x04d02a00, row_constant, RowConstant);
RT_GLOBAL(0x0596e1d0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01c5c560()
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

}  // namespace twin_01c5c560

// auto_init_rows_fields_01dab9d0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01dab9d0 {

// Misc: copy three constant rows into the record at 0x05977070 and set its four fields.


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

RT_GLOBAL(0x04d07e20, row_constant, RowConstant);
RT_GLOBAL(0x05977070, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01dab9d0()
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

}  // namespace twin_01dab9d0

// auto_init_rows_fields_01ed7460: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01ed7460 {

// Misc: copy three constant rows into the record at 0x0597f410 and set its four fields.


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

RT_GLOBAL(0x04d0e110, row_constant, RowConstant);
RT_GLOBAL(0x0597f410, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01ed7460()
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

}  // namespace twin_01ed7460

// auto_init_rows_fields_01ed8c80: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01ed8c80 {

// Misc: copy three constant rows into the record at 0x0597f460 and set its four fields.


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

RT_GLOBAL(0x04d0e140, row_constant, RowConstant);
RT_GLOBAL(0x0597f460, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01ed8c80()
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

}  // namespace twin_01ed8c80

// auto_init_rows_fields_01ed9e30: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01ed9e30 {

// Misc: copy three constant rows into the record at 0x0597f760 and set its four fields.


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

RT_GLOBAL(0x04d0e1d0, row_constant, RowConstant);
RT_GLOBAL(0x0597f760, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01ed9e30()
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

}  // namespace twin_01ed9e30

// auto_init_rows_fields_01edae80: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01edae80 {

// Misc: copy three constant rows into the record at 0x0597f7f0 and set its four fields.


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

RT_GLOBAL(0x04d0e250, row_constant, RowConstant);
RT_GLOBAL(0x0597f7f0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01edae80()
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

}  // namespace twin_01edae80

// auto_init_rows_fields_01f16300: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01f16300 {

// Misc: copy three constant rows into the record at 0x0597ff10 and set its four fields.


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

RT_GLOBAL(0x04d0e7f0, row_constant, RowConstant);
RT_GLOBAL(0x0597ff10, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01f16300()
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

}  // namespace twin_01f16300

// auto_init_rows_fields_01f1b2a0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01f1b2a0 {

// Misc: copy three constant rows into the record at 0x0597ffa0 and set its four fields.


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

RT_GLOBAL(0x04d0e850, row_constant, RowConstant);
RT_GLOBAL(0x0597ffa0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01f1b2a0()
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

}  // namespace twin_01f1b2a0

// auto_init_rows_fields_01f37bf0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01f37bf0 {

// Misc: copy three constant rows into the record at 0x05980130 and set its four fields.


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

RT_GLOBAL(0x04d0ea00, row_constant, RowConstant);
RT_GLOBAL(0x05980130, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01f37bf0()
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

}  // namespace twin_01f37bf0

// auto_init_rows_fields_01f9f370: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01f9f370 {

// Misc: copy three constant rows into the record at 0x05980c10 and set its four fields.


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

RT_GLOBAL(0x04d0eed0, row_constant, RowConstant);
RT_GLOBAL(0x05980c10, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01f9f370()
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

}  // namespace twin_01f9f370

// auto_init_rows_fields_01fe5f20: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01fe5f20 {

// Misc: copy three constant rows into the record at 0x059810b0 and set its four fields.


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

RT_GLOBAL(0x04d0f110, row_constant, RowConstant);
RT_GLOBAL(0x059810b0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01fe5f20()
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

}  // namespace twin_01fe5f20

// auto_init_rows_fields_01feb870: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_01feb870 {

// Misc: copy three constant rows into the record at 0x05981100 and set its four fields.


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

RT_GLOBAL(0x04d0f140, row_constant, RowConstant);
RT_GLOBAL(0x05981100, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_01feb870()
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

}  // namespace twin_01feb870

// auto_init_rows_fields_02058600: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_02058600 {

// Misc: copy three constant rows into the record at 0x05981b30 and set its four fields.


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

RT_GLOBAL(0x04d0f950, row_constant, RowConstant);
RT_GLOBAL(0x05981b30, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_02058600()
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

}  // namespace twin_02058600

// auto_init_rows_fields_020a0b80: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_020a0b80 {

// Misc: copy three constant rows into the record at 0x05983360 and set its four fields.


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

RT_GLOBAL(0x04d0fea0, row_constant, RowConstant);
RT_GLOBAL(0x05983360, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_020a0b80()
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

}  // namespace twin_020a0b80

// auto_init_rows_fields_020a42c0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_020a42c0 {

// Misc: copy three constant rows into the record at 0x05983470 and set its four fields.


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

RT_GLOBAL(0x04d0ff60, row_constant, RowConstant);
RT_GLOBAL(0x05983470, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_020a42c0()
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

}  // namespace twin_020a42c0

// auto_init_rows_fields_020a8390: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_020a8390 {

// Misc: copy three constant rows into the record at 0x05983590 and set its four fields.


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

RT_GLOBAL(0x04d0fff0, row_constant, RowConstant);
RT_GLOBAL(0x05983590, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_020a8390()
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

}  // namespace twin_020a8390

// auto_init_rows_fields_020b59a0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_020b59a0 {

// Misc: copy three constant rows into the record at 0x05983930 and set its four fields.


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

RT_GLOBAL(0x04d102b0, row_constant, RowConstant);
RT_GLOBAL(0x05983930, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_020b59a0()
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

}  // namespace twin_020b59a0

// auto_init_rows_fields_020b5d50: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_020b5d50 {

// Misc: copy three constant rows into the record at 0x05983980 and set its four fields.


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

RT_GLOBAL(0x04d102e0, row_constant, RowConstant);
RT_GLOBAL(0x05983980, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_020b5d50()
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

}  // namespace twin_020b5d50

// auto_init_rows_fields_020e7010: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_020e7010 {

// Misc: copy three constant rows into the record at 0x059852a0 and set its four fields.


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

RT_GLOBAL(0x04d10b70, row_constant, RowConstant);
RT_GLOBAL(0x059852a0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_020e7010()
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

}  // namespace twin_020e7010

// auto_init_rows_fields_0216d730: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_0216d730 {

// Misc: copy three constant rows into the record at 0x05989220 and set its four fields.


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

RT_GLOBAL(0x04d144c0, row_constant, RowConstant);
RT_GLOBAL(0x05989220, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_0216d730()
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

}  // namespace twin_0216d730

// auto_init_rows_fields_0219ea20: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_0219ea20 {

// Misc: copy three constant rows into the record at 0x0598ad00 and set its four fields.


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

RT_GLOBAL(0x04d14fc0, row_constant, RowConstant);
RT_GLOBAL(0x0598ad00, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_0219ea20()
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

}  // namespace twin_0219ea20

// auto_init_rows_fields_02223f60: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_02223f60 {

// Misc: copy three constant rows into the record at 0x0598deb0 and set its four fields.


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

RT_GLOBAL(0x04d17a50, row_constant, RowConstant);
RT_GLOBAL(0x0598deb0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_02223f60()
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

}  // namespace twin_02223f60

// auto_init_rows_fields_022d9ae0: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_022d9ae0 {

// Misc: copy three constant rows into the record at 0x05990c40 and set its four fields.


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

RT_GLOBAL(0x04d193f0, row_constant, RowConstant);
RT_GLOBAL(0x05990c40, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_022d9ae0()
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

}  // namespace twin_022d9ae0

// auto_init_rows_fields_02337120: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_02337120 {

// Misc: copy three constant rows into the record at 0x059941b0 and set its four fields.


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

RT_GLOBAL(0x04d1ae70, row_constant, RowConstant);
RT_GLOBAL(0x059941b0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_02337120()
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

}  // namespace twin_02337120

// auto_init_rows_fields_02374d30: misc_init_rows_fields_5940ea0 with other addresses.
namespace twin_02374d30 {

// Misc: copy three constant rows into the record at 0x059969d0 and set its four fields.


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

RT_GLOBAL(0x04d1b960, row_constant, RowConstant);
RT_GLOBAL(0x059969d0, row_record, RowRecord);

}  // namespace

/**
 *
 * Copies the three constant rows into the record and sets its four fields.
 *
 * The third field starts at thirty and the other three at minus one.
 * Nothing is read from the record, and the function takes no arguments.
 */
extern "C" void bb_auto_init_rows_fields_02374d30()
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

}  // namespace twin_02374d30
