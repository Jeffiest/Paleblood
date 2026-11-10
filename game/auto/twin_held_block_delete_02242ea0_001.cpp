// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_held_block_delete_02242ea0, in game/misc/held_block_delete_02242ea0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/held_block_owner.h"
#include "runtime/original.h"

// auto_held_block_delete_0179d820: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_0179d820 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057202b0, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_0179d820(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_0179d820

// auto_held_block_delete_017d96b0: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_017d96b0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x05720d80, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_017d96b0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_017d96b0

// auto_held_block_delete_02540f70: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02540f70 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575e1c0, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02540f70(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02540f70

// auto_held_block_delete_02542f70: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02542f70 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575e270, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02542f70(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02542f70

// auto_held_block_delete_02545420: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02545420 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b56d0, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02545420(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02545420

// auto_held_block_delete_02545990: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02545990 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b56d0, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02545990(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02545990

// auto_held_block_delete_0254a030: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_0254a030 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5970, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_0254a030(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_0254a030

// auto_held_block_delete_0254a7a0: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_0254a7a0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5970, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_0254a7a0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_0254a7a0

// auto_held_block_delete_02551e60: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02551e60 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5cc0, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02551e60(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02551e60

// auto_held_block_delete_025523d0: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_025523d0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5cc0, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_025523d0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_025523d0

// auto_held_block_delete_025545a0: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_025545a0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5e00, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_025545a0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_025545a0

// auto_held_block_delete_02554e30: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02554e30 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057b5e00, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02554e30(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02554e30

// auto_held_block_delete_02557ae0: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02557ae0 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575e830, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02557ae0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02557ae0

// auto_held_block_delete_02557b70: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02557b70 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575e850, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02557b70(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02557b70

// auto_held_block_delete_02588060: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02588060 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0575f4f0, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02588060(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02588060

// auto_held_block_delete_02705230: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02705230 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x05762470, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02705230(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02705230

// auto_held_block_delete_02717c90: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02717c90 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x05764b60, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02717c90(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02717c90

// auto_held_block_delete_02783e30: misc_held_block_delete_02242ea0 with other addresses.
namespace twin_02783e30 {

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x057653a0, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_held_block_delete_02783e30(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}

}  // namespace twin_02783e30
