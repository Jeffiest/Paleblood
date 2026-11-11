// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_copy_block_58b3240, in game/misc/copy_block_58b3240.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_copy_block_01e8adb0: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8adb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d9e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d5f0, source_block, CopiedBlock);
RT_GLOBAL(0x0597d9e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d5f0 over the target block at 0x0597d9e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8adb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8adb0

// auto_copy_block_01e8baa0: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8baa0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597da20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d620, source_block, CopiedBlock);
RT_GLOBAL(0x0597da20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d620 over the target block at 0x0597da20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8baa0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8baa0

// auto_copy_block_01e8c2c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8c2c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597da60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d650, source_block, CopiedBlock);
RT_GLOBAL(0x0597da60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d650 over the target block at 0x0597da60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8c2c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8c2c0

// auto_copy_block_01e8c460: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8c460 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597daa0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d680, source_block, CopiedBlock);
RT_GLOBAL(0x0597daa0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d680 over the target block at 0x0597daa0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8c460()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8c460

// auto_copy_block_01e8d160: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8d160 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dae0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d6b0, source_block, CopiedBlock);
RT_GLOBAL(0x0597dae0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d6b0 over the target block at 0x0597dae0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8d160()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8d160

// auto_copy_block_01e8e360: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8e360 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597db20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d6e0, source_block, CopiedBlock);
RT_GLOBAL(0x0597db20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d6e0 over the target block at 0x0597db20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8e360()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8e360

// auto_copy_block_01e8eb50: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8eb50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597db60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d710, source_block, CopiedBlock);
RT_GLOBAL(0x0597db60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d710 over the target block at 0x0597db60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8eb50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8eb50

// auto_copy_block_01e8f270: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8f270 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dba0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d740, source_block, CopiedBlock);
RT_GLOBAL(0x0597dba0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d740 over the target block at 0x0597dba0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8f270()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8f270

// auto_copy_block_01e90450: misc_copy_block_58b3240 with other addresses.
namespace twin_01e90450 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dbe0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d770, source_block, CopiedBlock);
RT_GLOBAL(0x0597dbe0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d770 over the target block at 0x0597dbe0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e90450()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e90450

// auto_copy_block_01e90a60: misc_copy_block_58b3240 with other addresses.
namespace twin_01e90a60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dc20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d7a0, source_block, CopiedBlock);
RT_GLOBAL(0x0597dc20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d7a0 over the target block at 0x0597dc20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e90a60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e90a60

// auto_copy_block_01e91710: misc_copy_block_58b3240 with other addresses.
namespace twin_01e91710 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dc60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d7d0, source_block, CopiedBlock);
RT_GLOBAL(0x0597dc60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d7d0 over the target block at 0x0597dc60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e91710()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e91710

// auto_copy_block_01e91ed0: misc_copy_block_58b3240 with other addresses.
namespace twin_01e91ed0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dca0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d800, source_block, CopiedBlock);
RT_GLOBAL(0x0597dca0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d800 over the target block at 0x0597dca0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e91ed0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e91ed0

// auto_copy_block_01e93070: misc_copy_block_58b3240 with other addresses.
namespace twin_01e93070 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dce0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d830, source_block, CopiedBlock);
RT_GLOBAL(0x0597dce0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d830 over the target block at 0x0597dce0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e93070()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e93070

// auto_copy_block_01e93440: misc_copy_block_58b3240 with other addresses.
namespace twin_01e93440 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dd20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d860, source_block, CopiedBlock);
RT_GLOBAL(0x0597dd20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d860 over the target block at 0x0597dd20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e93440()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e93440

// auto_copy_block_01e93670: misc_copy_block_58b3240 with other addresses.
namespace twin_01e93670 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dd60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d890, source_block, CopiedBlock);
RT_GLOBAL(0x0597dd60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d890 over the target block at 0x0597dd60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e93670()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e93670

// auto_copy_block_01e93880: misc_copy_block_58b3240 with other addresses.
namespace twin_01e93880 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dda0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d8c0, source_block, CopiedBlock);
RT_GLOBAL(0x0597dda0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d8c0 over the target block at 0x0597dda0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e93880()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e93880

// auto_copy_block_01e93f80: misc_copy_block_58b3240 with other addresses.
namespace twin_01e93f80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597dde0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d8f0, source_block, CopiedBlock);
RT_GLOBAL(0x0597dde0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d8f0 over the target block at 0x0597dde0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e93f80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e93f80

// auto_copy_block_01e94950: misc_copy_block_58b3240 with other addresses.
namespace twin_01e94950 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597de20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d920, source_block, CopiedBlock);
RT_GLOBAL(0x0597de20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d920 over the target block at 0x0597de20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e94950()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e94950

// auto_copy_block_01e95050: misc_copy_block_58b3240 with other addresses.
namespace twin_01e95050 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597de60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d950, source_block, CopiedBlock);
RT_GLOBAL(0x0597de60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d950 over the target block at 0x0597de60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e95050()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e95050

// auto_copy_block_01e9a700: misc_copy_block_58b3240 with other addresses.
namespace twin_01e9a700 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597e110.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dac0, source_block, CopiedBlock);
RT_GLOBAL(0x0597e110, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dac0 over the target block at 0x0597e110.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e9a700()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e9a700

// auto_copy_block_01ea0910: misc_copy_block_58b3240 with other addresses.
namespace twin_01ea0910 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597e190.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0db70, source_block, CopiedBlock);
RT_GLOBAL(0x0597e190, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0db70 over the target block at 0x0597e190.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ea0910()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ea0910

// auto_copy_block_01ea2820: misc_copy_block_58b3240 with other addresses.
namespace twin_01ea2820 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597e1d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dba0, source_block, CopiedBlock);
RT_GLOBAL(0x0597e1d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dba0 over the target block at 0x0597e1d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ea2820()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ea2820

// auto_copy_block_01eaedf0: misc_copy_block_58b3240 with other addresses.
namespace twin_01eaedf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597e710.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dc30, source_block, CopiedBlock);
RT_GLOBAL(0x0597e710, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dc30 over the target block at 0x0597e710.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01eaedf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01eaedf0

// auto_copy_block_01eb03b0: misc_copy_block_58b3240 with other addresses.
namespace twin_01eb03b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597e750.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dc60, source_block, CopiedBlock);
RT_GLOBAL(0x0597e750, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dc60 over the target block at 0x0597e750.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01eb03b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01eb03b0

// auto_copy_block_01eb17f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01eb17f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597e790.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dc90, source_block, CopiedBlock);
RT_GLOBAL(0x0597e790, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dc90 over the target block at 0x0597e790.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01eb17f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01eb17f0

// auto_copy_block_01eb3d90: misc_copy_block_58b3240 with other addresses.
namespace twin_01eb3d90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597e7d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dcc0, source_block, CopiedBlock);
RT_GLOBAL(0x0597e7d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dcc0 over the target block at 0x0597e7d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01eb3d90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01eb3d90

// auto_copy_block_01ec44e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01ec44e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597ec60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dd20, source_block, CopiedBlock);
RT_GLOBAL(0x0597ec60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dd20 over the target block at 0x0597ec60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ec44e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ec44e0

// auto_copy_block_01ec5300: misc_copy_block_58b3240 with other addresses.
namespace twin_01ec5300 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597ece0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ddb0, source_block, CopiedBlock);
RT_GLOBAL(0x0597ece0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ddb0 over the target block at 0x0597ece0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ec5300()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ec5300

// auto_copy_block_01ec6450: misc_copy_block_58b3240 with other addresses.
namespace twin_01ec6450 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597ed20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dde0, source_block, CopiedBlock);
RT_GLOBAL(0x0597ed20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dde0 over the target block at 0x0597ed20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ec6450()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ec6450

// auto_copy_block_01ec6970: misc_copy_block_58b3240 with other addresses.
namespace twin_01ec6970 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597eda0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0de70, source_block, CopiedBlock);
RT_GLOBAL(0x0597eda0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0de70 over the target block at 0x0597eda0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ec6970()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ec6970

// auto_copy_block_01ec6fa0: misc_copy_block_58b3240 with other addresses.
namespace twin_01ec6fa0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597ede0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dea0, source_block, CopiedBlock);
RT_GLOBAL(0x0597ede0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dea0 over the target block at 0x0597ede0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ec6fa0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ec6fa0

// auto_copy_block_01ec71e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01ec71e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597ee20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ded0, source_block, CopiedBlock);
RT_GLOBAL(0x0597ee20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ded0 over the target block at 0x0597ee20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ec71e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ec71e0

// auto_copy_block_01ec7b20: misc_copy_block_58b3240 with other addresses.
namespace twin_01ec7b20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597ee60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0df00, source_block, CopiedBlock);
RT_GLOBAL(0x0597ee60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0df00 over the target block at 0x0597ee60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ec7b20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ec7b20

// auto_copy_block_01ecb3e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01ecb3e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597eea0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0df30, source_block, CopiedBlock);
RT_GLOBAL(0x0597eea0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0df30 over the target block at 0x0597eea0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ecb3e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ecb3e0

// auto_copy_block_01ecb700: misc_copy_block_58b3240 with other addresses.
namespace twin_01ecb700 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597eee0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0df60, source_block, CopiedBlock);
RT_GLOBAL(0x0597eee0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0df60 over the target block at 0x0597eee0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ecb700()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ecb700

// auto_copy_block_01ecd410: misc_copy_block_58b3240 with other addresses.
namespace twin_01ecd410 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597ef20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0df90, source_block, CopiedBlock);
RT_GLOBAL(0x0597ef20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0df90 over the target block at 0x0597ef20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ecd410()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ecd410

// auto_copy_block_01ecde10: misc_copy_block_58b3240 with other addresses.
namespace twin_01ecde10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597ef60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dfc0, source_block, CopiedBlock);
RT_GLOBAL(0x0597ef60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dfc0 over the target block at 0x0597ef60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ecde10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ecde10

// auto_copy_block_01ece450: misc_copy_block_58b3240 with other addresses.
namespace twin_01ece450 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597efe0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0dff0, source_block, CopiedBlock);
RT_GLOBAL(0x0597efe0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0dff0 over the target block at 0x0597efe0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ece450()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ece450

// auto_copy_block_01ed1d00: misc_copy_block_58b3240 with other addresses.
namespace twin_01ed1d00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f090.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e050, source_block, CopiedBlock);
RT_GLOBAL(0x0597f090, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e050 over the target block at 0x0597f090.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ed1d00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ed1d00

// auto_copy_block_01ed2b10: misc_copy_block_58b3240 with other addresses.
namespace twin_01ed2b10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f0f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e080, source_block, CopiedBlock);
RT_GLOBAL(0x0597f0f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e080 over the target block at 0x0597f0f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ed2b10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ed2b10

// auto_copy_block_01ed9a70: misc_copy_block_58b3240 with other addresses.
namespace twin_01ed9a70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f720.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e1a0, source_block, CopiedBlock);
RT_GLOBAL(0x0597f720, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e1a0 over the target block at 0x0597f720.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ed9a70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ed9a70

// auto_copy_block_01edabb0: misc_copy_block_58b3240 with other addresses.
namespace twin_01edabb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f7b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e220, source_block, CopiedBlock);
RT_GLOBAL(0x0597f7b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e220 over the target block at 0x0597f7b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01edabb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01edabb0

// auto_copy_block_01edbce0: misc_copy_block_58b3240 with other addresses.
namespace twin_01edbce0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f850.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e280, source_block, CopiedBlock);
RT_GLOBAL(0x0597f850, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e280 over the target block at 0x0597f850.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01edbce0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01edbce0

// auto_copy_block_01edc930: misc_copy_block_58b3240 with other addresses.
namespace twin_01edc930 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f890.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e2b0, source_block, CopiedBlock);
RT_GLOBAL(0x0597f890, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e2b0 over the target block at 0x0597f890.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01edc930()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01edc930

// auto_copy_block_01edcef0: misc_copy_block_58b3240 with other addresses.
namespace twin_01edcef0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f8d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e2e0, source_block, CopiedBlock);
RT_GLOBAL(0x0597f8d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e2e0 over the target block at 0x0597f8d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01edcef0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01edcef0

// auto_copy_block_01edd650: misc_copy_block_58b3240 with other addresses.
namespace twin_01edd650 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f910.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e310, source_block, CopiedBlock);
RT_GLOBAL(0x0597f910, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e310 over the target block at 0x0597f910.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01edd650()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01edd650

// auto_copy_block_01edd970: misc_copy_block_58b3240 with other addresses.
namespace twin_01edd970 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f950.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e340, source_block, CopiedBlock);
RT_GLOBAL(0x0597f950, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e340 over the target block at 0x0597f950.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01edd970()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01edd970

// auto_copy_block_01edf520: misc_copy_block_58b3240 with other addresses.
namespace twin_01edf520 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597f9d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e3d0, source_block, CopiedBlock);
RT_GLOBAL(0x0597f9d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e3d0 over the target block at 0x0597f9d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01edf520()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01edf520

// auto_copy_block_01edf8a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01edf8a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597fa10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e400, source_block, CopiedBlock);
RT_GLOBAL(0x0597fa10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e400 over the target block at 0x0597fa10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01edf8a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01edf8a0

// auto_copy_block_01edfca0: misc_copy_block_58b3240 with other addresses.
namespace twin_01edfca0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597faa0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e460, source_block, CopiedBlock);
RT_GLOBAL(0x0597faa0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e460 over the target block at 0x0597faa0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01edfca0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01edfca0

// auto_copy_block_01ee9a30: misc_copy_block_58b3240 with other addresses.
namespace twin_01ee9a30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597fbe0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e5d0, source_block, CopiedBlock);
RT_GLOBAL(0x0597fbe0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e5d0 over the target block at 0x0597fbe0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ee9a30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ee9a30

// auto_copy_block_01eebfa0: misc_copy_block_58b3240 with other addresses.
namespace twin_01eebfa0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597fc80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e630, source_block, CopiedBlock);
RT_GLOBAL(0x0597fc80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e630 over the target block at 0x0597fc80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01eebfa0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01eebfa0

// auto_copy_block_01f12260: misc_copy_block_58b3240 with other addresses.
namespace twin_01f12260 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597fed0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e7c0, source_block, CopiedBlock);
RT_GLOBAL(0x0597fed0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e7c0 over the target block at 0x0597fed0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f12260()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f12260

// auto_copy_block_01f18150: misc_copy_block_58b3240 with other addresses.
namespace twin_01f18150 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597ff60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0e820, source_block, CopiedBlock);
RT_GLOBAL(0x0597ff60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0e820 over the target block at 0x0597ff60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f18150()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f18150

// auto_copy_block_01f4fe60: misc_copy_block_58b3240 with other addresses.
namespace twin_01f4fe60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059803f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ea90, source_block, CopiedBlock);
RT_GLOBAL(0x059803f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ea90 over the target block at 0x059803f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f4fe60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f4fe60

// auto_copy_block_01f57da0: misc_copy_block_58b3240 with other addresses.
namespace twin_01f57da0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05980480.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0eb20, source_block, CopiedBlock);
RT_GLOBAL(0x05980480, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0eb20 over the target block at 0x05980480.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f57da0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f57da0

// auto_copy_block_01f580a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01f580a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059804c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0eb50, source_block, CopiedBlock);
RT_GLOBAL(0x059804c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0eb50 over the target block at 0x059804c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f580a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f580a0

// auto_copy_block_01f5a5d0: misc_copy_block_58b3240 with other addresses.
namespace twin_01f5a5d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05980500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0eb80, source_block, CopiedBlock);
RT_GLOBAL(0x05980500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0eb80 over the target block at 0x05980500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f5a5d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f5a5d0

// auto_copy_block_01f5ab00: misc_copy_block_58b3240 with other addresses.
namespace twin_01f5ab00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05980540.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ebb0, source_block, CopiedBlock);
RT_GLOBAL(0x05980540, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ebb0 over the target block at 0x05980540.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f5ab00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f5ab00

// auto_copy_block_01f5ad40: misc_copy_block_58b3240 with other addresses.
namespace twin_01f5ad40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05980580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ebe0, source_block, CopiedBlock);
RT_GLOBAL(0x05980580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ebe0 over the target block at 0x05980580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f5ad40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f5ad40

// auto_copy_block_01f5b900: misc_copy_block_58b3240 with other addresses.
namespace twin_01f5b900 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059805c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ec10, source_block, CopiedBlock);
RT_GLOBAL(0x059805c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ec10 over the target block at 0x059805c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f5b900()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f5b900

// auto_copy_block_01f5c880: misc_copy_block_58b3240 with other addresses.
namespace twin_01f5c880 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05980600.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ec40, source_block, CopiedBlock);
RT_GLOBAL(0x05980600, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ec40 over the target block at 0x05980600.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01f5c880()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01f5c880

// auto_copy_block_01fed840: misc_copy_block_58b3240 with other addresses.
namespace twin_01fed840 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981150.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f170, source_block, CopiedBlock);
RT_GLOBAL(0x05981150, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f170 over the target block at 0x05981150.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01fed840()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01fed840

// auto_copy_block_01feebf0: misc_copy_block_58b3240 with other addresses.
namespace twin_01feebf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981190.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f1a0, source_block, CopiedBlock);
RT_GLOBAL(0x05981190, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f1a0 over the target block at 0x05981190.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01feebf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01feebf0

// auto_copy_block_01fef770: misc_copy_block_58b3240 with other addresses.
namespace twin_01fef770 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059811d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f1d0, source_block, CopiedBlock);
RT_GLOBAL(0x059811d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f1d0 over the target block at 0x059811d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01fef770()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01fef770

// auto_copy_block_01ff0100: misc_copy_block_58b3240 with other addresses.
namespace twin_01ff0100 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981210.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f200, source_block, CopiedBlock);
RT_GLOBAL(0x05981210, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f200 over the target block at 0x05981210.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ff0100()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ff0100

// auto_copy_block_01ff08c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01ff08c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981250.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f230, source_block, CopiedBlock);
RT_GLOBAL(0x05981250, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f230 over the target block at 0x05981250.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ff08c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ff08c0

// auto_copy_block_020195c0: misc_copy_block_58b3240 with other addresses.
namespace twin_020195c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059814c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f390, source_block, CopiedBlock);
RT_GLOBAL(0x059814c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f390 over the target block at 0x059814c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020195c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020195c0

// auto_copy_block_02019c60: misc_copy_block_58b3240 with other addresses.
namespace twin_02019c60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f3c0, source_block, CopiedBlock);
RT_GLOBAL(0x05981500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f3c0 over the target block at 0x05981500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02019c60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02019c60

// auto_copy_block_0201b0e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0201b0e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981540.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f3f0, source_block, CopiedBlock);
RT_GLOBAL(0x05981540, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f3f0 over the target block at 0x05981540.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0201b0e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0201b0e0

// auto_copy_block_0201b7f0: misc_copy_block_58b3240 with other addresses.
namespace twin_0201b7f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f420, source_block, CopiedBlock);
RT_GLOBAL(0x05981580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f420 over the target block at 0x05981580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0201b7f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0201b7f0

// auto_copy_block_0201bb90: misc_copy_block_58b3240 with other addresses.
namespace twin_0201bb90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059815c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f450, source_block, CopiedBlock);
RT_GLOBAL(0x059815c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f450 over the target block at 0x059815c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0201bb90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0201bb90

// auto_copy_block_0201c400: misc_copy_block_58b3240 with other addresses.
namespace twin_0201c400 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981600.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f480, source_block, CopiedBlock);
RT_GLOBAL(0x05981600, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f480 over the target block at 0x05981600.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0201c400()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0201c400

// auto_copy_block_0204a4c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0204a4c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981810.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f690, source_block, CopiedBlock);
RT_GLOBAL(0x05981810, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f690 over the target block at 0x05981810.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0204a4c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0204a4c0

// auto_copy_block_020538e0: misc_copy_block_58b3240 with other addresses.
namespace twin_020538e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981940.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f770, source_block, CopiedBlock);
RT_GLOBAL(0x05981940, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f770 over the target block at 0x05981940.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020538e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020538e0

// auto_copy_block_02055e60: misc_copy_block_58b3240 with other addresses.
namespace twin_02055e60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f7a0, source_block, CopiedBlock);
RT_GLOBAL(0x05981980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f7a0 over the target block at 0x05981980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02055e60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02055e60

// auto_copy_block_02056870: misc_copy_block_58b3240 with other addresses.
namespace twin_02056870 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981a10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f830, source_block, CopiedBlock);
RT_GLOBAL(0x05981a10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f830 over the target block at 0x05981a10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02056870()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02056870

// auto_copy_block_02056e90: misc_copy_block_58b3240 with other addresses.
namespace twin_02056e90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981a50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f860, source_block, CopiedBlock);
RT_GLOBAL(0x05981a50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f860 over the target block at 0x05981a50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02056e90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02056e90

// auto_copy_block_0205ac70: misc_copy_block_58b3240 with other addresses.
namespace twin_0205ac70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981b80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0f980, source_block, CopiedBlock);
RT_GLOBAL(0x05981b80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0f980 over the target block at 0x05981b80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0205ac70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0205ac70

// auto_copy_block_02068280: misc_copy_block_58b3240 with other addresses.
namespace twin_02068280 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05981c50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fa10, source_block, CopiedBlock);
RT_GLOBAL(0x05981c50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fa10 over the target block at 0x05981c50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02068280()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02068280

// auto_copy_block_0206ef60: misc_copy_block_58b3240 with other addresses.
namespace twin_0206ef60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05982d90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fa70, source_block, CopiedBlock);
RT_GLOBAL(0x05982d90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fa70 over the target block at 0x05982d90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0206ef60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0206ef60

// auto_copy_block_02089b60: misc_copy_block_58b3240 with other addresses.
namespace twin_02089b60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05982fd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fb90, source_block, CopiedBlock);
RT_GLOBAL(0x05982fd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fb90 over the target block at 0x05982fd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02089b60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02089b60

// auto_copy_block_0208aee0: misc_copy_block_58b3240 with other addresses.
namespace twin_0208aee0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05983010.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fbc0, source_block, CopiedBlock);
RT_GLOBAL(0x05983010, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fbc0 over the target block at 0x05983010.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0208aee0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0208aee0

// auto_copy_block_0208b2a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0208b2a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05983050.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fbf0, source_block, CopiedBlock);
RT_GLOBAL(0x05983050, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fbf0 over the target block at 0x05983050.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0208b2a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0208b2a0

// auto_copy_block_02093780: misc_copy_block_58b3240 with other addresses.
namespace twin_02093780 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05983100.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fc90, source_block, CopiedBlock);
RT_GLOBAL(0x05983100, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fc90 over the target block at 0x05983100.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02093780()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02093780

// auto_copy_block_020942f0: misc_copy_block_58b3240 with other addresses.
namespace twin_020942f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05983140.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fcc0, source_block, CopiedBlock);
RT_GLOBAL(0x05983140, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fcc0 over the target block at 0x05983140.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020942f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020942f0

// auto_copy_block_02095100: misc_copy_block_58b3240 with other addresses.
namespace twin_02095100 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05983180.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fcf0, source_block, CopiedBlock);
RT_GLOBAL(0x05983180, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fcf0 over the target block at 0x05983180.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02095100()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02095100

// auto_copy_block_020956f0: misc_copy_block_58b3240 with other addresses.
namespace twin_020956f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059831c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fd20, source_block, CopiedBlock);
RT_GLOBAL(0x059831c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fd20 over the target block at 0x059831c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020956f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020956f0

// auto_copy_block_020a12a0: misc_copy_block_58b3240 with other addresses.
namespace twin_020a12a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059833b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0fed0, source_block, CopiedBlock);
RT_GLOBAL(0x059833b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0fed0 over the target block at 0x059833b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020a12a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020a12a0

// auto_copy_block_020a14b0: misc_copy_block_58b3240 with other addresses.
namespace twin_020a14b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059833f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ff00, source_block, CopiedBlock);
RT_GLOBAL(0x059833f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ff00 over the target block at 0x059833f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020a14b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020a14b0

// auto_copy_block_020a1680: misc_copy_block_58b3240 with other addresses.
namespace twin_020a1680 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05983430.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ff30, source_block, CopiedBlock);
RT_GLOBAL(0x05983430, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ff30 over the target block at 0x05983430.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020a1680()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020a1680

// auto_copy_block_020a4c30: misc_copy_block_58b3240 with other addresses.
namespace twin_020a4c30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05983550.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ffc0, source_block, CopiedBlock);
RT_GLOBAL(0x05983550, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ffc0 over the target block at 0x05983550.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020a4c30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020a4c30

// auto_copy_block_020a85a0: misc_copy_block_58b3240 with other addresses.
namespace twin_020a85a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059835e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10020, source_block, CopiedBlock);
RT_GLOBAL(0x059835e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10020 over the target block at 0x059835e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020a85a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020a85a0

// auto_copy_block_020aaf50: misc_copy_block_58b3240 with other addresses.
namespace twin_020aaf50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05983730.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d100a0, source_block, CopiedBlock);
RT_GLOBAL(0x05983730, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d100a0 over the target block at 0x05983730.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020aaf50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020aaf50

// auto_copy_block_020b4190: misc_copy_block_58b3240 with other addresses.
namespace twin_020b4190 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059838b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10250, source_block, CopiedBlock);
RT_GLOBAL(0x059838b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10250 over the target block at 0x059838b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020b4190()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020b4190

// auto_copy_block_020b4ac0: misc_copy_block_58b3240 with other addresses.
namespace twin_020b4ac0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059838f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10280, source_block, CopiedBlock);
RT_GLOBAL(0x059838f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10280 over the target block at 0x059838f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020b4ac0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020b4ac0

// auto_copy_block_020d01f0: misc_copy_block_58b3240 with other addresses.
namespace twin_020d01f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05984a40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10610, source_block, CopiedBlock);
RT_GLOBAL(0x05984a40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10610 over the target block at 0x05984a40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020d01f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020d01f0

// auto_copy_block_020df350: misc_copy_block_58b3240 with other addresses.
namespace twin_020df350 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985220.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10ac0, source_block, CopiedBlock);
RT_GLOBAL(0x05985220, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10ac0 over the target block at 0x05985220.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020df350()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020df350

// auto_copy_block_020df500: misc_copy_block_58b3240 with other addresses.
namespace twin_020df500 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985260.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10af0, source_block, CopiedBlock);
RT_GLOBAL(0x05985260, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10af0 over the target block at 0x05985260.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020df500()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020df500

// auto_copy_block_020e7570: misc_copy_block_58b3240 with other addresses.
namespace twin_020e7570 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059852f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10ba0, source_block, CopiedBlock);
RT_GLOBAL(0x059852f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10ba0 over the target block at 0x059852f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020e7570()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020e7570

// auto_copy_block_020e7d40: misc_copy_block_58b3240 with other addresses.
namespace twin_020e7d40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985330.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10bd0, source_block, CopiedBlock);
RT_GLOBAL(0x05985330, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10bd0 over the target block at 0x05985330.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020e7d40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020e7d40

// auto_copy_block_020e8620: misc_copy_block_58b3240 with other addresses.
namespace twin_020e8620 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985370.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10c00, source_block, CopiedBlock);
RT_GLOBAL(0x05985370, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10c00 over the target block at 0x05985370.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020e8620()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020e8620

// auto_copy_block_020e97e0: misc_copy_block_58b3240 with other addresses.
namespace twin_020e97e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059853b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10c30, source_block, CopiedBlock);
RT_GLOBAL(0x059853b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10c30 over the target block at 0x059853b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020e97e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020e97e0

// auto_copy_block_020ea8d0: misc_copy_block_58b3240 with other addresses.
namespace twin_020ea8d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059853f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10c60, source_block, CopiedBlock);
RT_GLOBAL(0x059853f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10c60 over the target block at 0x059853f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020ea8d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020ea8d0

// auto_copy_block_020eaf20: misc_copy_block_58b3240 with other addresses.
namespace twin_020eaf20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985430.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10c90, source_block, CopiedBlock);
RT_GLOBAL(0x05985430, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10c90 over the target block at 0x05985430.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020eaf20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020eaf20

// auto_copy_block_020eb450: misc_copy_block_58b3240 with other addresses.
namespace twin_020eb450 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985470.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10cc0, source_block, CopiedBlock);
RT_GLOBAL(0x05985470, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10cc0 over the target block at 0x05985470.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020eb450()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020eb450

// auto_copy_block_020ebe40: misc_copy_block_58b3240 with other addresses.
namespace twin_020ebe40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059854f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10d50, source_block, CopiedBlock);
RT_GLOBAL(0x059854f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10d50 over the target block at 0x059854f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020ebe40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020ebe40

// auto_copy_block_020ec5c0: misc_copy_block_58b3240 with other addresses.
namespace twin_020ec5c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985570.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10de0, source_block, CopiedBlock);
RT_GLOBAL(0x05985570, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10de0 over the target block at 0x05985570.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020ec5c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020ec5c0

// auto_copy_block_020ecd90: misc_copy_block_58b3240 with other addresses.
namespace twin_020ecd90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059855b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10e10, source_block, CopiedBlock);
RT_GLOBAL(0x059855b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10e10 over the target block at 0x059855b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020ecd90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020ecd90

// auto_copy_block_020ed060: misc_copy_block_58b3240 with other addresses.
namespace twin_020ed060 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059855f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10e40, source_block, CopiedBlock);
RT_GLOBAL(0x059855f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10e40 over the target block at 0x059855f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020ed060()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020ed060

// auto_copy_block_020ee4a0: misc_copy_block_58b3240 with other addresses.
namespace twin_020ee4a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985630.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10e80, source_block, CopiedBlock);
RT_GLOBAL(0x05985630, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10e80 over the target block at 0x05985630.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020ee4a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020ee4a0

// auto_copy_block_020ef110: misc_copy_block_58b3240 with other addresses.
namespace twin_020ef110 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985670.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10eb0, source_block, CopiedBlock);
RT_GLOBAL(0x05985670, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10eb0 over the target block at 0x05985670.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020ef110()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020ef110

// auto_copy_block_020f0170: misc_copy_block_58b3240 with other addresses.
namespace twin_020f0170 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059856b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10ee0, source_block, CopiedBlock);
RT_GLOBAL(0x059856b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10ee0 over the target block at 0x059856b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020f0170()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020f0170

// auto_copy_block_020f18f0: misc_copy_block_58b3240 with other addresses.
namespace twin_020f18f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059856f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10f10, source_block, CopiedBlock);
RT_GLOBAL(0x059856f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10f10 over the target block at 0x059856f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020f18f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020f18f0

// auto_copy_block_020f2de0: misc_copy_block_58b3240 with other addresses.
namespace twin_020f2de0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05985730.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d10f40, source_block, CopiedBlock);
RT_GLOBAL(0x05985730, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d10f40 over the target block at 0x05985730.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_020f2de0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_020f2de0

// auto_copy_block_021067e0: misc_copy_block_58b3240 with other addresses.
namespace twin_021067e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059860a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d110e0, source_block, CopiedBlock);
RT_GLOBAL(0x059860a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d110e0 over the target block at 0x059860a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021067e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021067e0

// auto_copy_block_02107060: misc_copy_block_58b3240 with other addresses.
namespace twin_02107060 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059860e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11110, source_block, CopiedBlock);
RT_GLOBAL(0x059860e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11110 over the target block at 0x059860e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02107060()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02107060

// auto_copy_block_02108060: misc_copy_block_58b3240 with other addresses.
namespace twin_02108060 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986120.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11150, source_block, CopiedBlock);
RT_GLOBAL(0x05986120, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11150 over the target block at 0x05986120.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02108060()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02108060

// auto_copy_block_0210d560: misc_copy_block_58b3240 with other addresses.
namespace twin_0210d560 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986450.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d111e0, source_block, CopiedBlock);
RT_GLOBAL(0x05986450, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d111e0 over the target block at 0x05986450.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0210d560()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0210d560

// auto_copy_block_0210d950: misc_copy_block_58b3240 with other addresses.
namespace twin_0210d950 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986490.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11210, source_block, CopiedBlock);
RT_GLOBAL(0x05986490, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11210 over the target block at 0x05986490.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0210d950()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0210d950

// auto_copy_block_0210e270: misc_copy_block_58b3240 with other addresses.
namespace twin_0210e270 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059864d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11240, source_block, CopiedBlock);
RT_GLOBAL(0x059864d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11240 over the target block at 0x059864d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0210e270()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0210e270

// auto_copy_block_0210ec00: misc_copy_block_58b3240 with other addresses.
namespace twin_0210ec00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986510.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11300, source_block, CopiedBlock);
RT_GLOBAL(0x05986510, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11300 over the target block at 0x05986510.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0210ec00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0210ec00

// auto_copy_block_0210fbc0: misc_copy_block_58b3240 with other addresses.
namespace twin_0210fbc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986550.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d113c0, source_block, CopiedBlock);
RT_GLOBAL(0x05986550, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d113c0 over the target block at 0x05986550.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0210fbc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0210fbc0

// auto_copy_block_021109e0: misc_copy_block_58b3240 with other addresses.
namespace twin_021109e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986590.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11550, source_block, CopiedBlock);
RT_GLOBAL(0x05986590, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11550 over the target block at 0x05986590.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021109e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021109e0

// auto_copy_block_02110c30: misc_copy_block_58b3240 with other addresses.
namespace twin_02110c30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059865d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d115a0, source_block, CopiedBlock);
RT_GLOBAL(0x059865d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d115a0 over the target block at 0x059865d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02110c30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02110c30

// auto_copy_block_021117e0: misc_copy_block_58b3240 with other addresses.
namespace twin_021117e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986610.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11730, source_block, CopiedBlock);
RT_GLOBAL(0x05986610, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11730 over the target block at 0x05986610.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021117e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021117e0

// auto_copy_block_02112db0: misc_copy_block_58b3240 with other addresses.
namespace twin_02112db0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986650.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11780, source_block, CopiedBlock);
RT_GLOBAL(0x05986650, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11780 over the target block at 0x05986650.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02112db0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02112db0

// auto_copy_block_02117940: misc_copy_block_58b3240 with other addresses.
namespace twin_02117940 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986870.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11c30, source_block, CopiedBlock);
RT_GLOBAL(0x05986870, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11c30 over the target block at 0x05986870.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02117940()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02117940

// auto_copy_block_02118de0: misc_copy_block_58b3240 with other addresses.
namespace twin_02118de0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059868b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11cd0, source_block, CopiedBlock);
RT_GLOBAL(0x059868b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11cd0 over the target block at 0x059868b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02118de0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02118de0

// auto_copy_block_02120780: misc_copy_block_58b3240 with other addresses.
namespace twin_02120780 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986cb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11f40, source_block, CopiedBlock);
RT_GLOBAL(0x05986cb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11f40 over the target block at 0x05986cb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02120780()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02120780

// auto_copy_block_02120b00: misc_copy_block_58b3240 with other addresses.
namespace twin_02120b00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986d10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d11f70, source_block, CopiedBlock);
RT_GLOBAL(0x05986d10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d11f70 over the target block at 0x05986d10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02120b00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02120b00

// auto_copy_block_02122cb0: misc_copy_block_58b3240 with other addresses.
namespace twin_02122cb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986d50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12040, source_block, CopiedBlock);
RT_GLOBAL(0x05986d50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12040 over the target block at 0x05986d50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02122cb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02122cb0

// auto_copy_block_021286e0: misc_copy_block_58b3240 with other addresses.
namespace twin_021286e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986ed0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12250, source_block, CopiedBlock);
RT_GLOBAL(0x05986ed0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12250 over the target block at 0x05986ed0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021286e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021286e0

// auto_copy_block_021298e0: misc_copy_block_58b3240 with other addresses.
namespace twin_021298e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986f10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d122a0, source_block, CopiedBlock);
RT_GLOBAL(0x05986f10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d122a0 over the target block at 0x05986f10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021298e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021298e0

// auto_copy_block_0212b480: misc_copy_block_58b3240 with other addresses.
namespace twin_0212b480 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986f90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12330, source_block, CopiedBlock);
RT_GLOBAL(0x05986f90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12330 over the target block at 0x05986f90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212b480()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212b480

// auto_copy_block_0212b7b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0212b7b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05986fd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12360, source_block, CopiedBlock);
RT_GLOBAL(0x05986fd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12360 over the target block at 0x05986fd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212b7b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212b7b0

// auto_copy_block_0212ba10: misc_copy_block_58b3240 with other addresses.
namespace twin_0212ba10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987010.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12390, source_block, CopiedBlock);
RT_GLOBAL(0x05987010, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12390 over the target block at 0x05987010.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212ba10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212ba10

// auto_copy_block_0212c1d0: misc_copy_block_58b3240 with other addresses.
namespace twin_0212c1d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987050.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d123c0, source_block, CopiedBlock);
RT_GLOBAL(0x05987050, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d123c0 over the target block at 0x05987050.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212c1d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212c1d0

// auto_copy_block_0212c3a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0212c3a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987090.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d123f0, source_block, CopiedBlock);
RT_GLOBAL(0x05987090, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d123f0 over the target block at 0x05987090.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212c3a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212c3a0

// auto_copy_block_0212cb40: misc_copy_block_58b3240 with other addresses.
namespace twin_0212cb40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059870d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12420, source_block, CopiedBlock);
RT_GLOBAL(0x059870d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12420 over the target block at 0x059870d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212cb40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212cb40

// auto_copy_block_0212cf30: misc_copy_block_58b3240 with other addresses.
namespace twin_0212cf30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987110.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12450, source_block, CopiedBlock);
RT_GLOBAL(0x05987110, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12450 over the target block at 0x05987110.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212cf30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212cf30

// auto_copy_block_0212d330: misc_copy_block_58b3240 with other addresses.
namespace twin_0212d330 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987150.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12480, source_block, CopiedBlock);
RT_GLOBAL(0x05987150, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12480 over the target block at 0x05987150.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212d330()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212d330

// auto_copy_block_0212d960: misc_copy_block_58b3240 with other addresses.
namespace twin_0212d960 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987190.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d124d0, source_block, CopiedBlock);
RT_GLOBAL(0x05987190, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d124d0 over the target block at 0x05987190.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212d960()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212d960

// auto_copy_block_0212db00: misc_copy_block_58b3240 with other addresses.
namespace twin_0212db00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059871d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12500, source_block, CopiedBlock);
RT_GLOBAL(0x059871d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12500 over the target block at 0x059871d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212db00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212db00

// auto_copy_block_0212e050: misc_copy_block_58b3240 with other addresses.
namespace twin_0212e050 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987210.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12530, source_block, CopiedBlock);
RT_GLOBAL(0x05987210, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12530 over the target block at 0x05987210.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212e050()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212e050

// auto_copy_block_0212e3e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0212e3e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987250.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12560, source_block, CopiedBlock);
RT_GLOBAL(0x05987250, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12560 over the target block at 0x05987250.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212e3e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212e3e0

// auto_copy_block_0212e580: misc_copy_block_58b3240 with other addresses.
namespace twin_0212e580 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987290.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12590, source_block, CopiedBlock);
RT_GLOBAL(0x05987290, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12590 over the target block at 0x05987290.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212e580()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212e580

// auto_copy_block_0212f240: misc_copy_block_58b3240 with other addresses.
namespace twin_0212f240 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059872d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d125e0, source_block, CopiedBlock);
RT_GLOBAL(0x059872d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d125e0 over the target block at 0x059872d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212f240()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212f240

// auto_copy_block_0212fe60: misc_copy_block_58b3240 with other addresses.
namespace twin_0212fe60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987310.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12610, source_block, CopiedBlock);
RT_GLOBAL(0x05987310, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12610 over the target block at 0x05987310.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0212fe60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0212fe60

// auto_copy_block_02130870: misc_copy_block_58b3240 with other addresses.
namespace twin_02130870 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987350.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12640, source_block, CopiedBlock);
RT_GLOBAL(0x05987350, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12640 over the target block at 0x05987350.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02130870()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02130870

// auto_copy_block_02131d90: misc_copy_block_58b3240 with other addresses.
namespace twin_02131d90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987390.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12720, source_block, CopiedBlock);
RT_GLOBAL(0x05987390, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12720 over the target block at 0x05987390.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02131d90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02131d90

// auto_copy_block_02132ca0: misc_copy_block_58b3240 with other addresses.
namespace twin_02132ca0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987420.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d127c0, source_block, CopiedBlock);
RT_GLOBAL(0x05987420, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d127c0 over the target block at 0x05987420.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02132ca0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02132ca0

// auto_copy_block_021340e0: misc_copy_block_58b3240 with other addresses.
namespace twin_021340e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987460.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12850, source_block, CopiedBlock);
RT_GLOBAL(0x05987460, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12850 over the target block at 0x05987460.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021340e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021340e0

// auto_copy_block_02134bc0: misc_copy_block_58b3240 with other addresses.
namespace twin_02134bc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059874a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12880, source_block, CopiedBlock);
RT_GLOBAL(0x059874a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12880 over the target block at 0x059874a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02134bc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02134bc0

// auto_copy_block_02135010: misc_copy_block_58b3240 with other addresses.
namespace twin_02135010 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059874e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d128b0, source_block, CopiedBlock);
RT_GLOBAL(0x059874e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d128b0 over the target block at 0x059874e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02135010()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02135010

// auto_copy_block_02135880: misc_copy_block_58b3240 with other addresses.
namespace twin_02135880 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987520.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d128e0, source_block, CopiedBlock);
RT_GLOBAL(0x05987520, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d128e0 over the target block at 0x05987520.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02135880()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02135880

// auto_copy_block_02135f90: misc_copy_block_58b3240 with other addresses.
namespace twin_02135f90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987560.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12910, source_block, CopiedBlock);
RT_GLOBAL(0x05987560, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12910 over the target block at 0x05987560.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02135f90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02135f90

// auto_copy_block_021363f0: misc_copy_block_58b3240 with other addresses.
namespace twin_021363f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059875a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12940, source_block, CopiedBlock);
RT_GLOBAL(0x059875a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12940 over the target block at 0x059875a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021363f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021363f0

// auto_copy_block_02136590: misc_copy_block_58b3240 with other addresses.
namespace twin_02136590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059875e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12970, source_block, CopiedBlock);
RT_GLOBAL(0x059875e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12970 over the target block at 0x059875e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02136590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02136590

// auto_copy_block_02136730: misc_copy_block_58b3240 with other addresses.
namespace twin_02136730 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987620.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d129a0, source_block, CopiedBlock);
RT_GLOBAL(0x05987620, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d129a0 over the target block at 0x05987620.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02136730()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02136730

// auto_copy_block_02137000: misc_copy_block_58b3240 with other addresses.
namespace twin_02137000 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987660.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d129f0, source_block, CopiedBlock);
RT_GLOBAL(0x05987660, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d129f0 over the target block at 0x05987660.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02137000()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02137000

// auto_copy_block_02137a50: misc_copy_block_58b3240 with other addresses.
namespace twin_02137a50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059876a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12a80, source_block, CopiedBlock);
RT_GLOBAL(0x059876a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12a80 over the target block at 0x059876a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02137a50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02137a50

// auto_copy_block_02138130: misc_copy_block_58b3240 with other addresses.
namespace twin_02138130 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059876e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12b60, source_block, CopiedBlock);
RT_GLOBAL(0x059876e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12b60 over the target block at 0x059876e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02138130()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02138130

// auto_copy_block_02138f50: misc_copy_block_58b3240 with other addresses.
namespace twin_02138f50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987720.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12b90, source_block, CopiedBlock);
RT_GLOBAL(0x05987720, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12b90 over the target block at 0x05987720.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02138f50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02138f50

// auto_copy_block_02139460: misc_copy_block_58b3240 with other addresses.
namespace twin_02139460 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987760.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12bc0, source_block, CopiedBlock);
RT_GLOBAL(0x05987760, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12bc0 over the target block at 0x05987760.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02139460()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02139460

// auto_copy_block_02139cc0: misc_copy_block_58b3240 with other addresses.
namespace twin_02139cc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059877a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12bf0, source_block, CopiedBlock);
RT_GLOBAL(0x059877a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12bf0 over the target block at 0x059877a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02139cc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02139cc0

// auto_copy_block_0213a5b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0213a5b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059877e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12c90, source_block, CopiedBlock);
RT_GLOBAL(0x059877e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12c90 over the target block at 0x059877e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213a5b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213a5b0

// auto_copy_block_0213b170: misc_copy_block_58b3240 with other addresses.
namespace twin_0213b170 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987820.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12ce0, source_block, CopiedBlock);
RT_GLOBAL(0x05987820, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12ce0 over the target block at 0x05987820.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213b170()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213b170

// auto_copy_block_0213b410: misc_copy_block_58b3240 with other addresses.
namespace twin_0213b410 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987860.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12d10, source_block, CopiedBlock);
RT_GLOBAL(0x05987860, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12d10 over the target block at 0x05987860.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213b410()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213b410

// auto_copy_block_0213b6f0: misc_copy_block_58b3240 with other addresses.
namespace twin_0213b6f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059878a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12d40, source_block, CopiedBlock);
RT_GLOBAL(0x059878a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12d40 over the target block at 0x059878a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213b6f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213b6f0

// auto_copy_block_0213bb40: misc_copy_block_58b3240 with other addresses.
namespace twin_0213bb40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059878e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12d70, source_block, CopiedBlock);
RT_GLOBAL(0x059878e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12d70 over the target block at 0x059878e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213bb40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213bb40

// auto_copy_block_0213bf90: misc_copy_block_58b3240 with other addresses.
namespace twin_0213bf90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987920.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12da0, source_block, CopiedBlock);
RT_GLOBAL(0x05987920, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12da0 over the target block at 0x05987920.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213bf90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213bf90

// auto_copy_block_0213c350: misc_copy_block_58b3240 with other addresses.
namespace twin_0213c350 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987960.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12dd0, source_block, CopiedBlock);
RT_GLOBAL(0x05987960, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12dd0 over the target block at 0x05987960.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213c350()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213c350

// auto_copy_block_0213d260: misc_copy_block_58b3240 with other addresses.
namespace twin_0213d260 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059879a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12ea0, source_block, CopiedBlock);
RT_GLOBAL(0x059879a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12ea0 over the target block at 0x059879a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213d260()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213d260

// auto_copy_block_0213d9b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0213d9b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059879e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12ed0, source_block, CopiedBlock);
RT_GLOBAL(0x059879e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12ed0 over the target block at 0x059879e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213d9b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213d9b0

// auto_copy_block_0213e140: misc_copy_block_58b3240 with other addresses.
namespace twin_0213e140 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987a20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12f00, source_block, CopiedBlock);
RT_GLOBAL(0x05987a20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12f00 over the target block at 0x05987a20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0213e140()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0213e140

// auto_copy_block_02142750: misc_copy_block_58b3240 with other addresses.
namespace twin_02142750 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987cb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d12fe0, source_block, CopiedBlock);
RT_GLOBAL(0x05987cb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d12fe0 over the target block at 0x05987cb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02142750()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02142750

// auto_copy_block_02143250: misc_copy_block_58b3240 with other addresses.
namespace twin_02143250 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987cf0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13120, source_block, CopiedBlock);
RT_GLOBAL(0x05987cf0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13120 over the target block at 0x05987cf0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02143250()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02143250

// auto_copy_block_02143660: misc_copy_block_58b3240 with other addresses.
namespace twin_02143660 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987d30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13150, source_block, CopiedBlock);
RT_GLOBAL(0x05987d30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13150 over the target block at 0x05987d30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02143660()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02143660

// auto_copy_block_02143990: misc_copy_block_58b3240 with other addresses.
namespace twin_02143990 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987d70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13180, source_block, CopiedBlock);
RT_GLOBAL(0x05987d70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13180 over the target block at 0x05987d70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02143990()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02143990

// auto_copy_block_02144220: misc_copy_block_58b3240 with other addresses.
namespace twin_02144220 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987db0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d131b0, source_block, CopiedBlock);
RT_GLOBAL(0x05987db0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d131b0 over the target block at 0x05987db0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02144220()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02144220

// auto_copy_block_02144ff0: misc_copy_block_58b3240 with other addresses.
namespace twin_02144ff0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987df0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d131e0, source_block, CopiedBlock);
RT_GLOBAL(0x05987df0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d131e0 over the target block at 0x05987df0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02144ff0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02144ff0

// auto_copy_block_02145210: misc_copy_block_58b3240 with other addresses.
namespace twin_02145210 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987e30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13210, source_block, CopiedBlock);
RT_GLOBAL(0x05987e30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13210 over the target block at 0x05987e30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02145210()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02145210

// auto_copy_block_02145480: misc_copy_block_58b3240 with other addresses.
namespace twin_02145480 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987e70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13240, source_block, CopiedBlock);
RT_GLOBAL(0x05987e70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13240 over the target block at 0x05987e70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02145480()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02145480

// auto_copy_block_02148840: misc_copy_block_58b3240 with other addresses.
namespace twin_02148840 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05987ff0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d132d0, source_block, CopiedBlock);
RT_GLOBAL(0x05987ff0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d132d0 over the target block at 0x05987ff0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02148840()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02148840

// auto_copy_block_021489f0: misc_copy_block_58b3240 with other addresses.
namespace twin_021489f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988030.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13300, source_block, CopiedBlock);
RT_GLOBAL(0x05988030, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13300 over the target block at 0x05988030.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021489f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021489f0

// auto_copy_block_02150ac0: misc_copy_block_58b3240 with other addresses.
namespace twin_02150ac0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059884d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d133f0, source_block, CopiedBlock);
RT_GLOBAL(0x059884d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d133f0 over the target block at 0x059884d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02150ac0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02150ac0

// auto_copy_block_02152270: misc_copy_block_58b3240 with other addresses.
namespace twin_02152270 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988510.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13490, source_block, CopiedBlock);
RT_GLOBAL(0x05988510, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13490 over the target block at 0x05988510.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02152270()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02152270

// auto_copy_block_02152eb0: misc_copy_block_58b3240 with other addresses.
namespace twin_02152eb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988590.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d134f0, source_block, CopiedBlock);
RT_GLOBAL(0x05988590, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d134f0 over the target block at 0x05988590.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02152eb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02152eb0

// auto_copy_block_02153260: misc_copy_block_58b3240 with other addresses.
namespace twin_02153260 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059885d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13520, source_block, CopiedBlock);
RT_GLOBAL(0x059885d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13520 over the target block at 0x059885d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02153260()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02153260

// auto_copy_block_021534e0: misc_copy_block_58b3240 with other addresses.
namespace twin_021534e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988610.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13550, source_block, CopiedBlock);
RT_GLOBAL(0x05988610, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13550 over the target block at 0x05988610.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021534e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021534e0

// auto_copy_block_02153fd0: misc_copy_block_58b3240 with other addresses.
namespace twin_02153fd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988650.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d135a0, source_block, CopiedBlock);
RT_GLOBAL(0x05988650, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d135a0 over the target block at 0x05988650.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02153fd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02153fd0

// auto_copy_block_021541a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021541a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988690.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d135d0, source_block, CopiedBlock);
RT_GLOBAL(0x05988690, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d135d0 over the target block at 0x05988690.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021541a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021541a0

// auto_copy_block_021551f0: misc_copy_block_58b3240 with other addresses.
namespace twin_021551f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059886d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13600, source_block, CopiedBlock);
RT_GLOBAL(0x059886d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13600 over the target block at 0x059886d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021551f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021551f0

// auto_copy_block_02155ef0: misc_copy_block_58b3240 with other addresses.
namespace twin_02155ef0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988710.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13630, source_block, CopiedBlock);
RT_GLOBAL(0x05988710, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13630 over the target block at 0x05988710.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02155ef0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02155ef0

// auto_copy_block_02156940: misc_copy_block_58b3240 with other addresses.
namespace twin_02156940 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988750.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13660, source_block, CopiedBlock);
RT_GLOBAL(0x05988750, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13660 over the target block at 0x05988750.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02156940()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02156940

// auto_copy_block_021579c0: misc_copy_block_58b3240 with other addresses.
namespace twin_021579c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988790.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d136f0, source_block, CopiedBlock);
RT_GLOBAL(0x05988790, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d136f0 over the target block at 0x05988790.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021579c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021579c0

// auto_copy_block_02157c00: misc_copy_block_58b3240 with other addresses.
namespace twin_02157c00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059887d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13720, source_block, CopiedBlock);
RT_GLOBAL(0x059887d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13720 over the target block at 0x059887d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02157c00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02157c00

// auto_copy_block_02157f00: misc_copy_block_58b3240 with other addresses.
namespace twin_02157f00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988810.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13750, source_block, CopiedBlock);
RT_GLOBAL(0x05988810, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13750 over the target block at 0x05988810.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02157f00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02157f00

// auto_copy_block_021587c0: misc_copy_block_58b3240 with other addresses.
namespace twin_021587c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988850.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13780, source_block, CopiedBlock);
RT_GLOBAL(0x05988850, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13780 over the target block at 0x05988850.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021587c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021587c0
