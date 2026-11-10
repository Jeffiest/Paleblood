// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_held_block_destroy_02242ee0, in game/misc/held_block_destroy_02242ee0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/held_block_owner.h"
#include "runtime/original.h"

// auto_held_block_destroy_0179d860: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_0179d860 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057202b0, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_0179d860(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_0179d860

// auto_held_block_destroy_017d96f0: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_017d96f0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x05720d80, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_017d96f0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_017d96f0

// auto_held_block_destroy_02540fb0: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02540fb0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575e1c0, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02540fb0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02540fb0

// auto_held_block_destroy_02542fb0: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02542fb0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575e270, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02542fb0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02542fb0

// auto_held_block_destroy_02545460: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02545460 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b56d0, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02545460(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02545460

// auto_held_block_destroy_02545940: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02545940 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b56d0, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02545940(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02545940

// auto_held_block_destroy_0254a070: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_0254a070 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5970, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_0254a070(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_0254a070

// auto_held_block_destroy_0254a750: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_0254a750 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5970, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_0254a750(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_0254a750

// auto_held_block_destroy_02551ea0: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02551ea0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5cc0, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02551ea0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02551ea0

// auto_held_block_destroy_02552380: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02552380 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5cc0, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02552380(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02552380

// auto_held_block_destroy_025545e0: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_025545e0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5e00, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_025545e0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_025545e0

// auto_held_block_destroy_02554de0: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02554de0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5e00, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02554de0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02554de0

// auto_held_block_destroy_02557b20: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02557b20 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575e830, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02557b20(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02557b20

// auto_held_block_destroy_02557bb0: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02557bb0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575e850, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02557bb0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02557bb0

// auto_held_block_destroy_02588010: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02588010 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575f4f0, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02588010(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02588010

// auto_held_block_destroy_027051e0: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_027051e0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x05762470, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_027051e0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_027051e0

// auto_held_block_destroy_02717c40: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02717c40 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x05764b60, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02717c40(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02717c40

// auto_held_block_destroy_02783e70: misc_held_block_destroy_02242ee0 with other addresses.
namespace twin_02783e70 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057653a0, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_auto_held_block_destroy_02783e70(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}

}  // namespace twin_02783e70
