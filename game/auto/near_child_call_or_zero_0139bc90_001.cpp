// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_child_call_or_zero, in game/misc/child_call_or_zero.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_child_call_or_zero_00de57c0: misc_child_call_or_zero with other addresses and constants.
namespace near_00de57c0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0xc0];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0xc0);

namespace {

RT_ORIGINAL(0x00e5eb00, fn_00e5eb00, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_00de57c0(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_00e5eb00(child, second);
}

}  // namespace near_00de57c0

// auto_child_call_or_zero_010cc390: misc_child_call_or_zero with other addresses and constants.
namespace near_010cc390 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x28];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x28);

namespace {

RT_ORIGINAL(0x010a3b10, fn_010a3b10, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_010cc390(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_010a3b10(child, second);
}

}  // namespace near_010cc390

// auto_child_call_or_zero_0131d650: misc_child_call_or_zero with other addresses and constants.
namespace near_0131d650 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x108];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x108);

namespace {

RT_ORIGINAL(0x01329500, fn_01329500, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_0131d650(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_01329500(child, second);
}

}  // namespace near_0131d650

// auto_child_call_or_zero_01373ce0: misc_child_call_or_zero with other addresses and constants.
namespace near_01373ce0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x88];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x88);

namespace {

RT_ORIGINAL(0x0141ef60, fn_0141ef60, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_01373ce0(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_0141ef60(child, second);
}

}  // namespace near_01373ce0

// auto_child_call_or_zero_01388e00: misc_child_call_or_zero with other addresses and constants.
namespace near_01388e00 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x40];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x40);

namespace {

RT_ORIGINAL(0x01389d10, fn_01389d10, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_01388e00(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_01389d10(child, second);
}

}  // namespace near_01388e00

// auto_child_call_or_zero_013bc5f0: misc_child_call_or_zero with other addresses and constants.
namespace near_013bc5f0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x20];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x20);

namespace {

RT_ORIGINAL(0x013beb20, fn_013beb20, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_013bc5f0(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_013beb20(child, second);
}

}  // namespace near_013bc5f0

// auto_child_call_or_zero_013beb60: misc_child_call_or_zero with other addresses and constants.
namespace near_013beb60 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0xa8];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0xa8);

namespace {

RT_ORIGINAL(0x013bf5f0, fn_013bf5f0, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_013beb60(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_013bf5f0(child, second);
}

}  // namespace near_013beb60

// auto_child_call_or_zero_013beb80: misc_child_call_or_zero with other addresses and constants.
namespace near_013beb80 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0xa8];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0xa8);

namespace {

RT_ORIGINAL(0x013bf750, fn_013bf750, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_013beb80(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_013bf750(child, second);
}

}  // namespace near_013beb80

// auto_child_call_or_zero_013e25b0: misc_child_call_or_zero with other addresses and constants.
namespace near_013e25b0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x168];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x168);

namespace {

RT_ORIGINAL(0x013dfc90, fn_013dfc90, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_013e25b0(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_013dfc90(child, second);
}

}  // namespace near_013e25b0

// auto_child_call_or_zero_01421800: misc_child_call_or_zero with other addresses and constants.
namespace near_01421800 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x1a0];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x1a0);

namespace {

RT_ORIGINAL(0x01377b60, fn_01377b60, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_01421800(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_01377b60(child, second);
}

}  // namespace near_01421800

// auto_child_call_or_zero_016e4ff0: misc_child_call_or_zero with other addresses and constants.
namespace near_016e4ff0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x70];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x70);

namespace {

RT_ORIGINAL(0x016d4010, fn_016d4010, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_016e4ff0(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_016d4010(child, second);
}

}  // namespace near_016e4ff0

// auto_child_call_or_zero_02a27240: misc_child_call_or_zero with other addresses and constants.
namespace near_02a27240 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0xd8];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0xd8);

namespace {

RT_ORIGINAL(0x02a9cdc0, fn_02a9cdc0, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_02a27240(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_02a9cdc0(child, second);
}

}  // namespace near_02a27240

// auto_child_call_or_zero_02b38780: misc_child_call_or_zero with other addresses and constants.
namespace near_02b38780 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x10];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x10);

namespace {

RT_ORIGINAL(0x02b3e1c0, fn_02b3e1c0, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_02b38780(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_02b3e1c0(child, second);
}

}  // namespace near_02b38780

// auto_child_call_or_zero_02becd50: misc_child_call_or_zero with other addresses and constants.
namespace near_02becd50 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x140];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x140);

namespace {

RT_ORIGINAL(0x02bef110, fn_02bef110, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_02becd50(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_02bef110(child, second);
}

}  // namespace near_02becd50

// auto_child_call_or_zero_02c0cdf0: misc_child_call_or_zero with other addresses and constants.
namespace near_02c0cdf0 {

/** An object of which only the child it holds is known. */
struct ChildOwner {
    uint8_t unknown_0x0000[0x10];
    void *child;
};
static_assert(offsetof(ChildOwner, child) == 0x10);

namespace {

RT_ORIGINAL(0x02c0e4b0, fn_02c0e4b0, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_02c0cdf0(ChildOwner *owner, uint32_t second)
{
    void *const child = owner->child;
    if (child == nullptr) return 0;
    return fn_02c0e4b0(child, second);
}

}  // namespace near_02c0cdf0
