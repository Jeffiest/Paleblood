// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_release_held_block, in game/misc/release_held_block.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_release_held_block_004508c0: misc_release_held_block with other addresses and constants.
namespace near_004508c0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x30];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x30);

namespace {

RT_ORIGINAL(0x0045a510, fn_0045a510, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_004508c0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_0045a510(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_004508c0

// auto_release_held_block_0125bab0: misc_release_held_block with other addresses and constants.
namespace near_0125bab0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x02592720, fn_02592720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_0125bab0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_02592720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_0125bab0

// auto_release_held_block_012a8d50: misc_release_held_block with other addresses and constants.
namespace near_012a8d50 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x02592720, fn_02592720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_012a8d50(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_02592720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_012a8d50

// auto_release_held_block_01364280: misc_release_held_block with other addresses and constants.
namespace near_01364280 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x0247c460, fn_0247c460, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01364280(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_0247c460(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01364280

// auto_release_held_block_013bedd0: misc_release_held_block with other addresses and constants.
namespace near_013bedd0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x8];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x8);

namespace {

RT_ORIGINAL(0x0247c460, fn_0247c460, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_013bedd0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_0247c460(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_013bedd0

// auto_release_held_block_013f6f60: misc_release_held_block with other addresses and constants.
namespace near_013f6f60 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x90];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x90);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_013f6f60(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_013f6f60

// auto_release_held_block_013fa0c0: misc_release_held_block with other addresses and constants.
namespace near_013fa0c0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x88];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x88);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_013fa0c0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_013fa0c0

// auto_release_held_block_0140b580: misc_release_held_block with other addresses and constants.
namespace near_0140b580 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x8];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x8);

namespace {

RT_ORIGINAL(0x0247c460, fn_0247c460, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_0140b580(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_0247c460(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_0140b580

// auto_release_held_block_01417330: misc_release_held_block with other addresses and constants.
namespace near_01417330 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0xd8];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0xd8);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01417330(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01417330

// auto_release_held_block_01435ad0: misc_release_held_block with other addresses and constants.
namespace near_01435ad0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x38];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x38);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01435ad0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01435ad0

// auto_release_held_block_016eb960: misc_release_held_block with other addresses and constants.
namespace near_016eb960 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_016eb960(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_016eb960

// auto_release_held_block_0184ea10: misc_release_held_block with other addresses and constants.
namespace near_0184ea10 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_0184ea10(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_0184ea10

// auto_release_held_block_0184f530: misc_release_held_block with other addresses and constants.
namespace near_0184f530 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_0184f530(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_0184f530

// auto_release_held_block_01850be0: misc_release_held_block with other addresses and constants.
namespace near_01850be0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01850be0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01850be0

// auto_release_held_block_01851290: misc_release_held_block with other addresses and constants.
namespace near_01851290 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01851290(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01851290

// auto_release_held_block_01851d20: misc_release_held_block with other addresses and constants.
namespace near_01851d20 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01851d20(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01851d20

// auto_release_held_block_01852850: misc_release_held_block with other addresses and constants.
namespace near_01852850 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01852850(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01852850

// auto_release_held_block_01853440: misc_release_held_block with other addresses and constants.
namespace near_01853440 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01853440(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01853440

// auto_release_held_block_01853f40: misc_release_held_block with other addresses and constants.
namespace near_01853f40 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01853f40(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01853f40

// auto_release_held_block_01854a80: misc_release_held_block with other addresses and constants.
namespace near_01854a80 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01854a80(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01854a80

// auto_release_held_block_019009f0: misc_release_held_block with other addresses and constants.
namespace near_019009f0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_019009f0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_019009f0

// auto_release_held_block_0190a070: misc_release_held_block with other addresses and constants.
namespace near_0190a070 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_0190a070(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_0190a070

// auto_release_held_block_0192e5d0: misc_release_held_block with other addresses and constants.
namespace near_0192e5d0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x1a8];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x1a8);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_0192e5d0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_0192e5d0

// auto_release_held_block_019435b0: misc_release_held_block with other addresses and constants.
namespace near_019435b0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_019435b0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_019435b0

// auto_release_held_block_01a51c80: misc_release_held_block with other addresses and constants.
namespace near_01a51c80 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x1a0];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x1a0);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01a51c80(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01a51c80

// auto_release_held_block_01b55110: misc_release_held_block with other addresses and constants.
namespace near_01b55110 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x120];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x120);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01b55110(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01b55110

// auto_release_held_block_01b9b310: misc_release_held_block with other addresses and constants.
namespace near_01b9b310 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01b9b310(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01b9b310

// auto_release_held_block_01b9bf70: misc_release_held_block with other addresses and constants.
namespace near_01b9bf70 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01b9bf70(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01b9bf70

// auto_release_held_block_01b9cb90: misc_release_held_block with other addresses and constants.
namespace near_01b9cb90 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01b9cb90(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01b9cb90

// auto_release_held_block_01b9d7f0: misc_release_held_block with other addresses and constants.
namespace near_01b9d7f0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01b9d7f0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01b9d7f0

// auto_release_held_block_01b9e470: misc_release_held_block with other addresses and constants.
namespace near_01b9e470 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01b9e470(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01b9e470

// auto_release_held_block_01b9f060: misc_release_held_block with other addresses and constants.
namespace near_01b9f060 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01b9f060(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01b9f060

// auto_release_held_block_01ba0070: misc_release_held_block with other addresses and constants.
namespace near_01ba0070 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba0070(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba0070

// auto_release_held_block_01ba0cf0: misc_release_held_block with other addresses and constants.
namespace near_01ba0cf0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba0cf0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba0cf0

// auto_release_held_block_01ba1970: misc_release_held_block with other addresses and constants.
namespace near_01ba1970 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba1970(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba1970

// auto_release_held_block_01ba2620: misc_release_held_block with other addresses and constants.
namespace near_01ba2620 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba2620(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba2620

// auto_release_held_block_01ba3310: misc_release_held_block with other addresses and constants.
namespace near_01ba3310 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba3310(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba3310

// auto_release_held_block_01ba3eb0: misc_release_held_block with other addresses and constants.
namespace near_01ba3eb0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba3eb0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba3eb0

// auto_release_held_block_01ba4a20: misc_release_held_block with other addresses and constants.
namespace near_01ba4a20 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba4a20(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba4a20

// auto_release_held_block_01ba5800: misc_release_held_block with other addresses and constants.
namespace near_01ba5800 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba5800(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba5800

// auto_release_held_block_01ba67a0: misc_release_held_block with other addresses and constants.
namespace near_01ba67a0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba67a0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba67a0

// auto_release_held_block_01ba7410: misc_release_held_block with other addresses and constants.
namespace near_01ba7410 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba7410(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba7410

// auto_release_held_block_01ba80b0: misc_release_held_block with other addresses and constants.
namespace near_01ba80b0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba80b0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba80b0

// auto_release_held_block_01ba8c30: misc_release_held_block with other addresses and constants.
namespace near_01ba8c30 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba8c30(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba8c30

// auto_release_held_block_01ba9870: misc_release_held_block with other addresses and constants.
namespace near_01ba9870 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ba9870(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ba9870

// auto_release_held_block_01baa4d0: misc_release_held_block with other addresses and constants.
namespace near_01baa4d0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01baa4d0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01baa4d0

// auto_release_held_block_01bab0d0: misc_release_held_block with other addresses and constants.
namespace near_01bab0d0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bab0d0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bab0d0

// auto_release_held_block_01babd60: misc_release_held_block with other addresses and constants.
namespace near_01babd60 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01babd60(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01babd60

// auto_release_held_block_01bac920: misc_release_held_block with other addresses and constants.
namespace near_01bac920 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bac920(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bac920

// auto_release_held_block_01bad730: misc_release_held_block with other addresses and constants.
namespace near_01bad730 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bad730(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bad730

// auto_release_held_block_01bae490: misc_release_held_block with other addresses and constants.
namespace near_01bae490 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bae490(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bae490

// auto_release_held_block_01baf310: misc_release_held_block with other addresses and constants.
namespace near_01baf310 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01baf310(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01baf310

// auto_release_held_block_01bafea0: misc_release_held_block with other addresses and constants.
namespace near_01bafea0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bafea0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bafea0

// auto_release_held_block_01bb0ac0: misc_release_held_block with other addresses and constants.
namespace near_01bb0ac0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb0ac0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb0ac0

// auto_release_held_block_01bb1860: misc_release_held_block with other addresses and constants.
namespace near_01bb1860 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb1860(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb1860

// auto_release_held_block_01bb26a0: misc_release_held_block with other addresses and constants.
namespace near_01bb26a0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb26a0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb26a0

// auto_release_held_block_01bb3240: misc_release_held_block with other addresses and constants.
namespace near_01bb3240 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb3240(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb3240

// auto_release_held_block_01bb3dd0: misc_release_held_block with other addresses and constants.
namespace near_01bb3dd0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb3dd0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb3dd0

// auto_release_held_block_01bb4cc0: misc_release_held_block with other addresses and constants.
namespace near_01bb4cc0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb4cc0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb4cc0

// auto_release_held_block_01bb5a90: misc_release_held_block with other addresses and constants.
namespace near_01bb5a90 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb5a90(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb5a90

// auto_release_held_block_01bb66b0: misc_release_held_block with other addresses and constants.
namespace near_01bb66b0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb66b0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb66b0

// auto_release_held_block_01bb7a60: misc_release_held_block with other addresses and constants.
namespace near_01bb7a60 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb7a60(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb7a60

// auto_release_held_block_01bb86d0: misc_release_held_block with other addresses and constants.
namespace near_01bb86d0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01bb86d0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01bb86d0

// auto_release_held_block_01c47520: misc_release_held_block with other addresses and constants.
namespace near_01c47520 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x68];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x68);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01c47520(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01c47520

// auto_release_held_block_01c619b0: misc_release_held_block with other addresses and constants.
namespace near_01c619b0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x2d0];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x2d0);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01c619b0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01c619b0

// auto_release_held_block_01c9ca20: misc_release_held_block with other addresses and constants.
namespace near_01c9ca20 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01c9ca20(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01c9ca20

// auto_release_held_block_01c9e760: misc_release_held_block with other addresses and constants.
namespace near_01c9e760 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01c9e760(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01c9e760

// auto_release_held_block_01c9f4b0: misc_release_held_block with other addresses and constants.
namespace near_01c9f4b0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01c9f4b0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01c9f4b0

// auto_release_held_block_01c9f930: misc_release_held_block with other addresses and constants.
namespace near_01c9f930 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01c9f930(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01c9f930

// auto_release_held_block_01ca1140: misc_release_held_block with other addresses and constants.
namespace near_01ca1140 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ca1140(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ca1140

// auto_release_held_block_01ca2620: misc_release_held_block with other addresses and constants.
namespace near_01ca2620 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ca2620(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ca2620

// auto_release_held_block_01ca4620: misc_release_held_block with other addresses and constants.
namespace near_01ca4620 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ca4620(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ca4620

// auto_release_held_block_01ca5f90: misc_release_held_block with other addresses and constants.
namespace near_01ca5f90 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ca5f90(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ca5f90

// auto_release_held_block_01ca6c90: misc_release_held_block with other addresses and constants.
namespace near_01ca6c90 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ca6c90(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ca6c90

// auto_release_held_block_01ca7050: misc_release_held_block with other addresses and constants.
namespace near_01ca7050 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ca7050(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ca7050

// auto_release_held_block_01ca7a90: misc_release_held_block with other addresses and constants.
namespace near_01ca7a90 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ca7a90(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ca7a90

// auto_release_held_block_01ca8810: misc_release_held_block with other addresses and constants.
namespace near_01ca8810 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ca8810(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ca8810

// auto_release_held_block_01ca9b80: misc_release_held_block with other addresses and constants.
namespace near_01ca9b80 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ca9b80(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ca9b80

// auto_release_held_block_01caa6f0: misc_release_held_block with other addresses and constants.
namespace near_01caa6f0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01caa6f0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01caa6f0

// auto_release_held_block_01caaba0: misc_release_held_block with other addresses and constants.
namespace near_01caaba0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01caaba0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01caaba0

// auto_release_held_block_01cab2e0: misc_release_held_block with other addresses and constants.
namespace near_01cab2e0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cab2e0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cab2e0

// auto_release_held_block_01cac460: misc_release_held_block with other addresses and constants.
namespace near_01cac460 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cac460(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cac460

// auto_release_held_block_01caccc0: misc_release_held_block with other addresses and constants.
namespace near_01caccc0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01caccc0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01caccc0

// auto_release_held_block_01cad230: misc_release_held_block with other addresses and constants.
namespace near_01cad230 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cad230(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cad230

// auto_release_held_block_01cad990: misc_release_held_block with other addresses and constants.
namespace near_01cad990 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cad990(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cad990

// auto_release_held_block_01cae460: misc_release_held_block with other addresses and constants.
namespace near_01cae460 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cae460(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cae460

// auto_release_held_block_01caf990: misc_release_held_block with other addresses and constants.
namespace near_01caf990 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01caf990(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01caf990

// auto_release_held_block_01cb0630: misc_release_held_block with other addresses and constants.
namespace near_01cb0630 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cb0630(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cb0630

// auto_release_held_block_01cb2490: misc_release_held_block with other addresses and constants.
namespace near_01cb2490 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cb2490(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cb2490

// auto_release_held_block_01cb2880: misc_release_held_block with other addresses and constants.
namespace near_01cb2880 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cb2880(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cb2880

// auto_release_held_block_01cb31e0: misc_release_held_block with other addresses and constants.
namespace near_01cb31e0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cb31e0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cb31e0

// auto_release_held_block_01cb4540: misc_release_held_block with other addresses and constants.
namespace near_01cb4540 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cb4540(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cb4540

// auto_release_held_block_01cb5d80: misc_release_held_block with other addresses and constants.
namespace near_01cb5d80 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01cb5d80(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01cb5d80

// auto_release_held_block_01ce9230: misc_release_held_block with other addresses and constants.
namespace near_01ce9230 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x18];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x18);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01ce9230(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01ce9230

// auto_release_held_block_01defcc0: misc_release_held_block with other addresses and constants.
namespace near_01defcc0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x628];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x628);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01defcc0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01defcc0

// auto_release_held_block_01dff6d0: misc_release_held_block with other addresses and constants.
namespace near_01dff6d0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x878];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x878);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_01dff6d0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_01dff6d0

// auto_release_held_block_020da9b0: misc_release_held_block with other addresses and constants.
namespace near_020da9b0 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x58];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x58);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_020da9b0(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_020da9b0

// auto_release_held_block_02447820: misc_release_held_block with other addresses and constants.
namespace near_02447820 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x60];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x60);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_02447820(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_02447820

// auto_release_held_block_02447850: misc_release_held_block with other addresses and constants.
namespace near_02447850 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x60];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x60);

namespace {

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_02447850(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_02447850

// auto_release_held_block_024bd360: misc_release_held_block with other addresses and constants.
namespace near_024bd360 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x8];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x8);

namespace {

RT_ORIGINAL(0x024bd930, fn_024bd930, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_024bd360(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_024bd930(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_024bd360

// auto_release_held_block_025a8270: misc_release_held_block with other addresses and constants.
namespace near_025a8270 {

/** An object of which only the block it holds is known. */
struct BlockHolder {
    uint8_t unknown_0x0000[0x20];
    void *held_block;
};
static_assert(offsetof(BlockHolder, held_block) == 0x20);

namespace {

RT_ORIGINAL(0x02592660, fn_02592660, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 */
extern "C" void bb_auto_release_held_block_025a8270(BlockHolder *owner)
{
    if (owner->held_block == nullptr) return;
    fn_02592660(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace near_025a8270
