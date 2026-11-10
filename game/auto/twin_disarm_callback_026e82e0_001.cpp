// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_disarm_callback, in game/misc/disarm_callback.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/callback_object.h"
#include "runtime/original.h"

// auto_disarm_callback_0257f4d0: misc_disarm_callback with other addresses.
namespace twin_0257f4d0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0257f4d0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0257f4d0

// auto_disarm_callback_02587f30: misc_disarm_callback with other addresses.
namespace twin_02587f30 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_02587f30(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_02587f30

// auto_disarm_callback_02587f90: misc_disarm_callback with other addresses.
namespace twin_02587f90 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_02587f90(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_02587f90

// auto_disarm_callback_025df450: misc_disarm_callback with other addresses.
namespace twin_025df450 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025df450(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025df450

// auto_disarm_callback_025df4b0: misc_disarm_callback with other addresses.
namespace twin_025df4b0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025df4b0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025df4b0

// auto_disarm_callback_025e2150: misc_disarm_callback with other addresses.
namespace twin_025e2150 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025e2150(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025e2150

// auto_disarm_callback_025e6f60: misc_disarm_callback with other addresses.
namespace twin_025e6f60 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025e6f60(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025e6f60

// auto_disarm_callback_025eae70: misc_disarm_callback with other addresses.
namespace twin_025eae70 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025eae70(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025eae70

// auto_disarm_callback_025eff70: misc_disarm_callback with other addresses.
namespace twin_025eff70 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025eff70(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025eff70

// auto_disarm_callback_025f3820: misc_disarm_callback with other addresses.
namespace twin_025f3820 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025f3820(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025f3820

// auto_disarm_callback_025f7540: misc_disarm_callback with other addresses.
namespace twin_025f7540 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025f7540(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025f7540

// auto_disarm_callback_025fb0f0: misc_disarm_callback with other addresses.
namespace twin_025fb0f0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025fb0f0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025fb0f0

// auto_disarm_callback_025ff600: misc_disarm_callback with other addresses.
namespace twin_025ff600 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_025ff600(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_025ff600

// auto_disarm_callback_02605130: misc_disarm_callback with other addresses.
namespace twin_02605130 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_02605130(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_02605130

// auto_disarm_callback_0260f8d0: misc_disarm_callback with other addresses.
namespace twin_0260f8d0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0260f8d0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0260f8d0

// auto_disarm_callback_0261ca90: misc_disarm_callback with other addresses.
namespace twin_0261ca90 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0261ca90(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0261ca90

// auto_disarm_callback_0261fc60: misc_disarm_callback with other addresses.
namespace twin_0261fc60 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0261fc60(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0261fc60

// auto_disarm_callback_02626570: misc_disarm_callback with other addresses.
namespace twin_02626570 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_02626570(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_02626570

// auto_disarm_callback_0262f7a0: misc_disarm_callback with other addresses.
namespace twin_0262f7a0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0262f7a0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0262f7a0

// auto_disarm_callback_02633c60: misc_disarm_callback with other addresses.
namespace twin_02633c60 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_02633c60(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_02633c60

// auto_disarm_callback_02637b00: misc_disarm_callback with other addresses.
namespace twin_02637b00 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_02637b00(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_02637b00

// auto_disarm_callback_0263b5c0: misc_disarm_callback with other addresses.
namespace twin_0263b5c0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0263b5c0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0263b5c0

// auto_disarm_callback_026435a0: misc_disarm_callback with other addresses.
namespace twin_026435a0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026435a0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026435a0

// auto_disarm_callback_0266afe0: misc_disarm_callback with other addresses.
namespace twin_0266afe0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0266afe0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0266afe0

// auto_disarm_callback_026790b0: misc_disarm_callback with other addresses.
namespace twin_026790b0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026790b0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026790b0

// auto_disarm_callback_0267c9a0: misc_disarm_callback with other addresses.
namespace twin_0267c9a0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0267c9a0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0267c9a0

// auto_disarm_callback_026820f0: misc_disarm_callback with other addresses.
namespace twin_026820f0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026820f0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026820f0

// auto_disarm_callback_02682150: misc_disarm_callback with other addresses.
namespace twin_02682150 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_02682150(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_02682150

// auto_disarm_callback_026babf0: misc_disarm_callback with other addresses.
namespace twin_026babf0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026babf0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026babf0

// auto_disarm_callback_026bb1e0: misc_disarm_callback with other addresses.
namespace twin_026bb1e0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026bb1e0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026bb1e0

// auto_disarm_callback_026bb4a0: misc_disarm_callback with other addresses.
namespace twin_026bb4a0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026bb4a0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026bb4a0

// auto_disarm_callback_026cdfc0: misc_disarm_callback with other addresses.
namespace twin_026cdfc0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026cdfc0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026cdfc0

// auto_disarm_callback_026d76c0: misc_disarm_callback with other addresses.
namespace twin_026d76c0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026d76c0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026d76c0

// auto_disarm_callback_026db720: misc_disarm_callback with other addresses.
namespace twin_026db720 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026db720(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026db720

// auto_disarm_callback_026e2ff0: misc_disarm_callback with other addresses.
namespace twin_026e2ff0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026e2ff0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026e2ff0

// auto_disarm_callback_026e3050: misc_disarm_callback with other addresses.
namespace twin_026e3050 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026e3050(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026e3050

// auto_disarm_callback_026f7ed0: misc_disarm_callback with other addresses.
namespace twin_026f7ed0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_026f7ed0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_026f7ed0

// auto_disarm_callback_027050f0: misc_disarm_callback with other addresses.
namespace twin_027050f0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_027050f0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_027050f0

// auto_disarm_callback_0271e1d0: misc_disarm_callback with other addresses.
namespace twin_0271e1d0 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0271e1d0(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0271e1d0

// auto_disarm_callback_0276b080: misc_disarm_callback with other addresses.
namespace twin_0276b080 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0276b080(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0276b080

// auto_disarm_callback_0276fc30: misc_disarm_callback with other addresses.
namespace twin_0276fc30 {

// Misc: disarms a callback object and points it at the callback vtable.


namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_auto_disarm_callback_0276fc30(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}

}  // namespace twin_0276fc30
