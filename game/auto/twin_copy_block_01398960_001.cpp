// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_copy_block_58b3240, in game/misc/copy_block_58b3240.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_copy_block_0135be70: misc_copy_block_58b3240 with other addresses.
namespace twin_0135be70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1c20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb2710, source_block, CopiedBlock);
RT_GLOBAL(0x058b1c20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb2710 over the target block at 0x058b1c20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0135be70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0135be70

// auto_copy_block_0135c810: misc_copy_block_58b3240 with other addresses.
namespace twin_0135c810 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1c60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb27b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b1c60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb27b0 over the target block at 0x058b1c60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0135c810()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0135c810

// auto_copy_block_0135e230: misc_copy_block_58b3240 with other addresses.
namespace twin_0135e230 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1d70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb2b80, source_block, CopiedBlock);
RT_GLOBAL(0x058b1d70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb2b80 over the target block at 0x058b1d70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0135e230()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0135e230

// auto_copy_block_01364350: misc_copy_block_58b3240 with other addresses.
namespace twin_01364350 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1df0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb2d00, source_block, CopiedBlock);
RT_GLOBAL(0x058b1df0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb2d00 over the target block at 0x058b1df0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01364350()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01364350

// auto_copy_block_0136af90: misc_copy_block_58b3240 with other addresses.
namespace twin_0136af90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1e80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb3510, source_block, CopiedBlock);
RT_GLOBAL(0x058b1e80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb3510 over the target block at 0x058b1e80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0136af90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0136af90

// auto_copy_block_0136b380: misc_copy_block_58b3240 with other addresses.
namespace twin_0136b380 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1ec0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb35b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b1ec0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb35b0 over the target block at 0x058b1ec0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0136b380()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0136b380

// auto_copy_block_0136cd40: misc_copy_block_58b3240 with other addresses.
namespace twin_0136cd40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1f00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb3790, source_block, CopiedBlock);
RT_GLOBAL(0x058b1f00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb3790 over the target block at 0x058b1f00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0136cd40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0136cd40

// auto_copy_block_0136df20: misc_copy_block_58b3240 with other addresses.
namespace twin_0136df20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1f90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb3900, source_block, CopiedBlock);
RT_GLOBAL(0x058b1f90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb3900 over the target block at 0x058b1f90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0136df20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0136df20

// auto_copy_block_0136e140: misc_copy_block_58b3240 with other addresses.
namespace twin_0136e140 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1fd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb3ad0, source_block, CopiedBlock);
RT_GLOBAL(0x058b1fd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb3ad0 over the target block at 0x058b1fd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0136e140()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0136e140

// auto_copy_block_0136e570: misc_copy_block_58b3240 with other addresses.
namespace twin_0136e570 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2010.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb3b70, source_block, CopiedBlock);
RT_GLOBAL(0x058b2010, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb3b70 over the target block at 0x058b2010.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0136e570()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0136e570

// auto_copy_block_01370800: misc_copy_block_58b3240 with other addresses.
namespace twin_01370800 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2050.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb3c80, source_block, CopiedBlock);
RT_GLOBAL(0x058b2050, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb3c80 over the target block at 0x058b2050.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01370800()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01370800

// auto_copy_block_013709b0: misc_copy_block_58b3240 with other addresses.
namespace twin_013709b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2090.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb3eb0, source_block, CopiedBlock);
RT_GLOBAL(0x058b2090, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb3eb0 over the target block at 0x058b2090.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013709b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013709b0

// auto_copy_block_013721d0: misc_copy_block_58b3240 with other addresses.
namespace twin_013721d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b21d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb43f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b21d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb43f0 over the target block at 0x058b21d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013721d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013721d0

// auto_copy_block_01372490: misc_copy_block_58b3240 with other addresses.
namespace twin_01372490 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2210.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb45e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b2210, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb45e0 over the target block at 0x058b2210.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01372490()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01372490

// auto_copy_block_013726b0: misc_copy_block_58b3240 with other addresses.
namespace twin_013726b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2250.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb4680, source_block, CopiedBlock);
RT_GLOBAL(0x058b2250, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb4680 over the target block at 0x058b2250.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013726b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013726b0

// auto_copy_block_01373060: misc_copy_block_58b3240 with other addresses.
namespace twin_01373060 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2290.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb4740, source_block, CopiedBlock);
RT_GLOBAL(0x058b2290, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb4740 over the target block at 0x058b2290.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01373060()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01373060

// auto_copy_block_01373e10: misc_copy_block_58b3240 with other addresses.
namespace twin_01373e10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b22d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb4820, source_block, CopiedBlock);
RT_GLOBAL(0x058b22d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb4820 over the target block at 0x058b22d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01373e10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01373e10

// auto_copy_block_01373ff0: misc_copy_block_58b3240 with other addresses.
namespace twin_01373ff0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2310.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb48e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b2310, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb48e0 over the target block at 0x058b2310.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01373ff0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01373ff0

// auto_copy_block_01374b10: misc_copy_block_58b3240 with other addresses.
namespace twin_01374b10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2350.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb49a0, source_block, CopiedBlock);
RT_GLOBAL(0x058b2350, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb49a0 over the target block at 0x058b2350.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01374b10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01374b10

// auto_copy_block_01378530: misc_copy_block_58b3240 with other addresses.
namespace twin_01378530 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2390.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb4a50, source_block, CopiedBlock);
RT_GLOBAL(0x058b2390, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb4a50 over the target block at 0x058b2390.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01378530()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01378530

// auto_copy_block_0137d700: misc_copy_block_58b3240 with other addresses.
namespace twin_0137d700 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b25c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb4f50, source_block, CopiedBlock);
RT_GLOBAL(0x058b25c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb4f50 over the target block at 0x058b25c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0137d700()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0137d700

// auto_copy_block_0137d9c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0137d9c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2600.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb5160, source_block, CopiedBlock);
RT_GLOBAL(0x058b2600, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb5160 over the target block at 0x058b2600.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0137d9c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0137d9c0

// auto_copy_block_0137dfb0: misc_copy_block_58b3240 with other addresses.
namespace twin_0137dfb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2640.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb5200, source_block, CopiedBlock);
RT_GLOBAL(0x058b2640, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb5200 over the target block at 0x058b2640.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0137dfb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0137dfb0

// auto_copy_block_0137e870: misc_copy_block_58b3240 with other addresses.
namespace twin_0137e870 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2700.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb5460, source_block, CopiedBlock);
RT_GLOBAL(0x058b2700, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb5460 over the target block at 0x058b2700.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0137e870()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0137e870

// auto_copy_block_0137ed20: misc_copy_block_58b3240 with other addresses.
namespace twin_0137ed20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2780.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb55d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b2780, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb55d0 over the target block at 0x058b2780.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0137ed20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0137ed20

// auto_copy_block_01385d20: misc_copy_block_58b3240 with other addresses.
namespace twin_01385d20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2c40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb6740, source_block, CopiedBlock);
RT_GLOBAL(0x058b2c40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb6740 over the target block at 0x058b2c40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01385d20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01385d20

// auto_copy_block_01386570: misc_copy_block_58b3240 with other addresses.
namespace twin_01386570 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2cc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb6a10, source_block, CopiedBlock);
RT_GLOBAL(0x058b2cc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb6a10 over the target block at 0x058b2cc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01386570()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01386570

// auto_copy_block_013866a0: misc_copy_block_58b3240 with other addresses.
namespace twin_013866a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2d00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb6ab0, source_block, CopiedBlock);
RT_GLOBAL(0x058b2d00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb6ab0 over the target block at 0x058b2d00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013866a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013866a0

// auto_copy_block_013867d0: misc_copy_block_58b3240 with other addresses.
namespace twin_013867d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2d40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb6b50, source_block, CopiedBlock);
RT_GLOBAL(0x058b2d40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb6b50 over the target block at 0x058b2d40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013867d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013867d0

// auto_copy_block_013868f0: misc_copy_block_58b3240 with other addresses.
namespace twin_013868f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2d80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb6bf0, source_block, CopiedBlock);
RT_GLOBAL(0x058b2d80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb6bf0 over the target block at 0x058b2d80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013868f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013868f0

// auto_copy_block_01388530: misc_copy_block_58b3240 with other addresses.
namespace twin_01388530 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2e00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb6fc0, source_block, CopiedBlock);
RT_GLOBAL(0x058b2e00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb6fc0 over the target block at 0x058b2e00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01388530()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01388530

// auto_copy_block_013895f0: misc_copy_block_58b3240 with other addresses.
namespace twin_013895f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2e40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7070, source_block, CopiedBlock);
RT_GLOBAL(0x058b2e40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7070 over the target block at 0x058b2e40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013895f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013895f0

// auto_copy_block_013897e0: misc_copy_block_58b3240 with other addresses.
namespace twin_013897e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2e80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7220, source_block, CopiedBlock);
RT_GLOBAL(0x058b2e80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7220 over the target block at 0x058b2e80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013897e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013897e0

// auto_copy_block_01389f60: misc_copy_block_58b3240 with other addresses.
namespace twin_01389f60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2ec0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7360, source_block, CopiedBlock);
RT_GLOBAL(0x058b2ec0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7360 over the target block at 0x058b2ec0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01389f60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01389f60

// auto_copy_block_0138a650: misc_copy_block_58b3240 with other addresses.
namespace twin_0138a650 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2f00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7480, source_block, CopiedBlock);
RT_GLOBAL(0x058b2f00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7480 over the target block at 0x058b2f00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0138a650()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0138a650

// auto_copy_block_0138bfb0: misc_copy_block_58b3240 with other addresses.
namespace twin_0138bfb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b2fc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7740, source_block, CopiedBlock);
RT_GLOBAL(0x058b2fc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7740 over the target block at 0x058b2fc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0138bfb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0138bfb0

// auto_copy_block_0138c080: misc_copy_block_58b3240 with other addresses.
namespace twin_0138c080 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3000.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb77e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3000, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb77e0 over the target block at 0x058b3000.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0138c080()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0138c080

// auto_copy_block_0138c800: misc_copy_block_58b3240 with other addresses.
namespace twin_0138c800 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3040.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7880, source_block, CopiedBlock);
RT_GLOBAL(0x058b3040, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7880 over the target block at 0x058b3040.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0138c800()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0138c800

// auto_copy_block_0138cab0: misc_copy_block_58b3240 with other addresses.
namespace twin_0138cab0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3080.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7960, source_block, CopiedBlock);
RT_GLOBAL(0x058b3080, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7960 over the target block at 0x058b3080.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0138cab0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0138cab0

// auto_copy_block_01391460: misc_copy_block_58b3240 with other addresses.
namespace twin_01391460 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b30c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7a00, source_block, CopiedBlock);
RT_GLOBAL(0x058b30c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7a00 over the target block at 0x058b30c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01391460()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01391460

// auto_copy_block_013937d0: misc_copy_block_58b3240 with other addresses.
namespace twin_013937d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3100.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7ce0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3100, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7ce0 over the target block at 0x058b3100.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013937d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013937d0

// auto_copy_block_013958e0: misc_copy_block_58b3240 with other addresses.
namespace twin_013958e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3140.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb7e30, source_block, CopiedBlock);
RT_GLOBAL(0x058b3140, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb7e30 over the target block at 0x058b3140.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013958e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013958e0

// auto_copy_block_013959f0: misc_copy_block_58b3240 with other addresses.
namespace twin_013959f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3180.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb8380, source_block, CopiedBlock);
RT_GLOBAL(0x058b3180, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb8380 over the target block at 0x058b3180.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013959f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013959f0

// auto_copy_block_01396120: misc_copy_block_58b3240 with other addresses.
namespace twin_01396120 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b31c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb8450, source_block, CopiedBlock);
RT_GLOBAL(0x058b31c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb8450 over the target block at 0x058b31c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01396120()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01396120

// auto_copy_block_01398540: misc_copy_block_58b3240 with other addresses.
namespace twin_01398540 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3200.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb8570, source_block, CopiedBlock);
RT_GLOBAL(0x058b3200, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb8570 over the target block at 0x058b3200.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01398540()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01398540

// auto_copy_block_013995e0: misc_copy_block_58b3240 with other addresses.
namespace twin_013995e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3280.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb89d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3280, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb89d0 over the target block at 0x058b3280.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013995e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013995e0

// auto_copy_block_0139a030: misc_copy_block_58b3240 with other addresses.
namespace twin_0139a030 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b32c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb8aa0, source_block, CopiedBlock);
RT_GLOBAL(0x058b32c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb8aa0 over the target block at 0x058b32c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0139a030()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0139a030

// auto_copy_block_0139c160: misc_copy_block_58b3240 with other addresses.
namespace twin_0139c160 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3400.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb9020, source_block, CopiedBlock);
RT_GLOBAL(0x058b3400, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb9020 over the target block at 0x058b3400.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0139c160()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0139c160

// auto_copy_block_0139c3a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0139c3a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3440.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb9160, source_block, CopiedBlock);
RT_GLOBAL(0x058b3440, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb9160 over the target block at 0x058b3440.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0139c3a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0139c3a0

// auto_copy_block_0139c6b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0139c6b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3480.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb9210, source_block, CopiedBlock);
RT_GLOBAL(0x058b3480, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb9210 over the target block at 0x058b3480.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0139c6b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0139c6b0

// auto_copy_block_0139c800: misc_copy_block_58b3240 with other addresses.
namespace twin_0139c800 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b34c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb9350, source_block, CopiedBlock);
RT_GLOBAL(0x058b34c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb9350 over the target block at 0x058b34c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0139c800()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0139c800

// auto_copy_block_0139cc30: misc_copy_block_58b3240 with other addresses.
namespace twin_0139cc30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb9400, source_block, CopiedBlock);
RT_GLOBAL(0x058b3500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb9400 over the target block at 0x058b3500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0139cc30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0139cc30

// auto_copy_block_0139f760: misc_copy_block_58b3240 with other addresses.
namespace twin_0139f760 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3540.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb9580, source_block, CopiedBlock);
RT_GLOBAL(0x058b3540, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb9580 over the target block at 0x058b3540.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0139f760()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0139f760

// auto_copy_block_013a4c60: misc_copy_block_58b3240 with other addresses.
namespace twin_013a4c60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb9770, source_block, CopiedBlock);
RT_GLOBAL(0x058b3580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb9770 over the target block at 0x058b3580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013a4c60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013a4c60

// auto_copy_block_013a50c0: misc_copy_block_58b3240 with other addresses.
namespace twin_013a50c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b35c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cba260, source_block, CopiedBlock);
RT_GLOBAL(0x058b35c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cba260 over the target block at 0x058b35c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013a50c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013a50c0

// auto_copy_block_013a64e0: misc_copy_block_58b3240 with other addresses.
namespace twin_013a64e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3600.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cba300, source_block, CopiedBlock);
RT_GLOBAL(0x058b3600, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cba300 over the target block at 0x058b3600.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013a64e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013a64e0

// auto_copy_block_013a6610: misc_copy_block_58b3240 with other addresses.
namespace twin_013a6610 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3640.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cba550, source_block, CopiedBlock);
RT_GLOBAL(0x058b3640, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cba550 over the target block at 0x058b3640.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013a6610()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013a6610

// auto_copy_block_013a7530: misc_copy_block_58b3240 with other addresses.
namespace twin_013a7530 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3680.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cba610, source_block, CopiedBlock);
RT_GLOBAL(0x058b3680, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cba610 over the target block at 0x058b3680.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013a7530()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013a7530

// auto_copy_block_013a7a70: misc_copy_block_58b3240 with other addresses.
namespace twin_013a7a70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b36c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cba820, source_block, CopiedBlock);
RT_GLOBAL(0x058b36c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cba820 over the target block at 0x058b36c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013a7a70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013a7a70

// auto_copy_block_013a8110: misc_copy_block_58b3240 with other addresses.
namespace twin_013a8110 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3700.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cba8c0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3700, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cba8c0 over the target block at 0x058b3700.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013a8110()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013a8110

// auto_copy_block_013aa9f0: misc_copy_block_58b3240 with other addresses.
namespace twin_013aa9f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3780.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbaab0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3780, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbaab0 over the target block at 0x058b3780.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013aa9f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013aa9f0

// auto_copy_block_013ab5c0: misc_copy_block_58b3240 with other addresses.
namespace twin_013ab5c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b37c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbaca0, source_block, CopiedBlock);
RT_GLOBAL(0x058b37c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbaca0 over the target block at 0x058b37c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013ab5c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013ab5c0

// auto_copy_block_013ad140: misc_copy_block_58b3240 with other addresses.
namespace twin_013ad140 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3800.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbadf0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3800, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbadf0 over the target block at 0x058b3800.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013ad140()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013ad140

// auto_copy_block_013aea20: misc_copy_block_58b3240 with other addresses.
namespace twin_013aea20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3840.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbaee0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3840, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbaee0 over the target block at 0x058b3840.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013aea20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013aea20

// auto_copy_block_013af3c0: misc_copy_block_58b3240 with other addresses.
namespace twin_013af3c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3880.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbb030, source_block, CopiedBlock);
RT_GLOBAL(0x058b3880, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbb030 over the target block at 0x058b3880.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013af3c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013af3c0

// auto_copy_block_013af850: misc_copy_block_58b3240 with other addresses.
namespace twin_013af850 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b38c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbb0d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b38c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbb0d0 over the target block at 0x058b38c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013af850()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013af850

// auto_copy_block_013b0120: misc_copy_block_58b3240 with other addresses.
namespace twin_013b0120 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3900.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbb260, source_block, CopiedBlock);
RT_GLOBAL(0x058b3900, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbb260 over the target block at 0x058b3900.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b0120()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b0120

// auto_copy_block_013b1bf0: misc_copy_block_58b3240 with other addresses.
namespace twin_013b1bf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3940.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbb3f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3940, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbb3f0 over the target block at 0x058b3940.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b1bf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b1bf0

// auto_copy_block_013b2eb0: misc_copy_block_58b3240 with other addresses.
namespace twin_013b2eb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbb870, source_block, CopiedBlock);
RT_GLOBAL(0x058b3980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbb870 over the target block at 0x058b3980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b2eb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b2eb0

// auto_copy_block_013b34c0: misc_copy_block_58b3240 with other addresses.
namespace twin_013b34c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b39c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbb920, source_block, CopiedBlock);
RT_GLOBAL(0x058b39c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbb920 over the target block at 0x058b39c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b34c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b34c0

// auto_copy_block_013b47c0: misc_copy_block_58b3240 with other addresses.
namespace twin_013b47c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3a00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbb9c0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3a00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbb9c0 over the target block at 0x058b3a00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b47c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b47c0

// auto_copy_block_013b4de0: misc_copy_block_58b3240 with other addresses.
namespace twin_013b4de0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3a40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbbb40, source_block, CopiedBlock);
RT_GLOBAL(0x058b3a40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbbb40 over the target block at 0x058b3a40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b4de0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b4de0

// auto_copy_block_013b5040: misc_copy_block_58b3240 with other addresses.
namespace twin_013b5040 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3a80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbbbe0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3a80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbbbe0 over the target block at 0x058b3a80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b5040()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b5040

// auto_copy_block_013b5400: misc_copy_block_58b3240 with other addresses.
namespace twin_013b5400 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3ac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbbc80, source_block, CopiedBlock);
RT_GLOBAL(0x058b3ac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbbc80 over the target block at 0x058b3ac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b5400()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b5400

// auto_copy_block_013b6060: misc_copy_block_58b3240 with other addresses.
namespace twin_013b6060 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3b00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbbd40, source_block, CopiedBlock);
RT_GLOBAL(0x058b3b00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbbd40 over the target block at 0x058b3b00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b6060()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b6060

// auto_copy_block_013b89b0: misc_copy_block_58b3240 with other addresses.
namespace twin_013b89b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3b40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbbe00, source_block, CopiedBlock);
RT_GLOBAL(0x058b3b40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbbe00 over the target block at 0x058b3b40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b89b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b89b0

// auto_copy_block_013b92b0: misc_copy_block_58b3240 with other addresses.
namespace twin_013b92b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3b80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbc000, source_block, CopiedBlock);
RT_GLOBAL(0x058b3b80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbc000 over the target block at 0x058b3b80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b92b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b92b0

// auto_copy_block_013b9880: misc_copy_block_58b3240 with other addresses.
namespace twin_013b9880 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3bc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbc3c0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3bc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbc3c0 over the target block at 0x058b3bc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013b9880()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013b9880

// auto_copy_block_013ba5e0: misc_copy_block_58b3240 with other addresses.
namespace twin_013ba5e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3c00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbc4e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3c00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbc4e0 over the target block at 0x058b3c00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013ba5e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013ba5e0

// auto_copy_block_013bc050: misc_copy_block_58b3240 with other addresses.
namespace twin_013bc050 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3c40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbc800, source_block, CopiedBlock);
RT_GLOBAL(0x058b3c40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbc800 over the target block at 0x058b3c40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013bc050()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013bc050

// auto_copy_block_013bc190: misc_copy_block_58b3240 with other addresses.
namespace twin_013bc190 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3c80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbcbe0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3c80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbcbe0 over the target block at 0x058b3c80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013bc190()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013bc190

// auto_copy_block_013bc2b0: misc_copy_block_58b3240 with other addresses.
namespace twin_013bc2b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3cc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbcc80, source_block, CopiedBlock);
RT_GLOBAL(0x058b3cc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbcc80 over the target block at 0x058b3cc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013bc2b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013bc2b0

// auto_copy_block_013bc6f0: misc_copy_block_58b3240 with other addresses.
namespace twin_013bc6f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3d00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbcd20, source_block, CopiedBlock);
RT_GLOBAL(0x058b3d00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbcd20 over the target block at 0x058b3d00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013bc6f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013bc6f0

// auto_copy_block_013bdf10: misc_copy_block_58b3240 with other addresses.
namespace twin_013bdf10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3d40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbcdd0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3d40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbcdd0 over the target block at 0x058b3d40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013bdf10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013bdf10

// auto_copy_block_013be940: misc_copy_block_58b3240 with other addresses.
namespace twin_013be940 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3d80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbceb0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3d80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbceb0 over the target block at 0x058b3d80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013be940()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013be940

// auto_copy_block_013bec30: misc_copy_block_58b3240 with other addresses.
namespace twin_013bec30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3dc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbcf90, source_block, CopiedBlock);
RT_GLOBAL(0x058b3dc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbcf90 over the target block at 0x058b3dc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013bec30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013bec30

// auto_copy_block_013bed70: misc_copy_block_58b3240 with other addresses.
namespace twin_013bed70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3e00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbd030, source_block, CopiedBlock);
RT_GLOBAL(0x058b3e00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbd030 over the target block at 0x058b3e00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013bed70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013bed70

// auto_copy_block_013bef30: misc_copy_block_58b3240 with other addresses.
namespace twin_013bef30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3e40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbd0d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3e40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbd0d0 over the target block at 0x058b3e40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013bef30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013bef30

// auto_copy_block_013bfa30: misc_copy_block_58b3240 with other addresses.
namespace twin_013bfa30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3e80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbd170, source_block, CopiedBlock);
RT_GLOBAL(0x058b3e80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbd170 over the target block at 0x058b3e80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013bfa30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013bfa30

// auto_copy_block_013c3140: misc_copy_block_58b3240 with other addresses.
namespace twin_013c3140 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3f70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbd520, source_block, CopiedBlock);
RT_GLOBAL(0x058b3f70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbd520 over the target block at 0x058b3f70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013c3140()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013c3140

// auto_copy_block_013c3990: misc_copy_block_58b3240 with other addresses.
namespace twin_013c3990 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3fb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbd720, source_block, CopiedBlock);
RT_GLOBAL(0x058b3fb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbd720 over the target block at 0x058b3fb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013c3990()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013c3990

// auto_copy_block_013c3e30: misc_copy_block_58b3240 with other addresses.
namespace twin_013c3e30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3ff0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbd8b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b3ff0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbd8b0 over the target block at 0x058b3ff0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013c3e30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013c3e30

// auto_copy_block_013c6fc0: misc_copy_block_58b3240 with other addresses.
namespace twin_013c6fc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b40b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbdc50, source_block, CopiedBlock);
RT_GLOBAL(0x058b40b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbdc50 over the target block at 0x058b40b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013c6fc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013c6fc0

// auto_copy_block_013ce240: misc_copy_block_58b3240 with other addresses.
namespace twin_013ce240 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4250.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbe6c0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4250, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbe6c0 over the target block at 0x058b4250.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013ce240()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013ce240

// auto_copy_block_013ce590: misc_copy_block_58b3240 with other addresses.
namespace twin_013ce590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4290.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbe770, source_block, CopiedBlock);
RT_GLOBAL(0x058b4290, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbe770 over the target block at 0x058b4290.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013ce590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013ce590

// auto_copy_block_013d1c70: misc_copy_block_58b3240 with other addresses.
namespace twin_013d1c70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4570.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbf150, source_block, CopiedBlock);
RT_GLOBAL(0x058b4570, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbf150 over the target block at 0x058b4570.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d1c70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d1c70

// auto_copy_block_013d1f80: misc_copy_block_58b3240 with other addresses.
namespace twin_013d1f80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b45c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbf230, source_block, CopiedBlock);
RT_GLOBAL(0x058b45c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbf230 over the target block at 0x058b45c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d1f80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d1f80

// auto_copy_block_013d2240: misc_copy_block_58b3240 with other addresses.
namespace twin_013d2240 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4600.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbf360, source_block, CopiedBlock);
RT_GLOBAL(0x058b4600, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbf360 over the target block at 0x058b4600.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d2240()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d2240

// auto_copy_block_013d2350: misc_copy_block_58b3240 with other addresses.
namespace twin_013d2350 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4640.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbf400, source_block, CopiedBlock);
RT_GLOBAL(0x058b4640, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbf400 over the target block at 0x058b4640.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d2350()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d2350

// auto_copy_block_013d2530: misc_copy_block_58b3240 with other addresses.
namespace twin_013d2530 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4680.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbf4a0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4680, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbf4a0 over the target block at 0x058b4680.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d2530()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d2530

// auto_copy_block_013d2d70: misc_copy_block_58b3240 with other addresses.
namespace twin_013d2d70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b46c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbf540, source_block, CopiedBlock);
RT_GLOBAL(0x058b46c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbf540 over the target block at 0x058b46c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d2d70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d2d70

// auto_copy_block_013d3840: misc_copy_block_58b3240 with other addresses.
namespace twin_013d3840 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4700.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbf5e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4700, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbf5e0 over the target block at 0x058b4700.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d3840()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d3840

// auto_copy_block_013d4ba0: misc_copy_block_58b3240 with other addresses.
namespace twin_013d4ba0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4740.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbf6c0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4740, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbf6c0 over the target block at 0x058b4740.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d4ba0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d4ba0

// auto_copy_block_013d6550: misc_copy_block_58b3240 with other addresses.
namespace twin_013d6550 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4780.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbf8b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4780, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbf8b0 over the target block at 0x058b4780.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d6550()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d6550

// auto_copy_block_013d6bc0: misc_copy_block_58b3240 with other addresses.
namespace twin_013d6bc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b47c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbfac0, source_block, CopiedBlock);
RT_GLOBAL(0x058b47c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbfac0 over the target block at 0x058b47c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013d6bc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013d6bc0

// auto_copy_block_013da780: misc_copy_block_58b3240 with other addresses.
namespace twin_013da780 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4800.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cbff20, source_block, CopiedBlock);
RT_GLOBAL(0x058b4800, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cbff20 over the target block at 0x058b4800.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013da780()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013da780

// auto_copy_block_013daed0: misc_copy_block_58b3240 with other addresses.
namespace twin_013daed0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4840.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc04f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4840, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc04f0 over the target block at 0x058b4840.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013daed0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013daed0

// auto_copy_block_013dc150: misc_copy_block_58b3240 with other addresses.
namespace twin_013dc150 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc0950, source_block, CopiedBlock);
RT_GLOBAL(0x058b4980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc0950 over the target block at 0x058b4980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013dc150()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013dc150

// auto_copy_block_013dcac0: misc_copy_block_58b3240 with other addresses.
namespace twin_013dcac0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4a00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc0ad0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4a00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc0ad0 over the target block at 0x058b4a00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013dcac0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013dcac0

// auto_copy_block_013de4c0: misc_copy_block_58b3240 with other addresses.
namespace twin_013de4c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4a40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc0c80, source_block, CopiedBlock);
RT_GLOBAL(0x058b4a40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc0c80 over the target block at 0x058b4a40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013de4c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013de4c0

// auto_copy_block_013dec80: misc_copy_block_58b3240 with other addresses.
namespace twin_013dec80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4a80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc0d30, source_block, CopiedBlock);
RT_GLOBAL(0x058b4a80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc0d30 over the target block at 0x058b4a80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013dec80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013dec80

// auto_copy_block_013df060: misc_copy_block_58b3240 with other addresses.
namespace twin_013df060 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4ac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc0df0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4ac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc0df0 over the target block at 0x058b4ac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013df060()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013df060

// auto_copy_block_013df4d0: misc_copy_block_58b3240 with other addresses.
namespace twin_013df4d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4b00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc0e90, source_block, CopiedBlock);
RT_GLOBAL(0x058b4b00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc0e90 over the target block at 0x058b4b00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013df4d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013df4d0

// auto_copy_block_013df6e0: misc_copy_block_58b3240 with other addresses.
namespace twin_013df6e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4b40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc0f70, source_block, CopiedBlock);
RT_GLOBAL(0x058b4b40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc0f70 over the target block at 0x058b4b40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013df6e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013df6e0

// auto_copy_block_013dfef0: misc_copy_block_58b3240 with other addresses.
namespace twin_013dfef0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4b80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc1010, source_block, CopiedBlock);
RT_GLOBAL(0x058b4b80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc1010 over the target block at 0x058b4b80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013dfef0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013dfef0

// auto_copy_block_013e0390: misc_copy_block_58b3240 with other addresses.
namespace twin_013e0390 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4bc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc10c0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4bc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc10c0 over the target block at 0x058b4bc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e0390()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e0390

// auto_copy_block_013e0870: misc_copy_block_58b3240 with other addresses.
namespace twin_013e0870 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4c00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc1170, source_block, CopiedBlock);
RT_GLOBAL(0x058b4c00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc1170 over the target block at 0x058b4c00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e0870()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e0870

// auto_copy_block_013e0a70: misc_copy_block_58b3240 with other addresses.
namespace twin_013e0a70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4c40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc12e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4c40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc12e0 over the target block at 0x058b4c40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e0a70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e0a70

// auto_copy_block_013e0ba0: misc_copy_block_58b3240 with other addresses.
namespace twin_013e0ba0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4c80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc1380, source_block, CopiedBlock);
RT_GLOBAL(0x058b4c80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc1380 over the target block at 0x058b4c80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e0ba0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e0ba0

// auto_copy_block_013e2010: misc_copy_block_58b3240 with other addresses.
namespace twin_013e2010 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4dc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc1790, source_block, CopiedBlock);
RT_GLOBAL(0x058b4dc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc1790 over the target block at 0x058b4dc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e2010()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e2010

// auto_copy_block_013e2660: misc_copy_block_58b3240 with other addresses.
namespace twin_013e2660 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4e00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc1840, source_block, CopiedBlock);
RT_GLOBAL(0x058b4e00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc1840 over the target block at 0x058b4e00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e2660()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e2660

// auto_copy_block_013e2950: misc_copy_block_58b3240 with other addresses.
namespace twin_013e2950 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b4e40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc18e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b4e40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc18e0 over the target block at 0x058b4e40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e2950()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e2950

// auto_copy_block_013e38c0: misc_copy_block_58b3240 with other addresses.
namespace twin_013e38c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b5c80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc1a90, source_block, CopiedBlock);
RT_GLOBAL(0x058b5c80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc1a90 over the target block at 0x058b5c80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e38c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e38c0

// auto_copy_block_013e3a70: misc_copy_block_58b3240 with other addresses.
namespace twin_013e3a70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b5cc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc1b40, source_block, CopiedBlock);
RT_GLOBAL(0x058b5cc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc1b40 over the target block at 0x058b5cc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e3a70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e3a70

// auto_copy_block_013e4a50: misc_copy_block_58b3240 with other addresses.
namespace twin_013e4a50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b5d50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc1cc0, source_block, CopiedBlock);
RT_GLOBAL(0x058b5d50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc1cc0 over the target block at 0x058b5d50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e4a50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e4a50

// auto_copy_block_013e5bd0: misc_copy_block_58b3240 with other addresses.
namespace twin_013e5bd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b5d90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc1fe0, source_block, CopiedBlock);
RT_GLOBAL(0x058b5d90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc1fe0 over the target block at 0x058b5d90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e5bd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e5bd0

// auto_copy_block_013e5ce0: misc_copy_block_58b3240 with other addresses.
namespace twin_013e5ce0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b5dd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc21d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b5dd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc21d0 over the target block at 0x058b5dd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e5ce0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e5ce0

// auto_copy_block_013e6790: misc_copy_block_58b3240 with other addresses.
namespace twin_013e6790 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b5e10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc2270, source_block, CopiedBlock);
RT_GLOBAL(0x058b5e10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc2270 over the target block at 0x058b5e10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e6790()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e6790

// auto_copy_block_013e6e50: misc_copy_block_58b3240 with other addresses.
namespace twin_013e6e50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b5e50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc2350, source_block, CopiedBlock);
RT_GLOBAL(0x058b5e50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc2350 over the target block at 0x058b5e50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e6e50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e6e50

// auto_copy_block_013e9e30: misc_copy_block_58b3240 with other addresses.
namespace twin_013e9e30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b5fd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc2800, source_block, CopiedBlock);
RT_GLOBAL(0x058b5fd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc2800 over the target block at 0x058b5fd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e9e30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e9e30

// auto_copy_block_013e9f80: misc_copy_block_58b3240 with other addresses.
namespace twin_013e9f80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6010.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc2a60, source_block, CopiedBlock);
RT_GLOBAL(0x058b6010, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc2a60 over the target block at 0x058b6010.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013e9f80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013e9f80

// auto_copy_block_013f21d0: misc_copy_block_58b3240 with other addresses.
namespace twin_013f21d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6510.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc3710, source_block, CopiedBlock);
RT_GLOBAL(0x058b6510, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc3710 over the target block at 0x058b6510.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013f21d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013f21d0

// auto_copy_block_013f4b80: misc_copy_block_58b3240 with other addresses.
namespace twin_013f4b80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6550.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc39d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6550, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc39d0 over the target block at 0x058b6550.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013f4b80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013f4b80

// auto_copy_block_013f5cc0: misc_copy_block_58b3240 with other addresses.
namespace twin_013f5cc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b65f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc3bd0, source_block, CopiedBlock);
RT_GLOBAL(0x058b65f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc3bd0 over the target block at 0x058b65f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013f5cc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013f5cc0

// auto_copy_block_014007d0: misc_copy_block_58b3240 with other addresses.
namespace twin_014007d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b67b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc4b50, source_block, CopiedBlock);
RT_GLOBAL(0x058b67b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc4b50 over the target block at 0x058b67b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014007d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014007d0

// auto_copy_block_014008f0: misc_copy_block_58b3240 with other addresses.
namespace twin_014008f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b67f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc4d50, source_block, CopiedBlock);
RT_GLOBAL(0x058b67f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc4d50 over the target block at 0x058b67f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014008f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014008f0

// auto_copy_block_01401590: misc_copy_block_58b3240 with other addresses.
namespace twin_01401590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6830.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc4e00, source_block, CopiedBlock);
RT_GLOBAL(0x058b6830, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc4e00 over the target block at 0x058b6830.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01401590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01401590

// auto_copy_block_01401bb0: misc_copy_block_58b3240 with other addresses.
namespace twin_01401bb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6880.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc4ea0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6880, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc4ea0 over the target block at 0x058b6880.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01401bb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01401bb0

// auto_copy_block_01401ec0: misc_copy_block_58b3240 with other addresses.
namespace twin_01401ec0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b68c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc50a0, source_block, CopiedBlock);
RT_GLOBAL(0x058b68c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc50a0 over the target block at 0x058b68c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01401ec0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01401ec0

// auto_copy_block_01402040: misc_copy_block_58b3240 with other addresses.
namespace twin_01402040 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6900.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5140, source_block, CopiedBlock);
RT_GLOBAL(0x058b6900, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5140 over the target block at 0x058b6900.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01402040()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01402040

// auto_copy_block_014038a0: misc_copy_block_58b3240 with other addresses.
namespace twin_014038a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6940.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc51e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6940, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc51e0 over the target block at 0x058b6940.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014038a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014038a0

// auto_copy_block_0140a830: misc_copy_block_58b3240 with other addresses.
namespace twin_0140a830 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5290, source_block, CopiedBlock);
RT_GLOBAL(0x058b6980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5290 over the target block at 0x058b6980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140a830()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140a830

// auto_copy_block_0140b4a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0140b4a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b69c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5340, source_block, CopiedBlock);
RT_GLOBAL(0x058b69c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5340 over the target block at 0x058b69c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140b4a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140b4a0

// auto_copy_block_0140b7a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0140b7a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6a00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc53f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6a00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc53f0 over the target block at 0x058b6a00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140b7a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140b7a0

// auto_copy_block_0140cf20: misc_copy_block_58b3240 with other addresses.
namespace twin_0140cf20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6aa0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc55e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6aa0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc55e0 over the target block at 0x058b6aa0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140cf20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140cf20

// auto_copy_block_0140d390: misc_copy_block_58b3240 with other addresses.
namespace twin_0140d390 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6ae0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5680, source_block, CopiedBlock);
RT_GLOBAL(0x058b6ae0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5680 over the target block at 0x058b6ae0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140d390()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140d390

// auto_copy_block_0140df80: misc_copy_block_58b3240 with other addresses.
namespace twin_0140df80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6b20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5720, source_block, CopiedBlock);
RT_GLOBAL(0x058b6b20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5720 over the target block at 0x058b6b20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140df80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140df80

// auto_copy_block_0140eae0: misc_copy_block_58b3240 with other addresses.
namespace twin_0140eae0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6b60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc57c0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6b60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc57c0 over the target block at 0x058b6b60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140eae0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140eae0

// auto_copy_block_0140f120: misc_copy_block_58b3240 with other addresses.
namespace twin_0140f120 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6ba0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5890, source_block, CopiedBlock);
RT_GLOBAL(0x058b6ba0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5890 over the target block at 0x058b6ba0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140f120()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140f120

// auto_copy_block_0140f650: misc_copy_block_58b3240 with other addresses.
namespace twin_0140f650 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6be0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5980, source_block, CopiedBlock);
RT_GLOBAL(0x058b6be0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5980 over the target block at 0x058b6be0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140f650()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140f650

// auto_copy_block_0140f720: misc_copy_block_58b3240 with other addresses.
namespace twin_0140f720 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6c20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5a20, source_block, CopiedBlock);
RT_GLOBAL(0x058b6c20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5a20 over the target block at 0x058b6c20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140f720()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140f720

// auto_copy_block_0140fda0: misc_copy_block_58b3240 with other addresses.
namespace twin_0140fda0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6c60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5ac0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6c60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5ac0 over the target block at 0x058b6c60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0140fda0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0140fda0

// auto_copy_block_014100c0: misc_copy_block_58b3240 with other addresses.
namespace twin_014100c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6ca0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5c60, source_block, CopiedBlock);
RT_GLOBAL(0x058b6ca0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5c60 over the target block at 0x058b6ca0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014100c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014100c0

// auto_copy_block_014107e0: misc_copy_block_58b3240 with other addresses.
namespace twin_014107e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6ce0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5d00, source_block, CopiedBlock);
RT_GLOBAL(0x058b6ce0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5d00 over the target block at 0x058b6ce0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014107e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014107e0

// auto_copy_block_01411520: misc_copy_block_58b3240 with other addresses.
namespace twin_01411520 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6d20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5e50, source_block, CopiedBlock);
RT_GLOBAL(0x058b6d20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5e50 over the target block at 0x058b6d20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01411520()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01411520

// auto_copy_block_01411a70: misc_copy_block_58b3240 with other addresses.
namespace twin_01411a70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6d60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5f10, source_block, CopiedBlock);
RT_GLOBAL(0x058b6d60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5f10 over the target block at 0x058b6d60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01411a70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01411a70

// auto_copy_block_014124c0: misc_copy_block_58b3240 with other addresses.
namespace twin_014124c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6da0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc5fb0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6da0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc5fb0 over the target block at 0x058b6da0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014124c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014124c0

// auto_copy_block_01412e80: misc_copy_block_58b3240 with other addresses.
namespace twin_01412e80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6de0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc6160, source_block, CopiedBlock);
RT_GLOBAL(0x058b6de0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc6160 over the target block at 0x058b6de0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01412e80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01412e80

// auto_copy_block_014175c0: misc_copy_block_58b3240 with other addresses.
namespace twin_014175c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6e30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc64b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6e30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc64b0 over the target block at 0x058b6e30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014175c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014175c0

// auto_copy_block_01417ab0: misc_copy_block_58b3240 with other addresses.
namespace twin_01417ab0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6e70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc68f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6e70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc68f0 over the target block at 0x058b6e70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01417ab0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01417ab0

// auto_copy_block_01418260: misc_copy_block_58b3240 with other addresses.
namespace twin_01418260 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6eb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc6a90, source_block, CopiedBlock);
RT_GLOBAL(0x058b6eb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc6a90 over the target block at 0x058b6eb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01418260()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01418260

// auto_copy_block_0141a320: misc_copy_block_58b3240 with other addresses.
namespace twin_0141a320 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6ef0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc6b40, source_block, CopiedBlock);
RT_GLOBAL(0x058b6ef0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc6b40 over the target block at 0x058b6ef0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141a320()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141a320

// auto_copy_block_0141a5f0: misc_copy_block_58b3240 with other addresses.
namespace twin_0141a5f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6f30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc6ea0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6f30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc6ea0 over the target block at 0x058b6f30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141a5f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141a5f0

// auto_copy_block_0141bc20: misc_copy_block_58b3240 with other addresses.
namespace twin_0141bc20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6f70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc6f90, source_block, CopiedBlock);
RT_GLOBAL(0x058b6f70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc6f90 over the target block at 0x058b6f70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141bc20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141bc20

// auto_copy_block_0141bdd0: misc_copy_block_58b3240 with other addresses.
namespace twin_0141bdd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6fb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc71d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b6fb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc71d0 over the target block at 0x058b6fb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141bdd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141bdd0

// auto_copy_block_0141c030: misc_copy_block_58b3240 with other addresses.
namespace twin_0141c030 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b6ff0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc7270, source_block, CopiedBlock);
RT_GLOBAL(0x058b6ff0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc7270 over the target block at 0x058b6ff0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141c030()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141c030

// auto_copy_block_0141d010: misc_copy_block_58b3240 with other addresses.
namespace twin_0141d010 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7130.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc76b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b7130, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc76b0 over the target block at 0x058b7130.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141d010()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141d010

// auto_copy_block_0141db00: misc_copy_block_58b3240 with other addresses.
namespace twin_0141db00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7230.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc79f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b7230, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc79f0 over the target block at 0x058b7230.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141db00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141db00

// auto_copy_block_0141dcd0: misc_copy_block_58b3240 with other addresses.
namespace twin_0141dcd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7270.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc7a90, source_block, CopiedBlock);
RT_GLOBAL(0x058b7270, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc7a90 over the target block at 0x058b7270.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141dcd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141dcd0

// auto_copy_block_0141e3b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0141e3b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b72b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc7b30, source_block, CopiedBlock);
RT_GLOBAL(0x058b72b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc7b30 over the target block at 0x058b72b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141e3b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141e3b0

// auto_copy_block_0141f110: misc_copy_block_58b3240 with other addresses.
namespace twin_0141f110 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b72f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc7bf0, source_block, CopiedBlock);
RT_GLOBAL(0x058b72f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc7bf0 over the target block at 0x058b72f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141f110()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141f110

// auto_copy_block_0141f570: misc_copy_block_58b3240 with other addresses.
namespace twin_0141f570 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7330.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc7ed0, source_block, CopiedBlock);
RT_GLOBAL(0x058b7330, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc7ed0 over the target block at 0x058b7330.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0141f570()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0141f570

// auto_copy_block_01425ff0: misc_copy_block_58b3240 with other addresses.
namespace twin_01425ff0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b74b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc8c10, source_block, CopiedBlock);
RT_GLOBAL(0x058b74b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc8c10 over the target block at 0x058b74b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01425ff0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01425ff0

// auto_copy_block_01426cb0: misc_copy_block_58b3240 with other addresses.
namespace twin_01426cb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b74f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc8d30, source_block, CopiedBlock);
RT_GLOBAL(0x058b74f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc8d30 over the target block at 0x058b74f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01426cb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01426cb0

// auto_copy_block_01426e30: misc_copy_block_58b3240 with other addresses.
namespace twin_01426e30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7530.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc8e70, source_block, CopiedBlock);
RT_GLOBAL(0x058b7530, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc8e70 over the target block at 0x058b7530.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01426e30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01426e30

// auto_copy_block_01427590: misc_copy_block_58b3240 with other addresses.
namespace twin_01427590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7570.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc8fc0, source_block, CopiedBlock);
RT_GLOBAL(0x058b7570, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc8fc0 over the target block at 0x058b7570.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01427590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01427590

// auto_copy_block_01432a50: misc_copy_block_58b3240 with other addresses.
namespace twin_01432a50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7640.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc9960, source_block, CopiedBlock);
RT_GLOBAL(0x058b7640, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc9960 over the target block at 0x058b7640.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01432a50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01432a50

// auto_copy_block_01432b40: misc_copy_block_58b3240 with other addresses.
namespace twin_01432b40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7680.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc9a00, source_block, CopiedBlock);
RT_GLOBAL(0x058b7680, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc9a00 over the target block at 0x058b7680.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01432b40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01432b40

// auto_copy_block_01432ca0: misc_copy_block_58b3240 with other addresses.
namespace twin_01432ca0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b76c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc9aa0, source_block, CopiedBlock);
RT_GLOBAL(0x058b76c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc9aa0 over the target block at 0x058b76c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01432ca0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01432ca0

// auto_copy_block_01433010: misc_copy_block_58b3240 with other addresses.
namespace twin_01433010 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7700.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc9b40, source_block, CopiedBlock);
RT_GLOBAL(0x058b7700, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc9b40 over the target block at 0x058b7700.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01433010()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01433010

// auto_copy_block_01433340: misc_copy_block_58b3240 with other addresses.
namespace twin_01433340 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7740.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc9c20, source_block, CopiedBlock);
RT_GLOBAL(0x058b7740, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc9c20 over the target block at 0x058b7740.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01433340()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01433340

// auto_copy_block_01433440: misc_copy_block_58b3240 with other addresses.
namespace twin_01433440 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7780.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc9cc0, source_block, CopiedBlock);
RT_GLOBAL(0x058b7780, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc9cc0 over the target block at 0x058b7780.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01433440()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01433440

// auto_copy_block_01433790: misc_copy_block_58b3240 with other addresses.
namespace twin_01433790 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b77c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc9d80, source_block, CopiedBlock);
RT_GLOBAL(0x058b77c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc9d80 over the target block at 0x058b77c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01433790()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01433790

// auto_copy_block_01433af0: misc_copy_block_58b3240 with other addresses.
namespace twin_01433af0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7800.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc9e40, source_block, CopiedBlock);
RT_GLOBAL(0x058b7800, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc9e40 over the target block at 0x058b7800.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01433af0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01433af0

// auto_copy_block_01434a10: misc_copy_block_58b3240 with other addresses.
namespace twin_01434a10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7840.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cc9fe0, source_block, CopiedBlock);
RT_GLOBAL(0x058b7840, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cc9fe0 over the target block at 0x058b7840.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01434a10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01434a10

// auto_copy_block_014359a0: misc_copy_block_58b3240 with other addresses.
namespace twin_014359a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7880.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cca280, source_block, CopiedBlock);
RT_GLOBAL(0x058b7880, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cca280 over the target block at 0x058b7880.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014359a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014359a0

// auto_copy_block_014369c0: misc_copy_block_58b3240 with other addresses.
namespace twin_014369c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b78c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cca470, source_block, CopiedBlock);
RT_GLOBAL(0x058b78c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cca470 over the target block at 0x058b78c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014369c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014369c0

// auto_copy_block_01439230: misc_copy_block_58b3240 with other addresses.
namespace twin_01439230 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7b00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccad90, source_block, CopiedBlock);
RT_GLOBAL(0x058b7b00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccad90 over the target block at 0x058b7b00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01439230()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01439230

// auto_copy_block_01439430: misc_copy_block_58b3240 with other addresses.
namespace twin_01439430 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7b40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccae60, source_block, CopiedBlock);
RT_GLOBAL(0x058b7b40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccae60 over the target block at 0x058b7b40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01439430()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01439430

// auto_copy_block_0143ba60: misc_copy_block_58b3240 with other addresses.
namespace twin_0143ba60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7b80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccaf20, source_block, CopiedBlock);
RT_GLOBAL(0x058b7b80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccaf20 over the target block at 0x058b7b80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143ba60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143ba60

// auto_copy_block_0143be80: misc_copy_block_58b3240 with other addresses.
namespace twin_0143be80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7bc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccb070, source_block, CopiedBlock);
RT_GLOBAL(0x058b7bc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccb070 over the target block at 0x058b7bc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143be80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143be80

// auto_copy_block_0143bfb0: misc_copy_block_58b3240 with other addresses.
namespace twin_0143bfb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7c00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccb150, source_block, CopiedBlock);
RT_GLOBAL(0x058b7c00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccb150 over the target block at 0x058b7c00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143bfb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143bfb0

// auto_copy_block_0143cea0: misc_copy_block_58b3240 with other addresses.
namespace twin_0143cea0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7c40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccb1f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b7c40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccb1f0 over the target block at 0x058b7c40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143cea0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143cea0

// auto_copy_block_0143d500: misc_copy_block_58b3240 with other addresses.
namespace twin_0143d500 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7c80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccb440, source_block, CopiedBlock);
RT_GLOBAL(0x058b7c80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccb440 over the target block at 0x058b7c80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143d500()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143d500

// auto_copy_block_0143d8a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0143d8a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7cc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccb580, source_block, CopiedBlock);
RT_GLOBAL(0x058b7cc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccb580 over the target block at 0x058b7cc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143d8a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143d8a0

// auto_copy_block_0143e170: misc_copy_block_58b3240 with other addresses.
namespace twin_0143e170 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7d00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccb630, source_block, CopiedBlock);
RT_GLOBAL(0x058b7d00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccb630 over the target block at 0x058b7d00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143e170()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143e170

// auto_copy_block_0143e5d0: misc_copy_block_58b3240 with other addresses.
namespace twin_0143e5d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7d40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccb6e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b7d40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccb6e0 over the target block at 0x058b7d40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143e5d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143e5d0

// auto_copy_block_0143f080: misc_copy_block_58b3240 with other addresses.
namespace twin_0143f080 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7d80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccb790, source_block, CopiedBlock);
RT_GLOBAL(0x058b7d80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccb790 over the target block at 0x058b7d80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143f080()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143f080

// auto_copy_block_0143f940: misc_copy_block_58b3240 with other addresses.
namespace twin_0143f940 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7dc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccb900, source_block, CopiedBlock);
RT_GLOBAL(0x058b7dc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccb900 over the target block at 0x058b7dc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0143f940()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0143f940

// auto_copy_block_01440640: misc_copy_block_58b3240 with other addresses.
namespace twin_01440640 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7e60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccbb20, source_block, CopiedBlock);
RT_GLOBAL(0x058b7e60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccbb20 over the target block at 0x058b7e60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01440640()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01440640
