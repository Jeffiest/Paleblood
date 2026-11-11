// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_copy_block_58b3240, in game/misc/copy_block_58b3240.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_copy_block_02158960: misc_copy_block_58b3240 with other addresses.
namespace twin_02158960 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988890.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d137b0, source_block, CopiedBlock);
RT_GLOBAL(0x05988890, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d137b0 over the target block at 0x05988890.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02158960()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02158960

// auto_copy_block_0215e9d0: misc_copy_block_58b3240 with other addresses.
namespace twin_0215e9d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988970.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13c30, source_block, CopiedBlock);
RT_GLOBAL(0x05988970, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13c30 over the target block at 0x05988970.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0215e9d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0215e9d0

// auto_copy_block_02163850: misc_copy_block_58b3240 with other addresses.
namespace twin_02163850 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988b90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13f40, source_block, CopiedBlock);
RT_GLOBAL(0x05988b90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13f40 over the target block at 0x05988b90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02163850()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02163850

// auto_copy_block_02163a40: misc_copy_block_58b3240 with other addresses.
namespace twin_02163a40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988bd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d13f70, source_block, CopiedBlock);
RT_GLOBAL(0x05988bd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d13f70 over the target block at 0x05988bd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02163a40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02163a40

// auto_copy_block_021641f0: misc_copy_block_58b3240 with other addresses.
namespace twin_021641f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988d60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14000, source_block, CopiedBlock);
RT_GLOBAL(0x05988d60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14000 over the target block at 0x05988d60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021641f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021641f0

// auto_copy_block_02164390: misc_copy_block_58b3240 with other addresses.
namespace twin_02164390 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988da0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14030, source_block, CopiedBlock);
RT_GLOBAL(0x05988da0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14030 over the target block at 0x05988da0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02164390()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02164390

// auto_copy_block_02164530: misc_copy_block_58b3240 with other addresses.
namespace twin_02164530 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988de0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14060, source_block, CopiedBlock);
RT_GLOBAL(0x05988de0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14060 over the target block at 0x05988de0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02164530()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02164530

// auto_copy_block_02164950: misc_copy_block_58b3240 with other addresses.
namespace twin_02164950 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988e20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14090, source_block, CopiedBlock);
RT_GLOBAL(0x05988e20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14090 over the target block at 0x05988e20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02164950()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02164950

// auto_copy_block_02164af0: misc_copy_block_58b3240 with other addresses.
namespace twin_02164af0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988e60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d140c0, source_block, CopiedBlock);
RT_GLOBAL(0x05988e60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d140c0 over the target block at 0x05988e60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02164af0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02164af0

// auto_copy_block_021655c0: misc_copy_block_58b3240 with other addresses.
namespace twin_021655c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988ea0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14100, source_block, CopiedBlock);
RT_GLOBAL(0x05988ea0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14100 over the target block at 0x05988ea0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021655c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021655c0

// auto_copy_block_02166c10: misc_copy_block_58b3240 with other addresses.
namespace twin_02166c10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988ee0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14180, source_block, CopiedBlock);
RT_GLOBAL(0x05988ee0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14180 over the target block at 0x05988ee0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02166c10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02166c10

// auto_copy_block_02167790: misc_copy_block_58b3240 with other addresses.
namespace twin_02167790 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988f20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14270, source_block, CopiedBlock);
RT_GLOBAL(0x05988f20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14270 over the target block at 0x05988f20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02167790()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02167790

// auto_copy_block_02168b70: misc_copy_block_58b3240 with other addresses.
namespace twin_02168b70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988f60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14320, source_block, CopiedBlock);
RT_GLOBAL(0x05988f60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14320 over the target block at 0x05988f60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02168b70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02168b70

// auto_copy_block_02169090: misc_copy_block_58b3240 with other addresses.
namespace twin_02169090 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988fa0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14350, source_block, CopiedBlock);
RT_GLOBAL(0x05988fa0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14350 over the target block at 0x05988fa0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02169090()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02169090

// auto_copy_block_0216a630: misc_copy_block_58b3240 with other addresses.
namespace twin_0216a630 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05988fe0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14380, source_block, CopiedBlock);
RT_GLOBAL(0x05988fe0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14380 over the target block at 0x05988fe0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0216a630()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0216a630

// auto_copy_block_0216ad20: misc_copy_block_58b3240 with other addresses.
namespace twin_0216ad20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059890e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d143b0, source_block, CopiedBlock);
RT_GLOBAL(0x059890e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d143b0 over the target block at 0x059890e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0216ad20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0216ad20

// auto_copy_block_0216b170: misc_copy_block_58b3240 with other addresses.
namespace twin_0216b170 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989120.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d143e0, source_block, CopiedBlock);
RT_GLOBAL(0x05989120, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d143e0 over the target block at 0x05989120.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0216b170()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0216b170

// auto_copy_block_0216b5c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0216b5c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989160.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14410, source_block, CopiedBlock);
RT_GLOBAL(0x05989160, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14410 over the target block at 0x05989160.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0216b5c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0216b5c0

// auto_copy_block_0216c2b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0216c2b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059891a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14450, source_block, CopiedBlock);
RT_GLOBAL(0x059891a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14450 over the target block at 0x059891a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0216c2b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0216c2b0

// auto_copy_block_0216c800: misc_copy_block_58b3240 with other addresses.
namespace twin_0216c800 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059891e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14490, source_block, CopiedBlock);
RT_GLOBAL(0x059891e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14490 over the target block at 0x059891e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0216c800()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0216c800

// auto_copy_block_0216e340: misc_copy_block_58b3240 with other addresses.
namespace twin_0216e340 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989270.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d144f0, source_block, CopiedBlock);
RT_GLOBAL(0x05989270, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d144f0 over the target block at 0x05989270.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0216e340()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0216e340

// auto_copy_block_02171c30: misc_copy_block_58b3240 with other addresses.
namespace twin_02171c30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059892b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d145b0, source_block, CopiedBlock);
RT_GLOBAL(0x059892b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d145b0 over the target block at 0x059892b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02171c30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02171c30

// auto_copy_block_021726e0: misc_copy_block_58b3240 with other addresses.
namespace twin_021726e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059892f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d145e0, source_block, CopiedBlock);
RT_GLOBAL(0x059892f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d145e0 over the target block at 0x059892f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021726e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021726e0

// auto_copy_block_02172a80: misc_copy_block_58b3240 with other addresses.
namespace twin_02172a80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989330.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14610, source_block, CopiedBlock);
RT_GLOBAL(0x05989330, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14610 over the target block at 0x05989330.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02172a80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02172a80

// auto_copy_block_02173400: misc_copy_block_58b3240 with other addresses.
namespace twin_02173400 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989370.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d146a0, source_block, CopiedBlock);
RT_GLOBAL(0x05989370, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d146a0 over the target block at 0x05989370.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02173400()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02173400

// auto_copy_block_021735a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021735a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059893b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d146d0, source_block, CopiedBlock);
RT_GLOBAL(0x059893b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d146d0 over the target block at 0x059893b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021735a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021735a0

// auto_copy_block_02181b90: misc_copy_block_58b3240 with other addresses.
namespace twin_02181b90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989e90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14a30, source_block, CopiedBlock);
RT_GLOBAL(0x05989e90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14a30 over the target block at 0x05989e90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02181b90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02181b90

// auto_copy_block_02181da0: misc_copy_block_58b3240 with other addresses.
namespace twin_02181da0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989ed0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14a60, source_block, CopiedBlock);
RT_GLOBAL(0x05989ed0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14a60 over the target block at 0x05989ed0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02181da0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02181da0

// auto_copy_block_02182040: misc_copy_block_58b3240 with other addresses.
namespace twin_02182040 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989f10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14a90, source_block, CopiedBlock);
RT_GLOBAL(0x05989f10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14a90 over the target block at 0x05989f10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02182040()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02182040

// auto_copy_block_021822e0: misc_copy_block_58b3240 with other addresses.
namespace twin_021822e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989f50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14ac0, source_block, CopiedBlock);
RT_GLOBAL(0x05989f50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14ac0 over the target block at 0x05989f50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021822e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021822e0

// auto_copy_block_02182580: misc_copy_block_58b3240 with other addresses.
namespace twin_02182580 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989f90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14af0, source_block, CopiedBlock);
RT_GLOBAL(0x05989f90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14af0 over the target block at 0x05989f90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02182580()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02182580

// auto_copy_block_02182780: misc_copy_block_58b3240 with other addresses.
namespace twin_02182780 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05989fd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14b20, source_block, CopiedBlock);
RT_GLOBAL(0x05989fd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14b20 over the target block at 0x05989fd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02182780()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02182780

// auto_copy_block_02182b10: misc_copy_block_58b3240 with other addresses.
namespace twin_02182b10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a010.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14b50, source_block, CopiedBlock);
RT_GLOBAL(0x0598a010, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14b50 over the target block at 0x0598a010.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02182b10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02182b10

// auto_copy_block_021839f0: misc_copy_block_58b3240 with other addresses.
namespace twin_021839f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a050.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14b80, source_block, CopiedBlock);
RT_GLOBAL(0x0598a050, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14b80 over the target block at 0x0598a050.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021839f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021839f0

// auto_copy_block_021841b0: misc_copy_block_58b3240 with other addresses.
namespace twin_021841b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a090.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14bb0, source_block, CopiedBlock);
RT_GLOBAL(0x0598a090, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14bb0 over the target block at 0x0598a090.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021841b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021841b0

// auto_copy_block_02184a50: misc_copy_block_58b3240 with other addresses.
namespace twin_02184a50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a0d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14be0, source_block, CopiedBlock);
RT_GLOBAL(0x0598a0d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14be0 over the target block at 0x0598a0d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02184a50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02184a50

// auto_copy_block_021851a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021851a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a110.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14c10, source_block, CopiedBlock);
RT_GLOBAL(0x0598a110, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14c10 over the target block at 0x0598a110.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021851a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021851a0

// auto_copy_block_02185970: misc_copy_block_58b3240 with other addresses.
namespace twin_02185970 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a150.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14c40, source_block, CopiedBlock);
RT_GLOBAL(0x0598a150, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14c40 over the target block at 0x0598a150.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02185970()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02185970

// auto_copy_block_02190040: misc_copy_block_58b3240 with other addresses.
namespace twin_02190040 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14db0, source_block, CopiedBlock);
RT_GLOBAL(0x0598a500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14db0 over the target block at 0x0598a500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02190040()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02190040

// auto_copy_block_02190340: misc_copy_block_58b3240 with other addresses.
namespace twin_02190340 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a540.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14de0, source_block, CopiedBlock);
RT_GLOBAL(0x0598a540, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14de0 over the target block at 0x0598a540.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02190340()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02190340

// auto_copy_block_021905b0: misc_copy_block_58b3240 with other addresses.
namespace twin_021905b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14e10, source_block, CopiedBlock);
RT_GLOBAL(0x0598a580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14e10 over the target block at 0x0598a580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021905b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021905b0

// auto_copy_block_02190e90: misc_copy_block_58b3240 with other addresses.
namespace twin_02190e90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a5c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14e40, source_block, CopiedBlock);
RT_GLOBAL(0x0598a5c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14e40 over the target block at 0x0598a5c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02190e90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02190e90

// auto_copy_block_021913c0: misc_copy_block_58b3240 with other addresses.
namespace twin_021913c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a600.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14e70, source_block, CopiedBlock);
RT_GLOBAL(0x0598a600, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14e70 over the target block at 0x0598a600.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021913c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021913c0

// auto_copy_block_02198f60: misc_copy_block_58b3240 with other addresses.
namespace twin_02198f60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598a890.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14f10, source_block, CopiedBlock);
RT_GLOBAL(0x0598a890, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14f10 over the target block at 0x0598a890.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02198f60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02198f60

// auto_copy_block_0219e420: misc_copy_block_58b3240 with other addresses.
namespace twin_0219e420 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598acc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14f90, source_block, CopiedBlock);
RT_GLOBAL(0x0598acc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14f90 over the target block at 0x0598acc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0219e420()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0219e420

// auto_copy_block_0219f430: misc_copy_block_58b3240 with other addresses.
namespace twin_0219f430 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598ad50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d14ff0, source_block, CopiedBlock);
RT_GLOBAL(0x0598ad50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d14ff0 over the target block at 0x0598ad50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0219f430()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0219f430

// auto_copy_block_0219f930: misc_copy_block_58b3240 with other addresses.
namespace twin_0219f930 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598ad90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15020, source_block, CopiedBlock);
RT_GLOBAL(0x0598ad90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15020 over the target block at 0x0598ad90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0219f930()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0219f930

// auto_copy_block_0219ffb0: misc_copy_block_58b3240 with other addresses.
namespace twin_0219ffb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598add0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15050, source_block, CopiedBlock);
RT_GLOBAL(0x0598add0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15050 over the target block at 0x0598add0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0219ffb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0219ffb0

// auto_copy_block_021a05b0: misc_copy_block_58b3240 with other addresses.
namespace twin_021a05b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598ae10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d150d0, source_block, CopiedBlock);
RT_GLOBAL(0x0598ae10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d150d0 over the target block at 0x0598ae10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a05b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a05b0

// auto_copy_block_021a07b0: misc_copy_block_58b3240 with other addresses.
namespace twin_021a07b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598ae50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15100, source_block, CopiedBlock);
RT_GLOBAL(0x0598ae50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15100 over the target block at 0x0598ae50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a07b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a07b0

// auto_copy_block_021a09a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021a09a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598ae90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15130, source_block, CopiedBlock);
RT_GLOBAL(0x0598ae90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15130 over the target block at 0x0598ae90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a09a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a09a0

// auto_copy_block_021a0d00: misc_copy_block_58b3240 with other addresses.
namespace twin_021a0d00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598aed0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15160, source_block, CopiedBlock);
RT_GLOBAL(0x0598aed0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15160 over the target block at 0x0598aed0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a0d00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a0d00

// auto_copy_block_021a11a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021a11a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598af10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15190, source_block, CopiedBlock);
RT_GLOBAL(0x0598af10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15190 over the target block at 0x0598af10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a11a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a11a0

// auto_copy_block_021a13a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021a13a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598af50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d151c0, source_block, CopiedBlock);
RT_GLOBAL(0x0598af50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d151c0 over the target block at 0x0598af50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a13a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a13a0

// auto_copy_block_021a1f20: misc_copy_block_58b3240 with other addresses.
namespace twin_021a1f20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598af90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d152e0, source_block, CopiedBlock);
RT_GLOBAL(0x0598af90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d152e0 over the target block at 0x0598af90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a1f20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a1f20

// auto_copy_block_021a2550: misc_copy_block_58b3240 with other addresses.
namespace twin_021a2550 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598afd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15310, source_block, CopiedBlock);
RT_GLOBAL(0x0598afd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15310 over the target block at 0x0598afd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a2550()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a2550

// auto_copy_block_021a53a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021a53a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598b170.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15370, source_block, CopiedBlock);
RT_GLOBAL(0x0598b170, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15370 over the target block at 0x0598b170.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a53a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a53a0

// auto_copy_block_021a6d80: misc_copy_block_58b3240 with other addresses.
namespace twin_021a6d80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598b1b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15510, source_block, CopiedBlock);
RT_GLOBAL(0x0598b1b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15510 over the target block at 0x0598b1b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a6d80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a6d80

// auto_copy_block_021a8d80: misc_copy_block_58b3240 with other addresses.
namespace twin_021a8d80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598b200.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15610, source_block, CopiedBlock);
RT_GLOBAL(0x0598b200, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15610 over the target block at 0x0598b200.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021a8d80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021a8d80

// auto_copy_block_021b4fb0: misc_copy_block_58b3240 with other addresses.
namespace twin_021b4fb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598bb20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15ac0, source_block, CopiedBlock);
RT_GLOBAL(0x0598bb20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15ac0 over the target block at 0x0598bb20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021b4fb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021b4fb0

// auto_copy_block_021b5350: misc_copy_block_58b3240 with other addresses.
namespace twin_021b5350 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598bb60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15af0, source_block, CopiedBlock);
RT_GLOBAL(0x0598bb60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15af0 over the target block at 0x0598bb60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021b5350()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021b5350

// auto_copy_block_021b71d0: misc_copy_block_58b3240 with other addresses.
namespace twin_021b71d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598bbe0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15b60, source_block, CopiedBlock);
RT_GLOBAL(0x0598bbe0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15b60 over the target block at 0x0598bbe0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021b71d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021b71d0

// auto_copy_block_021b7a20: misc_copy_block_58b3240 with other addresses.
namespace twin_021b7a20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598bc20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15b90, source_block, CopiedBlock);
RT_GLOBAL(0x0598bc20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15b90 over the target block at 0x0598bc20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021b7a20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021b7a20

// auto_copy_block_021b7bc0: misc_copy_block_58b3240 with other addresses.
namespace twin_021b7bc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598bc60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15bc0, source_block, CopiedBlock);
RT_GLOBAL(0x0598bc60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15bc0 over the target block at 0x0598bc60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021b7bc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021b7bc0

// auto_copy_block_021b8b70: misc_copy_block_58b3240 with other addresses.
namespace twin_021b8b70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598bca0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15bf0, source_block, CopiedBlock);
RT_GLOBAL(0x0598bca0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15bf0 over the target block at 0x0598bca0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021b8b70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021b8b70

// auto_copy_block_021bacf0: misc_copy_block_58b3240 with other addresses.
namespace twin_021bacf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598bce0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15c30, source_block, CopiedBlock);
RT_GLOBAL(0x0598bce0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15c30 over the target block at 0x0598bce0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021bacf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021bacf0

// auto_copy_block_021be130: misc_copy_block_58b3240 with other addresses.
namespace twin_021be130 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598bd20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15e20, source_block, CopiedBlock);
RT_GLOBAL(0x0598bd20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15e20 over the target block at 0x0598bd20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021be130()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021be130

// auto_copy_block_021be720: misc_copy_block_58b3240 with other addresses.
namespace twin_021be720 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598bd60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d15e50, source_block, CopiedBlock);
RT_GLOBAL(0x0598bd60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d15e50 over the target block at 0x0598bd60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021be720()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021be720

// auto_copy_block_021c5ec0: misc_copy_block_58b3240 with other addresses.
namespace twin_021c5ec0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c1b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d160f0, source_block, CopiedBlock);
RT_GLOBAL(0x0598c1b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d160f0 over the target block at 0x0598c1b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021c5ec0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021c5ec0

// auto_copy_block_021c6280: misc_copy_block_58b3240 with other addresses.
namespace twin_021c6280 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c1f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16120, source_block, CopiedBlock);
RT_GLOBAL(0x0598c1f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16120 over the target block at 0x0598c1f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021c6280()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021c6280

// auto_copy_block_021c64a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021c64a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c230.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16150, source_block, CopiedBlock);
RT_GLOBAL(0x0598c230, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16150 over the target block at 0x0598c230.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021c64a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021c64a0

// auto_copy_block_021c6640: misc_copy_block_58b3240 with other addresses.
namespace twin_021c6640 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c270.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16180, source_block, CopiedBlock);
RT_GLOBAL(0x0598c270, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16180 over the target block at 0x0598c270.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021c6640()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021c6640

// auto_copy_block_021c8460: misc_copy_block_58b3240 with other addresses.
namespace twin_021c8460 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c3f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16240, source_block, CopiedBlock);
RT_GLOBAL(0x0598c3f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16240 over the target block at 0x0598c3f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021c8460()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021c8460

// auto_copy_block_021c9340: misc_copy_block_58b3240 with other addresses.
namespace twin_021c9340 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c4d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d162b0, source_block, CopiedBlock);
RT_GLOBAL(0x0598c4d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d162b0 over the target block at 0x0598c4d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021c9340()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021c9340

// auto_copy_block_021cc9a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021cc9a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c650.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16410, source_block, CopiedBlock);
RT_GLOBAL(0x0598c650, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16410 over the target block at 0x0598c650.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021cc9a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021cc9a0

// auto_copy_block_021d57a0: misc_copy_block_58b3240 with other addresses.
namespace twin_021d57a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c750.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16820, source_block, CopiedBlock);
RT_GLOBAL(0x0598c750, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16820 over the target block at 0x0598c750.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021d57a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021d57a0

// auto_copy_block_021d8910: misc_copy_block_58b3240 with other addresses.
namespace twin_021d8910 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c790.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16b30, source_block, CopiedBlock);
RT_GLOBAL(0x0598c790, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16b30 over the target block at 0x0598c790.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021d8910()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021d8910

// auto_copy_block_021da770: misc_copy_block_58b3240 with other addresses.
namespace twin_021da770 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c7d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16c30, source_block, CopiedBlock);
RT_GLOBAL(0x0598c7d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16c30 over the target block at 0x0598c7d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021da770()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021da770

// auto_copy_block_021dadb0: misc_copy_block_58b3240 with other addresses.
namespace twin_021dadb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c810.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16c60, source_block, CopiedBlock);
RT_GLOBAL(0x0598c810, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16c60 over the target block at 0x0598c810.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021dadb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021dadb0

// auto_copy_block_021dbb70: misc_copy_block_58b3240 with other addresses.
namespace twin_021dbb70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598c850.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16cb0, source_block, CopiedBlock);
RT_GLOBAL(0x0598c850, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16cb0 over the target block at 0x0598c850.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021dbb70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021dbb70

// auto_copy_block_021e2690: misc_copy_block_58b3240 with other addresses.
namespace twin_021e2690 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598cbe0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16e70, source_block, CopiedBlock);
RT_GLOBAL(0x0598cbe0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16e70 over the target block at 0x0598cbe0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021e2690()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021e2690

// auto_copy_block_021e2b60: misc_copy_block_58b3240 with other addresses.
namespace twin_021e2b60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598cc20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d16ea0, source_block, CopiedBlock);
RT_GLOBAL(0x0598cc20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d16ea0 over the target block at 0x0598cc20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_021e2b60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_021e2b60

// auto_copy_block_022020f0: misc_copy_block_58b3240 with other addresses.
namespace twin_022020f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598cda0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d17350, source_block, CopiedBlock);
RT_GLOBAL(0x0598cda0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d17350 over the target block at 0x0598cda0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022020f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022020f0

// auto_copy_block_02202860: misc_copy_block_58b3240 with other addresses.
namespace twin_02202860 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598ce20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d173b0, source_block, CopiedBlock);
RT_GLOBAL(0x0598ce20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d173b0 over the target block at 0x0598ce20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02202860()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02202860

// auto_copy_block_022113b0: misc_copy_block_58b3240 with other addresses.
namespace twin_022113b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598d7a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d176e0, source_block, CopiedBlock);
RT_GLOBAL(0x0598d7a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d176e0 over the target block at 0x0598d7a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022113b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022113b0

// auto_copy_block_02214980: misc_copy_block_58b3240 with other addresses.
namespace twin_02214980 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598da50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d17740, source_block, CopiedBlock);
RT_GLOBAL(0x0598da50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d17740 over the target block at 0x0598da50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02214980()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02214980

// auto_copy_block_0221e7e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0221e7e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598dde0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d178e0, source_block, CopiedBlock);
RT_GLOBAL(0x0598dde0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d178e0 over the target block at 0x0598dde0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0221e7e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0221e7e0

// auto_copy_block_02223670: misc_copy_block_58b3240 with other addresses.
namespace twin_02223670 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598de70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d17a20, source_block, CopiedBlock);
RT_GLOBAL(0x0598de70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d17a20 over the target block at 0x0598de70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02223670()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02223670

// auto_copy_block_02224700: misc_copy_block_58b3240 with other addresses.
namespace twin_02224700 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598df00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d17a80, source_block, CopiedBlock);
RT_GLOBAL(0x0598df00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d17a80 over the target block at 0x0598df00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02224700()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02224700

// auto_copy_block_02228020: misc_copy_block_58b3240 with other addresses.
namespace twin_02228020 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598df40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d17b30, source_block, CopiedBlock);
RT_GLOBAL(0x0598df40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d17b30 over the target block at 0x0598df40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02228020()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02228020

// auto_copy_block_02238ef0: misc_copy_block_58b3240 with other addresses.
namespace twin_02238ef0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e3f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d180a0, source_block, CopiedBlock);
RT_GLOBAL(0x0598e3f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d180a0 over the target block at 0x0598e3f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02238ef0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02238ef0

// auto_copy_block_0223a1c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0223a1c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e4d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18100, source_block, CopiedBlock);
RT_GLOBAL(0x0598e4d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18100 over the target block at 0x0598e4d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0223a1c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0223a1c0

// auto_copy_block_0223b320: misc_copy_block_58b3240 with other addresses.
namespace twin_0223b320 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e510.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18130, source_block, CopiedBlock);
RT_GLOBAL(0x0598e510, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18130 over the target block at 0x0598e510.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0223b320()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0223b320

// auto_copy_block_0223c5e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0223c5e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e550.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18160, source_block, CopiedBlock);
RT_GLOBAL(0x0598e550, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18160 over the target block at 0x0598e550.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0223c5e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0223c5e0

// auto_copy_block_0223d170: misc_copy_block_58b3240 with other addresses.
namespace twin_0223d170 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e590.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18190, source_block, CopiedBlock);
RT_GLOBAL(0x0598e590, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18190 over the target block at 0x0598e590.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0223d170()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0223d170

// auto_copy_block_0223efc0: misc_copy_block_58b3240 with other addresses.
namespace twin_0223efc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e5d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d181c0, source_block, CopiedBlock);
RT_GLOBAL(0x0598e5d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d181c0 over the target block at 0x0598e5d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0223efc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0223efc0

// auto_copy_block_0223f690: misc_copy_block_58b3240 with other addresses.
namespace twin_0223f690 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e610.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d181f0, source_block, CopiedBlock);
RT_GLOBAL(0x0598e610, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d181f0 over the target block at 0x0598e610.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0223f690()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0223f690

// auto_copy_block_02240d70: misc_copy_block_58b3240 with other addresses.
namespace twin_02240d70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e650.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18370, source_block, CopiedBlock);
RT_GLOBAL(0x0598e650, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18370 over the target block at 0x0598e650.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02240d70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02240d70

// auto_copy_block_02241d30: misc_copy_block_58b3240 with other addresses.
namespace twin_02241d30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e6e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18430, source_block, CopiedBlock);
RT_GLOBAL(0x0598e6e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18430 over the target block at 0x0598e6e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02241d30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02241d30

// auto_copy_block_02242940: misc_copy_block_58b3240 with other addresses.
namespace twin_02242940 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e720.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18460, source_block, CopiedBlock);
RT_GLOBAL(0x0598e720, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18460 over the target block at 0x0598e720.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02242940()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02242940

// auto_copy_block_02242db0: misc_copy_block_58b3240 with other addresses.
namespace twin_02242db0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e760.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18490, source_block, CopiedBlock);
RT_GLOBAL(0x0598e760, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18490 over the target block at 0x0598e760.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02242db0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02242db0

// auto_copy_block_022432b0: misc_copy_block_58b3240 with other addresses.
namespace twin_022432b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e7a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d184c0, source_block, CopiedBlock);
RT_GLOBAL(0x0598e7a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d184c0 over the target block at 0x0598e7a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022432b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022432b0

// auto_copy_block_02243cf0: misc_copy_block_58b3240 with other addresses.
namespace twin_02243cf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598e7e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d184f0, source_block, CopiedBlock);
RT_GLOBAL(0x0598e7e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d184f0 over the target block at 0x0598e7e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02243cf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02243cf0

// auto_copy_block_0224a8b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0224a8b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598eaa0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d185f0, source_block, CopiedBlock);
RT_GLOBAL(0x0598eaa0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d185f0 over the target block at 0x0598eaa0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0224a8b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0224a8b0

// auto_copy_block_0225f110: misc_copy_block_58b3240 with other addresses.
namespace twin_0225f110 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598f6f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d188f0, source_block, CopiedBlock);
RT_GLOBAL(0x0598f6f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d188f0 over the target block at 0x0598f6f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0225f110()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0225f110

// auto_copy_block_02266760: misc_copy_block_58b3240 with other addresses.
namespace twin_02266760 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598f9b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18990, source_block, CopiedBlock);
RT_GLOBAL(0x0598f9b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18990 over the target block at 0x0598f9b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02266760()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02266760

// auto_copy_block_02268b20: misc_copy_block_58b3240 with other addresses.
namespace twin_02268b20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598f9f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d189c0, source_block, CopiedBlock);
RT_GLOBAL(0x0598f9f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d189c0 over the target block at 0x0598f9f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02268b20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02268b20

// auto_copy_block_02268f90: misc_copy_block_58b3240 with other addresses.
namespace twin_02268f90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0598fa30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d189f0, source_block, CopiedBlock);
RT_GLOBAL(0x0598fa30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d189f0 over the target block at 0x0598fa30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02268f90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02268f90

// auto_copy_block_02273700: misc_copy_block_58b3240 with other addresses.
namespace twin_02273700 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05990170.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18a80, source_block, CopiedBlock);
RT_GLOBAL(0x05990170, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18a80 over the target block at 0x05990170.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02273700()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02273700

// auto_copy_block_022748b0: misc_copy_block_58b3240 with other addresses.
namespace twin_022748b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059901b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18ab0, source_block, CopiedBlock);
RT_GLOBAL(0x059901b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18ab0 over the target block at 0x059901b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022748b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022748b0

// auto_copy_block_02274d20: misc_copy_block_58b3240 with other addresses.
namespace twin_02274d20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059901f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18ae0, source_block, CopiedBlock);
RT_GLOBAL(0x059901f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18ae0 over the target block at 0x059901f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02274d20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02274d20

// auto_copy_block_02274ec0: misc_copy_block_58b3240 with other addresses.
namespace twin_02274ec0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05990230.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18b10, source_block, CopiedBlock);
RT_GLOBAL(0x05990230, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18b10 over the target block at 0x05990230.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02274ec0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02274ec0

// auto_copy_block_0227c190: misc_copy_block_58b3240 with other addresses.
namespace twin_0227c190 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059905a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18bd0, source_block, CopiedBlock);
RT_GLOBAL(0x059905a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18bd0 over the target block at 0x059905a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0227c190()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0227c190

// auto_copy_block_0227c540: misc_copy_block_58b3240 with other addresses.
namespace twin_0227c540 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059905e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d18c00, source_block, CopiedBlock);
RT_GLOBAL(0x059905e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d18c00 over the target block at 0x059905e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0227c540()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0227c540

// auto_copy_block_022b3cb0: misc_copy_block_58b3240 with other addresses.
namespace twin_022b3cb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059906b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19080, source_block, CopiedBlock);
RT_GLOBAL(0x059906b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19080 over the target block at 0x059906b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022b3cb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022b3cb0

// auto_copy_block_022b55d0: misc_copy_block_58b3240 with other addresses.
namespace twin_022b55d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059906f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d190b0, source_block, CopiedBlock);
RT_GLOBAL(0x059906f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d190b0 over the target block at 0x059906f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022b55d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022b55d0

// auto_copy_block_022b65a0: misc_copy_block_58b3240 with other addresses.
namespace twin_022b65a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05990730.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19120, source_block, CopiedBlock);
RT_GLOBAL(0x05990730, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19120 over the target block at 0x05990730.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022b65a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022b65a0

// auto_copy_block_022cb280: misc_copy_block_58b3240 with other addresses.
namespace twin_022cb280 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05990770.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19150, source_block, CopiedBlock);
RT_GLOBAL(0x05990770, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19150 over the target block at 0x05990770.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022cb280()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022cb280

// auto_copy_block_022cbd20: misc_copy_block_58b3240 with other addresses.
namespace twin_022cbd20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059907b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19180, source_block, CopiedBlock);
RT_GLOBAL(0x059907b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19180 over the target block at 0x059907b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022cbd20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022cbd20

// auto_copy_block_022cbf50: misc_copy_block_58b3240 with other addresses.
namespace twin_022cbf50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059907f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d191b0, source_block, CopiedBlock);
RT_GLOBAL(0x059907f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d191b0 over the target block at 0x059907f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022cbf50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022cbf50

// auto_copy_block_022cc0f0: misc_copy_block_58b3240 with other addresses.
namespace twin_022cc0f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05990830.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d191e0, source_block, CopiedBlock);
RT_GLOBAL(0x05990830, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d191e0 over the target block at 0x05990830.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022cc0f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022cc0f0

// auto_copy_block_022cc680: misc_copy_block_58b3240 with other addresses.
namespace twin_022cc680 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05990870.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19210, source_block, CopiedBlock);
RT_GLOBAL(0x05990870, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19210 over the target block at 0x05990870.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022cc680()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022cc680

// auto_copy_block_022cd090: misc_copy_block_58b3240 with other addresses.
namespace twin_022cd090 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059908b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19240, source_block, CopiedBlock);
RT_GLOBAL(0x059908b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19240 over the target block at 0x059908b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022cd090()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022cd090

// auto_copy_block_022cd9f0: misc_copy_block_58b3240 with other addresses.
namespace twin_022cd9f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059908f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19270, source_block, CopiedBlock);
RT_GLOBAL(0x059908f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19270 over the target block at 0x059908f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022cd9f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022cd9f0

// auto_copy_block_022cdee0: misc_copy_block_58b3240 with other addresses.
namespace twin_022cdee0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05990930.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d192a0, source_block, CopiedBlock);
RT_GLOBAL(0x05990930, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d192a0 over the target block at 0x05990930.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022cdee0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022cdee0

// auto_copy_block_022d7390: misc_copy_block_58b3240 with other addresses.
namespace twin_022d7390 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05990c00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19330, source_block, CopiedBlock);
RT_GLOBAL(0x05990c00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19330 over the target block at 0x05990c00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022d7390()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022d7390

// auto_copy_block_022e70a0: misc_copy_block_58b3240 with other addresses.
namespace twin_022e70a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059915d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19640, source_block, CopiedBlock);
RT_GLOBAL(0x059915d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19640 over the target block at 0x059915d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022e70a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022e70a0

// auto_copy_block_022e75e0: misc_copy_block_58b3240 with other addresses.
namespace twin_022e75e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991610.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19670, source_block, CopiedBlock);
RT_GLOBAL(0x05991610, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19670 over the target block at 0x05991610.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022e75e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022e75e0

// auto_copy_block_022e8780: misc_copy_block_58b3240 with other addresses.
namespace twin_022e8780 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059916f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d196d0, source_block, CopiedBlock);
RT_GLOBAL(0x059916f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d196d0 over the target block at 0x059916f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022e8780()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022e8780

// auto_copy_block_022e8cc0: misc_copy_block_58b3240 with other addresses.
namespace twin_022e8cc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991730.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19700, source_block, CopiedBlock);
RT_GLOBAL(0x05991730, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19700 over the target block at 0x05991730.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022e8cc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022e8cc0

// auto_copy_block_022ea210: misc_copy_block_58b3240 with other addresses.
namespace twin_022ea210 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991810.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19760, source_block, CopiedBlock);
RT_GLOBAL(0x05991810, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19760 over the target block at 0x05991810.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022ea210()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022ea210

// auto_copy_block_022ea800: misc_copy_block_58b3240 with other addresses.
namespace twin_022ea800 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991850.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19790, source_block, CopiedBlock);
RT_GLOBAL(0x05991850, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19790 over the target block at 0x05991850.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022ea800()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022ea800

// auto_copy_block_022ed460: misc_copy_block_58b3240 with other addresses.
namespace twin_022ed460 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991930.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d197f0, source_block, CopiedBlock);
RT_GLOBAL(0x05991930, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d197f0 over the target block at 0x05991930.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022ed460()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022ed460

// auto_copy_block_022f1910: misc_copy_block_58b3240 with other addresses.
namespace twin_022f1910 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991c90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19910, source_block, CopiedBlock);
RT_GLOBAL(0x05991c90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19910 over the target block at 0x05991c90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022f1910()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022f1910

// auto_copy_block_022f2f10: misc_copy_block_58b3240 with other addresses.
namespace twin_022f2f10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991d70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19970, source_block, CopiedBlock);
RT_GLOBAL(0x05991d70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19970 over the target block at 0x05991d70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022f2f10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022f2f10

// auto_copy_block_022f3250: misc_copy_block_58b3240 with other addresses.
namespace twin_022f3250 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991db0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d199a0, source_block, CopiedBlock);
RT_GLOBAL(0x05991db0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d199a0 over the target block at 0x05991db0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022f3250()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022f3250

// auto_copy_block_022f33f0: misc_copy_block_58b3240 with other addresses.
namespace twin_022f33f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991df0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d199d0, source_block, CopiedBlock);
RT_GLOBAL(0x05991df0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d199d0 over the target block at 0x05991df0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022f33f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022f33f0

// auto_copy_block_022f3590: misc_copy_block_58b3240 with other addresses.
namespace twin_022f3590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991e30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19a00, source_block, CopiedBlock);
RT_GLOBAL(0x05991e30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19a00 over the target block at 0x05991e30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022f3590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022f3590

// auto_copy_block_022f3730: misc_copy_block_58b3240 with other addresses.
namespace twin_022f3730 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991e70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19a30, source_block, CopiedBlock);
RT_GLOBAL(0x05991e70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19a30 over the target block at 0x05991e70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022f3730()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022f3730

// auto_copy_block_022f38d0: misc_copy_block_58b3240 with other addresses.
namespace twin_022f38d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991eb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19a60, source_block, CopiedBlock);
RT_GLOBAL(0x05991eb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19a60 over the target block at 0x05991eb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022f38d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022f38d0

// auto_copy_block_022f3a70: misc_copy_block_58b3240 with other addresses.
namespace twin_022f3a70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05991ef0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19a90, source_block, CopiedBlock);
RT_GLOBAL(0x05991ef0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19a90 over the target block at 0x05991ef0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022f3a70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022f3a70

// auto_copy_block_022fe8e0: misc_copy_block_58b3240 with other addresses.
namespace twin_022fe8e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059921b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19d00, source_block, CopiedBlock);
RT_GLOBAL(0x059921b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19d00 over the target block at 0x059921b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022fe8e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022fe8e0

// auto_copy_block_022fee30: misc_copy_block_58b3240 with other addresses.
namespace twin_022fee30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059921f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19d30, source_block, CopiedBlock);
RT_GLOBAL(0x059921f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19d30 over the target block at 0x059921f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022fee30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022fee30

// auto_copy_block_022ffda0: misc_copy_block_58b3240 with other addresses.
namespace twin_022ffda0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992230.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19d60, source_block, CopiedBlock);
RT_GLOBAL(0x05992230, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19d60 over the target block at 0x05992230.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_022ffda0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_022ffda0

// auto_copy_block_02300250: misc_copy_block_58b3240 with other addresses.
namespace twin_02300250 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992270.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19d90, source_block, CopiedBlock);
RT_GLOBAL(0x05992270, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19d90 over the target block at 0x05992270.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02300250()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02300250

// auto_copy_block_02300440: misc_copy_block_58b3240 with other addresses.
namespace twin_02300440 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059922b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19dc0, source_block, CopiedBlock);
RT_GLOBAL(0x059922b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19dc0 over the target block at 0x059922b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02300440()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02300440

// auto_copy_block_02300b10: misc_copy_block_58b3240 with other addresses.
namespace twin_02300b10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059922f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d19df0, source_block, CopiedBlock);
RT_GLOBAL(0x059922f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d19df0 over the target block at 0x059922f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02300b10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02300b10

// auto_copy_block_02312b20: misc_copy_block_58b3240 with other addresses.
namespace twin_02312b20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992a30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a150, source_block, CopiedBlock);
RT_GLOBAL(0x05992a30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a150 over the target block at 0x05992a30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02312b20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02312b20

// auto_copy_block_02312f90: misc_copy_block_58b3240 with other addresses.
namespace twin_02312f90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992a70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a180, source_block, CopiedBlock);
RT_GLOBAL(0x05992a70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a180 over the target block at 0x05992a70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02312f90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02312f90

// auto_copy_block_02313380: misc_copy_block_58b3240 with other addresses.
namespace twin_02313380 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992ab0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a1b0, source_block, CopiedBlock);
RT_GLOBAL(0x05992ab0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a1b0 over the target block at 0x05992ab0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02313380()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02313380

// auto_copy_block_023136a0: misc_copy_block_58b3240 with other addresses.
namespace twin_023136a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992af0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a1e0, source_block, CopiedBlock);
RT_GLOBAL(0x05992af0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a1e0 over the target block at 0x05992af0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023136a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023136a0

// auto_copy_block_02314b20: misc_copy_block_58b3240 with other addresses.
namespace twin_02314b20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992b80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a270, source_block, CopiedBlock);
RT_GLOBAL(0x05992b80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a270 over the target block at 0x05992b80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02314b20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02314b20

// auto_copy_block_02314de0: misc_copy_block_58b3240 with other addresses.
namespace twin_02314de0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992bc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a2a0, source_block, CopiedBlock);
RT_GLOBAL(0x05992bc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a2a0 over the target block at 0x05992bc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02314de0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02314de0

// auto_copy_block_023167b0: misc_copy_block_58b3240 with other addresses.
namespace twin_023167b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992c40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a370, source_block, CopiedBlock);
RT_GLOBAL(0x05992c40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a370 over the target block at 0x05992c40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023167b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023167b0

// auto_copy_block_02316c30: misc_copy_block_58b3240 with other addresses.
namespace twin_02316c30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992c80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a3a0, source_block, CopiedBlock);
RT_GLOBAL(0x05992c80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a3a0 over the target block at 0x05992c80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02316c30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02316c30

// auto_copy_block_02317420: misc_copy_block_58b3240 with other addresses.
namespace twin_02317420 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992cc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a3d0, source_block, CopiedBlock);
RT_GLOBAL(0x05992cc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a3d0 over the target block at 0x05992cc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02317420()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02317420

// auto_copy_block_0231bc70: misc_copy_block_58b3240 with other addresses.
namespace twin_0231bc70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992dc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a520, source_block, CopiedBlock);
RT_GLOBAL(0x05992dc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a520 over the target block at 0x05992dc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231bc70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231bc70

// auto_copy_block_0231be10: misc_copy_block_58b3240 with other addresses.
namespace twin_0231be10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992e00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a550, source_block, CopiedBlock);
RT_GLOBAL(0x05992e00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a550 over the target block at 0x05992e00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231be10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231be10

// auto_copy_block_0231c1a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0231c1a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992e40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a580, source_block, CopiedBlock);
RT_GLOBAL(0x05992e40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a580 over the target block at 0x05992e40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231c1a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231c1a0

// auto_copy_block_0231c800: misc_copy_block_58b3240 with other addresses.
namespace twin_0231c800 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992e80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a5b0, source_block, CopiedBlock);
RT_GLOBAL(0x05992e80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a5b0 over the target block at 0x05992e80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231c800()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231c800

// auto_copy_block_0231ccf0: misc_copy_block_58b3240 with other addresses.
namespace twin_0231ccf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992ec0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a5e0, source_block, CopiedBlock);
RT_GLOBAL(0x05992ec0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a5e0 over the target block at 0x05992ec0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231ccf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231ccf0

// auto_copy_block_0231d0b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0231d0b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992f00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a610, source_block, CopiedBlock);
RT_GLOBAL(0x05992f00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a610 over the target block at 0x05992f00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231d0b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231d0b0

// auto_copy_block_0231d5f0: misc_copy_block_58b3240 with other addresses.
namespace twin_0231d5f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992f40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a640, source_block, CopiedBlock);
RT_GLOBAL(0x05992f40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a640 over the target block at 0x05992f40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231d5f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231d5f0

// auto_copy_block_0231de00: misc_copy_block_58b3240 with other addresses.
namespace twin_0231de00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992f80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a670, source_block, CopiedBlock);
RT_GLOBAL(0x05992f80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a670 over the target block at 0x05992f80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231de00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231de00

// auto_copy_block_0231e390: misc_copy_block_58b3240 with other addresses.
namespace twin_0231e390 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05992fc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a6a0, source_block, CopiedBlock);
RT_GLOBAL(0x05992fc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a6a0 over the target block at 0x05992fc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231e390()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231e390

// auto_copy_block_0231f6e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0231f6e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993280.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a730, source_block, CopiedBlock);
RT_GLOBAL(0x05993280, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a730 over the target block at 0x05993280.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0231f6e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0231f6e0

// auto_copy_block_02320260: misc_copy_block_58b3240 with other addresses.
namespace twin_02320260 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059932c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a760, source_block, CopiedBlock);
RT_GLOBAL(0x059932c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a760 over the target block at 0x059932c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02320260()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02320260

// auto_copy_block_02320600: misc_copy_block_58b3240 with other addresses.
namespace twin_02320600 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993300.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a790, source_block, CopiedBlock);
RT_GLOBAL(0x05993300, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a790 over the target block at 0x05993300.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02320600()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02320600

// auto_copy_block_02320d90: misc_copy_block_58b3240 with other addresses.
namespace twin_02320d90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993340.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a7c0, source_block, CopiedBlock);
RT_GLOBAL(0x05993340, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a7c0 over the target block at 0x05993340.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02320d90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02320d90

// auto_copy_block_023210a0: misc_copy_block_58b3240 with other addresses.
namespace twin_023210a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993380.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a7f0, source_block, CopiedBlock);
RT_GLOBAL(0x05993380, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a7f0 over the target block at 0x05993380.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023210a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023210a0

// auto_copy_block_02321a80: misc_copy_block_58b3240 with other addresses.
namespace twin_02321a80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059933c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a820, source_block, CopiedBlock);
RT_GLOBAL(0x059933c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a820 over the target block at 0x059933c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02321a80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02321a80

// auto_copy_block_02321e60: misc_copy_block_58b3240 with other addresses.
namespace twin_02321e60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993400.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a850, source_block, CopiedBlock);
RT_GLOBAL(0x05993400, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a850 over the target block at 0x05993400.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02321e60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02321e60

// auto_copy_block_02322220: misc_copy_block_58b3240 with other addresses.
namespace twin_02322220 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993440.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a880, source_block, CopiedBlock);
RT_GLOBAL(0x05993440, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a880 over the target block at 0x05993440.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02322220()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02322220

// auto_copy_block_02322b00: misc_copy_block_58b3240 with other addresses.
namespace twin_02322b00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059934c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a930, source_block, CopiedBlock);
RT_GLOBAL(0x059934c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a930 over the target block at 0x059934c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02322b00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02322b00

// auto_copy_block_02323250: misc_copy_block_58b3240 with other addresses.
namespace twin_02323250 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a960, source_block, CopiedBlock);
RT_GLOBAL(0x05993500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a960 over the target block at 0x05993500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02323250()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02323250

// auto_copy_block_02323510: misc_copy_block_58b3240 with other addresses.
namespace twin_02323510 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993540.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a990, source_block, CopiedBlock);
RT_GLOBAL(0x05993540, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a990 over the target block at 0x05993540.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02323510()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02323510

// auto_copy_block_02323800: misc_copy_block_58b3240 with other addresses.
namespace twin_02323800 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1a9c0, source_block, CopiedBlock);
RT_GLOBAL(0x05993580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1a9c0 over the target block at 0x05993580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02323800()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02323800

// auto_copy_block_02326480: misc_copy_block_58b3240 with other addresses.
namespace twin_02326480 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059937a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1aa50, source_block, CopiedBlock);
RT_GLOBAL(0x059937a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1aa50 over the target block at 0x059937a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02326480()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02326480

// auto_copy_block_02326740: misc_copy_block_58b3240 with other addresses.
namespace twin_02326740 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059937e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1aa80, source_block, CopiedBlock);
RT_GLOBAL(0x059937e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1aa80 over the target block at 0x059937e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02326740()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02326740

// auto_copy_block_02326b00: misc_copy_block_58b3240 with other addresses.
namespace twin_02326b00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993820.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1aab0, source_block, CopiedBlock);
RT_GLOBAL(0x05993820, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1aab0 over the target block at 0x05993820.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02326b00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02326b00

// auto_copy_block_023270e0: misc_copy_block_58b3240 with other addresses.
namespace twin_023270e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993860.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1aae0, source_block, CopiedBlock);
RT_GLOBAL(0x05993860, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1aae0 over the target block at 0x05993860.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023270e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023270e0

// auto_copy_block_02327410: misc_copy_block_58b3240 with other addresses.
namespace twin_02327410 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059938a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ab10, source_block, CopiedBlock);
RT_GLOBAL(0x059938a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ab10 over the target block at 0x059938a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02327410()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02327410

// auto_copy_block_02327840: misc_copy_block_58b3240 with other addresses.
namespace twin_02327840 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059938e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ab40, source_block, CopiedBlock);
RT_GLOBAL(0x059938e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ab40 over the target block at 0x059938e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02327840()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02327840

// auto_copy_block_02327b00: misc_copy_block_58b3240 with other addresses.
namespace twin_02327b00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993920.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ab70, source_block, CopiedBlock);
RT_GLOBAL(0x05993920, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ab70 over the target block at 0x05993920.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02327b00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02327b00

// auto_copy_block_02327ca0: misc_copy_block_58b3240 with other addresses.
namespace twin_02327ca0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993960.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1aba0, source_block, CopiedBlock);
RT_GLOBAL(0x05993960, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1aba0 over the target block at 0x05993960.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02327ca0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02327ca0

// auto_copy_block_02328f50: misc_copy_block_58b3240 with other addresses.
namespace twin_02328f50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993a40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ac00, source_block, CopiedBlock);
RT_GLOBAL(0x05993a40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ac00 over the target block at 0x05993a40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02328f50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02328f50

// auto_copy_block_02329210: misc_copy_block_58b3240 with other addresses.
namespace twin_02329210 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993a80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ac30, source_block, CopiedBlock);
RT_GLOBAL(0x05993a80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ac30 over the target block at 0x05993a80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02329210()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02329210

// auto_copy_block_023294d0: misc_copy_block_58b3240 with other addresses.
namespace twin_023294d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993ac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ac60, source_block, CopiedBlock);
RT_GLOBAL(0x05993ac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ac60 over the target block at 0x05993ac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023294d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023294d0

// auto_copy_block_02329a60: misc_copy_block_58b3240 with other addresses.
namespace twin_02329a60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993b00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ac90, source_block, CopiedBlock);
RT_GLOBAL(0x05993b00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ac90 over the target block at 0x05993b00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02329a60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02329a60

// auto_copy_block_0232cbb0: misc_copy_block_58b3240 with other addresses.
namespace twin_0232cbb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993d20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ad20, source_block, CopiedBlock);
RT_GLOBAL(0x05993d20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ad20 over the target block at 0x05993d20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0232cbb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0232cbb0

// auto_copy_block_0232dec0: misc_copy_block_58b3240 with other addresses.
namespace twin_0232dec0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993e00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ad80, source_block, CopiedBlock);
RT_GLOBAL(0x05993e00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ad80 over the target block at 0x05993e00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0232dec0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0232dec0

// auto_copy_block_02330e50: misc_copy_block_58b3240 with other addresses.
namespace twin_02330e50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993ee0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ade0, source_block, CopiedBlock);
RT_GLOBAL(0x05993ee0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ade0 over the target block at 0x05993ee0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02330e50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02330e50

// auto_copy_block_02332750: misc_copy_block_58b3240 with other addresses.
namespace twin_02332750 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05993f20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ae10, source_block, CopiedBlock);
RT_GLOBAL(0x05993f20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ae10 over the target block at 0x05993f20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02332750()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02332750

// auto_copy_block_0233a170: misc_copy_block_58b3240 with other addresses.
namespace twin_0233a170 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994300.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1aef0, source_block, CopiedBlock);
RT_GLOBAL(0x05994300, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1aef0 over the target block at 0x05994300.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0233a170()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0233a170

// auto_copy_block_0233bb00: misc_copy_block_58b3240 with other addresses.
namespace twin_0233bb00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994340.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b050, source_block, CopiedBlock);
RT_GLOBAL(0x05994340, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b050 over the target block at 0x05994340.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0233bb00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0233bb00

// auto_copy_block_0233d4a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0233d4a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994380.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b0e0, source_block, CopiedBlock);
RT_GLOBAL(0x05994380, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b0e0 over the target block at 0x05994380.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0233d4a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0233d4a0

// auto_copy_block_0233d6e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0233d6e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059943c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b110, source_block, CopiedBlock);
RT_GLOBAL(0x059943c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b110 over the target block at 0x059943c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0233d6e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0233d6e0

// auto_copy_block_0233e150: misc_copy_block_58b3240 with other addresses.
namespace twin_0233e150 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994400.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b160, source_block, CopiedBlock);
RT_GLOBAL(0x05994400, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b160 over the target block at 0x05994400.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0233e150()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0233e150

// auto_copy_block_0233fdb0: misc_copy_block_58b3240 with other addresses.
namespace twin_0233fdb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994d60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b280, source_block, CopiedBlock);
RT_GLOBAL(0x05994d60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b280 over the target block at 0x05994d60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0233fdb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0233fdb0

// auto_copy_block_0233ff50: misc_copy_block_58b3240 with other addresses.
namespace twin_0233ff50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994da0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b2b0, source_block, CopiedBlock);
RT_GLOBAL(0x05994da0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b2b0 over the target block at 0x05994da0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0233ff50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0233ff50
