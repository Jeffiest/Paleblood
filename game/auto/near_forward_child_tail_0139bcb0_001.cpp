// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_forward_child_tail, in game/misc/forward_child_tail.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_forward_child_tail_00460ee0: misc_forward_child_tail with other addresses and constants.
namespace near_00460ee0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x10];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x10);

namespace {

RT_ORIGINAL(0x00460dc0, fn_00460dc0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_00460ee0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_00460dc0(child);
}

}  // namespace near_00460ee0

// auto_forward_child_tail_00462bb0: misc_forward_child_tail with other addresses and constants.
namespace near_00462bb0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x10];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x10);

namespace {

RT_ORIGINAL(0x00460dc0, fn_00460dc0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_00462bb0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_00460dc0(child);
}

}  // namespace near_00462bb0

// auto_forward_child_tail_004eebf0: misc_forward_child_tail with other addresses and constants.
namespace near_004eebf0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x28];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x28);

namespace {

RT_ORIGINAL(0x0044ce00, fn_0044ce00, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_004eebf0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0044ce00(child);
}

}  // namespace near_004eebf0

// auto_forward_child_tail_004eec00: misc_forward_child_tail with other addresses and constants.
namespace near_004eec00 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x28];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x28);

namespace {

RT_ORIGINAL(0x0044ce80, fn_0044ce80, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_004eec00(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0044ce80(child);
}

}  // namespace near_004eec00

// auto_forward_child_tail_0051c9b0: misc_forward_child_tail with other addresses and constants.
namespace near_0051c9b0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x18];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x18);

namespace {

RT_ORIGINAL(0x004c5840, fn_004c5840, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0051c9b0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_004c5840(child);
}

}  // namespace near_0051c9b0

// auto_forward_child_tail_005f60c0: misc_forward_child_tail with other addresses and constants.
namespace near_005f60c0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x88];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x88);

namespace {

RT_ORIGINAL(0x006d5780, fn_006d5780, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_005f60c0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_006d5780(child);
}

}  // namespace near_005f60c0

// auto_forward_child_tail_0060a650: misc_forward_child_tail with other addresses and constants.
namespace near_0060a650 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0xa0];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0xa0);

namespace {

RT_ORIGINAL(0x0060a670, fn_0060a670, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0060a650(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0060a670(child);
}

}  // namespace near_0060a650

// auto_forward_child_tail_0060ac50: misc_forward_child_tail with other addresses and constants.
namespace near_0060ac50 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0xa0];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0xa0);

namespace {

RT_ORIGINAL(0x0060ac70, fn_0060ac70, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0060ac50(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0060ac70(child);
}

}  // namespace near_0060ac50

// auto_forward_child_tail_0064c350: misc_forward_child_tail with other addresses and constants.
namespace near_0064c350 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0xa8];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0xa8);

namespace {

RT_ORIGINAL(0x0064c370, fn_0064c370, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0064c350(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0064c370(child);
}

}  // namespace near_0064c350

// auto_forward_child_tail_0064c9f0: misc_forward_child_tail with other addresses and constants.
namespace near_0064c9f0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x80];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x80);

namespace {

RT_ORIGINAL(0x0073abd0, fn_0073abd0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0064c9f0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0073abd0(child);
}

}  // namespace near_0064c9f0

// auto_forward_child_tail_0073a6b0: misc_forward_child_tail with other addresses and constants.
namespace near_0073a6b0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x20];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x20);

namespace {

RT_ORIGINAL(0x0064c350, fn_0064c350, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0073a6b0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0064c350(child);
}

}  // namespace near_0073a6b0

// auto_forward_child_tail_0073a6c0: misc_forward_child_tail with other addresses and constants.
namespace near_0073a6c0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x10];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x10);

namespace {

RT_ORIGINAL(0x0064c350, fn_0064c350, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0073a6c0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0064c350(child);
}

}  // namespace near_0073a6c0

// auto_forward_child_tail_00de57a0: misc_forward_child_tail with other addresses and constants.
namespace near_00de57a0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0xc0];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0xc0);

namespace {

RT_ORIGINAL(0x00e5eb20, fn_00e5eb20, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_00de57a0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_00e5eb20(child);
}

}  // namespace near_00de57a0

// auto_forward_child_tail_00e852e0: misc_forward_child_tail with other addresses and constants.
namespace near_00e852e0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x18];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x18);

namespace {

RT_ORIGINAL(0x009f96b0, fn_009f96b0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_00e852e0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_009f96b0(child);
}

}  // namespace near_00e852e0

// auto_forward_child_tail_00e85300: misc_forward_child_tail with other addresses and constants.
namespace near_00e85300 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x18];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x18);

namespace {

RT_ORIGINAL(0x009f96d0, fn_009f96d0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_00e85300(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_009f96d0(child);
}

}  // namespace near_00e85300

// auto_forward_child_tail_012a77d0: misc_forward_child_tail with other addresses and constants.
namespace near_012a77d0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x10];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x10);

namespace {

RT_ORIGINAL(0x012a9b90, fn_012a9b90, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_012a77d0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_012a9b90(child);
}

}  // namespace near_012a77d0

// auto_forward_child_tail_0131d630: misc_forward_child_tail with other addresses and constants.
namespace near_0131d630 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x108];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x108);

namespace {

RT_ORIGINAL(0x01329bd0, fn_01329bd0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0131d630(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01329bd0(child);
}

}  // namespace near_0131d630

// auto_forward_child_tail_0131d700: misc_forward_child_tail with other addresses and constants.
namespace near_0131d700 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x108];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x108);

namespace {

RT_ORIGINAL(0x01329b70, fn_01329b70, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0131d700(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01329b70(child);
}

}  // namespace near_0131d700

// auto_forward_child_tail_01354690: misc_forward_child_tail with other addresses and constants.
namespace near_01354690 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x18];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x18);

namespace {

RT_ORIGINAL(0x027286b0, fn_027286b0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_01354690(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_027286b0(child);
}

}  // namespace near_01354690

// auto_forward_child_tail_01393360: misc_forward_child_tail with other addresses and constants.
namespace near_01393360 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x88];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x88);

namespace {

RT_ORIGINAL(0x01395950, fn_01395950, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_01393360(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01395950(child);
}

}  // namespace near_01393360

// auto_forward_child_tail_013bbc80: misc_forward_child_tail with other addresses and constants.
namespace near_013bbc80 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x1d88];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x1d88);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_013bbc80(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01401720(child);
}

}  // namespace near_013bbc80

// auto_forward_child_tail_013beb40: misc_forward_child_tail with other addresses and constants.
namespace near_013beb40 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0xa8];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0xa8);

namespace {

RT_ORIGINAL(0x013bf4d0, fn_013bf4d0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_013beb40(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_013bf4d0(child);
}

}  // namespace near_013beb40

// auto_forward_child_tail_013dfc70: misc_forward_child_tail with other addresses and constants.
namespace near_013dfc70 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x48];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x48);

namespace {

RT_ORIGINAL(0x01459ad0, fn_01459ad0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_013dfc70(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01459ad0(child);
}

}  // namespace near_013dfc70

// auto_forward_child_tail_013dfc80: misc_forward_child_tail with other addresses and constants.
namespace near_013dfc80 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x50];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x50);

namespace {

RT_ORIGINAL(0x013e0220, fn_013e0220, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_013dfc80(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_013e0220(child);
}

}  // namespace near_013dfc80

// auto_forward_child_tail_014177b0: misc_forward_child_tail with other addresses and constants.
namespace near_014177b0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x18];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_014177b0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01401720(child);
}

}  // namespace near_014177b0

// auto_forward_child_tail_015e5940: misc_forward_child_tail with other addresses and constants.
namespace near_015e5940 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x58];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x58);

namespace {

RT_ORIGINAL(0x02fbe938, fn_02fbe938, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_015e5940(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_02fbe938(child);
}

}  // namespace near_015e5940

// auto_forward_child_tail_0162adc0: misc_forward_child_tail with other addresses and constants.
namespace near_0162adc0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x28];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x28);

namespace {

RT_ORIGINAL(0x016cf0e0, fn_016cf0e0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0162adc0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_016cf0e0(child);
}

}  // namespace near_0162adc0

// auto_forward_child_tail_017dec10: misc_forward_child_tail with other addresses and constants.
namespace near_017dec10 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x30];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x30);

namespace {

RT_ORIGINAL(0x01c78130, fn_01c78130, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_017dec10(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01c78130(child);
}

}  // namespace near_017dec10

// auto_forward_child_tail_01bfaf30: misc_forward_child_tail with other addresses and constants.
namespace near_01bfaf30 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x58];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x58);

namespace {

RT_ORIGINAL(0x013de5f0, fn_013de5f0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_01bfaf30(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_013de5f0(child);
}

}  // namespace near_01bfaf30

// auto_forward_child_tail_01bfaf40: misc_forward_child_tail with other addresses and constants.
namespace near_01bfaf40 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x58];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x58);

namespace {

RT_ORIGINAL(0x013de780, fn_013de780, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_01bfaf40(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_013de780(child);
}

}  // namespace near_01bfaf40

// auto_forward_child_tail_01cf7840: misc_forward_child_tail with other addresses and constants.
namespace near_01cf7840 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x450];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x450);

namespace {

RT_ORIGINAL(0x01d0b9b0, fn_01d0b9b0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_01cf7840(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01d0b9b0(child);
}

}  // namespace near_01cf7840

// auto_forward_child_tail_01cf7860: misc_forward_child_tail with other addresses and constants.
namespace near_01cf7860 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x450];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x450);

namespace {

RT_ORIGINAL(0x01d0b9b0, fn_01d0b9b0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_01cf7860(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01d0b9b0(child);
}

}  // namespace near_01cf7860

// auto_forward_child_tail_021c87c0: misc_forward_child_tail with other addresses and constants.
namespace near_021c87c0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x18];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x18);

namespace {

RT_ORIGINAL(0x00cf7eb0, fn_00cf7eb0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_021c87c0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_00cf7eb0(child);
}

}  // namespace near_021c87c0

// auto_forward_child_tail_02240140: misc_forward_child_tail with other addresses and constants.
namespace near_02240140 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x40];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x40);

namespace {

RT_ORIGINAL(0x02240ee0, fn_02240ee0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02240140(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_02240ee0(child);
}

}  // namespace near_02240140

// auto_forward_child_tail_0267c900: misc_forward_child_tail with other addresses and constants.
namespace near_0267c900 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x38];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x38);

namespace {

RT_ORIGINAL(0x0267e9d0, fn_0267e9d0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0267c900(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0267e9d0(child);
}

}  // namespace near_0267c900

// auto_forward_child_tail_026f2250: misc_forward_child_tail with other addresses and constants.
namespace near_026f2250 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x440];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x440);

namespace {

RT_ORIGINAL(0x01230ec0, fn_01230ec0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_026f2250(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_01230ec0(child);
}

}  // namespace near_026f2250

// auto_forward_child_tail_027049f0: misc_forward_child_tail with other addresses and constants.
namespace near_027049f0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x30];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x30);

namespace {

RT_ORIGINAL(0x0131d630, fn_0131d630, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_027049f0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0131d630(child);
}

}  // namespace near_027049f0

// auto_forward_child_tail_027520e0: misc_forward_child_tail with other addresses and constants.
namespace near_027520e0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x18];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x18);

namespace {

RT_ORIGINAL(0x027286b0, fn_027286b0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_027520e0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_027286b0(child);
}

}  // namespace near_027520e0

// auto_forward_child_tail_02756b50: misc_forward_child_tail with other addresses and constants.
namespace near_02756b50 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x18];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x18);

namespace {

RT_ORIGINAL(0x027286b0, fn_027286b0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02756b50(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_027286b0(child);
}

}  // namespace near_02756b50

// auto_forward_child_tail_02759e10: misc_forward_child_tail with other addresses and constants.
namespace near_02759e10 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x18];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x18);

namespace {

RT_ORIGINAL(0x027286b0, fn_027286b0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02759e10(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_027286b0(child);
}

}  // namespace near_02759e10

// auto_forward_child_tail_027c1e50: misc_forward_child_tail with other addresses and constants.
namespace near_027c1e50 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x10];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x10);

namespace {

RT_ORIGINAL(0x0045a4c0, fn_0045a4c0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_027c1e50(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0045a4c0(child);
}

}  // namespace near_027c1e50

// auto_forward_child_tail_027f6900: misc_forward_child_tail with other addresses and constants.
namespace near_027f6900 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x30];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x30);

namespace {

RT_ORIGINAL(0x005f2260, fn_005f2260, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_027f6900(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_005f2260(child);
}

}  // namespace near_027f6900

// auto_forward_child_tail_027f6910: misc_forward_child_tail with other addresses and constants.
namespace near_027f6910 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x30];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x30);

namespace {

RT_ORIGINAL(0x005f23e0, fn_005f23e0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_027f6910(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_005f23e0(child);
}

}  // namespace near_027f6910

// auto_forward_child_tail_02824570: misc_forward_child_tail with other addresses and constants.
namespace near_02824570 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x28];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x28);

namespace {

RT_ORIGINAL(0x0045a4c0, fn_0045a4c0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02824570(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_0045a4c0(child);
}

}  // namespace near_02824570

// auto_forward_child_tail_028c08a0: misc_forward_child_tail with other addresses and constants.
namespace near_028c08a0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x70];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x70);

namespace {

RT_ORIGINAL(0x014780e0, fn_014780e0, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_028c08a0(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_014780e0(child);
}

}  // namespace near_028c08a0

// auto_forward_child_tail_02becd90: misc_forward_child_tail with other addresses and constants.
namespace near_02becd90 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x140];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x140);

namespace {

RT_ORIGINAL(0x02beee10, fn_02beee10, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02becd90(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_02beee10(child);
}

}  // namespace near_02becd90

// auto_forward_child_tail_02c0ce60: misc_forward_child_tail with other addresses and constants.
namespace near_02c0ce60 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x10];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x10);

namespace {

RT_ORIGINAL(0x02c0e190, fn_02c0e190, void(void *child));

}  // namespace

/**
 *
 * Calls the function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02c0ce60(ChildOwner *owner)
{
    void *const child = owner->child;
    if (child == nullptr) return;
    fn_02c0e190(child);
}

}  // namespace near_02c0ce60
