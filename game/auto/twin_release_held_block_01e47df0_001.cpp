// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_release_held_block, in game/misc/release_held_block.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/held_block_owner.h"
#include "runtime/original.h"

// auto_release_held_block_017a85e0: misc_release_held_block with other addresses.
namespace twin_017a85e0 {

// Misc: releases the block an owner holds, when one is held, and clears the owner's pointer.


namespace {

using misc::HeldBlockOwner;

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 *
 */
extern "C" void bb_auto_release_held_block_017a85e0(HeldBlockOwner *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace twin_017a85e0

// auto_release_held_block_017a8c10: misc_release_held_block with other addresses.
namespace twin_017a8c10 {

// Misc: releases the block an owner holds, when one is held, and clears the owner's pointer.


namespace {

using misc::HeldBlockOwner;

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 *
 */
extern "C" void bb_auto_release_held_block_017a8c10(HeldBlockOwner *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace twin_017a8c10

// auto_release_held_block_01a02700: misc_release_held_block with other addresses.
namespace twin_01a02700 {

// Misc: releases the block an owner holds, when one is held, and clears the owner's pointer.


namespace {

using misc::HeldBlockOwner;

RT_ORIGINAL(0x01401720, fn_01401720, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 *
 */
extern "C" void bb_auto_release_held_block_01a02700(HeldBlockOwner *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01401720(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace twin_01a02700

// auto_release_held_block_02450210: misc_release_held_block with other addresses.
namespace twin_02450210 {

// Misc: releases the block an owner holds, when one is held, and clears the owner's pointer.


namespace {

using misc::HeldBlockOwner;

RT_ORIGINAL(0x02450560, fn_02450560, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 *
 */
extern "C" void bb_auto_release_held_block_02450210(HeldBlockOwner *owner)
{
    if (owner->held_block == nullptr) return;
    fn_02450560(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace twin_02450210

// auto_release_held_block_02c51100: misc_release_held_block with other addresses.
namespace twin_02c51100 {

// Misc: releases the block an owner holds, when one is held, and clears the owner's pointer.


namespace {

using misc::HeldBlockOwner;

RT_ORIGINAL(0x0247c460, fn_0247c460, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 *
 */
extern "C" void bb_auto_release_held_block_02c51100(HeldBlockOwner *owner)
{
    if (owner->held_block == nullptr) return;
    fn_0247c460(owner->held_block);
    owner->held_block = nullptr;
}

}  // namespace twin_02c51100
