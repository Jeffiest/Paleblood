// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_copy_block_58b3240, in game/misc/copy_block_58b3240.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_copy_block_012e1280: misc_copy_block_58b3240 with other addresses.
namespace twin_012e1280 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b08a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cad370, source_block, CopiedBlock);
RT_GLOBAL(0x058b08a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cad370 over the target block at 0x058b08a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012e1280()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012e1280

// auto_copy_block_012e2100: misc_copy_block_58b3240 with other addresses.
namespace twin_012e2100 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b08e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cad420, source_block, CopiedBlock);
RT_GLOBAL(0x058b08e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cad420 over the target block at 0x058b08e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012e2100()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012e2100

// auto_copy_block_012e3540: misc_copy_block_58b3240 with other addresses.
namespace twin_012e3540 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0920.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cad4d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b0920, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cad4d0 over the target block at 0x058b0920.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012e3540()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012e3540

// auto_copy_block_012e4fb0: misc_copy_block_58b3240 with other addresses.
namespace twin_012e4fb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0960.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cad590, source_block, CopiedBlock);
RT_GLOBAL(0x058b0960, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cad590 over the target block at 0x058b0960.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012e4fb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012e4fb0

// auto_copy_block_012e8150: misc_copy_block_58b3240 with other addresses.
namespace twin_012e8150 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b09c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cad940, source_block, CopiedBlock);
RT_GLOBAL(0x058b09c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cad940 over the target block at 0x058b09c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012e8150()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012e8150

// auto_copy_block_012ed010: misc_copy_block_58b3240 with other addresses.
namespace twin_012ed010 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0a00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cadb50, source_block, CopiedBlock);
RT_GLOBAL(0x058b0a00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cadb50 over the target block at 0x058b0a00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012ed010()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012ed010

// auto_copy_block_012f1850: misc_copy_block_58b3240 with other addresses.
namespace twin_012f1850 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0a40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cadc70, source_block, CopiedBlock);
RT_GLOBAL(0x058b0a40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cadc70 over the target block at 0x058b0a40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012f1850()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012f1850

// auto_copy_block_012f7e40: misc_copy_block_58b3240 with other addresses.
namespace twin_012f7e40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0a80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cadda0, source_block, CopiedBlock);
RT_GLOBAL(0x058b0a80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cadda0 over the target block at 0x058b0a80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012f7e40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012f7e40

// auto_copy_block_012fc620: misc_copy_block_58b3240 with other addresses.
namespace twin_012fc620 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0ac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cadea0, source_block, CopiedBlock);
RT_GLOBAL(0x058b0ac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cadea0 over the target block at 0x058b0ac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012fc620()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012fc620

// auto_copy_block_012fca90: misc_copy_block_58b3240 with other addresses.
namespace twin_012fca90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0b00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cadf20, source_block, CopiedBlock);
RT_GLOBAL(0x058b0b00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cadf20 over the target block at 0x058b0b00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012fca90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012fca90

// auto_copy_block_012fd7c0: misc_copy_block_58b3240 with other addresses.
namespace twin_012fd7c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0b40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cadfa0, source_block, CopiedBlock);
RT_GLOBAL(0x058b0b40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cadfa0 over the target block at 0x058b0b40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_012fd7c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_012fd7c0

// auto_copy_block_01312d80: misc_copy_block_58b3240 with other addresses.
namespace twin_01312d80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0b80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04caeac0, source_block, CopiedBlock);
RT_GLOBAL(0x058b0b80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04caeac0 over the target block at 0x058b0b80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01312d80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01312d80

// auto_copy_block_01316340: misc_copy_block_58b3240 with other addresses.
namespace twin_01316340 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0bd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04caed70, source_block, CopiedBlock);
RT_GLOBAL(0x058b0bd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04caed70 over the target block at 0x058b0bd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01316340()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01316340

// auto_copy_block_01316a50: misc_copy_block_58b3240 with other addresses.
namespace twin_01316a50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0c10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04caee40, source_block, CopiedBlock);
RT_GLOBAL(0x058b0c10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04caee40 over the target block at 0x058b0c10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01316a50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01316a50

// auto_copy_block_0131d8a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0131d8a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b0e60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04caf0b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b0e60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04caf0b0 over the target block at 0x058b0e60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0131d8a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0131d8a0

// auto_copy_block_0131f4a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0131f4a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1750.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04caf210, source_block, CopiedBlock);
RT_GLOBAL(0x058b1750, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04caf210 over the target block at 0x058b1750.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0131f4a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0131f4a0

// auto_copy_block_0131fc80: misc_copy_block_58b3240 with other addresses.
namespace twin_0131fc80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1790.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04caf2c0, source_block, CopiedBlock);
RT_GLOBAL(0x058b1790, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04caf2c0 over the target block at 0x058b1790.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0131fc80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0131fc80

// auto_copy_block_01320fe0: misc_copy_block_58b3240 with other addresses.
namespace twin_01320fe0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b17d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04caf390, source_block, CopiedBlock);
RT_GLOBAL(0x058b17d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04caf390 over the target block at 0x058b17d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01320fe0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01320fe0

// auto_copy_block_01324940: misc_copy_block_58b3240 with other addresses.
namespace twin_01324940 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1810.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04caf660, source_block, CopiedBlock);
RT_GLOBAL(0x058b1810, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04caf660 over the target block at 0x058b1810.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01324940()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01324940

// auto_copy_block_013280a0: misc_copy_block_58b3240 with other addresses.
namespace twin_013280a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1850.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04caf9f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b1850, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04caf9f0 over the target block at 0x058b1850.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_013280a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_013280a0

// auto_copy_block_01329d70: misc_copy_block_58b3240 with other addresses.
namespace twin_01329d70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1890.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cafac0, source_block, CopiedBlock);
RT_GLOBAL(0x058b1890, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cafac0 over the target block at 0x058b1890.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01329d70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01329d70

// auto_copy_block_0132a0a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0132a0a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b18d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cafb60, source_block, CopiedBlock);
RT_GLOBAL(0x058b18d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cafb60 over the target block at 0x058b18d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0132a0a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0132a0a0

// auto_copy_block_01332a90: misc_copy_block_58b3240 with other addresses.
namespace twin_01332a90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1910.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb00a0, source_block, CopiedBlock);
RT_GLOBAL(0x058b1910, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb00a0 over the target block at 0x058b1910.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01332a90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01332a90

// auto_copy_block_01337670: misc_copy_block_58b3240 with other addresses.
namespace twin_01337670 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1950.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb0310, source_block, CopiedBlock);
RT_GLOBAL(0x058b1950, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb0310 over the target block at 0x058b1950.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01337670()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01337670

// auto_copy_block_01338500: misc_copy_block_58b3240 with other addresses.
namespace twin_01338500 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b1990.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb03f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b1990, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb03f0 over the target block at 0x058b1990.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01338500()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01338500

// auto_copy_block_01627050: misc_copy_block_58b3240 with other addresses.
namespace twin_01627050 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941090.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce8720, source_block, CopiedBlock);
RT_GLOBAL(0x05941090, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce8720 over the target block at 0x05941090.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01627050()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01627050

// auto_copy_block_01631610: misc_copy_block_58b3240 with other addresses.
namespace twin_01631610 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941430.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce8e50, source_block, CopiedBlock);
RT_GLOBAL(0x05941430, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce8e50 over the target block at 0x05941430.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01631610()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01631610

// auto_copy_block_016323a0: misc_copy_block_58b3240 with other addresses.
namespace twin_016323a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941470.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce8f80, source_block, CopiedBlock);
RT_GLOBAL(0x05941470, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce8f80 over the target block at 0x05941470.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016323a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016323a0

// auto_copy_block_01632ad0: misc_copy_block_58b3240 with other addresses.
namespace twin_01632ad0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059414b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce8fe0, source_block, CopiedBlock);
RT_GLOBAL(0x059414b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce8fe0 over the target block at 0x059414b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01632ad0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01632ad0

// auto_copy_block_01633410: misc_copy_block_58b3240 with other addresses.
namespace twin_01633410 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941700.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9030, source_block, CopiedBlock);
RT_GLOBAL(0x05941700, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9030 over the target block at 0x05941700.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01633410()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01633410

// auto_copy_block_01633f80: misc_copy_block_58b3240 with other addresses.
namespace twin_01633f80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941740.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce90a0, source_block, CopiedBlock);
RT_GLOBAL(0x05941740, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce90a0 over the target block at 0x05941740.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01633f80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01633f80

// auto_copy_block_01637ea0: misc_copy_block_58b3240 with other addresses.
namespace twin_01637ea0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059417f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9340, source_block, CopiedBlock);
RT_GLOBAL(0x059417f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9340 over the target block at 0x059417f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01637ea0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01637ea0

// auto_copy_block_0163fa80: misc_copy_block_58b3240 with other addresses.
namespace twin_0163fa80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941960.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce96a0, source_block, CopiedBlock);
RT_GLOBAL(0x05941960, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce96a0 over the target block at 0x05941960.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0163fa80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0163fa80

// auto_copy_block_0163fc50: misc_copy_block_58b3240 with other addresses.
namespace twin_0163fc50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059419a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce96d0, source_block, CopiedBlock);
RT_GLOBAL(0x059419a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce96d0 over the target block at 0x059419a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0163fc50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0163fc50

// auto_copy_block_0163fff0: misc_copy_block_58b3240 with other addresses.
namespace twin_0163fff0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059419e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9700, source_block, CopiedBlock);
RT_GLOBAL(0x059419e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9700 over the target block at 0x059419e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0163fff0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0163fff0

// auto_copy_block_01640280: misc_copy_block_58b3240 with other addresses.
namespace twin_01640280 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941a20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9730, source_block, CopiedBlock);
RT_GLOBAL(0x05941a20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9730 over the target block at 0x05941a20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01640280()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01640280

// auto_copy_block_016408a0: misc_copy_block_58b3240 with other addresses.
namespace twin_016408a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941a60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9760, source_block, CopiedBlock);
RT_GLOBAL(0x05941a60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9760 over the target block at 0x05941a60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016408a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016408a0

// auto_copy_block_01642080: misc_copy_block_58b3240 with other addresses.
namespace twin_01642080 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941aa0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9790, source_block, CopiedBlock);
RT_GLOBAL(0x05941aa0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9790 over the target block at 0x05941aa0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01642080()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01642080

// auto_copy_block_01643320: misc_copy_block_58b3240 with other addresses.
namespace twin_01643320 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941ae0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9880, source_block, CopiedBlock);
RT_GLOBAL(0x05941ae0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9880 over the target block at 0x05941ae0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01643320()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01643320

// auto_copy_block_01643730: misc_copy_block_58b3240 with other addresses.
namespace twin_01643730 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941b20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce98b0, source_block, CopiedBlock);
RT_GLOBAL(0x05941b20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce98b0 over the target block at 0x05941b20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01643730()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01643730

// auto_copy_block_01643a90: misc_copy_block_58b3240 with other addresses.
namespace twin_01643a90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941b60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce98e0, source_block, CopiedBlock);
RT_GLOBAL(0x05941b60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce98e0 over the target block at 0x05941b60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01643a90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01643a90

// auto_copy_block_01644020: misc_copy_block_58b3240 with other addresses.
namespace twin_01644020 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941ba0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9910, source_block, CopiedBlock);
RT_GLOBAL(0x05941ba0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9910 over the target block at 0x05941ba0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01644020()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01644020

// auto_copy_block_01644a50: misc_copy_block_58b3240 with other addresses.
namespace twin_01644a50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941c30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9970, source_block, CopiedBlock);
RT_GLOBAL(0x05941c30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9970 over the target block at 0x05941c30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01644a50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01644a50

// auto_copy_block_01645bf0: misc_copy_block_58b3240 with other addresses.
namespace twin_01645bf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941cc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9a40, source_block, CopiedBlock);
RT_GLOBAL(0x05941cc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9a40 over the target block at 0x05941cc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01645bf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01645bf0

// auto_copy_block_016486a0: misc_copy_block_58b3240 with other addresses.
namespace twin_016486a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941d50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9e90, source_block, CopiedBlock);
RT_GLOBAL(0x05941d50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9e90 over the target block at 0x05941d50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016486a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016486a0

// auto_copy_block_01649000: misc_copy_block_58b3240 with other addresses.
namespace twin_01649000 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941d90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9ec0, source_block, CopiedBlock);
RT_GLOBAL(0x05941d90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9ec0 over the target block at 0x05941d90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01649000()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01649000

// auto_copy_block_016497e0: misc_copy_block_58b3240 with other addresses.
namespace twin_016497e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941dd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9ef0, source_block, CopiedBlock);
RT_GLOBAL(0x05941dd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9ef0 over the target block at 0x05941dd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016497e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016497e0

// auto_copy_block_0164a000: misc_copy_block_58b3240 with other addresses.
namespace twin_0164a000 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941e10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9f70, source_block, CopiedBlock);
RT_GLOBAL(0x05941e10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9f70 over the target block at 0x05941e10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0164a000()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0164a000

// auto_copy_block_0164a7e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0164a7e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941e50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9fa0, source_block, CopiedBlock);
RT_GLOBAL(0x05941e50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9fa0 over the target block at 0x05941e50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0164a7e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0164a7e0

// auto_copy_block_0164ac10: misc_copy_block_58b3240 with other addresses.
namespace twin_0164ac10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941e90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ce9fd0, source_block, CopiedBlock);
RT_GLOBAL(0x05941e90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ce9fd0 over the target block at 0x05941e90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0164ac10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0164ac10

// auto_copy_block_0164ae50: misc_copy_block_58b3240 with other addresses.
namespace twin_0164ae50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05941ed0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cea000, source_block, CopiedBlock);
RT_GLOBAL(0x05941ed0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cea000 over the target block at 0x05941ed0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0164ae50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0164ae50

// auto_copy_block_01654860: misc_copy_block_58b3240 with other addresses.
namespace twin_01654860 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05942130.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cea120, source_block, CopiedBlock);
RT_GLOBAL(0x05942130, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cea120 over the target block at 0x05942130.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01654860()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01654860

// auto_copy_block_0167d1c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0167d1c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059439a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cea4b0, source_block, CopiedBlock);
RT_GLOBAL(0x059439a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cea4b0 over the target block at 0x059439a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0167d1c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0167d1c0

// auto_copy_block_0169bbc0: misc_copy_block_58b3240 with other addresses.
namespace twin_0169bbc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05944050.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ceaf10, source_block, CopiedBlock);
RT_GLOBAL(0x05944050, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ceaf10 over the target block at 0x05944050.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0169bbc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0169bbc0

// auto_copy_block_0169bff0: misc_copy_block_58b3240 with other addresses.
namespace twin_0169bff0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059440e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ceafa0, source_block, CopiedBlock);
RT_GLOBAL(0x059440e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ceafa0 over the target block at 0x059440e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0169bff0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0169bff0

// auto_copy_block_0169c1c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0169c1c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05944120.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ceafd0, source_block, CopiedBlock);
RT_GLOBAL(0x05944120, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ceafd0 over the target block at 0x05944120.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0169c1c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0169c1c0

// auto_copy_block_0169ce70: misc_copy_block_58b3240 with other addresses.
namespace twin_0169ce70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05944160.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ceb0d0, source_block, CopiedBlock);
RT_GLOBAL(0x05944160, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ceb0d0 over the target block at 0x05944160.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0169ce70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0169ce70

// auto_copy_block_016a6970: misc_copy_block_58b3240 with other addresses.
namespace twin_016a6970 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05944580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ceb770, source_block, CopiedBlock);
RT_GLOBAL(0x05944580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ceb770 over the target block at 0x05944580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016a6970()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016a6970

// auto_copy_block_016b6610: misc_copy_block_58b3240 with other addresses.
namespace twin_016b6610 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059448e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cebda0, source_block, CopiedBlock);
RT_GLOBAL(0x059448e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cebda0 over the target block at 0x059448e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016b6610()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016b6610

// auto_copy_block_016d7b60: misc_copy_block_58b3240 with other addresses.
namespace twin_016d7b60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945370.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec200, source_block, CopiedBlock);
RT_GLOBAL(0x05945370, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec200 over the target block at 0x05945370.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016d7b60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016d7b60

// auto_copy_block_016d7eb0: misc_copy_block_58b3240 with other addresses.
namespace twin_016d7eb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059453b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec230, source_block, CopiedBlock);
RT_GLOBAL(0x059453b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec230 over the target block at 0x059453b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016d7eb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016d7eb0

// auto_copy_block_016d91a0: misc_copy_block_58b3240 with other addresses.
namespace twin_016d91a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059453f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec260, source_block, CopiedBlock);
RT_GLOBAL(0x059453f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec260 over the target block at 0x059453f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016d91a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016d91a0

// auto_copy_block_016da660: misc_copy_block_58b3240 with other addresses.
namespace twin_016da660 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945430.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec290, source_block, CopiedBlock);
RT_GLOBAL(0x05945430, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec290 over the target block at 0x05945430.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016da660()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016da660

// auto_copy_block_016db110: misc_copy_block_58b3240 with other addresses.
namespace twin_016db110 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945470.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec2c0, source_block, CopiedBlock);
RT_GLOBAL(0x05945470, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec2c0 over the target block at 0x05945470.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016db110()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016db110

// auto_copy_block_016e2180: misc_copy_block_58b3240 with other addresses.
namespace twin_016e2180 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec330, source_block, CopiedBlock);
RT_GLOBAL(0x05945500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec330 over the target block at 0x05945500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016e2180()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016e2180

// auto_copy_block_016e6cb0: misc_copy_block_58b3240 with other addresses.
namespace twin_016e6cb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945630.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec3f0, source_block, CopiedBlock);
RT_GLOBAL(0x05945630, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec3f0 over the target block at 0x05945630.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016e6cb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016e6cb0

// auto_copy_block_016e7020: misc_copy_block_58b3240 with other addresses.
namespace twin_016e7020 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945670.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec420, source_block, CopiedBlock);
RT_GLOBAL(0x05945670, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec420 over the target block at 0x05945670.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016e7020()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016e7020

// auto_copy_block_016e7470: misc_copy_block_58b3240 with other addresses.
namespace twin_016e7470 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059456b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec450, source_block, CopiedBlock);
RT_GLOBAL(0x059456b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec450 over the target block at 0x059456b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016e7470()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016e7470

// auto_copy_block_016e7610: misc_copy_block_58b3240 with other addresses.
namespace twin_016e7610 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059456f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec480, source_block, CopiedBlock);
RT_GLOBAL(0x059456f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec480 over the target block at 0x059456f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016e7610()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016e7610

// auto_copy_block_016e8560: misc_copy_block_58b3240 with other addresses.
namespace twin_016e8560 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945780.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec4e0, source_block, CopiedBlock);
RT_GLOBAL(0x05945780, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec4e0 over the target block at 0x05945780.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016e8560()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016e8560

// auto_copy_block_016e88c0: misc_copy_block_58b3240 with other addresses.
namespace twin_016e88c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059457c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec510, source_block, CopiedBlock);
RT_GLOBAL(0x059457c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec510 over the target block at 0x059457c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016e88c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016e88c0

// auto_copy_block_016e94c0: misc_copy_block_58b3240 with other addresses.
namespace twin_016e94c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945800.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec540, source_block, CopiedBlock);
RT_GLOBAL(0x05945800, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec540 over the target block at 0x05945800.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016e94c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016e94c0

// auto_copy_block_016ea390: misc_copy_block_58b3240 with other addresses.
namespace twin_016ea390 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945840.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec570, source_block, CopiedBlock);
RT_GLOBAL(0x05945840, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec570 over the target block at 0x05945840.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016ea390()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016ea390

// auto_copy_block_016ea530: misc_copy_block_58b3240 with other addresses.
namespace twin_016ea530 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945880.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec5a0, source_block, CopiedBlock);
RT_GLOBAL(0x05945880, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec5a0 over the target block at 0x05945880.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016ea530()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016ea530

// auto_copy_block_016ea6d0: misc_copy_block_58b3240 with other addresses.
namespace twin_016ea6d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059458c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec5d0, source_block, CopiedBlock);
RT_GLOBAL(0x059458c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec5d0 over the target block at 0x059458c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016ea6d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016ea6d0

// auto_copy_block_016eb330: misc_copy_block_58b3240 with other addresses.
namespace twin_016eb330 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945900.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec600, source_block, CopiedBlock);
RT_GLOBAL(0x05945900, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec600 over the target block at 0x05945900.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016eb330()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016eb330

// auto_copy_block_016eb910: misc_copy_block_58b3240 with other addresses.
namespace twin_016eb910 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec690, source_block, CopiedBlock);
RT_GLOBAL(0x05945980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec690 over the target block at 0x05945980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016eb910()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016eb910

// auto_copy_block_016ebb10: misc_copy_block_58b3240 with other addresses.
namespace twin_016ebb10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059459c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec6c0, source_block, CopiedBlock);
RT_GLOBAL(0x059459c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec6c0 over the target block at 0x059459c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016ebb10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016ebb10

// auto_copy_block_016ebfb0: misc_copy_block_58b3240 with other addresses.
namespace twin_016ebfb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945a00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec6f0, source_block, CopiedBlock);
RT_GLOBAL(0x05945a00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec6f0 over the target block at 0x05945a00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016ebfb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016ebfb0

// auto_copy_block_016ec950: misc_copy_block_58b3240 with other addresses.
namespace twin_016ec950 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945a40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec720, source_block, CopiedBlock);
RT_GLOBAL(0x05945a40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec720 over the target block at 0x05945a40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016ec950()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016ec950

// auto_copy_block_016ef680: misc_copy_block_58b3240 with other addresses.
namespace twin_016ef680 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945b50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec870, source_block, CopiedBlock);
RT_GLOBAL(0x05945b50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec870 over the target block at 0x05945b50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016ef680()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016ef680

// auto_copy_block_016ef820: misc_copy_block_58b3240 with other addresses.
namespace twin_016ef820 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05945b90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cec8a0, source_block, CopiedBlock);
RT_GLOBAL(0x05945b90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cec8a0 over the target block at 0x05945b90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_016ef820()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_016ef820

// auto_copy_block_01704eb0: misc_copy_block_58b3240 with other addresses.
namespace twin_01704eb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05946340.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cedd10, source_block, CopiedBlock);
RT_GLOBAL(0x05946340, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cedd10 over the target block at 0x05946340.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01704eb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01704eb0

// auto_copy_block_0179a2c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0179a2c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594be50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cef210, source_block, CopiedBlock);
RT_GLOBAL(0x0594be50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cef210 over the target block at 0x0594be50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0179a2c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0179a2c0

// auto_copy_block_0179ca60: misc_copy_block_58b3240 with other addresses.
namespace twin_0179ca60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594bf10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cef300, source_block, CopiedBlock);
RT_GLOBAL(0x0594bf10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cef300 over the target block at 0x0594bf10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0179ca60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0179ca60

// auto_copy_block_0179d3e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0179d3e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594bf50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cef330, source_block, CopiedBlock);
RT_GLOBAL(0x0594bf50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cef330 over the target block at 0x0594bf50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0179d3e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0179d3e0

// auto_copy_block_0179fc70: misc_copy_block_58b3240 with other addresses.
namespace twin_0179fc70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594c0e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cef440, source_block, CopiedBlock);
RT_GLOBAL(0x0594c0e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cef440 over the target block at 0x0594c0e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0179fc70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0179fc70

// auto_copy_block_017c6a20: misc_copy_block_58b3240 with other addresses.
namespace twin_017c6a20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594c6c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cefb00, source_block, CopiedBlock);
RT_GLOBAL(0x0594c6c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cefb00 over the target block at 0x0594c6c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_017c6a20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_017c6a20

// auto_copy_block_017c8d50: misc_copy_block_58b3240 with other addresses.
namespace twin_017c8d50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594c740.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cefe80, source_block, CopiedBlock);
RT_GLOBAL(0x0594c740, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cefe80 over the target block at 0x0594c740.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_017c8d50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_017c8d50

// auto_copy_block_017d1590: misc_copy_block_58b3240 with other addresses.
namespace twin_017d1590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594c7d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf0000, source_block, CopiedBlock);
RT_GLOBAL(0x0594c7d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf0000 over the target block at 0x0594c7d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_017d1590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_017d1590

// auto_copy_block_017d6810: misc_copy_block_58b3240 with other addresses.
namespace twin_017d6810 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594cab0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf04e0, source_block, CopiedBlock);
RT_GLOBAL(0x0594cab0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf04e0 over the target block at 0x0594cab0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_017d6810()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_017d6810

// auto_copy_block_017d8160: misc_copy_block_58b3240 with other addresses.
namespace twin_017d8160 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594cbe0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf0630, source_block, CopiedBlock);
RT_GLOBAL(0x0594cbe0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf0630 over the target block at 0x0594cbe0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_017d8160()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_017d8160

// auto_copy_block_017d8670: misc_copy_block_58b3240 with other addresses.
namespace twin_017d8670 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594cc20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf0660, source_block, CopiedBlock);
RT_GLOBAL(0x0594cc20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf0660 over the target block at 0x0594cc20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_017d8670()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_017d8670

// auto_copy_block_017db260: misc_copy_block_58b3240 with other addresses.
namespace twin_017db260 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594cda0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf0800, source_block, CopiedBlock);
RT_GLOBAL(0x0594cda0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf0800 over the target block at 0x0594cda0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_017db260()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_017db260

// auto_copy_block_0182fbc0: misc_copy_block_58b3240 with other addresses.
namespace twin_0182fbc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594f690.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf1900, source_block, CopiedBlock);
RT_GLOBAL(0x0594f690, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf1900 over the target block at 0x0594f690.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0182fbc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0182fbc0

// auto_copy_block_01830b60: misc_copy_block_58b3240 with other addresses.
namespace twin_01830b60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594f6d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf1930, source_block, CopiedBlock);
RT_GLOBAL(0x0594f6d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf1930 over the target block at 0x0594f6d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01830b60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01830b60

// auto_copy_block_01833080: misc_copy_block_58b3240 with other addresses.
namespace twin_01833080 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594f850.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf1b20, source_block, CopiedBlock);
RT_GLOBAL(0x0594f850, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf1b20 over the target block at 0x0594f850.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01833080()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01833080

// auto_copy_block_01839ec0: misc_copy_block_58b3240 with other addresses.
namespace twin_01839ec0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0594fa10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf23b0, source_block, CopiedBlock);
RT_GLOBAL(0x0594fa10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf23b0 over the target block at 0x0594fa10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01839ec0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01839ec0

// auto_copy_block_01848c50: misc_copy_block_58b3240 with other addresses.
namespace twin_01848c50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950060.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf2bd0, source_block, CopiedBlock);
RT_GLOBAL(0x05950060, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf2bd0 over the target block at 0x05950060.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01848c50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01848c50

// auto_copy_block_018496f0: misc_copy_block_58b3240 with other addresses.
namespace twin_018496f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059500a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf2c00, source_block, CopiedBlock);
RT_GLOBAL(0x059500a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf2c00 over the target block at 0x059500a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018496f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018496f0

// auto_copy_block_0184af20: misc_copy_block_58b3240 with other addresses.
namespace twin_0184af20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950220.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf2c90, source_block, CopiedBlock);
RT_GLOBAL(0x05950220, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf2c90 over the target block at 0x05950220.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0184af20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0184af20

// auto_copy_block_0184bf00: misc_copy_block_58b3240 with other addresses.
namespace twin_0184bf00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950300.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf2cf0, source_block, CopiedBlock);
RT_GLOBAL(0x05950300, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf2cf0 over the target block at 0x05950300.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0184bf00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0184bf00

// auto_copy_block_01850d70: misc_copy_block_58b3240 with other addresses.
namespace twin_01850d70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950660.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf2ee0, source_block, CopiedBlock);
RT_GLOBAL(0x05950660, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf2ee0 over the target block at 0x05950660.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01850d70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01850d70

// auto_copy_block_01852e20: misc_copy_block_58b3240 with other addresses.
namespace twin_01852e20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950720.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf2fd0, source_block, CopiedBlock);
RT_GLOBAL(0x05950720, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf2fd0 over the target block at 0x05950720.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01852e20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01852e20

// auto_copy_block_01853a20: misc_copy_block_58b3240 with other addresses.
namespace twin_01853a20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950760.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3000, source_block, CopiedBlock);
RT_GLOBAL(0x05950760, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3000 over the target block at 0x05950760.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01853a20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01853a20

// auto_copy_block_018544b0: misc_copy_block_58b3240 with other addresses.
namespace twin_018544b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059507a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3030, source_block, CopiedBlock);
RT_GLOBAL(0x059507a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3030 over the target block at 0x059507a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018544b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018544b0

// auto_copy_block_01862220: misc_copy_block_58b3240 with other addresses.
namespace twin_01862220 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950970.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf32a0, source_block, CopiedBlock);
RT_GLOBAL(0x05950970, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf32a0 over the target block at 0x05950970.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01862220()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01862220

// auto_copy_block_018693c0: misc_copy_block_58b3240 with other addresses.
namespace twin_018693c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950a50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf33a0, source_block, CopiedBlock);
RT_GLOBAL(0x05950a50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf33a0 over the target block at 0x05950a50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018693c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018693c0

// auto_copy_block_0186b060: misc_copy_block_58b3240 with other addresses.
namespace twin_0186b060 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950a90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf33d0, source_block, CopiedBlock);
RT_GLOBAL(0x05950a90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf33d0 over the target block at 0x05950a90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0186b060()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0186b060

// auto_copy_block_018719e0: misc_copy_block_58b3240 with other addresses.
namespace twin_018719e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950b10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3460, source_block, CopiedBlock);
RT_GLOBAL(0x05950b10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3460 over the target block at 0x05950b10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018719e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018719e0

// auto_copy_block_018728d0: misc_copy_block_58b3240 with other addresses.
namespace twin_018728d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950b50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3490, source_block, CopiedBlock);
RT_GLOBAL(0x05950b50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3490 over the target block at 0x05950b50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018728d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018728d0

// auto_copy_block_018741f0: misc_copy_block_58b3240 with other addresses.
namespace twin_018741f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950b90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3650, source_block, CopiedBlock);
RT_GLOBAL(0x05950b90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3650 over the target block at 0x05950b90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018741f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018741f0

// auto_copy_block_01876350: misc_copy_block_58b3240 with other addresses.
namespace twin_01876350 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950c40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3720, source_block, CopiedBlock);
RT_GLOBAL(0x05950c40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3720 over the target block at 0x05950c40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01876350()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01876350

// auto_copy_block_018766a0: misc_copy_block_58b3240 with other addresses.
namespace twin_018766a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950c80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3750, source_block, CopiedBlock);
RT_GLOBAL(0x05950c80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3750 over the target block at 0x05950c80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018766a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018766a0

// auto_copy_block_01877030: misc_copy_block_58b3240 with other addresses.
namespace twin_01877030 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950cc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3780, source_block, CopiedBlock);
RT_GLOBAL(0x05950cc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3780 over the target block at 0x05950cc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01877030()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01877030

// auto_copy_block_01877520: misc_copy_block_58b3240 with other addresses.
namespace twin_01877520 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950d00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf37b0, source_block, CopiedBlock);
RT_GLOBAL(0x05950d00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf37b0 over the target block at 0x05950d00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01877520()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01877520

// auto_copy_block_018786c0: misc_copy_block_58b3240 with other addresses.
namespace twin_018786c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950d40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf37e0, source_block, CopiedBlock);
RT_GLOBAL(0x05950d40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf37e0 over the target block at 0x05950d40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018786c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018786c0

// auto_copy_block_018797e0: misc_copy_block_58b3240 with other addresses.
namespace twin_018797e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950d80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3810, source_block, CopiedBlock);
RT_GLOBAL(0x05950d80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3810 over the target block at 0x05950d80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018797e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018797e0

// auto_copy_block_01879b90: misc_copy_block_58b3240 with other addresses.
namespace twin_01879b90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950dc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3840, source_block, CopiedBlock);
RT_GLOBAL(0x05950dc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3840 over the target block at 0x05950dc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01879b90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01879b90

// auto_copy_block_0187f7e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0187f7e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950f50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf38d0, source_block, CopiedBlock);
RT_GLOBAL(0x05950f50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf38d0 over the target block at 0x05950f50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0187f7e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0187f7e0

// auto_copy_block_018800e0: misc_copy_block_58b3240 with other addresses.
namespace twin_018800e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05950f90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3900, source_block, CopiedBlock);
RT_GLOBAL(0x05950f90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3900 over the target block at 0x05950f90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018800e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018800e0

// auto_copy_block_01884790: misc_copy_block_58b3240 with other addresses.
namespace twin_01884790 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951200.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3a30, source_block, CopiedBlock);
RT_GLOBAL(0x05951200, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3a30 over the target block at 0x05951200.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01884790()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01884790

// auto_copy_block_01884e50: misc_copy_block_58b3240 with other addresses.
namespace twin_01884e50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951240.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3a60, source_block, CopiedBlock);
RT_GLOBAL(0x05951240, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3a60 over the target block at 0x05951240.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01884e50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01884e50

// auto_copy_block_01885450: misc_copy_block_58b3240 with other addresses.
namespace twin_01885450 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951280.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3a90, source_block, CopiedBlock);
RT_GLOBAL(0x05951280, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3a90 over the target block at 0x05951280.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01885450()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01885450

// auto_copy_block_018866e0: misc_copy_block_58b3240 with other addresses.
namespace twin_018866e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059512c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3ac0, source_block, CopiedBlock);
RT_GLOBAL(0x059512c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3ac0 over the target block at 0x059512c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018866e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018866e0

// auto_copy_block_018868b0: misc_copy_block_58b3240 with other addresses.
namespace twin_018868b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951300.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3af0, source_block, CopiedBlock);
RT_GLOBAL(0x05951300, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3af0 over the target block at 0x05951300.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018868b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018868b0

// auto_copy_block_01886e00: misc_copy_block_58b3240 with other addresses.
namespace twin_01886e00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951340.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3b20, source_block, CopiedBlock);
RT_GLOBAL(0x05951340, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3b20 over the target block at 0x05951340.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01886e00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01886e00

// auto_copy_block_01887da0: misc_copy_block_58b3240 with other addresses.
namespace twin_01887da0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951380.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3b50, source_block, CopiedBlock);
RT_GLOBAL(0x05951380, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3b50 over the target block at 0x05951380.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01887da0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01887da0

// auto_copy_block_01888370: misc_copy_block_58b3240 with other addresses.
namespace twin_01888370 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059513c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3b80, source_block, CopiedBlock);
RT_GLOBAL(0x059513c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3b80 over the target block at 0x059513c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01888370()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01888370

// auto_copy_block_01888ad0: misc_copy_block_58b3240 with other addresses.
namespace twin_01888ad0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951400.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3bb0, source_block, CopiedBlock);
RT_GLOBAL(0x05951400, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3bb0 over the target block at 0x05951400.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01888ad0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01888ad0

// auto_copy_block_018892d0: misc_copy_block_58b3240 with other addresses.
namespace twin_018892d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951440.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3be0, source_block, CopiedBlock);
RT_GLOBAL(0x05951440, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3be0 over the target block at 0x05951440.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018892d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018892d0

// auto_copy_block_01890ca0: misc_copy_block_58b3240 with other addresses.
namespace twin_01890ca0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059514c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3c70, source_block, CopiedBlock);
RT_GLOBAL(0x059514c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3c70 over the target block at 0x059514c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01890ca0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01890ca0

// auto_copy_block_01895c90: misc_copy_block_58b3240 with other addresses.
namespace twin_01895c90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951720.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3d30, source_block, CopiedBlock);
RT_GLOBAL(0x05951720, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3d30 over the target block at 0x05951720.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01895c90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01895c90

// auto_copy_block_0189e290: misc_copy_block_58b3240 with other addresses.
namespace twin_0189e290 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951970.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3db0, source_block, CopiedBlock);
RT_GLOBAL(0x05951970, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3db0 over the target block at 0x05951970.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0189e290()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0189e290

// auto_copy_block_0189eb80: misc_copy_block_58b3240 with other addresses.
namespace twin_0189eb80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059519b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3de0, source_block, CopiedBlock);
RT_GLOBAL(0x059519b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3de0 over the target block at 0x059519b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0189eb80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0189eb80

// auto_copy_block_018a00a0: misc_copy_block_58b3240 with other addresses.
namespace twin_018a00a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059519f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3e10, source_block, CopiedBlock);
RT_GLOBAL(0x059519f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3e10 over the target block at 0x059519f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018a00a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018a00a0

// auto_copy_block_018a31a0: misc_copy_block_58b3240 with other addresses.
namespace twin_018a31a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951a30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3e40, source_block, CopiedBlock);
RT_GLOBAL(0x05951a30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3e40 over the target block at 0x05951a30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018a31a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018a31a0

// auto_copy_block_018a3820: misc_copy_block_58b3240 with other addresses.
namespace twin_018a3820 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951a70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3e70, source_block, CopiedBlock);
RT_GLOBAL(0x05951a70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3e70 over the target block at 0x05951a70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018a3820()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018a3820

// auto_copy_block_018a3f80: misc_copy_block_58b3240 with other addresses.
namespace twin_018a3f80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951ab0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3ea0, source_block, CopiedBlock);
RT_GLOBAL(0x05951ab0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3ea0 over the target block at 0x05951ab0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018a3f80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018a3f80

// auto_copy_block_018aa8b0: misc_copy_block_58b3240 with other addresses.
namespace twin_018aa8b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951b30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf3f30, source_block, CopiedBlock);
RT_GLOBAL(0x05951b30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf3f30 over the target block at 0x05951b30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018aa8b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018aa8b0

// auto_copy_block_018afcb0: misc_copy_block_58b3240 with other addresses.
namespace twin_018afcb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951bf0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4020, source_block, CopiedBlock);
RT_GLOBAL(0x05951bf0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4020 over the target block at 0x05951bf0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018afcb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018afcb0

// auto_copy_block_018b16e0: misc_copy_block_58b3240 with other addresses.
namespace twin_018b16e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951c30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4050, source_block, CopiedBlock);
RT_GLOBAL(0x05951c30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4050 over the target block at 0x05951c30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018b16e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018b16e0

// auto_copy_block_018b1930: misc_copy_block_58b3240 with other addresses.
namespace twin_018b1930 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951c70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4080, source_block, CopiedBlock);
RT_GLOBAL(0x05951c70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4080 over the target block at 0x05951c70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018b1930()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018b1930

// auto_copy_block_018b22d0: misc_copy_block_58b3240 with other addresses.
namespace twin_018b22d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951cb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf40b0, source_block, CopiedBlock);
RT_GLOBAL(0x05951cb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf40b0 over the target block at 0x05951cb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018b22d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018b22d0

// auto_copy_block_018b3470: misc_copy_block_58b3240 with other addresses.
namespace twin_018b3470 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05951cf0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4270, source_block, CopiedBlock);
RT_GLOBAL(0x05951cf0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4270 over the target block at 0x05951cf0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018b3470()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018b3470

// auto_copy_block_018bfbf0: misc_copy_block_58b3240 with other addresses.
namespace twin_018bfbf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952040.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf43b0, source_block, CopiedBlock);
RT_GLOBAL(0x05952040, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf43b0 over the target block at 0x05952040.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018bfbf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018bfbf0

// auto_copy_block_018c1050: misc_copy_block_58b3240 with other addresses.
namespace twin_018c1050 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952080.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf43e0, source_block, CopiedBlock);
RT_GLOBAL(0x05952080, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf43e0 over the target block at 0x05952080.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018c1050()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018c1050

// auto_copy_block_018c17d0: misc_copy_block_58b3240 with other addresses.
namespace twin_018c17d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059520c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4410, source_block, CopiedBlock);
RT_GLOBAL(0x059520c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4410 over the target block at 0x059520c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018c17d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018c17d0

// auto_copy_block_018c1970: misc_copy_block_58b3240 with other addresses.
namespace twin_018c1970 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952100.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4440, source_block, CopiedBlock);
RT_GLOBAL(0x05952100, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4440 over the target block at 0x05952100.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018c1970()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018c1970

// auto_copy_block_018c6490: misc_copy_block_58b3240 with other addresses.
namespace twin_018c6490 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952190.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4530, source_block, CopiedBlock);
RT_GLOBAL(0x05952190, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4530 over the target block at 0x05952190.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018c6490()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018c6490

// auto_copy_block_018c70d0: misc_copy_block_58b3240 with other addresses.
namespace twin_018c70d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059521d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4560, source_block, CopiedBlock);
RT_GLOBAL(0x059521d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4560 over the target block at 0x059521d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018c70d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018c70d0

// auto_copy_block_018c80b0: misc_copy_block_58b3240 with other addresses.
namespace twin_018c80b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952210.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4590, source_block, CopiedBlock);
RT_GLOBAL(0x05952210, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4590 over the target block at 0x05952210.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018c80b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018c80b0

// auto_copy_block_018ca590: misc_copy_block_58b3240 with other addresses.
namespace twin_018ca590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952250.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf45c0, source_block, CopiedBlock);
RT_GLOBAL(0x05952250, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf45c0 over the target block at 0x05952250.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018ca590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018ca590

// auto_copy_block_018caa00: misc_copy_block_58b3240 with other addresses.
namespace twin_018caa00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952290.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf45f0, source_block, CopiedBlock);
RT_GLOBAL(0x05952290, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf45f0 over the target block at 0x05952290.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018caa00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018caa00

// auto_copy_block_018cc100: misc_copy_block_58b3240 with other addresses.
namespace twin_018cc100 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059522d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4620, source_block, CopiedBlock);
RT_GLOBAL(0x059522d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4620 over the target block at 0x059522d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018cc100()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018cc100

// auto_copy_block_018e1f70: misc_copy_block_58b3240 with other addresses.
namespace twin_018e1f70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952530.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf47f0, source_block, CopiedBlock);
RT_GLOBAL(0x05952530, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf47f0 over the target block at 0x05952530.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018e1f70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018e1f70

// auto_copy_block_018e2110: misc_copy_block_58b3240 with other addresses.
namespace twin_018e2110 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952570.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4820, source_block, CopiedBlock);
RT_GLOBAL(0x05952570, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4820 over the target block at 0x05952570.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018e2110()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018e2110

// auto_copy_block_018ed780: misc_copy_block_58b3240 with other addresses.
namespace twin_018ed780 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059526a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4970, source_block, CopiedBlock);
RT_GLOBAL(0x059526a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4970 over the target block at 0x059526a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018ed780()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018ed780

// auto_copy_block_018ee6b0: misc_copy_block_58b3240 with other addresses.
namespace twin_018ee6b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059528d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf49a0, source_block, CopiedBlock);
RT_GLOBAL(0x059528d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf49a0 over the target block at 0x059528d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018ee6b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018ee6b0

// auto_copy_block_018ee980: misc_copy_block_58b3240 with other addresses.
namespace twin_018ee980 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952910.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf49d0, source_block, CopiedBlock);
RT_GLOBAL(0x05952910, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf49d0 over the target block at 0x05952910.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018ee980()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018ee980

// auto_copy_block_018f0ad0: misc_copy_block_58b3240 with other addresses.
namespace twin_018f0ad0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952990.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4a60, source_block, CopiedBlock);
RT_GLOBAL(0x05952990, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4a60 over the target block at 0x05952990.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018f0ad0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018f0ad0

// auto_copy_block_018fdd50: misc_copy_block_58b3240 with other addresses.
namespace twin_018fdd50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952ae0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4c40, source_block, CopiedBlock);
RT_GLOBAL(0x05952ae0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4c40 over the target block at 0x05952ae0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018fdd50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018fdd50

// auto_copy_block_018fe150: misc_copy_block_58b3240 with other addresses.
namespace twin_018fe150 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952b20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4c70, source_block, CopiedBlock);
RT_GLOBAL(0x05952b20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4c70 over the target block at 0x05952b20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018fe150()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018fe150

// auto_copy_block_018ff1c0: misc_copy_block_58b3240 with other addresses.
namespace twin_018ff1c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05952bb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf4d00, source_block, CopiedBlock);
RT_GLOBAL(0x05952bb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf4d00 over the target block at 0x05952bb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_018ff1c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_018ff1c0

// auto_copy_block_0190deb0: misc_copy_block_58b3240 with other addresses.
namespace twin_0190deb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05953090.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf5220, source_block, CopiedBlock);
RT_GLOBAL(0x05953090, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf5220 over the target block at 0x05953090.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0190deb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0190deb0

// auto_copy_block_0192d770: misc_copy_block_58b3240 with other addresses.
namespace twin_0192d770 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059546f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf6500, source_block, CopiedBlock);
RT_GLOBAL(0x059546f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf6500 over the target block at 0x059546f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0192d770()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0192d770

// auto_copy_block_01943e80: misc_copy_block_58b3240 with other addresses.
namespace twin_01943e80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05956160.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf6ea0, source_block, CopiedBlock);
RT_GLOBAL(0x05956160, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf6ea0 over the target block at 0x05956160.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01943e80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01943e80

// auto_copy_block_019468d0: misc_copy_block_58b3240 with other addresses.
namespace twin_019468d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05956240.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7130, source_block, CopiedBlock);
RT_GLOBAL(0x05956240, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7130 over the target block at 0x05956240.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019468d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019468d0

// auto_copy_block_01946a70: misc_copy_block_58b3240 with other addresses.
namespace twin_01946a70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05956280.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7160, source_block, CopiedBlock);
RT_GLOBAL(0x05956280, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7160 over the target block at 0x05956280.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01946a70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01946a70

// auto_copy_block_0194f790: misc_copy_block_58b3240 with other addresses.
namespace twin_0194f790 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059563d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7360, source_block, CopiedBlock);
RT_GLOBAL(0x059563d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7360 over the target block at 0x059563d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0194f790()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0194f790

// auto_copy_block_01950320: misc_copy_block_58b3240 with other addresses.
namespace twin_01950320 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05956410.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7390, source_block, CopiedBlock);
RT_GLOBAL(0x05956410, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7390 over the target block at 0x05956410.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01950320()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01950320

// auto_copy_block_01956f50: misc_copy_block_58b3240 with other addresses.
namespace twin_01956f50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059564a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7400, source_block, CopiedBlock);
RT_GLOBAL(0x059564a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7400 over the target block at 0x059564a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01956f50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01956f50

// auto_copy_block_01958780: misc_copy_block_58b3240 with other addresses.
namespace twin_01958780 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059564e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7430, source_block, CopiedBlock);
RT_GLOBAL(0x059564e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7430 over the target block at 0x059564e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01958780()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01958780

// auto_copy_block_01963050: misc_copy_block_58b3240 with other addresses.
namespace twin_01963050 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05956570.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7490, source_block, CopiedBlock);
RT_GLOBAL(0x05956570, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7490 over the target block at 0x05956570.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01963050()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01963050

// auto_copy_block_019648d0: misc_copy_block_58b3240 with other addresses.
namespace twin_019648d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059565b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf74c0, source_block, CopiedBlock);
RT_GLOBAL(0x059565b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf74c0 over the target block at 0x059565b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019648d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019648d0

// auto_copy_block_01966250: misc_copy_block_58b3240 with other addresses.
namespace twin_01966250 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059565f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf74f0, source_block, CopiedBlock);
RT_GLOBAL(0x059565f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf74f0 over the target block at 0x059565f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01966250()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01966250

// auto_copy_block_01985760: misc_copy_block_58b3240 with other addresses.
namespace twin_01985760 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059577d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7930, source_block, CopiedBlock);
RT_GLOBAL(0x059577d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7930 over the target block at 0x059577d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01985760()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01985760

// auto_copy_block_01986990: misc_copy_block_58b3240 with other addresses.
namespace twin_01986990 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05957810.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7960, source_block, CopiedBlock);
RT_GLOBAL(0x05957810, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7960 over the target block at 0x05957810.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01986990()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01986990

// auto_copy_block_01988590: misc_copy_block_58b3240 with other addresses.
namespace twin_01988590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05957860.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf79a0, source_block, CopiedBlock);
RT_GLOBAL(0x05957860, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf79a0 over the target block at 0x05957860.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01988590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01988590

// auto_copy_block_01989710: misc_copy_block_58b3240 with other addresses.
namespace twin_01989710 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059578a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf79d0, source_block, CopiedBlock);
RT_GLOBAL(0x059578a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf79d0 over the target block at 0x059578a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01989710()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01989710

// auto_copy_block_0198b200: misc_copy_block_58b3240 with other addresses.
namespace twin_0198b200 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059578e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7a00, source_block, CopiedBlock);
RT_GLOBAL(0x059578e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7a00 over the target block at 0x059578e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0198b200()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0198b200

// auto_copy_block_019915c0: misc_copy_block_58b3240 with other addresses.
namespace twin_019915c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05957cf0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7a60, source_block, CopiedBlock);
RT_GLOBAL(0x05957cf0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7a60 over the target block at 0x05957cf0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019915c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019915c0

// auto_copy_block_01992230: misc_copy_block_58b3240 with other addresses.
namespace twin_01992230 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05957d30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7a90, source_block, CopiedBlock);
RT_GLOBAL(0x05957d30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7a90 over the target block at 0x05957d30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01992230()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01992230

// auto_copy_block_01994740: misc_copy_block_58b3240 with other addresses.
namespace twin_01994740 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05957d70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7ac0, source_block, CopiedBlock);
RT_GLOBAL(0x05957d70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7ac0 over the target block at 0x05957d70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01994740()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01994740

// auto_copy_block_01997650: misc_copy_block_58b3240 with other addresses.
namespace twin_01997650 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05957db0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7af0, source_block, CopiedBlock);
RT_GLOBAL(0x05957db0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7af0 over the target block at 0x05957db0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01997650()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01997650

// auto_copy_block_019a0380: misc_copy_block_58b3240 with other addresses.
namespace twin_019a0380 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958200.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7c10, source_block, CopiedBlock);
RT_GLOBAL(0x05958200, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7c10 over the target block at 0x05958200.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019a0380()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019a0380

// auto_copy_block_019a9930: misc_copy_block_58b3240 with other addresses.
namespace twin_019a9930 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958350.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7e40, source_block, CopiedBlock);
RT_GLOBAL(0x05958350, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7e40 over the target block at 0x05958350.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019a9930()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019a9930

// auto_copy_block_019af370: misc_copy_block_58b3240 with other addresses.
namespace twin_019af370 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958790.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf7ee0, source_block, CopiedBlock);
RT_GLOBAL(0x05958790, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf7ee0 over the target block at 0x05958790.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019af370()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019af370

// auto_copy_block_019bfcc0: misc_copy_block_58b3240 with other addresses.
namespace twin_019bfcc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958940.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf8150, source_block, CopiedBlock);
RT_GLOBAL(0x05958940, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf8150 over the target block at 0x05958940.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019bfcc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019bfcc0

// auto_copy_block_019bfee0: misc_copy_block_58b3240 with other addresses.
namespace twin_019bfee0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf8180, source_block, CopiedBlock);
RT_GLOBAL(0x05958980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf8180 over the target block at 0x05958980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019bfee0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019bfee0

// auto_copy_block_019c1300: misc_copy_block_58b3240 with other addresses.
namespace twin_019c1300 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059589c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf81b0, source_block, CopiedBlock);
RT_GLOBAL(0x059589c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf81b0 over the target block at 0x059589c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c1300()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c1300

// auto_copy_block_019c2200: misc_copy_block_58b3240 with other addresses.
namespace twin_019c2200 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958a00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf81e0, source_block, CopiedBlock);
RT_GLOBAL(0x05958a00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf81e0 over the target block at 0x05958a00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c2200()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c2200

// auto_copy_block_019c2c80: misc_copy_block_58b3240 with other addresses.
namespace twin_019c2c80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958a40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf8210, source_block, CopiedBlock);
RT_GLOBAL(0x05958a40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf8210 over the target block at 0x05958a40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c2c80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c2c80

// auto_copy_block_019c4070: misc_copy_block_58b3240 with other addresses.
namespace twin_019c4070 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958a80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf82b0, source_block, CopiedBlock);
RT_GLOBAL(0x05958a80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf82b0 over the target block at 0x05958a80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c4070()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c4070

// auto_copy_block_019c4450: misc_copy_block_58b3240 with other addresses.
namespace twin_019c4450 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958ac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf82e0, source_block, CopiedBlock);
RT_GLOBAL(0x05958ac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf82e0 over the target block at 0x05958ac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c4450()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c4450

// auto_copy_block_019c53b0: misc_copy_block_58b3240 with other addresses.
namespace twin_019c53b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958b00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf8310, source_block, CopiedBlock);
RT_GLOBAL(0x05958b00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf8310 over the target block at 0x05958b00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c53b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c53b0

// auto_copy_block_019c60f0: misc_copy_block_58b3240 with other addresses.
namespace twin_019c60f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958b40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf8340, source_block, CopiedBlock);
RT_GLOBAL(0x05958b40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf8340 over the target block at 0x05958b40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c60f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c60f0

// auto_copy_block_019c71d0: misc_copy_block_58b3240 with other addresses.
namespace twin_019c71d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958b80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf8370, source_block, CopiedBlock);
RT_GLOBAL(0x05958b80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf8370 over the target block at 0x05958b80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c71d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c71d0

// auto_copy_block_019c77b0: misc_copy_block_58b3240 with other addresses.
namespace twin_019c77b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958bc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf83a0, source_block, CopiedBlock);
RT_GLOBAL(0x05958bc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf83a0 over the target block at 0x05958bc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c77b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c77b0

// auto_copy_block_019c84e0: misc_copy_block_58b3240 with other addresses.
namespace twin_019c84e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958c00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf83d0, source_block, CopiedBlock);
RT_GLOBAL(0x05958c00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf83d0 over the target block at 0x05958c00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c84e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c84e0
