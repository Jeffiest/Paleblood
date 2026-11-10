// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_copy_block_58b3240, in game/misc/copy_block_58b3240.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_copy_block_01440790: misc_copy_block_58b3240 with other addresses.
namespace twin_01440790 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7ea0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccbbd0, source_block, CopiedBlock);
RT_GLOBAL(0x058b7ea0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccbbd0 over the target block at 0x058b7ea0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01440790()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01440790

// auto_copy_block_01440df0: misc_copy_block_58b3240 with other addresses.
namespace twin_01440df0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7ee0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccbc70, source_block, CopiedBlock);
RT_GLOBAL(0x058b7ee0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccbc70 over the target block at 0x058b7ee0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01440df0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01440df0

// auto_copy_block_01441340: misc_copy_block_58b3240 with other addresses.
namespace twin_01441340 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7f20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccbd10, source_block, CopiedBlock);
RT_GLOBAL(0x058b7f20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccbd10 over the target block at 0x058b7f20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01441340()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01441340

// auto_copy_block_01441630: misc_copy_block_58b3240 with other addresses.
namespace twin_01441630 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7f60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccbe60, source_block, CopiedBlock);
RT_GLOBAL(0x058b7f60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccbe60 over the target block at 0x058b7f60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01441630()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01441630

// auto_copy_block_01441900: misc_copy_block_58b3240 with other addresses.
namespace twin_01441900 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7fa0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccc000, source_block, CopiedBlock);
RT_GLOBAL(0x058b7fa0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccc000 over the target block at 0x058b7fa0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01441900()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01441900

// auto_copy_block_01442350: misc_copy_block_58b3240 with other addresses.
namespace twin_01442350 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b7fe0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccc150, source_block, CopiedBlock);
RT_GLOBAL(0x058b7fe0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccc150 over the target block at 0x058b7fe0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01442350()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01442350

// auto_copy_block_01444300: misc_copy_block_58b3240 with other addresses.
namespace twin_01444300 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8020.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccc2b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8020, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccc2b0 over the target block at 0x058b8020.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01444300()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01444300

// auto_copy_block_01444ad0: misc_copy_block_58b3240 with other addresses.
namespace twin_01444ad0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8060.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccc400, source_block, CopiedBlock);
RT_GLOBAL(0x058b8060, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccc400 over the target block at 0x058b8060.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01444ad0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01444ad0

// auto_copy_block_01444e60: misc_copy_block_58b3240 with other addresses.
namespace twin_01444e60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b80a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccc570, source_block, CopiedBlock);
RT_GLOBAL(0x058b80a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccc570 over the target block at 0x058b80a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01444e60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01444e60

// auto_copy_block_01445360: misc_copy_block_58b3240 with other addresses.
namespace twin_01445360 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b80e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccc610, source_block, CopiedBlock);
RT_GLOBAL(0x058b80e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccc610 over the target block at 0x058b80e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01445360()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01445360

// auto_copy_block_014458b0: misc_copy_block_58b3240 with other addresses.
namespace twin_014458b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8120.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccc6b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8120, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccc6b0 over the target block at 0x058b8120.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014458b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014458b0

// auto_copy_block_01447ea0: misc_copy_block_58b3240 with other addresses.
namespace twin_01447ea0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b81c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccc8a0, source_block, CopiedBlock);
RT_GLOBAL(0x058b81c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccc8a0 over the target block at 0x058b81c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01447ea0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01447ea0

// auto_copy_block_01448420: misc_copy_block_58b3240 with other addresses.
namespace twin_01448420 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8200.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cccdb0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8200, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cccdb0 over the target block at 0x058b8200.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01448420()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01448420

// auto_copy_block_01448970: misc_copy_block_58b3240 with other addresses.
namespace twin_01448970 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8240.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cccf90, source_block, CopiedBlock);
RT_GLOBAL(0x058b8240, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cccf90 over the target block at 0x058b8240.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01448970()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01448970

// auto_copy_block_01448a80: misc_copy_block_58b3240 with other addresses.
namespace twin_01448a80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8280.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccd160, source_block, CopiedBlock);
RT_GLOBAL(0x058b8280, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccd160 over the target block at 0x058b8280.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01448a80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01448a80

// auto_copy_block_014491b0: misc_copy_block_58b3240 with other addresses.
namespace twin_014491b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8300.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccd2e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8300, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccd2e0 over the target block at 0x058b8300.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014491b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014491b0

// auto_copy_block_01449450: misc_copy_block_58b3240 with other addresses.
namespace twin_01449450 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8340.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccd380, source_block, CopiedBlock);
RT_GLOBAL(0x058b8340, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccd380 over the target block at 0x058b8340.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01449450()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01449450

// auto_copy_block_0144a7d0: misc_copy_block_58b3240 with other addresses.
namespace twin_0144a7d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8380.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccd420, source_block, CopiedBlock);
RT_GLOBAL(0x058b8380, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccd420 over the target block at 0x058b8380.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0144a7d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0144a7d0

// auto_copy_block_0144baa0: misc_copy_block_58b3240 with other addresses.
namespace twin_0144baa0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8400.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccd6a0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8400, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccd6a0 over the target block at 0x058b8400.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0144baa0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0144baa0

// auto_copy_block_014507b0: misc_copy_block_58b3240 with other addresses.
namespace twin_014507b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8440.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccd840, source_block, CopiedBlock);
RT_GLOBAL(0x058b8440, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccd840 over the target block at 0x058b8440.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014507b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014507b0

// auto_copy_block_01450ea0: misc_copy_block_58b3240 with other addresses.
namespace twin_01450ea0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8480.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccdba0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8480, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccdba0 over the target block at 0x058b8480.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01450ea0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01450ea0

// auto_copy_block_01451240: misc_copy_block_58b3240 with other addresses.
namespace twin_01451240 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b84c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccdda0, source_block, CopiedBlock);
RT_GLOBAL(0x058b84c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccdda0 over the target block at 0x058b84c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01451240()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01451240

// auto_copy_block_01451d20: misc_copy_block_58b3240 with other addresses.
namespace twin_01451d20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccde40, source_block, CopiedBlock);
RT_GLOBAL(0x058b8500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccde40 over the target block at 0x058b8500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01451d20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01451d20

// auto_copy_block_01455c70: misc_copy_block_58b3240 with other addresses.
namespace twin_01455c70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8540.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cce3e0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8540, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cce3e0 over the target block at 0x058b8540.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01455c70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01455c70

// auto_copy_block_01455d50: misc_copy_block_58b3240 with other addresses.
namespace twin_01455d50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cce6a0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cce6a0 over the target block at 0x058b8580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01455d50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01455d50

// auto_copy_block_014560d0: misc_copy_block_58b3240 with other addresses.
namespace twin_014560d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b85c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cce740, source_block, CopiedBlock);
RT_GLOBAL(0x058b85c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cce740 over the target block at 0x058b85c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014560d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014560d0

// auto_copy_block_01456aa0: misc_copy_block_58b3240 with other addresses.
namespace twin_01456aa0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8600.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cce850, source_block, CopiedBlock);
RT_GLOBAL(0x058b8600, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cce850 over the target block at 0x058b8600.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01456aa0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01456aa0

// auto_copy_block_01456d50: misc_copy_block_58b3240 with other addresses.
namespace twin_01456d50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8640.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cce900, source_block, CopiedBlock);
RT_GLOBAL(0x058b8640, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cce900 over the target block at 0x058b8640.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01456d50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01456d50

// auto_copy_block_014572a0: misc_copy_block_58b3240 with other addresses.
namespace twin_014572a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8680.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cce9b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8680, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cce9b0 over the target block at 0x058b8680.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_014572a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_014572a0

// auto_copy_block_01457c00: misc_copy_block_58b3240 with other addresses.
namespace twin_01457c00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8740.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccec00, source_block, CopiedBlock);
RT_GLOBAL(0x058b8740, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccec00 over the target block at 0x058b8740.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01457c00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01457c00

// auto_copy_block_01457cf0: misc_copy_block_58b3240 with other addresses.
namespace twin_01457cf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b87a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cceca0, source_block, CopiedBlock);
RT_GLOBAL(0x058b87a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cceca0 over the target block at 0x058b87a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01457cf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01457cf0

// auto_copy_block_01459330: misc_copy_block_58b3240 with other addresses.
namespace twin_01459330 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b87e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cced50, source_block, CopiedBlock);
RT_GLOBAL(0x058b87e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cced50 over the target block at 0x058b87e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01459330()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01459330

// auto_copy_block_01459d90: misc_copy_block_58b3240 with other addresses.
namespace twin_01459d90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8930.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cceff0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8930, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cceff0 over the target block at 0x058b8930.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01459d90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01459d90

// auto_copy_block_01459e60: misc_copy_block_58b3240 with other addresses.
namespace twin_01459e60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8970.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf090, source_block, CopiedBlock);
RT_GLOBAL(0x058b8970, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf090 over the target block at 0x058b8970.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01459e60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01459e60

// auto_copy_block_01459f90: misc_copy_block_58b3240 with other addresses.
namespace twin_01459f90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b89b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf130, source_block, CopiedBlock);
RT_GLOBAL(0x058b89b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf130 over the target block at 0x058b89b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01459f90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01459f90

// auto_copy_block_0145b670: misc_copy_block_58b3240 with other addresses.
namespace twin_0145b670 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8a40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf270, source_block, CopiedBlock);
RT_GLOBAL(0x058b8a40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf270 over the target block at 0x058b8a40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145b670()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145b670

// auto_copy_block_0145b790: misc_copy_block_58b3240 with other addresses.
namespace twin_0145b790 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8a80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf4b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8a80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf4b0 over the target block at 0x058b8a80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145b790()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145b790

// auto_copy_block_0145bbf0: misc_copy_block_58b3240 with other addresses.
namespace twin_0145bbf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8ac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf550, source_block, CopiedBlock);
RT_GLOBAL(0x058b8ac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf550 over the target block at 0x058b8ac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145bbf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145bbf0

// auto_copy_block_0145c800: misc_copy_block_58b3240 with other addresses.
namespace twin_0145c800 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8b00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf5f0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8b00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf5f0 over the target block at 0x058b8b00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145c800()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145c800

// auto_copy_block_0145cc00: misc_copy_block_58b3240 with other addresses.
namespace twin_0145cc00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8b40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf730, source_block, CopiedBlock);
RT_GLOBAL(0x058b8b40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf730 over the target block at 0x058b8b40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145cc00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145cc00

// auto_copy_block_0145d0b0: misc_copy_block_58b3240 with other addresses.
namespace twin_0145d0b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8b80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf870, source_block, CopiedBlock);
RT_GLOBAL(0x058b8b80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf870 over the target block at 0x058b8b80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145d0b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145d0b0

// auto_copy_block_0145da90: misc_copy_block_58b3240 with other addresses.
namespace twin_0145da90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8bc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf910, source_block, CopiedBlock);
RT_GLOBAL(0x058b8bc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf910 over the target block at 0x058b8bc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145da90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145da90

// auto_copy_block_0145e5c0: misc_copy_block_58b3240 with other addresses.
namespace twin_0145e5c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8c00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccf9b0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8c00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccf9b0 over the target block at 0x058b8c00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145e5c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145e5c0

// auto_copy_block_0145eb30: misc_copy_block_58b3240 with other addresses.
namespace twin_0145eb30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8c40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccfa50, source_block, CopiedBlock);
RT_GLOBAL(0x058b8c40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccfa50 over the target block at 0x058b8c40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145eb30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145eb30

// auto_copy_block_0145ee40: misc_copy_block_58b3240 with other addresses.
namespace twin_0145ee40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8c80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04ccfaf0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8c80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04ccfaf0 over the target block at 0x058b8c80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_0145ee40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_0145ee40

// auto_copy_block_01462550: misc_copy_block_58b3240 with other addresses.
namespace twin_01462550 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8e50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0190, source_block, CopiedBlock);
RT_GLOBAL(0x058b8e50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0190 over the target block at 0x058b8e50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01462550()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01462550

// auto_copy_block_01463390: misc_copy_block_58b3240 with other addresses.
namespace twin_01463390 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8e90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0450, source_block, CopiedBlock);
RT_GLOBAL(0x058b8e90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0450 over the target block at 0x058b8e90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01463390()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01463390

// auto_copy_block_01464580: misc_copy_block_58b3240 with other addresses.
namespace twin_01464580 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8ed0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0620, source_block, CopiedBlock);
RT_GLOBAL(0x058b8ed0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0620 over the target block at 0x058b8ed0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01464580()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01464580

// auto_copy_block_01464e30: misc_copy_block_58b3240 with other addresses.
namespace twin_01464e30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8f10.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd06c0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8f10, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd06c0 over the target block at 0x058b8f10.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01464e30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01464e30

// auto_copy_block_01465000: misc_copy_block_58b3240 with other addresses.
namespace twin_01465000 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8f50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0760, source_block, CopiedBlock);
RT_GLOBAL(0x058b8f50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0760 over the target block at 0x058b8f50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01465000()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01465000

// auto_copy_block_01466d00: misc_copy_block_58b3240 with other addresses.
namespace twin_01466d00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8f90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd08d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8f90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd08d0 over the target block at 0x058b8f90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01466d00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01466d00

// auto_copy_block_01466e20: misc_copy_block_58b3240 with other addresses.
namespace twin_01466e20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b8fd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd09d0, source_block, CopiedBlock);
RT_GLOBAL(0x058b8fd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd09d0 over the target block at 0x058b8fd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01466e20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01466e20

// auto_copy_block_01466f90: misc_copy_block_58b3240 with other addresses.
namespace twin_01466f90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b9010.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0a70, source_block, CopiedBlock);
RT_GLOBAL(0x058b9010, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0a70 over the target block at 0x058b9010.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01466f90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01466f90

// auto_copy_block_01467650: misc_copy_block_58b3240 with other addresses.
namespace twin_01467650 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b9050.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0b10, source_block, CopiedBlock);
RT_GLOBAL(0x058b9050, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0b10 over the target block at 0x058b9050.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01467650()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01467650

// auto_copy_block_01467880: misc_copy_block_58b3240 with other addresses.
namespace twin_01467880 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b9090.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0bc0, source_block, CopiedBlock);
RT_GLOBAL(0x058b9090, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0bc0 over the target block at 0x058b9090.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01467880()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01467880

// auto_copy_block_01468150: misc_copy_block_58b3240 with other addresses.
namespace twin_01468150 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b90d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0c60, source_block, CopiedBlock);
RT_GLOBAL(0x058b90d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0c60 over the target block at 0x058b90d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01468150()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01468150

// auto_copy_block_01468410: misc_copy_block_58b3240 with other addresses.
namespace twin_01468410 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b9110.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0d00, source_block, CopiedBlock);
RT_GLOBAL(0x058b9110, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0d00 over the target block at 0x058b9110.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01468410()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01468410

// auto_copy_block_01468560: misc_copy_block_58b3240 with other addresses.
namespace twin_01468560 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x058b9150.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cd0da0, source_block, CopiedBlock);
RT_GLOBAL(0x058b9150, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cd0da0 over the target block at 0x058b9150.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01468560()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01468560
