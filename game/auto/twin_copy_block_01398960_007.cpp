// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_copy_block_58b3240, in game/misc/copy_block_58b3240.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_copy_block_02340920: misc_copy_block_58b3240 with other addresses.
namespace twin_02340920 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994de0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b2e0, source_block, CopiedBlock);
RT_GLOBAL(0x05994de0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b2e0 over the target block at 0x05994de0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02340920()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02340920

// auto_copy_block_02341120: misc_copy_block_58b3240 with other addresses.
namespace twin_02341120 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994e20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b310, source_block, CopiedBlock);
RT_GLOBAL(0x05994e20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b310 over the target block at 0x05994e20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02341120()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02341120

// auto_copy_block_023415f0: misc_copy_block_58b3240 with other addresses.
namespace twin_023415f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994e60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b340, source_block, CopiedBlock);
RT_GLOBAL(0x05994e60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b340 over the target block at 0x05994e60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023415f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023415f0

// auto_copy_block_02341a50: misc_copy_block_58b3240 with other addresses.
namespace twin_02341a50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05994ea0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b370, source_block, CopiedBlock);
RT_GLOBAL(0x05994ea0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b370 over the target block at 0x05994ea0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02341a50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02341a50

// auto_copy_block_02366ef0: misc_copy_block_58b3240 with other addresses.
namespace twin_02366ef0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059963b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b640, source_block, CopiedBlock);
RT_GLOBAL(0x059963b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b640 over the target block at 0x059963b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02366ef0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02366ef0

// auto_copy_block_02367130: misc_copy_block_58b3240 with other addresses.
namespace twin_02367130 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059963f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b670, source_block, CopiedBlock);
RT_GLOBAL(0x059963f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b670 over the target block at 0x059963f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02367130()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02367130

// auto_copy_block_0236b7e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0236b7e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05996640.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b750, source_block, CopiedBlock);
RT_GLOBAL(0x05996640, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b750 over the target block at 0x05996640.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0236b7e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0236b7e0

// auto_copy_block_0236d7c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0236d7c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05996730.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b7b0, source_block, CopiedBlock);
RT_GLOBAL(0x05996730, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b7b0 over the target block at 0x05996730.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0236d7c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0236d7c0

// auto_copy_block_0236f030: misc_copy_block_58b3240 with other addresses.
namespace twin_0236f030 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05996770.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b7e0, source_block, CopiedBlock);
RT_GLOBAL(0x05996770, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b7e0 over the target block at 0x05996770.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0236f030()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0236f030

// auto_copy_block_02373480: misc_copy_block_58b3240 with other addresses.
namespace twin_02373480 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059968f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1b900, source_block, CopiedBlock);
RT_GLOBAL(0x059968f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1b900 over the target block at 0x059968f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02373480()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02373480

// auto_copy_block_0237d0a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0237d0a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05996c30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1bc60, source_block, CopiedBlock);
RT_GLOBAL(0x05996c30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1bc60 over the target block at 0x05996c30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0237d0a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0237d0a0

// auto_copy_block_0238a620: misc_copy_block_58b3240 with other addresses.
namespace twin_0238a620 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997420.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1bf00, source_block, CopiedBlock);
RT_GLOBAL(0x05997420, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1bf00 over the target block at 0x05997420.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0238a620()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0238a620

// auto_copy_block_0238b420: misc_copy_block_58b3240 with other addresses.
namespace twin_0238b420 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1bf90, source_block, CopiedBlock);
RT_GLOBAL(0x05997500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1bf90 over the target block at 0x05997500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0238b420()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0238b420

// auto_copy_block_02390b70: misc_copy_block_58b3240 with other addresses.
namespace twin_02390b70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997720.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c050, source_block, CopiedBlock);
RT_GLOBAL(0x05997720, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c050 over the target block at 0x05997720.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02390b70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02390b70

// auto_copy_block_023940b0: misc_copy_block_58b3240 with other addresses.
namespace twin_023940b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997ab0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c0b0, source_block, CopiedBlock);
RT_GLOBAL(0x05997ab0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c0b0 over the target block at 0x05997ab0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023940b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023940b0

// auto_copy_block_02394250: misc_copy_block_58b3240 with other addresses.
namespace twin_02394250 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997af0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c0e0, source_block, CopiedBlock);
RT_GLOBAL(0x05997af0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c0e0 over the target block at 0x05997af0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02394250()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02394250

// auto_copy_block_023943f0: misc_copy_block_58b3240 with other addresses.
namespace twin_023943f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997b30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c110, source_block, CopiedBlock);
RT_GLOBAL(0x05997b30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c110 over the target block at 0x05997b30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023943f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023943f0

// auto_copy_block_02394590: misc_copy_block_58b3240 with other addresses.
namespace twin_02394590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997b70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c140, source_block, CopiedBlock);
RT_GLOBAL(0x05997b70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c140 over the target block at 0x05997b70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02394590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02394590

// auto_copy_block_02397c10: misc_copy_block_58b3240 with other addresses.
namespace twin_02397c10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997cf0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c230, source_block, CopiedBlock);
RT_GLOBAL(0x05997cf0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c230 over the target block at 0x05997cf0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02397c10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02397c10

// auto_copy_block_02397f50: misc_copy_block_58b3240 with other addresses.
namespace twin_02397f50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997d30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c260, source_block, CopiedBlock);
RT_GLOBAL(0x05997d30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c260 over the target block at 0x05997d30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02397f50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02397f50

// auto_copy_block_0239c440: misc_copy_block_58b3240 with other addresses.
namespace twin_0239c440 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05997fc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c310, source_block, CopiedBlock);
RT_GLOBAL(0x05997fc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c310 over the target block at 0x05997fc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0239c440()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0239c440

// auto_copy_block_023a1180: misc_copy_block_58b3240 with other addresses.
namespace twin_023a1180 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05998380.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c3a0, source_block, CopiedBlock);
RT_GLOBAL(0x05998380, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c3a0 over the target block at 0x05998380.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023a1180()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023a1180

// auto_copy_block_023a4690: misc_copy_block_58b3240 with other addresses.
namespace twin_023a4690 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05998610.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c400, source_block, CopiedBlock);
RT_GLOBAL(0x05998610, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c400 over the target block at 0x05998610.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023a4690()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023a4690

// auto_copy_block_023aea30: misc_copy_block_58b3240 with other addresses.
namespace twin_023aea30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05998ca0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c560, source_block, CopiedBlock);
RT_GLOBAL(0x05998ca0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c560 over the target block at 0x05998ca0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023aea30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023aea30

// auto_copy_block_023aec20: misc_copy_block_58b3240 with other addresses.
namespace twin_023aec20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05998ce0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c590, source_block, CopiedBlock);
RT_GLOBAL(0x05998ce0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c590 over the target block at 0x05998ce0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023aec20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023aec20

// auto_copy_block_023aedc0: misc_copy_block_58b3240 with other addresses.
namespace twin_023aedc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05998d20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c5c0, source_block, CopiedBlock);
RT_GLOBAL(0x05998d20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c5c0 over the target block at 0x05998d20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023aedc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023aedc0

// auto_copy_block_023af480: misc_copy_block_58b3240 with other addresses.
namespace twin_023af480 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05998d60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c5f0, source_block, CopiedBlock);
RT_GLOBAL(0x05998d60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c5f0 over the target block at 0x05998d60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023af480()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023af480

// auto_copy_block_023b2ad0: misc_copy_block_58b3240 with other addresses.
namespace twin_023b2ad0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05998ff0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c650, source_block, CopiedBlock);
RT_GLOBAL(0x05998ff0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c650 over the target block at 0x05998ff0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b2ad0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b2ad0

// auto_copy_block_023b3240: misc_copy_block_58b3240 with other addresses.
namespace twin_023b3240 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999030.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c680, source_block, CopiedBlock);
RT_GLOBAL(0x05999030, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c680 over the target block at 0x05999030.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b3240()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b3240

// auto_copy_block_023b48e0: misc_copy_block_58b3240 with other addresses.
namespace twin_023b48e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059990c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c710, source_block, CopiedBlock);
RT_GLOBAL(0x059990c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c710 over the target block at 0x059990c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b48e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b48e0

// auto_copy_block_023b4bd0: misc_copy_block_58b3240 with other addresses.
namespace twin_023b4bd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999100.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c740, source_block, CopiedBlock);
RT_GLOBAL(0x05999100, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c740 over the target block at 0x05999100.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b4bd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b4bd0

// auto_copy_block_023b5020: misc_copy_block_58b3240 with other addresses.
namespace twin_023b5020 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999140.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c770, source_block, CopiedBlock);
RT_GLOBAL(0x05999140, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c770 over the target block at 0x05999140.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b5020()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b5020

// auto_copy_block_023b5c40: misc_copy_block_58b3240 with other addresses.
namespace twin_023b5c40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999180.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c7a0, source_block, CopiedBlock);
RT_GLOBAL(0x05999180, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c7a0 over the target block at 0x05999180.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b5c40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b5c40

// auto_copy_block_023b5ee0: misc_copy_block_58b3240 with other addresses.
namespace twin_023b5ee0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059991c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c7d0, source_block, CopiedBlock);
RT_GLOBAL(0x059991c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c7d0 over the target block at 0x059991c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b5ee0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b5ee0

// auto_copy_block_023b6110: misc_copy_block_58b3240 with other addresses.
namespace twin_023b6110 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999200.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c800, source_block, CopiedBlock);
RT_GLOBAL(0x05999200, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c800 over the target block at 0x05999200.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b6110()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b6110

// auto_copy_block_023b6a50: misc_copy_block_58b3240 with other addresses.
namespace twin_023b6a50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999240.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c830, source_block, CopiedBlock);
RT_GLOBAL(0x05999240, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c830 over the target block at 0x05999240.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b6a50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b6a50

// auto_copy_block_023b6cb0: misc_copy_block_58b3240 with other addresses.
namespace twin_023b6cb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999280.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c860, source_block, CopiedBlock);
RT_GLOBAL(0x05999280, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c860 over the target block at 0x05999280.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b6cb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b6cb0

// auto_copy_block_023b8ea0: misc_copy_block_58b3240 with other addresses.
namespace twin_023b8ea0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059993f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c8c0, source_block, CopiedBlock);
RT_GLOBAL(0x059993f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c8c0 over the target block at 0x059993f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b8ea0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b8ea0

// auto_copy_block_023b9150: misc_copy_block_58b3240 with other addresses.
namespace twin_023b9150 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999430.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c8f0, source_block, CopiedBlock);
RT_GLOBAL(0x05999430, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c8f0 over the target block at 0x05999430.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b9150()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b9150

// auto_copy_block_023b9440: misc_copy_block_58b3240 with other addresses.
namespace twin_023b9440 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999470.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c920, source_block, CopiedBlock);
RT_GLOBAL(0x05999470, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c920 over the target block at 0x05999470.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023b9440()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023b9440

// auto_copy_block_023ba160: misc_copy_block_58b3240 with other addresses.
namespace twin_023ba160 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999730.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c9b0, source_block, CopiedBlock);
RT_GLOBAL(0x05999730, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c9b0 over the target block at 0x05999730.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023ba160()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023ba160

// auto_copy_block_023ba3e0: misc_copy_block_58b3240 with other addresses.
namespace twin_023ba3e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999770.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1c9e0, source_block, CopiedBlock);
RT_GLOBAL(0x05999770, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1c9e0 over the target block at 0x05999770.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023ba3e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023ba3e0

// auto_copy_block_023ba6d0: misc_copy_block_58b3240 with other addresses.
namespace twin_023ba6d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059997b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ca10, source_block, CopiedBlock);
RT_GLOBAL(0x059997b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ca10 over the target block at 0x059997b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023ba6d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023ba6d0

// auto_copy_block_023ba920: misc_copy_block_58b3240 with other addresses.
namespace twin_023ba920 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059997f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ca80, source_block, CopiedBlock);
RT_GLOBAL(0x059997f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ca80 over the target block at 0x059997f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023ba920()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023ba920

// auto_copy_block_023baac0: misc_copy_block_58b3240 with other addresses.
namespace twin_023baac0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999830.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1cab0, source_block, CopiedBlock);
RT_GLOBAL(0x05999830, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1cab0 over the target block at 0x05999830.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023baac0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023baac0

// auto_copy_block_023bac60: misc_copy_block_58b3240 with other addresses.
namespace twin_023bac60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999870.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1cae0, source_block, CopiedBlock);
RT_GLOBAL(0x05999870, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1cae0 over the target block at 0x05999870.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023bac60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023bac60

// auto_copy_block_023bd010: misc_copy_block_58b3240 with other addresses.
namespace twin_023bd010 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059998f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d450, source_block, CopiedBlock);
RT_GLOBAL(0x059998f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d450 over the target block at 0x059998f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023bd010()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023bd010

// auto_copy_block_023bd1b0: misc_copy_block_58b3240 with other addresses.
namespace twin_023bd1b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999930.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d480, source_block, CopiedBlock);
RT_GLOBAL(0x05999930, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d480 over the target block at 0x05999930.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023bd1b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023bd1b0

// auto_copy_block_023bd720: misc_copy_block_58b3240 with other addresses.
namespace twin_023bd720 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999970.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d520, source_block, CopiedBlock);
RT_GLOBAL(0x05999970, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d520 over the target block at 0x05999970.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023bd720()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023bd720

// auto_copy_block_023bda80: misc_copy_block_58b3240 with other addresses.
namespace twin_023bda80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059999b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d550, source_block, CopiedBlock);
RT_GLOBAL(0x059999b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d550 over the target block at 0x059999b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023bda80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023bda80

// auto_copy_block_023bdc20: misc_copy_block_58b3240 with other addresses.
namespace twin_023bdc20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059999f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d580, source_block, CopiedBlock);
RT_GLOBAL(0x059999f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d580 over the target block at 0x059999f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023bdc20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023bdc20

// auto_copy_block_023bddc0: misc_copy_block_58b3240 with other addresses.
namespace twin_023bddc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999a30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d5b0, source_block, CopiedBlock);
RT_GLOBAL(0x05999a30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d5b0 over the target block at 0x05999a30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023bddc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023bddc0

// auto_copy_block_023be220: misc_copy_block_58b3240 with other addresses.
namespace twin_023be220 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999a70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d5e0, source_block, CopiedBlock);
RT_GLOBAL(0x05999a70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d5e0 over the target block at 0x05999a70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023be220()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023be220

// auto_copy_block_023be530: misc_copy_block_58b3240 with other addresses.
namespace twin_023be530 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999ab0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d610, source_block, CopiedBlock);
RT_GLOBAL(0x05999ab0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d610 over the target block at 0x05999ab0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023be530()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023be530

// auto_copy_block_023be6e0: misc_copy_block_58b3240 with other addresses.
namespace twin_023be6e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999af0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d640, source_block, CopiedBlock);
RT_GLOBAL(0x05999af0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d640 over the target block at 0x05999af0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023be6e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023be6e0

// auto_copy_block_023bf020: misc_copy_block_58b3240 with other addresses.
namespace twin_023bf020 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999b30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d670, source_block, CopiedBlock);
RT_GLOBAL(0x05999b30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d670 over the target block at 0x05999b30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023bf020()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023bf020

// auto_copy_block_023c0dd0: misc_copy_block_58b3240 with other addresses.
namespace twin_023c0dd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05999b70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d6a0, source_block, CopiedBlock);
RT_GLOBAL(0x05999b70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d6a0 over the target block at 0x05999b70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023c0dd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023c0dd0

// auto_copy_block_023ca750: misc_copy_block_58b3240 with other addresses.
namespace twin_023ca750 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9dac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d700, source_block, CopiedBlock);
RT_GLOBAL(0x05a9dac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d700 over the target block at 0x05a9dac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023ca750()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023ca750

// auto_copy_block_023ca8f0: misc_copy_block_58b3240 with other addresses.
namespace twin_023ca8f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9db00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d730, source_block, CopiedBlock);
RT_GLOBAL(0x05a9db00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d730 over the target block at 0x05a9db00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023ca8f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023ca8f0

// auto_copy_block_023cabc0: misc_copy_block_58b3240 with other addresses.
namespace twin_023cabc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9db40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d760, source_block, CopiedBlock);
RT_GLOBAL(0x05a9db40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d760 over the target block at 0x05a9db40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023cabc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023cabc0

// auto_copy_block_023cc030: misc_copy_block_58b3240 with other addresses.
namespace twin_023cc030 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9db80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d7b0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9db80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d7b0 over the target block at 0x05a9db80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023cc030()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023cc030

// auto_copy_block_023cc890: misc_copy_block_58b3240 with other addresses.
namespace twin_023cc890 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9dbc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d7e0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9dbc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d7e0 over the target block at 0x05a9dbc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023cc890()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023cc890

// auto_copy_block_023d2aa0: misc_copy_block_58b3240 with other addresses.
namespace twin_023d2aa0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9def0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d870, source_block, CopiedBlock);
RT_GLOBAL(0x05a9def0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d870 over the target block at 0x05a9def0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023d2aa0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023d2aa0

// auto_copy_block_023d3910: misc_copy_block_58b3240 with other addresses.
namespace twin_023d3910 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9df30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d8a0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9df30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d8a0 over the target block at 0x05a9df30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023d3910()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023d3910

// auto_copy_block_023d3cd0: misc_copy_block_58b3240 with other addresses.
namespace twin_023d3cd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9df70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d8d0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9df70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d8d0 over the target block at 0x05a9df70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023d3cd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023d3cd0

// auto_copy_block_023d42d0: misc_copy_block_58b3240 with other addresses.
namespace twin_023d42d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9dfb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d900, source_block, CopiedBlock);
RT_GLOBAL(0x05a9dfb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d900 over the target block at 0x05a9dfb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023d42d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023d42d0

// auto_copy_block_023d47c0: misc_copy_block_58b3240 with other addresses.
namespace twin_023d47c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9dff0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d930, source_block, CopiedBlock);
RT_GLOBAL(0x05a9dff0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d930 over the target block at 0x05a9dff0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023d47c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023d47c0

// auto_copy_block_023da710: misc_copy_block_58b3240 with other addresses.
namespace twin_023da710 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e290.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d990, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e290, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d990 over the target block at 0x05a9e290.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023da710()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023da710

// auto_copy_block_023da940: misc_copy_block_58b3240 with other addresses.
namespace twin_023da940 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e2d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d9c0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e2d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d9c0 over the target block at 0x05a9e2d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023da940()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023da940

// auto_copy_block_023db990: misc_copy_block_58b3240 with other addresses.
namespace twin_023db990 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e310.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1d9f0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e310, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1d9f0 over the target block at 0x05a9e310.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023db990()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023db990

// auto_copy_block_023dcc00: misc_copy_block_58b3240 with other addresses.
namespace twin_023dcc00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e350.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1da20, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e350, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1da20 over the target block at 0x05a9e350.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023dcc00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023dcc00

// auto_copy_block_023dce10: misc_copy_block_58b3240 with other addresses.
namespace twin_023dce10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e390.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1da50, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e390, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1da50 over the target block at 0x05a9e390.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023dce10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023dce10

// auto_copy_block_023dcfb0: misc_copy_block_58b3240 with other addresses.
namespace twin_023dcfb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e3d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1da80, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e3d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1da80 over the target block at 0x05a9e3d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023dcfb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023dcfb0

// auto_copy_block_023dd4f0: misc_copy_block_58b3240 with other addresses.
namespace twin_023dd4f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e410.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1dab0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e410, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1dab0 over the target block at 0x05a9e410.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023dd4f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023dd4f0

// auto_copy_block_023ddfa0: misc_copy_block_58b3240 with other addresses.
namespace twin_023ddfa0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e450.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1dae0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e450, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1dae0 over the target block at 0x05a9e450.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023ddfa0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023ddfa0

// auto_copy_block_023de4d0: misc_copy_block_58b3240 with other addresses.
namespace twin_023de4d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e490.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1db10, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e490, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1db10 over the target block at 0x05a9e490.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023de4d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023de4d0

// auto_copy_block_023de6f0: misc_copy_block_58b3240 with other addresses.
namespace twin_023de6f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e4d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1db40, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e4d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1db40 over the target block at 0x05a9e4d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023de6f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023de6f0

// auto_copy_block_023deff0: misc_copy_block_58b3240 with other addresses.
namespace twin_023deff0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e550.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1dba0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e550, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1dba0 over the target block at 0x05a9e550.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023deff0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023deff0

// auto_copy_block_023e7fe0: misc_copy_block_58b3240 with other addresses.
namespace twin_023e7fe0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9e8f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1dc60, source_block, CopiedBlock);
RT_GLOBAL(0x05a9e8f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1dc60 over the target block at 0x05a9e8f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023e7fe0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023e7fe0

// auto_copy_block_023f0150: misc_copy_block_58b3240 with other addresses.
namespace twin_023f0150 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9eb80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1de50, source_block, CopiedBlock);
RT_GLOBAL(0x05a9eb80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1de50 over the target block at 0x05a9eb80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_023f0150()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_023f0150

// auto_copy_block_02401da0: misc_copy_block_58b3240 with other addresses.
namespace twin_02401da0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9efc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e010, source_block, CopiedBlock);
RT_GLOBAL(0x05a9efc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e010 over the target block at 0x05a9efc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02401da0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02401da0

// auto_copy_block_02401f80: misc_copy_block_58b3240 with other addresses.
namespace twin_02401f80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f000.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e040, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f000, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e040 over the target block at 0x05a9f000.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02401f80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02401f80

// auto_copy_block_02402930: misc_copy_block_58b3240 with other addresses.
namespace twin_02402930 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f040.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e070, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f040, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e070 over the target block at 0x05a9f040.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02402930()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02402930

// auto_copy_block_02402ad0: misc_copy_block_58b3240 with other addresses.
namespace twin_02402ad0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f080.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e0a0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f080, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e0a0 over the target block at 0x05a9f080.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02402ad0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02402ad0

// auto_copy_block_02403af0: misc_copy_block_58b3240 with other addresses.
namespace twin_02403af0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f0c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e0d0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f0c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e0d0 over the target block at 0x05a9f0c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02403af0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02403af0

// auto_copy_block_02403c90: misc_copy_block_58b3240 with other addresses.
namespace twin_02403c90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f100.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e100, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f100, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e100 over the target block at 0x05a9f100.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02403c90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02403c90

// auto_copy_block_02403e30: misc_copy_block_58b3240 with other addresses.
namespace twin_02403e30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f140.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e130, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f140, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e130 over the target block at 0x05a9f140.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02403e30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02403e30

// auto_copy_block_02405f30: misc_copy_block_58b3240 with other addresses.
namespace twin_02405f30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f230.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e190, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f230, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e190 over the target block at 0x05a9f230.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02405f30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02405f30

// auto_copy_block_02406210: misc_copy_block_58b3240 with other addresses.
namespace twin_02406210 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f270.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e1c0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f270, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e1c0 over the target block at 0x05a9f270.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02406210()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02406210

// auto_copy_block_024063b0: misc_copy_block_58b3240 with other addresses.
namespace twin_024063b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f2b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e1f0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f2b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e1f0 over the target block at 0x05a9f2b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024063b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024063b0

// auto_copy_block_0240e400: misc_copy_block_58b3240 with other addresses.
namespace twin_0240e400 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f430.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e280, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f430, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e280 over the target block at 0x05a9f430.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0240e400()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0240e400

// auto_copy_block_0240f190: misc_copy_block_58b3240 with other addresses.
namespace twin_0240f190 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f470.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e2b0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f470, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e2b0 over the target block at 0x05a9f470.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0240f190()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0240f190

// auto_copy_block_02413920: misc_copy_block_58b3240 with other addresses.
namespace twin_02413920 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f750.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e3a0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f750, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e3a0 over the target block at 0x05a9f750.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02413920()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02413920

// auto_copy_block_02415ef0: misc_copy_block_58b3240 with other addresses.
namespace twin_02415ef0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f900.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e460, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f900, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e460 over the target block at 0x05a9f900.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02415ef0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02415ef0

// auto_copy_block_024166a0: misc_copy_block_58b3240 with other addresses.
namespace twin_024166a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f940.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e490, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f940, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e490 over the target block at 0x05a9f940.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024166a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024166a0

// auto_copy_block_02416f70: misc_copy_block_58b3240 with other addresses.
namespace twin_02416f70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e4c0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e4c0 over the target block at 0x05a9f980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02416f70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02416f70

// auto_copy_block_024176c0: misc_copy_block_58b3240 with other addresses.
namespace twin_024176c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05a9f9c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e4f0, source_block, CopiedBlock);
RT_GLOBAL(0x05a9f9c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e4f0 over the target block at 0x05a9f9c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024176c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024176c0

// auto_copy_block_02423ff0: misc_copy_block_58b3240 with other addresses.
namespace twin_02423ff0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa00c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e600, source_block, CopiedBlock);
RT_GLOBAL(0x05aa00c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e600 over the target block at 0x05aa00c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02423ff0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02423ff0

// auto_copy_block_024241d0: misc_copy_block_58b3240 with other addresses.
namespace twin_024241d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0100.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e630, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0100, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e630 over the target block at 0x05aa0100.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024241d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024241d0

// auto_copy_block_024243f0: misc_copy_block_58b3240 with other addresses.
namespace twin_024243f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0140.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e660, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0140, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e660 over the target block at 0x05aa0140.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024243f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024243f0

// auto_copy_block_02425e40: misc_copy_block_58b3240 with other addresses.
namespace twin_02425e40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0180.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e690, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0180, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e690 over the target block at 0x05aa0180.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02425e40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02425e40

// auto_copy_block_024266a0: misc_copy_block_58b3240 with other addresses.
namespace twin_024266a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa01c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e6c0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa01c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e6c0 over the target block at 0x05aa01c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024266a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024266a0

// auto_copy_block_02426850: misc_copy_block_58b3240 with other addresses.
namespace twin_02426850 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0270.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e6f0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0270, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e6f0 over the target block at 0x05aa0270.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02426850()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02426850

// auto_copy_block_02429db0: misc_copy_block_58b3240 with other addresses.
namespace twin_02429db0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e750, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e750 over the target block at 0x05aa0500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02429db0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02429db0

// auto_copy_block_0242a0a0: misc_copy_block_58b3240 with other addresses.
namespace twin_0242a0a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0540.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e780, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0540, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e780 over the target block at 0x05aa0540.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0242a0a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0242a0a0

// auto_copy_block_0242ae00: misc_copy_block_58b3240 with other addresses.
namespace twin_0242ae00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e7b0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e7b0 over the target block at 0x05aa0580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0242ae00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0242ae00

// auto_copy_block_0242c480: misc_copy_block_58b3240 with other addresses.
namespace twin_0242c480 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa05c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e7e0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa05c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e7e0 over the target block at 0x05aa05c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0242c480()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0242c480

// auto_copy_block_0242c6e0: misc_copy_block_58b3240 with other addresses.
namespace twin_0242c6e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0600.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e810, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0600, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e810 over the target block at 0x05aa0600.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0242c6e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0242c6e0

// auto_copy_block_0242ca40: misc_copy_block_58b3240 with other addresses.
namespace twin_0242ca40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0640.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e840, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0640, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e840 over the target block at 0x05aa0640.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0242ca40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0242ca40

// auto_copy_block_0242dad0: misc_copy_block_58b3240 with other addresses.
namespace twin_0242dad0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0680.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e8e0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0680, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e8e0 over the target block at 0x05aa0680.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0242dad0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0242dad0

// auto_copy_block_0242ee70: misc_copy_block_58b3240 with other addresses.
namespace twin_0242ee70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0760.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e940, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0760, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e940 over the target block at 0x05aa0760.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0242ee70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0242ee70

// auto_copy_block_0242f9b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0242f9b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa07a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e970, source_block, CopiedBlock);
RT_GLOBAL(0x05aa07a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e970 over the target block at 0x05aa07a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0242f9b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0242f9b0

// auto_copy_block_02430f30: misc_copy_block_58b3240 with other addresses.
namespace twin_02430f30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0880.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1e9d0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0880, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1e9d0 over the target block at 0x05aa0880.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02430f30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02430f30

// auto_copy_block_02431200: misc_copy_block_58b3240 with other addresses.
namespace twin_02431200 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa08c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ea00, source_block, CopiedBlock);
RT_GLOBAL(0x05aa08c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ea00 over the target block at 0x05aa08c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02431200()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02431200

// auto_copy_block_024313a0: misc_copy_block_58b3240 with other addresses.
namespace twin_024313a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0900.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ea30, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0900, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ea30 over the target block at 0x05aa0900.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024313a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024313a0

// auto_copy_block_024326a0: misc_copy_block_58b3240 with other addresses.
namespace twin_024326a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0940.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ea60, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0940, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ea60 over the target block at 0x05aa0940.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024326a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024326a0

// auto_copy_block_024329d0: misc_copy_block_58b3240 with other addresses.
namespace twin_024329d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ea90, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ea90 over the target block at 0x05aa0980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024329d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024329d0

// auto_copy_block_02432d60: misc_copy_block_58b3240 with other addresses.
namespace twin_02432d60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa09c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1eac0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa09c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1eac0 over the target block at 0x05aa09c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02432d60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02432d60

// auto_copy_block_024331c0: misc_copy_block_58b3240 with other addresses.
namespace twin_024331c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0a00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1eaf0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0a00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1eaf0 over the target block at 0x05aa0a00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024331c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024331c0

// auto_copy_block_02433630: misc_copy_block_58b3240 with other addresses.
namespace twin_02433630 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0a40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1eb20, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0a40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1eb20 over the target block at 0x05aa0a40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02433630()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02433630

// auto_copy_block_024338b0: misc_copy_block_58b3240 with other addresses.
namespace twin_024338b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0a80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1eb50, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0a80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1eb50 over the target block at 0x05aa0a80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024338b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024338b0

// auto_copy_block_02433be0: misc_copy_block_58b3240 with other addresses.
namespace twin_02433be0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0ac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1eb80, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0ac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1eb80 over the target block at 0x05aa0ac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02433be0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02433be0

// auto_copy_block_02434340: misc_copy_block_58b3240 with other addresses.
namespace twin_02434340 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0b00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ebb0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0b00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ebb0 over the target block at 0x05aa0b00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02434340()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02434340

// auto_copy_block_024344e0: misc_copy_block_58b3240 with other addresses.
namespace twin_024344e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0b40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ebe0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0b40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ebe0 over the target block at 0x05aa0b40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024344e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024344e0

// auto_copy_block_02435f10: misc_copy_block_58b3240 with other addresses.
namespace twin_02435f10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0b80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ec10, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0b80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ec10 over the target block at 0x05aa0b80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02435f10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02435f10

// auto_copy_block_02436410: misc_copy_block_58b3240 with other addresses.
namespace twin_02436410 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0bc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ec40, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0bc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ec40 over the target block at 0x05aa0bc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02436410()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02436410

// auto_copy_block_024365b0: misc_copy_block_58b3240 with other addresses.
namespace twin_024365b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0c00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ec70, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0c00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ec70 over the target block at 0x05aa0c00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024365b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024365b0

// auto_copy_block_02436750: misc_copy_block_58b3240 with other addresses.
namespace twin_02436750 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0c40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1eca0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0c40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1eca0 over the target block at 0x05aa0c40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02436750()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02436750

// auto_copy_block_02436c40: misc_copy_block_58b3240 with other addresses.
namespace twin_02436c40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0c80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ecd0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0c80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ecd0 over the target block at 0x05aa0c80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02436c40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02436c40

// auto_copy_block_02436de0: misc_copy_block_58b3240 with other addresses.
namespace twin_02436de0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0cc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ed00, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0cc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ed00 over the target block at 0x05aa0cc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02436de0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02436de0

// auto_copy_block_02436f80: misc_copy_block_58b3240 with other addresses.
namespace twin_02436f80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0d00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ed30, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0d00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ed30 over the target block at 0x05aa0d00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02436f80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02436f80

// auto_copy_block_024372c0: misc_copy_block_58b3240 with other addresses.
namespace twin_024372c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0d40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ed60, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0d40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ed60 over the target block at 0x05aa0d40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024372c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024372c0

// auto_copy_block_02438a70: misc_copy_block_58b3240 with other addresses.
namespace twin_02438a70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0d80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1ed90, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0d80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1ed90 over the target block at 0x05aa0d80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02438a70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02438a70

// auto_copy_block_024392c0: misc_copy_block_58b3240 with other addresses.
namespace twin_024392c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0dc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1edc0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0dc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1edc0 over the target block at 0x05aa0dc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024392c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024392c0

// auto_copy_block_0244a820: misc_copy_block_58b3240 with other addresses.
namespace twin_0244a820 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa0fd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f490, source_block, CopiedBlock);
RT_GLOBAL(0x05aa0fd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f490 over the target block at 0x05aa0fd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0244a820()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0244a820

// auto_copy_block_0244f720: misc_copy_block_58b3240 with other addresses.
namespace twin_0244f720 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa10b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f5c0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa10b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f5c0 over the target block at 0x05aa10b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0244f720()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0244f720

// auto_copy_block_0244f8c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0244f8c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa10f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f5f0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa10f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f5f0 over the target block at 0x05aa10f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0244f8c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0244f8c0

// auto_copy_block_0244ff30: misc_copy_block_58b3240 with other addresses.
namespace twin_0244ff30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1130.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f620, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1130, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f620 over the target block at 0x05aa1130.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0244ff30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0244ff30

// auto_copy_block_024500d0: misc_copy_block_58b3240 with other addresses.
namespace twin_024500d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1170.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f650, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1170, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f650 over the target block at 0x05aa1170.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024500d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024500d0

// auto_copy_block_02450410: misc_copy_block_58b3240 with other addresses.
namespace twin_02450410 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa11b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f680, source_block, CopiedBlock);
RT_GLOBAL(0x05aa11b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f680 over the target block at 0x05aa11b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02450410()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02450410

// auto_copy_block_02450780: misc_copy_block_58b3240 with other addresses.
namespace twin_02450780 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa11f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f6b0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa11f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f6b0 over the target block at 0x05aa11f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02450780()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02450780

// auto_copy_block_02450950: misc_copy_block_58b3240 with other addresses.
namespace twin_02450950 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1230.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f6e0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1230, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f6e0 over the target block at 0x05aa1230.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02450950()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02450950

// auto_copy_block_02450c40: misc_copy_block_58b3240 with other addresses.
namespace twin_02450c40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1270.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f710, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1270, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f710 over the target block at 0x05aa1270.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02450c40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02450c40

// auto_copy_block_02450de0: misc_copy_block_58b3240 with other addresses.
namespace twin_02450de0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa12b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f740, source_block, CopiedBlock);
RT_GLOBAL(0x05aa12b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f740 over the target block at 0x05aa12b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02450de0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02450de0

// auto_copy_block_02450f80: misc_copy_block_58b3240 with other addresses.
namespace twin_02450f80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa12f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f770, source_block, CopiedBlock);
RT_GLOBAL(0x05aa12f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f770 over the target block at 0x05aa12f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02450f80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02450f80

// auto_copy_block_02451690: misc_copy_block_58b3240 with other addresses.
namespace twin_02451690 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1330.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f7a0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1330, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f7a0 over the target block at 0x05aa1330.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02451690()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02451690

// auto_copy_block_02451a50: misc_copy_block_58b3240 with other addresses.
namespace twin_02451a50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1370.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f7d0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1370, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f7d0 over the target block at 0x05aa1370.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02451a50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02451a50

// auto_copy_block_024544a0: misc_copy_block_58b3240 with other addresses.
namespace twin_024544a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa13b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f800, source_block, CopiedBlock);
RT_GLOBAL(0x05aa13b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f800 over the target block at 0x05aa13b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_024544a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_024544a0

// auto_copy_block_02454810: misc_copy_block_58b3240 with other addresses.
namespace twin_02454810 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa13f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f830, source_block, CopiedBlock);
RT_GLOBAL(0x05aa13f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f830 over the target block at 0x05aa13f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02454810()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02454810

// auto_copy_block_02454b60: misc_copy_block_58b3240 with other addresses.
namespace twin_02454b60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1430.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f860, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1430, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f860 over the target block at 0x05aa1430.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02454b60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02454b60

// auto_copy_block_02454e80: misc_copy_block_58b3240 with other addresses.
namespace twin_02454e80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1470.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f890, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1470, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f890 over the target block at 0x05aa1470.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02454e80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02454e80

// auto_copy_block_02455780: misc_copy_block_58b3240 with other addresses.
namespace twin_02455780 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa14b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f8c0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa14b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f8c0 over the target block at 0x05aa14b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02455780()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02455780

// auto_copy_block_02456710: misc_copy_block_58b3240 with other addresses.
namespace twin_02456710 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa14f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f8f0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa14f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f8f0 over the target block at 0x05aa14f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02456710()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02456710

// auto_copy_block_02457460: misc_copy_block_58b3240 with other addresses.
namespace twin_02457460 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1530.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f920, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1530, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f920 over the target block at 0x05aa1530.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02457460()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02457460

// auto_copy_block_0245c9d0: misc_copy_block_58b3240 with other addresses.
namespace twin_0245c9d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1810.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f9b0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1810, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f9b0 over the target block at 0x05aa1810.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0245c9d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0245c9d0

// auto_copy_block_0245ddd0: misc_copy_block_58b3240 with other addresses.
namespace twin_0245ddd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1850.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1f9e0, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1850, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1f9e0 over the target block at 0x05aa1850.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0245ddd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0245ddd0

// auto_copy_block_0245f280: misc_copy_block_58b3240 with other addresses.
namespace twin_0245f280 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa1890.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1fa10, source_block, CopiedBlock);
RT_GLOBAL(0x05aa1890, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1fa10 over the target block at 0x05aa1890.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0245f280()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0245f280

// auto_copy_block_0245f930: misc_copy_block_58b3240 with other addresses.
namespace twin_0245f930 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05aa18d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d1fa40, source_block, CopiedBlock);
RT_GLOBAL(0x05aa18d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d1fa40 over the target block at 0x05aa18d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0245f930()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0245f930

// auto_copy_block_026fc6c0: misc_copy_block_58b3240 with other addresses.
namespace twin_026fc6c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05ac3f80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d23b40, source_block, CopiedBlock);
RT_GLOBAL(0x05ac3f80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d23b40 over the target block at 0x05ac3f80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_026fc6c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_026fc6c0

// auto_copy_block_02709290: misc_copy_block_58b3240 with other addresses.
namespace twin_02709290 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05ac4040.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d23db0, source_block, CopiedBlock);
RT_GLOBAL(0x05ac4040, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d23db0 over the target block at 0x05ac4040.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02709290()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02709290

// auto_copy_block_0270a550: misc_copy_block_58b3240 with other addresses.
namespace twin_0270a550 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05ac4080.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d23de0, source_block, CopiedBlock);
RT_GLOBAL(0x05ac4080, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d23de0 over the target block at 0x05ac4080.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0270a550()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0270a550

// auto_copy_block_0270d130: misc_copy_block_58b3240 with other addresses.
namespace twin_0270d130 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05ac40c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d240c0, source_block, CopiedBlock);
RT_GLOBAL(0x05ac40c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d240c0 over the target block at 0x05ac40c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0270d130()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0270d130

// auto_copy_block_027101a0: misc_copy_block_58b3240 with other addresses.
namespace twin_027101a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05ac4100.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d240f0, source_block, CopiedBlock);
RT_GLOBAL(0x05ac4100, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d240f0 over the target block at 0x05ac4100.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_027101a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_027101a0

// auto_copy_block_027134a0: misc_copy_block_58b3240 with other addresses.
namespace twin_027134a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05ac4140.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d24300, source_block, CopiedBlock);
RT_GLOBAL(0x05ac4140, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d24300 over the target block at 0x05ac4140.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_027134a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_027134a0

// auto_copy_block_02713760: misc_copy_block_58b3240 with other addresses.
namespace twin_02713760 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05ac4180.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d24330, source_block, CopiedBlock);
RT_GLOBAL(0x05ac4180, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d24330 over the target block at 0x05ac4180.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_02713760()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_02713760
