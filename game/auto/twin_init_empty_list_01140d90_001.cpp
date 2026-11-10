// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_empty_list_586d918, in game/misc/init_empty_list_586d918.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_empty_list_01141540: misc_init_empty_list_586d918 with other addresses.
namespace twin_01141540 {

// Misc: start-up step that makes the list inside the object at 0x0586da10 empty.
//
// auto_init_empty_list_01141540 (0x01141540) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x0586da10, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_01141540()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_01141540

// auto_init_empty_list_01142b10: misc_init_empty_list_586d918 with other addresses.
namespace twin_01142b10 {

// Misc: start-up step that makes the list inside the object at 0x0586db08 empty.
//
// auto_init_empty_list_01142b10 (0x01142b10) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x0586db08, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_01142b10()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_01142b10

// auto_init_empty_list_01156080: misc_init_empty_list_586d918 with other addresses.
namespace twin_01156080 {

// Misc: start-up step that makes the list inside the object at 0x0586e790 empty.
//
// auto_init_empty_list_01156080 (0x01156080) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x0586e790, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_01156080()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_01156080

// auto_init_empty_list_0115ddb0: misc_init_empty_list_586d918 with other addresses.
namespace twin_0115ddb0 {

// Misc: start-up step that makes the list inside the object at 0x0586fab0 empty.
//
// auto_init_empty_list_0115ddb0 (0x0115ddb0) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x0586fab0, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_0115ddb0()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_0115ddb0

// auto_init_empty_list_0115f8f0: misc_init_empty_list_586d918 with other addresses.
namespace twin_0115f8f0 {

// Misc: start-up step that makes the list inside the object at 0x0586fbb0 empty.
//
// auto_init_empty_list_0115f8f0 (0x0115f8f0) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x0586fbb0, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_0115f8f0()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_0115f8f0

// auto_init_empty_list_01169010: misc_init_empty_list_586d918 with other addresses.
namespace twin_01169010 {

// Misc: start-up step that makes the list inside the object at 0x05881aa8 empty.
//
// auto_init_empty_list_01169010 (0x01169010) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x05881aa8, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_01169010()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_01169010

// auto_init_empty_list_0116b320: misc_init_empty_list_586d918 with other addresses.
namespace twin_0116b320 {

// Misc: start-up step that makes the list inside the object at 0x05881ba8 empty.
//
// auto_init_empty_list_0116b320 (0x0116b320) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x05881ba8, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_0116b320()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_0116b320

// auto_init_empty_list_0116b860: misc_init_empty_list_586d918 with other addresses.
namespace twin_0116b860 {

// Misc: start-up step that makes the list inside the object at 0x05881ca0 empty.
//
// auto_init_empty_list_0116b860 (0x0116b860) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x05881ca0, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_0116b860()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_0116b860

// auto_init_empty_list_0116f6c0: misc_init_empty_list_586d918 with other addresses.
namespace twin_0116f6c0 {

// Misc: start-up step that makes the list inside the object at 0x05881d98 empty.
//
// auto_init_empty_list_0116f6c0 (0x0116f6c0) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x05881d98, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_0116f6c0()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_0116f6c0

// auto_init_empty_list_0116fdd0: misc_init_empty_list_586d918 with other addresses.
namespace twin_0116fdd0 {

// Misc: start-up step that makes the list inside the object at 0x05881e90 empty.
//
// auto_init_empty_list_0116fdd0 (0x0116fdd0) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x05881e90, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_0116fdd0()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_0116fdd0

// auto_init_empty_list_01170d30: misc_init_empty_list_586d918 with other addresses.
namespace twin_01170d30 {

// Misc: start-up step that makes the list inside the object at 0x05881f88 empty.
//
// auto_init_empty_list_01170d30 (0x01170d30) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x05881f88, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_01170d30()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_01170d30

// auto_init_empty_list_011710f0: misc_init_empty_list_586d918 with other addresses.
namespace twin_011710f0 {

// Misc: start-up step that makes the list inside the object at 0x05882080 empty.
//
// auto_init_empty_list_011710f0 (0x011710f0) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x05882080, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_011710f0()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_011710f0

// auto_init_empty_list_01172660: misc_init_empty_list_586d918 with other addresses.
namespace twin_01172660 {

// Misc: start-up step that makes the list inside the object at 0x05882178 empty.
//
// auto_init_empty_list_01172660 (0x01172660) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x05882178, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_01172660()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_01172660

// auto_init_empty_list_011792c0: misc_init_empty_list_586d918 with other addresses.
namespace twin_011792c0 {

// Misc: start-up step that makes the list inside the object at 0x05882270 empty.
//
// auto_init_empty_list_011792c0 (0x011792c0) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.


namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x05882270, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_auto_init_empty_list_011792c0()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}

}  // namespace twin_011792c0
