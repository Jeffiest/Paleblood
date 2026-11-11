// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_copy_block_58b3240, in game/misc/copy_block_58b3240.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_copy_block_019c9590: misc_copy_block_58b3240 with other addresses.
namespace twin_019c9590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05958c40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf8420, source_block, CopiedBlock);
RT_GLOBAL(0x05958c40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf8420 over the target block at 0x05958c40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019c9590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019c9590

// auto_copy_block_019eba10: misc_copy_block_58b3240 with other addresses.
namespace twin_019eba10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05959e40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf8a80, source_block, CopiedBlock);
RT_GLOBAL(0x05959e40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf8a80 over the target block at 0x05959e40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_019eba10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_019eba10

// auto_copy_block_01a008e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01a008e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595a4e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf8d90, source_block, CopiedBlock);
RT_GLOBAL(0x0595a4e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf8d90 over the target block at 0x0595a4e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01a008e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01a008e0

// auto_copy_block_01a41710: misc_copy_block_58b3240 with other addresses.
namespace twin_01a41710 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595b970.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf9900, source_block, CopiedBlock);
RT_GLOBAL(0x0595b970, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf9900 over the target block at 0x0595b970.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01a41710()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01a41710

// auto_copy_block_01a4fb30: misc_copy_block_58b3240 with other addresses.
namespace twin_01a4fb30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595c1e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cf9d90, source_block, CopiedBlock);
RT_GLOBAL(0x0595c1e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cf9d90 over the target block at 0x0595c1e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01a4fb30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01a4fb30

// auto_copy_block_01a679e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01a679e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595cba0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfa1e0, source_block, CopiedBlock);
RT_GLOBAL(0x0595cba0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfa1e0 over the target block at 0x0595cba0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01a679e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01a679e0

// auto_copy_block_01a8d500: misc_copy_block_58b3240 with other addresses.
namespace twin_01a8d500 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595dc60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfaa10, source_block, CopiedBlock);
RT_GLOBAL(0x0595dc60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfaa10 over the target block at 0x0595dc60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01a8d500()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01a8d500

// auto_copy_block_01aa7e40: misc_copy_block_58b3240 with other addresses.
namespace twin_01aa7e40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595e7b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfb080, source_block, CopiedBlock);
RT_GLOBAL(0x0595e7b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfb080 over the target block at 0x0595e7b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01aa7e40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01aa7e40

// auto_copy_block_01aa81c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01aa81c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595e830.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfb110, source_block, CopiedBlock);
RT_GLOBAL(0x0595e830, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfb110 over the target block at 0x0595e830.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01aa81c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01aa81c0

// auto_copy_block_01aa8360: misc_copy_block_58b3240 with other addresses.
namespace twin_01aa8360 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595e870.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfb140, source_block, CopiedBlock);
RT_GLOBAL(0x0595e870, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfb140 over the target block at 0x0595e870.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01aa8360()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01aa8360

// auto_copy_block_01aaa470: misc_copy_block_58b3240 with other addresses.
namespace twin_01aaa470 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595e970.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfb1d0, source_block, CopiedBlock);
RT_GLOBAL(0x0595e970, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfb1d0 over the target block at 0x0595e970.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01aaa470()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01aaa470

// auto_copy_block_01ab85b0: misc_copy_block_58b3240 with other addresses.
namespace twin_01ab85b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595efd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfb510, source_block, CopiedBlock);
RT_GLOBAL(0x0595efd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfb510 over the target block at 0x0595efd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ab85b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ab85b0

// auto_copy_block_01abd260: misc_copy_block_58b3240 with other addresses.
namespace twin_01abd260 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0595f1d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfb670, source_block, CopiedBlock);
RT_GLOBAL(0x0595f1d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfb670 over the target block at 0x0595f1d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01abd260()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01abd260

// auto_copy_block_01af8890: misc_copy_block_58b3240 with other addresses.
namespace twin_01af8890 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059607f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc0d0, source_block, CopiedBlock);
RT_GLOBAL(0x059607f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc0d0 over the target block at 0x059607f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01af8890()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01af8890

// auto_copy_block_01af8a30: misc_copy_block_58b3240 with other addresses.
namespace twin_01af8a30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05960830.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc100, source_block, CopiedBlock);
RT_GLOBAL(0x05960830, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc100 over the target block at 0x05960830.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01af8a30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01af8a30

// auto_copy_block_01af8bd0: misc_copy_block_58b3240 with other addresses.
namespace twin_01af8bd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05960870.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc130, source_block, CopiedBlock);
RT_GLOBAL(0x05960870, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc130 over the target block at 0x05960870.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01af8bd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01af8bd0

// auto_copy_block_01af8f50: misc_copy_block_58b3240 with other addresses.
namespace twin_01af8f50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059608f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc1c0, source_block, CopiedBlock);
RT_GLOBAL(0x059608f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc1c0 over the target block at 0x059608f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01af8f50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01af8f50

// auto_copy_block_01af90f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01af90f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05960930.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc1f0, source_block, CopiedBlock);
RT_GLOBAL(0x05960930, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc1f0 over the target block at 0x05960930.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01af90f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01af90f0

// auto_copy_block_01af9290: misc_copy_block_58b3240 with other addresses.
namespace twin_01af9290 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05960970.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc220, source_block, CopiedBlock);
RT_GLOBAL(0x05960970, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc220 over the target block at 0x05960970.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01af9290()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01af9290

// auto_copy_block_01af9430: misc_copy_block_58b3240 with other addresses.
namespace twin_01af9430 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059609b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc250, source_block, CopiedBlock);
RT_GLOBAL(0x059609b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc250 over the target block at 0x059609b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01af9430()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01af9430

// auto_copy_block_01af95d0: misc_copy_block_58b3240 with other addresses.
namespace twin_01af95d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059609f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc280, source_block, CopiedBlock);
RT_GLOBAL(0x059609f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc280 over the target block at 0x059609f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01af95d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01af95d0

// auto_copy_block_01afe5c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01afe5c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05960c70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc540, source_block, CopiedBlock);
RT_GLOBAL(0x05960c70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc540 over the target block at 0x05960c70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01afe5c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01afe5c0

// auto_copy_block_01b09540: misc_copy_block_58b3240 with other addresses.
namespace twin_01b09540 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05960ef0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc6c0, source_block, CopiedBlock);
RT_GLOBAL(0x05960ef0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc6c0 over the target block at 0x05960ef0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b09540()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b09540

// auto_copy_block_01b096e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b096e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05960f30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc6f0, source_block, CopiedBlock);
RT_GLOBAL(0x05960f30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc6f0 over the target block at 0x05960f30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b096e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b096e0

// auto_copy_block_01b09880: misc_copy_block_58b3240 with other addresses.
namespace twin_01b09880 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05960f70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc720, source_block, CopiedBlock);
RT_GLOBAL(0x05960f70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc720 over the target block at 0x05960f70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b09880()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b09880

// auto_copy_block_01b136f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b136f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059612f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc870, source_block, CopiedBlock);
RT_GLOBAL(0x059612f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc870 over the target block at 0x059612f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b136f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b136f0

// auto_copy_block_01b19b90: misc_copy_block_58b3240 with other addresses.
namespace twin_01b19b90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059614b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc960, source_block, CopiedBlock);
RT_GLOBAL(0x059614b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc960 over the target block at 0x059614b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b19b90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b19b90

// auto_copy_block_01b1d0b0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b1d0b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059615b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfc9f0, source_block, CopiedBlock);
RT_GLOBAL(0x059615b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfc9f0 over the target block at 0x059615b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b1d0b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b1d0b0

// auto_copy_block_01b1f2f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b1f2f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059616f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfcae0, source_block, CopiedBlock);
RT_GLOBAL(0x059616f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfcae0 over the target block at 0x059616f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b1f2f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b1f2f0

// auto_copy_block_01b2f5e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b2f5e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05961980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfcc40, source_block, CopiedBlock);
RT_GLOBAL(0x05961980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfcc40 over the target block at 0x05961980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b2f5e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b2f5e0

// auto_copy_block_01b48260: misc_copy_block_58b3240 with other addresses.
namespace twin_01b48260 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05961eb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfcf30, source_block, CopiedBlock);
RT_GLOBAL(0x05961eb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfcf30 over the target block at 0x05961eb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b48260()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b48260

// auto_copy_block_01b4e8b0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b4e8b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059621c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd170, source_block, CopiedBlock);
RT_GLOBAL(0x059621c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd170 over the target block at 0x059621c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b4e8b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b4e8b0

// auto_copy_block_01b5a460: misc_copy_block_58b3240 with other addresses.
namespace twin_01b5a460 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059624b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd340, source_block, CopiedBlock);
RT_GLOBAL(0x059624b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd340 over the target block at 0x059624b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b5a460()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b5a460

// auto_copy_block_01b5a9e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b5a9e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059624f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd370, source_block, CopiedBlock);
RT_GLOBAL(0x059624f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd370 over the target block at 0x059624f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b5a9e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b5a9e0

// auto_copy_block_01b5c440: misc_copy_block_58b3240 with other addresses.
namespace twin_01b5c440 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05962530.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd3c0, source_block, CopiedBlock);
RT_GLOBAL(0x05962530, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd3c0 over the target block at 0x05962530.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b5c440()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b5c440

// auto_copy_block_01b5e370: misc_copy_block_58b3240 with other addresses.
namespace twin_01b5e370 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05962570.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd450, source_block, CopiedBlock);
RT_GLOBAL(0x05962570, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd450 over the target block at 0x05962570.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b5e370()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b5e370

// auto_copy_block_01b5e6e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b5e6e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059625b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd480, source_block, CopiedBlock);
RT_GLOBAL(0x059625b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd480 over the target block at 0x059625b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b5e6e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b5e6e0

// auto_copy_block_01b5ef60: misc_copy_block_58b3240 with other addresses.
namespace twin_01b5ef60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059625f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd4c0, source_block, CopiedBlock);
RT_GLOBAL(0x059625f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd4c0 over the target block at 0x059625f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b5ef60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b5ef60

// auto_copy_block_01b63d70: misc_copy_block_58b3240 with other addresses.
namespace twin_01b63d70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059627b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd5b0, source_block, CopiedBlock);
RT_GLOBAL(0x059627b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd5b0 over the target block at 0x059627b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b63d70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b63d70

// auto_copy_block_01b72cf0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b72cf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05962f20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd6d0, source_block, CopiedBlock);
RT_GLOBAL(0x05962f20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd6d0 over the target block at 0x05962f20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b72cf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b72cf0

// auto_copy_block_01b75490: misc_copy_block_58b3240 with other addresses.
namespace twin_01b75490 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05962ff0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd7c0, source_block, CopiedBlock);
RT_GLOBAL(0x05962ff0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd7c0 over the target block at 0x05962ff0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b75490()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b75490

// auto_copy_block_01b75630: misc_copy_block_58b3240 with other addresses.
namespace twin_01b75630 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05963030.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd7f0, source_block, CopiedBlock);
RT_GLOBAL(0x05963030, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd7f0 over the target block at 0x05963030.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b75630()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b75630

// auto_copy_block_01b75b70: misc_copy_block_58b3240 with other addresses.
namespace twin_01b75b70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05963070.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfd820, source_block, CopiedBlock);
RT_GLOBAL(0x05963070, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfd820 over the target block at 0x05963070.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b75b70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b75b70

// auto_copy_block_01b80650: misc_copy_block_58b3240 with other addresses.
namespace twin_01b80650 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05963530.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfda80, source_block, CopiedBlock);
RT_GLOBAL(0x05963530, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfda80 over the target block at 0x05963530.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b80650()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b80650

// auto_copy_block_01b92ab0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b92ab0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596a540.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfdcc0, source_block, CopiedBlock);
RT_GLOBAL(0x0596a540, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfdcc0 over the target block at 0x0596a540.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b92ab0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b92ab0

// auto_copy_block_01b931e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b931e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596a580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfdcf0, source_block, CopiedBlock);
RT_GLOBAL(0x0596a580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfdcf0 over the target block at 0x0596a580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b931e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b931e0

// auto_copy_block_01b98550: misc_copy_block_58b3240 with other addresses.
namespace twin_01b98550 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596a660.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfde10, source_block, CopiedBlock);
RT_GLOBAL(0x0596a660, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfde10 over the target block at 0x0596a660.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b98550()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b98550

// auto_copy_block_01b98880: misc_copy_block_58b3240 with other addresses.
namespace twin_01b98880 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596a6a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfde50, source_block, CopiedBlock);
RT_GLOBAL(0x0596a6a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfde50 over the target block at 0x0596a6a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b98880()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b98880

// auto_copy_block_01b99140: misc_copy_block_58b3240 with other addresses.
namespace twin_01b99140 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596a780.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfdeb0, source_block, CopiedBlock);
RT_GLOBAL(0x0596a780, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfdeb0 over the target block at 0x0596a780.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b99140()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b99140

// auto_copy_block_01b99fe0: misc_copy_block_58b3240 with other addresses.
namespace twin_01b99fe0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596a7c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfdee0, source_block, CopiedBlock);
RT_GLOBAL(0x0596a7c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfdee0 over the target block at 0x0596a7c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01b99fe0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01b99fe0

// auto_copy_block_01ba8680: misc_copy_block_58b3240 with other addresses.
namespace twin_01ba8680 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596acf0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfe6f0, source_block, CopiedBlock);
RT_GLOBAL(0x0596acf0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfe6f0 over the target block at 0x0596acf0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ba8680()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ba8680

// auto_copy_block_01ba9200: misc_copy_block_58b3240 with other addresses.
namespace twin_01ba9200 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596ad30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfe720, source_block, CopiedBlock);
RT_GLOBAL(0x0596ad30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfe720 over the target block at 0x0596ad30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ba9200()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ba9200

// auto_copy_block_01baaab0: misc_copy_block_58b3240 with other addresses.
namespace twin_01baaab0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596adb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfe7b0, source_block, CopiedBlock);
RT_GLOBAL(0x0596adb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfe7b0 over the target block at 0x0596adb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01baaab0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01baaab0

// auto_copy_block_01bab6d0: misc_copy_block_58b3240 with other addresses.
namespace twin_01bab6d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596adf0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfe7e0, source_block, CopiedBlock);
RT_GLOBAL(0x0596adf0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfe7e0 over the target block at 0x0596adf0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bab6d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bab6d0

// auto_copy_block_01bac360: misc_copy_block_58b3240 with other addresses.
namespace twin_01bac360 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596ae30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfe810, source_block, CopiedBlock);
RT_GLOBAL(0x0596ae30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfe810 over the target block at 0x0596ae30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bac360()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bac360

// auto_copy_block_01bacf10: misc_copy_block_58b3240 with other addresses.
namespace twin_01bacf10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596ae70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfe840, source_block, CopiedBlock);
RT_GLOBAL(0x0596ae70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfe840 over the target block at 0x0596ae70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bacf10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bacf10

// auto_copy_block_01bb0470: misc_copy_block_58b3240 with other addresses.
namespace twin_01bb0470 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596af70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfe990, source_block, CopiedBlock);
RT_GLOBAL(0x0596af70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfe990 over the target block at 0x0596af70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bb0470()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bb0470

// auto_copy_block_01bb10c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01bb10c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596afb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfe9c0, source_block, CopiedBlock);
RT_GLOBAL(0x0596afb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfe9c0 over the target block at 0x0596afb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bb10c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bb10c0

// auto_copy_block_01bb1e30: misc_copy_block_58b3240 with other addresses.
namespace twin_01bb1e30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596aff0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfe9f0, source_block, CopiedBlock);
RT_GLOBAL(0x0596aff0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfe9f0 over the target block at 0x0596aff0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bb1e30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bb1e30

// auto_copy_block_01bb3810: misc_copy_block_58b3240 with other addresses.
namespace twin_01bb3810 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596b070.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfea80, source_block, CopiedBlock);
RT_GLOBAL(0x0596b070, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfea80 over the target block at 0x0596b070.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bb3810()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bb3810

// auto_copy_block_01bb60a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01bb60a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596b170.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfebd0, source_block, CopiedBlock);
RT_GLOBAL(0x0596b170, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfebd0 over the target block at 0x0596b170.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bb60a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bb60a0

// auto_copy_block_01bb8cd0: misc_copy_block_58b3240 with other addresses.
namespace twin_01bb8cd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596b2c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfed80, source_block, CopiedBlock);
RT_GLOBAL(0x0596b2c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfed80 over the target block at 0x0596b2c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bb8cd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bb8cd0

// auto_copy_block_01bb9750: misc_copy_block_58b3240 with other addresses.
namespace twin_01bb9750 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596b300.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cfedb0, source_block, CopiedBlock);
RT_GLOBAL(0x0596b300, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cfedb0 over the target block at 0x0596b300.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bb9750()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bb9750

// auto_copy_block_01bc9380: misc_copy_block_58b3240 with other addresses.
namespace twin_01bc9380 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596b6a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cff320, source_block, CopiedBlock);
RT_GLOBAL(0x0596b6a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cff320 over the target block at 0x0596b6a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bc9380()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bc9380

// auto_copy_block_01bc99f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01bc99f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596b6e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cff350, source_block, CopiedBlock);
RT_GLOBAL(0x0596b6e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cff350 over the target block at 0x0596b6e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bc99f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bc99f0

// auto_copy_block_01bce1b0: misc_copy_block_58b3240 with other addresses.
namespace twin_01bce1b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596b7c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cff440, source_block, CopiedBlock);
RT_GLOBAL(0x0596b7c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cff440 over the target block at 0x0596b7c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bce1b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bce1b0

// auto_copy_block_01be0de0: misc_copy_block_58b3240 with other addresses.
namespace twin_01be0de0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596b930.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cffa00, source_block, CopiedBlock);
RT_GLOBAL(0x0596b930, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cffa00 over the target block at 0x0596b930.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01be0de0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01be0de0

// auto_copy_block_01be1730: misc_copy_block_58b3240 with other addresses.
namespace twin_01be1730 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596b970.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cffae0, source_block, CopiedBlock);
RT_GLOBAL(0x0596b970, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cffae0 over the target block at 0x0596b970.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01be1730()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01be1730

// auto_copy_block_01bf6f70: misc_copy_block_58b3240 with other addresses.
namespace twin_01bf6f70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596bcb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00240, source_block, CopiedBlock);
RT_GLOBAL(0x0596bcb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00240 over the target block at 0x0596bcb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bf6f70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bf6f70

// auto_copy_block_01bf8450: misc_copy_block_58b3240 with other addresses.
namespace twin_01bf8450 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596bcf0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d003b0, source_block, CopiedBlock);
RT_GLOBAL(0x0596bcf0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d003b0 over the target block at 0x0596bcf0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bf8450()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bf8450

// auto_copy_block_01bf8640: misc_copy_block_58b3240 with other addresses.
namespace twin_01bf8640 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596bd30.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d003e0, source_block, CopiedBlock);
RT_GLOBAL(0x0596bd30, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d003e0 over the target block at 0x0596bd30.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bf8640()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bf8640

// auto_copy_block_01bf8ba0: misc_copy_block_58b3240 with other addresses.
namespace twin_01bf8ba0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596bdc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00480, source_block, CopiedBlock);
RT_GLOBAL(0x0596bdc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00480 over the target block at 0x0596bdc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bf8ba0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bf8ba0

// auto_copy_block_01bfe1b0: misc_copy_block_58b3240 with other addresses.
namespace twin_01bfe1b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596bfa0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00520, source_block, CopiedBlock);
RT_GLOBAL(0x0596bfa0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00520 over the target block at 0x0596bfa0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bfe1b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bfe1b0

// auto_copy_block_01bfeb60: misc_copy_block_58b3240 with other addresses.
namespace twin_01bfeb60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c030.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d005a0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c030, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d005a0 over the target block at 0x0596c030.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bfeb60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bfeb60

// auto_copy_block_01bfeec0: misc_copy_block_58b3240 with other addresses.
namespace twin_01bfeec0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c070.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d005d0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c070, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d005d0 over the target block at 0x0596c070.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01bfeec0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01bfeec0

// auto_copy_block_01c01100: misc_copy_block_58b3240 with other addresses.
namespace twin_01c01100 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c150.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00680, source_block, CopiedBlock);
RT_GLOBAL(0x0596c150, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00680 over the target block at 0x0596c150.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c01100()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c01100

// auto_copy_block_01c01660: misc_copy_block_58b3240 with other addresses.
namespace twin_01c01660 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c190.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d006e0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c190, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d006e0 over the target block at 0x0596c190.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c01660()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c01660

// auto_copy_block_01c06800: misc_copy_block_58b3240 with other addresses.
namespace twin_01c06800 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c1d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00860, source_block, CopiedBlock);
RT_GLOBAL(0x0596c1d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00860 over the target block at 0x0596c1d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c06800()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c06800

// auto_copy_block_01c0ba80: misc_copy_block_58b3240 with other addresses.
namespace twin_01c0ba80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c210.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00b50, source_block, CopiedBlock);
RT_GLOBAL(0x0596c210, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00b50 over the target block at 0x0596c210.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c0ba80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c0ba80

// auto_copy_block_01c156e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c156e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c2a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00e20, source_block, CopiedBlock);
RT_GLOBAL(0x0596c2a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00e20 over the target block at 0x0596c2a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c156e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c156e0

// auto_copy_block_01c15930: misc_copy_block_58b3240 with other addresses.
namespace twin_01c15930 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c2e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00e50, source_block, CopiedBlock);
RT_GLOBAL(0x0596c2e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00e50 over the target block at 0x0596c2e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c15930()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c15930

// auto_copy_block_01c15d20: misc_copy_block_58b3240 with other addresses.
namespace twin_01c15d20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c320.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00e80, source_block, CopiedBlock);
RT_GLOBAL(0x0596c320, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00e80 over the target block at 0x0596c320.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c15d20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c15d20

// auto_copy_block_01c162c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c162c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c360.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00ec0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c360, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00ec0 over the target block at 0x0596c360.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c162c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c162c0

// auto_copy_block_01c166f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c166f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c3a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00ef0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c3a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00ef0 over the target block at 0x0596c3a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c166f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c166f0

// auto_copy_block_01c16a10: misc_copy_block_58b3240 with other addresses.
namespace twin_01c16a10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c3e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00f20, source_block, CopiedBlock);
RT_GLOBAL(0x0596c3e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00f20 over the target block at 0x0596c3e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c16a10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c16a10

// auto_copy_block_01c1af20: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1af20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c420.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d00fd0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c420, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d00fd0 over the target block at 0x0596c420.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1af20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1af20

// auto_copy_block_01c1b3b0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1b3b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c460.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01000, source_block, CopiedBlock);
RT_GLOBAL(0x0596c460, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01000 over the target block at 0x0596c460.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1b3b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1b3b0

// auto_copy_block_01c1b550: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1b550 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c4a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01030, source_block, CopiedBlock);
RT_GLOBAL(0x0596c4a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01030 over the target block at 0x0596c4a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1b550()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1b550

// auto_copy_block_01c1b6f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1b6f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c4e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01060, source_block, CopiedBlock);
RT_GLOBAL(0x0596c4e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01060 over the target block at 0x0596c4e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1b6f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1b6f0

// auto_copy_block_01c1bc50: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1bc50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c570.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d010f0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c570, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d010f0 over the target block at 0x0596c570.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1bc50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1bc50

// auto_copy_block_01c1beb0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1beb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c5b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01120, source_block, CopiedBlock);
RT_GLOBAL(0x0596c5b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01120 over the target block at 0x0596c5b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1beb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1beb0

// auto_copy_block_01c1c0f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1c0f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c5f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01150, source_block, CopiedBlock);
RT_GLOBAL(0x0596c5f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01150 over the target block at 0x0596c5f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1c0f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1c0f0

// auto_copy_block_01c1c3e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1c3e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c630.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01180, source_block, CopiedBlock);
RT_GLOBAL(0x0596c630, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01180 over the target block at 0x0596c630.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1c3e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1c3e0

// auto_copy_block_01c1c6d0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1c6d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c670.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d011b0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c670, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d011b0 over the target block at 0x0596c670.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1c6d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1c6d0

// auto_copy_block_01c1c910: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1c910 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c6b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01220, source_block, CopiedBlock);
RT_GLOBAL(0x0596c6b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01220 over the target block at 0x0596c6b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1c910()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1c910

// auto_copy_block_01c1d4d0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1d4d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c6f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01350, source_block, CopiedBlock);
RT_GLOBAL(0x0596c6f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01350 over the target block at 0x0596c6f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1d4d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1d4d0

// auto_copy_block_01c1e0a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1e0a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c730.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d015c0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c730, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d015c0 over the target block at 0x0596c730.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1e0a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1e0a0

// auto_copy_block_01c1e240: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1e240 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c770.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d015f0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c770, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d015f0 over the target block at 0x0596c770.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1e240()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1e240

// auto_copy_block_01c1e3e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1e3e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c7b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01620, source_block, CopiedBlock);
RT_GLOBAL(0x0596c7b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01620 over the target block at 0x0596c7b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1e3e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1e3e0

// auto_copy_block_01c1e580: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1e580 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c7f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01650, source_block, CopiedBlock);
RT_GLOBAL(0x0596c7f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01650 over the target block at 0x0596c7f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1e580()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1e580

// auto_copy_block_01c1e860: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1e860 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c830.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01680, source_block, CopiedBlock);
RT_GLOBAL(0x0596c830, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01680 over the target block at 0x0596c830.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1e860()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1e860

// auto_copy_block_01c1ea00: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1ea00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c870.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d016b0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c870, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d016b0 over the target block at 0x0596c870.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1ea00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1ea00

// auto_copy_block_01c1f1d0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c1f1d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c8b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d016e0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c8b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d016e0 over the target block at 0x0596c8b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c1f1d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c1f1d0

// auto_copy_block_01c23850: misc_copy_block_58b3240 with other addresses.
namespace twin_01c23850 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c940.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01780, source_block, CopiedBlock);
RT_GLOBAL(0x0596c940, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01780 over the target block at 0x0596c940.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c23850()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c23850

// auto_copy_block_01c25590: misc_copy_block_58b3240 with other addresses.
namespace twin_01c25590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596c980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d017b0, source_block, CopiedBlock);
RT_GLOBAL(0x0596c980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d017b0 over the target block at 0x0596c980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c25590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c25590

// auto_copy_block_01c25b50: misc_copy_block_58b3240 with other addresses.
namespace twin_01c25b50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596ca40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d018a0, source_block, CopiedBlock);
RT_GLOBAL(0x0596ca40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d018a0 over the target block at 0x0596ca40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c25b50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c25b50

// auto_copy_block_01c25cf0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c25cf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596ca80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d018d0, source_block, CopiedBlock);
RT_GLOBAL(0x0596ca80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d018d0 over the target block at 0x0596ca80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c25cf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c25cf0

// auto_copy_block_01c25f10: misc_copy_block_58b3240 with other addresses.
namespace twin_01c25f10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596cac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01900, source_block, CopiedBlock);
RT_GLOBAL(0x0596cac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01900 over the target block at 0x0596cac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c25f10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c25f10

// auto_copy_block_01c271a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c271a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596cb00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01930, source_block, CopiedBlock);
RT_GLOBAL(0x0596cb00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01930 over the target block at 0x0596cb00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c271a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c271a0

// auto_copy_block_01c276f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c276f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596cb40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01960, source_block, CopiedBlock);
RT_GLOBAL(0x0596cb40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01960 over the target block at 0x0596cb40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c276f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c276f0

// auto_copy_block_01c28830: misc_copy_block_58b3240 with other addresses.
namespace twin_01c28830 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596cb80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01990, source_block, CopiedBlock);
RT_GLOBAL(0x0596cb80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01990 over the target block at 0x0596cb80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c28830()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c28830

// auto_copy_block_01c28a70: misc_copy_block_58b3240 with other addresses.
namespace twin_01c28a70 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596ccc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d019c0, source_block, CopiedBlock);
RT_GLOBAL(0x0596ccc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d019c0 over the target block at 0x0596ccc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c28a70()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c28a70

// auto_copy_block_01c28db0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c28db0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596cd00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d019f0, source_block, CopiedBlock);
RT_GLOBAL(0x0596cd00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d019f0 over the target block at 0x0596cd00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c28db0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c28db0

// auto_copy_block_01c2a7a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c2a7a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596cd40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01a20, source_block, CopiedBlock);
RT_GLOBAL(0x0596cd40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01a20 over the target block at 0x0596cd40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c2a7a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c2a7a0

// auto_copy_block_01c2e890: misc_copy_block_58b3240 with other addresses.
namespace twin_01c2e890 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596cd80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01a50, source_block, CopiedBlock);
RT_GLOBAL(0x0596cd80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01a50 over the target block at 0x0596cd80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c2e890()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c2e890

// auto_copy_block_01c2ea30: misc_copy_block_58b3240 with other addresses.
namespace twin_01c2ea30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596ce50.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01a80, source_block, CopiedBlock);
RT_GLOBAL(0x0596ce50, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01a80 over the target block at 0x0596ce50.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c2ea30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c2ea30

// auto_copy_block_01c2f1f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c2f1f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596cf90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01bd0, source_block, CopiedBlock);
RT_GLOBAL(0x0596cf90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01bd0 over the target block at 0x0596cf90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c2f1f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c2f1f0

// auto_copy_block_01c2f590: misc_copy_block_58b3240 with other addresses.
namespace twin_01c2f590 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d020.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01c60, source_block, CopiedBlock);
RT_GLOBAL(0x0596d020, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01c60 over the target block at 0x0596d020.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c2f590()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c2f590

// auto_copy_block_01c2f960: misc_copy_block_58b3240 with other addresses.
namespace twin_01c2f960 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d0d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01cf0, source_block, CopiedBlock);
RT_GLOBAL(0x0596d0d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01cf0 over the target block at 0x0596d0d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c2f960()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c2f960

// auto_copy_block_01c2fb00: misc_copy_block_58b3240 with other addresses.
namespace twin_01c2fb00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d110.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01d20, source_block, CopiedBlock);
RT_GLOBAL(0x0596d110, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01d20 over the target block at 0x0596d110.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c2fb00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c2fb00

// auto_copy_block_01c2fca0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c2fca0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d150.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01d50, source_block, CopiedBlock);
RT_GLOBAL(0x0596d150, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01d50 over the target block at 0x0596d150.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c2fca0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c2fca0

// auto_copy_block_01c30040: misc_copy_block_58b3240 with other addresses.
namespace twin_01c30040 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d1e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01de0, source_block, CopiedBlock);
RT_GLOBAL(0x0596d1e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01de0 over the target block at 0x0596d1e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c30040()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c30040

// auto_copy_block_01c301e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c301e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d220.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01e10, source_block, CopiedBlock);
RT_GLOBAL(0x0596d220, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01e10 over the target block at 0x0596d220.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c301e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c301e0

// auto_copy_block_01c30380: misc_copy_block_58b3240 with other addresses.
namespace twin_01c30380 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d260.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01e40, source_block, CopiedBlock);
RT_GLOBAL(0x0596d260, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01e40 over the target block at 0x0596d260.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c30380()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c30380

// auto_copy_block_01c30520: misc_copy_block_58b3240 with other addresses.
namespace twin_01c30520 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d2a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01e70, source_block, CopiedBlock);
RT_GLOBAL(0x0596d2a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01e70 over the target block at 0x0596d2a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c30520()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c30520

// auto_copy_block_01c306c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c306c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d2e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01ea0, source_block, CopiedBlock);
RT_GLOBAL(0x0596d2e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01ea0 over the target block at 0x0596d2e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c306c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c306c0

// auto_copy_block_01c308f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c308f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d320.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01ed0, source_block, CopiedBlock);
RT_GLOBAL(0x0596d320, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01ed0 over the target block at 0x0596d320.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c308f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c308f0

// auto_copy_block_01c30ed0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c30ed0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d3b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01f60, source_block, CopiedBlock);
RT_GLOBAL(0x0596d3b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01f60 over the target block at 0x0596d3b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c30ed0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c30ed0

// auto_copy_block_01c33630: misc_copy_block_58b3240 with other addresses.
namespace twin_01c33630 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d3f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01f90, source_block, CopiedBlock);
RT_GLOBAL(0x0596d3f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01f90 over the target block at 0x0596d3f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c33630()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c33630

// auto_copy_block_01c337f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c337f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d4b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d01fc0, source_block, CopiedBlock);
RT_GLOBAL(0x0596d4b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d01fc0 over the target block at 0x0596d4b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c337f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c337f0

// auto_copy_block_01c357d0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c357d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d610.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d020f0, source_block, CopiedBlock);
RT_GLOBAL(0x0596d610, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d020f0 over the target block at 0x0596d610.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c357d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c357d0

// auto_copy_block_01c35970: misc_copy_block_58b3240 with other addresses.
namespace twin_01c35970 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d650.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02120, source_block, CopiedBlock);
RT_GLOBAL(0x0596d650, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02120 over the target block at 0x0596d650.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c35970()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c35970

// auto_copy_block_01c3cc90: misc_copy_block_58b3240 with other addresses.
namespace twin_01c3cc90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596d8f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02270, source_block, CopiedBlock);
RT_GLOBAL(0x0596d8f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02270 over the target block at 0x0596d8f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c3cc90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c3cc90

// auto_copy_block_01c44bf0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c44bf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596dac0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d023c0, source_block, CopiedBlock);
RT_GLOBAL(0x0596dac0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d023c0 over the target block at 0x0596dac0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c44bf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c44bf0

// auto_copy_block_01c44e10: misc_copy_block_58b3240 with other addresses.
namespace twin_01c44e10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596db00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d023f0, source_block, CopiedBlock);
RT_GLOBAL(0x0596db00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d023f0 over the target block at 0x0596db00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c44e10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c44e10

// auto_copy_block_01c4c1f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c4c1f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596de40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d025d0, source_block, CopiedBlock);
RT_GLOBAL(0x0596de40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d025d0 over the target block at 0x0596de40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c4c1f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c4c1f0

// auto_copy_block_01c4cab0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c4cab0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596de80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02600, source_block, CopiedBlock);
RT_GLOBAL(0x0596de80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02600 over the target block at 0x0596de80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c4cab0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c4cab0

// auto_copy_block_01c4cc50: misc_copy_block_58b3240 with other addresses.
namespace twin_01c4cc50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596dec0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02630, source_block, CopiedBlock);
RT_GLOBAL(0x0596dec0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02630 over the target block at 0x0596dec0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c4cc50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c4cc50

// auto_copy_block_01c4d7a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c4d7a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596df00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02660, source_block, CopiedBlock);
RT_GLOBAL(0x0596df00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02660 over the target block at 0x0596df00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c4d7a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c4d7a0

// auto_copy_block_01c4df60: misc_copy_block_58b3240 with other addresses.
namespace twin_01c4df60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596df40.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02690, source_block, CopiedBlock);
RT_GLOBAL(0x0596df40, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02690 over the target block at 0x0596df40.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c4df60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c4df60

// auto_copy_block_01c4e380: misc_copy_block_58b3240 with other addresses.
namespace twin_01c4e380 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596df80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d026c0, source_block, CopiedBlock);
RT_GLOBAL(0x0596df80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d026c0 over the target block at 0x0596df80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c4e380()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c4e380

// auto_copy_block_01c55a30: misc_copy_block_58b3240 with other addresses.
namespace twin_01c55a30 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e000.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02760, source_block, CopiedBlock);
RT_GLOBAL(0x0596e000, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02760 over the target block at 0x0596e000.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c55a30()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c55a30

// auto_copy_block_01c57730: misc_copy_block_58b3240 with other addresses.
namespace twin_01c57730 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e040.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02860, source_block, CopiedBlock);
RT_GLOBAL(0x0596e040, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02860 over the target block at 0x0596e040.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c57730()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c57730

// auto_copy_block_01c57c40: misc_copy_block_58b3240 with other addresses.
namespace twin_01c57c40 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e080.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02890, source_block, CopiedBlock);
RT_GLOBAL(0x0596e080, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02890 over the target block at 0x0596e080.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c57c40()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c57c40

// auto_copy_block_01c59f50: misc_copy_block_58b3240 with other addresses.
namespace twin_01c59f50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e0c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02910, source_block, CopiedBlock);
RT_GLOBAL(0x0596e0c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02910 over the target block at 0x0596e0c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c59f50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c59f50

// auto_copy_block_01c5a5b0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c5a5b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e100.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02940, source_block, CopiedBlock);
RT_GLOBAL(0x0596e100, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02940 over the target block at 0x0596e100.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c5a5b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c5a5b0

// auto_copy_block_01c5b1c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c5b1c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e140.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02970, source_block, CopiedBlock);
RT_GLOBAL(0x0596e140, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02970 over the target block at 0x0596e140.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c5b1c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c5b1c0

// auto_copy_block_01c5c7d0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c5c7d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e220.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02a30, source_block, CopiedBlock);
RT_GLOBAL(0x0596e220, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02a30 over the target block at 0x0596e220.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c5c7d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c5c7d0

// auto_copy_block_01c5ce90: misc_copy_block_58b3240 with other addresses.
namespace twin_01c5ce90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e260.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d02a60, source_block, CopiedBlock);
RT_GLOBAL(0x0596e260, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d02a60 over the target block at 0x0596e260.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c5ce90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c5ce90

// auto_copy_block_01c62dd0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c62dd0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e340.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d030a0, source_block, CopiedBlock);
RT_GLOBAL(0x0596e340, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d030a0 over the target block at 0x0596e340.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c62dd0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c62dd0

// auto_copy_block_01c6fe00: misc_copy_block_58b3240 with other addresses.
namespace twin_01c6fe00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e480.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d03460, source_block, CopiedBlock);
RT_GLOBAL(0x0596e480, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d03460 over the target block at 0x0596e480.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c6fe00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c6fe00

// auto_copy_block_01c81d50: misc_copy_block_58b3240 with other addresses.
namespace twin_01c81d50 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e760.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d036b0, source_block, CopiedBlock);
RT_GLOBAL(0x0596e760, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d036b0 over the target block at 0x0596e760.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c81d50()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c81d50

// auto_copy_block_01c858a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c858a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e7f0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d03910, source_block, CopiedBlock);
RT_GLOBAL(0x0596e7f0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d03910 over the target block at 0x0596e7f0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c858a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c858a0

// auto_copy_block_01c86150: misc_copy_block_58b3240 with other addresses.
namespace twin_01c86150 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e830.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d03940, source_block, CopiedBlock);
RT_GLOBAL(0x0596e830, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d03940 over the target block at 0x0596e830.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c86150()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c86150

// auto_copy_block_01c88e90: misc_copy_block_58b3240 with other addresses.
namespace twin_01c88e90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e870.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d03970, source_block, CopiedBlock);
RT_GLOBAL(0x0596e870, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d03970 over the target block at 0x0596e870.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c88e90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c88e90

// auto_copy_block_01c8b7a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c8b7a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e8c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d039a0, source_block, CopiedBlock);
RT_GLOBAL(0x0596e8c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d039a0 over the target block at 0x0596e8c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c8b7a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c8b7a0

// auto_copy_block_01c8cbc0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c8cbc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e900.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d039f0, source_block, CopiedBlock);
RT_GLOBAL(0x0596e900, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d039f0 over the target block at 0x0596e900.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c8cbc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c8cbc0

// auto_copy_block_01c8d630: misc_copy_block_58b3240 with other addresses.
namespace twin_01c8d630 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e940.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d03a90, source_block, CopiedBlock);
RT_GLOBAL(0x0596e940, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d03a90 over the target block at 0x0596e940.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c8d630()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c8d630

// auto_copy_block_01c8d8b0: misc_copy_block_58b3240 with other addresses.
namespace twin_01c8d8b0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596e980.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d03ae0, source_block, CopiedBlock);
RT_GLOBAL(0x0596e980, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d03ae0 over the target block at 0x0596e980.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01c8d8b0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01c8d8b0

// auto_copy_block_01cb71f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01cb71f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596f730.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d053f0, source_block, CopiedBlock);
RT_GLOBAL(0x0596f730, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d053f0 over the target block at 0x0596f730.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01cb71f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01cb71f0

// auto_copy_block_01cd9230: misc_copy_block_58b3240 with other addresses.
namespace twin_01cd9230 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596fc00.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d06020, source_block, CopiedBlock);
RT_GLOBAL(0x0596fc00, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d06020 over the target block at 0x0596fc00.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01cd9230()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01cd9230

// auto_copy_block_01cda4a0: misc_copy_block_58b3240 with other addresses.
namespace twin_01cda4a0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596fce0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d06110, source_block, CopiedBlock);
RT_GLOBAL(0x0596fce0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d06110 over the target block at 0x0596fce0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01cda4a0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01cda4a0

// auto_copy_block_01cde7c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01cde7c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596fd70.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d061a0, source_block, CopiedBlock);
RT_GLOBAL(0x0596fd70, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d061a0 over the target block at 0x0596fd70.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01cde7c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01cde7c0

// auto_copy_block_01ce4650: misc_copy_block_58b3240 with other addresses.
namespace twin_01ce4650 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0596fe60.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d06200, source_block, CopiedBlock);
RT_GLOBAL(0x0596fe60, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d06200 over the target block at 0x0596fe60.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01ce4650()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01ce4650

// auto_copy_block_01d0c1c0: misc_copy_block_58b3240 with other addresses.
namespace twin_01d0c1c0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05971780.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d068c0, source_block, CopiedBlock);
RT_GLOBAL(0x05971780, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d068c0 over the target block at 0x05971780.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01d0c1c0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01d0c1c0

// auto_copy_block_01d46ac0: misc_copy_block_58b3240 with other addresses.
namespace twin_01d46ac0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059730b0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d070a0, source_block, CopiedBlock);
RT_GLOBAL(0x059730b0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d070a0 over the target block at 0x059730b0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01d46ac0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01d46ac0

// auto_copy_block_01d52740: misc_copy_block_58b3240 with other addresses.
namespace twin_01d52740 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05973790.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d07250, source_block, CopiedBlock);
RT_GLOBAL(0x05973790, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d07250 over the target block at 0x05973790.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01d52740()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01d52740

// auto_copy_block_01d59bf0: misc_copy_block_58b3240 with other addresses.
namespace twin_01d59bf0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05973d80.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d073a0, source_block, CopiedBlock);
RT_GLOBAL(0x05973d80, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d073a0 over the target block at 0x05973d80.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01d59bf0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01d59bf0

// auto_copy_block_01d59d90: misc_copy_block_58b3240 with other addresses.
namespace twin_01d59d90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05973dc0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d073d0, source_block, CopiedBlock);
RT_GLOBAL(0x05973dc0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d073d0 over the target block at 0x05973dc0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01d59d90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01d59d90

// auto_copy_block_01d61f10: misc_copy_block_58b3240 with other addresses.
namespace twin_01d61f10 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05974280.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d07490, source_block, CopiedBlock);
RT_GLOBAL(0x05974280, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d07490 over the target block at 0x05974280.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01d61f10()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01d61f10

// auto_copy_block_01d75c90: misc_copy_block_58b3240 with other addresses.
namespace twin_01d75c90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05974f20.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d07740, source_block, CopiedBlock);
RT_GLOBAL(0x05974f20, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d07740 over the target block at 0x05974f20.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01d75c90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01d75c90

// auto_copy_block_01d76ee0: misc_copy_block_58b3240 with other addresses.
namespace twin_01d76ee0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05974fb0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d077a0, source_block, CopiedBlock);
RT_GLOBAL(0x05974fb0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d077a0 over the target block at 0x05974fb0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01d76ee0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01d76ee0

// auto_copy_block_01dac0e0: misc_copy_block_58b3240 with other addresses.
namespace twin_01dac0e0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059770c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d07e80, source_block, CopiedBlock);
RT_GLOBAL(0x059770c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d07e80 over the target block at 0x059770c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01dac0e0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01dac0e0

// auto_copy_block_01dca540: misc_copy_block_58b3240 with other addresses.
namespace twin_01dca540 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059782c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d08190, source_block, CopiedBlock);
RT_GLOBAL(0x059782c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d08190 over the target block at 0x059782c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01dca540()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01dca540

// auto_copy_block_01dcf8d0: misc_copy_block_58b3240 with other addresses.
namespace twin_01dcf8d0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05978580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d08280, source_block, CopiedBlock);
RT_GLOBAL(0x05978580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d08280 over the target block at 0x05978580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01dcf8d0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01dcf8d0

// auto_copy_block_01dd0fc0: misc_copy_block_58b3240 with other addresses.
namespace twin_01dd0fc0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x059785c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d082b0, source_block, CopiedBlock);
RT_GLOBAL(0x059785c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d082b0 over the target block at 0x059785c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01dd0fc0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01dd0fc0

// auto_copy_block_01dd1160: misc_copy_block_58b3240 with other addresses.
namespace twin_01dd1160 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05978600.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d082e0, source_block, CopiedBlock);
RT_GLOBAL(0x05978600, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d082e0 over the target block at 0x05978600.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01dd1160()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01dd1160

// auto_copy_block_01deca60: misc_copy_block_58b3240 with other addresses.
namespace twin_01deca60 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05979740.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d08570, source_block, CopiedBlock);
RT_GLOBAL(0x05979740, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d08570 over the target block at 0x05979740.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01deca60()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01deca60

// auto_copy_block_01df4830: misc_copy_block_58b3240 with other addresses.
namespace twin_01df4830 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05979ad0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d08b90, source_block, CopiedBlock);
RT_GLOBAL(0x05979ad0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d08b90 over the target block at 0x05979ad0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01df4830()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01df4830

// auto_copy_block_01e092f0: misc_copy_block_58b3240 with other addresses.
namespace twin_01e092f0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x05979d90.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d09df0, source_block, CopiedBlock);
RT_GLOBAL(0x05979d90, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d09df0 over the target block at 0x05979d90.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e092f0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e092f0

// auto_copy_block_01e0d200: misc_copy_block_58b3240 with other addresses.
namespace twin_01e0d200 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597a020.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d09e50, source_block, CopiedBlock);
RT_GLOBAL(0x0597a020, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d09e50 over the target block at 0x0597a020.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e0d200()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e0d200

// auto_copy_block_01e66420: misc_copy_block_58b3240 with other addresses.
namespace twin_01e66420 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597cdd0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0c5f0, source_block, CopiedBlock);
RT_GLOBAL(0x0597cdd0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0c5f0 over the target block at 0x0597cdd0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e66420()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e66420

// auto_copy_block_01e6ca20: misc_copy_block_58b3240 with other addresses.
namespace twin_01e6ca20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d330.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0c850, source_block, CopiedBlock);
RT_GLOBAL(0x0597d330, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0c850 over the target block at 0x0597d330.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e6ca20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e6ca20

// auto_copy_block_01e74f00: misc_copy_block_58b3240 with other addresses.
namespace twin_01e74f00 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d440.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0c9c0, source_block, CopiedBlock);
RT_GLOBAL(0x0597d440, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0c9c0 over the target block at 0x0597d440.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e74f00()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e74f00

// auto_copy_block_01e77340: misc_copy_block_58b3240 with other addresses.
namespace twin_01e77340 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d480.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0ca70, source_block, CopiedBlock);
RT_GLOBAL(0x0597d480, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0ca70 over the target block at 0x0597d480.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e77340()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e77340

// auto_copy_block_01e78f20: misc_copy_block_58b3240 with other addresses.
namespace twin_01e78f20 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d4c0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0cc90, source_block, CopiedBlock);
RT_GLOBAL(0x0597d4c0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0cc90 over the target block at 0x0597d4c0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e78f20()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e78f20

// auto_copy_block_01e79100: misc_copy_block_58b3240 with other addresses.
namespace twin_01e79100 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d500.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0cd40, source_block, CopiedBlock);
RT_GLOBAL(0x0597d500, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0cd40 over the target block at 0x0597d500.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e79100()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e79100

// auto_copy_block_01e79420: misc_copy_block_58b3240 with other addresses.
namespace twin_01e79420 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d540.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0cda0, source_block, CopiedBlock);
RT_GLOBAL(0x0597d540, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0cda0 over the target block at 0x0597d540.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e79420()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e79420

// auto_copy_block_01e79d90: misc_copy_block_58b3240 with other addresses.
namespace twin_01e79d90 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d580.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0cdd0, source_block, CopiedBlock);
RT_GLOBAL(0x0597d580, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0cdd0 over the target block at 0x0597d580.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e79d90()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e79d90

// auto_copy_block_01e80ee0: misc_copy_block_58b3240 with other addresses.
namespace twin_01e80ee0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d610.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d170, source_block, CopiedBlock);
RT_GLOBAL(0x0597d610, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d170 over the target block at 0x0597d610.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e80ee0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e80ee0

// auto_copy_block_01e81080: misc_copy_block_58b3240 with other addresses.
namespace twin_01e81080 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d650.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d1a0, source_block, CopiedBlock);
RT_GLOBAL(0x0597d650, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d1a0 over the target block at 0x0597d650.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e81080()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e81080

// auto_copy_block_01e84290: misc_copy_block_58b3240 with other addresses.
namespace twin_01e84290 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d6d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d300, source_block, CopiedBlock);
RT_GLOBAL(0x0597d6d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d300 over the target block at 0x0597d6d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e84290()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e84290

// auto_copy_block_01e84eb0: misc_copy_block_58b3240 with other addresses.
namespace twin_01e84eb0 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d710.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d330, source_block, CopiedBlock);
RT_GLOBAL(0x0597d710, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d330 over the target block at 0x0597d710.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e84eb0()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e84eb0

// auto_copy_block_01e85630: misc_copy_block_58b3240 with other addresses.
namespace twin_01e85630 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d7d0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d3c0, source_block, CopiedBlock);
RT_GLOBAL(0x0597d7d0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d3c0 over the target block at 0x0597d7d0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e85630()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e85630

// auto_copy_block_01e85930: misc_copy_block_58b3240 with other addresses.
namespace twin_01e85930 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d810.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d3f0, source_block, CopiedBlock);
RT_GLOBAL(0x0597d810, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d3f0 over the target block at 0x0597d810.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e85930()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e85930

// auto_copy_block_01e86850: misc_copy_block_58b3240 with other addresses.
namespace twin_01e86850 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d8a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d480, source_block, CopiedBlock);
RT_GLOBAL(0x0597d8a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d480 over the target block at 0x0597d8a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e86850()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e86850

// auto_copy_block_01e89010: misc_copy_block_58b3240 with other addresses.
namespace twin_01e89010 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d8e0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d530, source_block, CopiedBlock);
RT_GLOBAL(0x0597d8e0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d530 over the target block at 0x0597d8e0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e89010()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e89010

// auto_copy_block_01e89e80: misc_copy_block_58b3240 with other addresses.
namespace twin_01e89e80 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d920.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d560, source_block, CopiedBlock);
RT_GLOBAL(0x0597d920, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d560 over the target block at 0x0597d920.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e89e80()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e89e80

// auto_copy_block_01e8a020: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8a020 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d960.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d590, source_block, CopiedBlock);
RT_GLOBAL(0x0597d960, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d590 over the target block at 0x0597d960.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8a020()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8a020

// auto_copy_block_01e8a360: misc_copy_block_58b3240 with other addresses.
namespace twin_01e8a360 {

// Misc: copy a 48-byte constant block into the fixed global block at 0x0597d9a0.


namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04d0d5c0, source_block, CopiedBlock);
RT_GLOBAL(0x0597d9a0, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04d0d5c0 over the target block at 0x0597d9a0.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_auto_copy_block_01e8a360()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}

}  // namespace twin_01e8a360
