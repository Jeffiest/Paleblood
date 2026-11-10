// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_set_vtable_after_call, in game/misc/set_vtable_after_call.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "runtime/original.h"

// auto_set_vtable_after_call_0163f8c0: misc_set_vtable_after_call with other addresses.
namespace twin_0163f8c0 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x05718c70, static_vtable_block, uint8_t);
RT_ORIGINAL(0x01640910, fn_01640910, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_0163f8c0(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_01640910(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_0163f8c0

// auto_set_vtable_after_call_01644ac0: misc_set_vtable_after_call with other addresses.
namespace twin_01644ac0 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x05718e70, static_vtable_block, uint8_t);
RT_ORIGINAL(0x01640910, fn_01640910, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_01644ac0(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_01640910(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_01644ac0

// auto_set_vtable_after_call_01645c60: misc_set_vtable_after_call with other addresses.
namespace twin_01645c60 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x05718ef0, static_vtable_block, uint8_t);
RT_ORIGINAL(0x01640910, fn_01640910, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_01645c60(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_01640910(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_01645c60

// auto_set_vtable_after_call_016471a0: misc_set_vtable_after_call with other addresses.
namespace twin_016471a0 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x05718f70, static_vtable_block, uint8_t);
RT_ORIGINAL(0x01640910, fn_01640910, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_016471a0(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_01640910(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_016471a0

// auto_set_vtable_after_call_017fcf10: misc_set_vtable_after_call with other addresses.
namespace twin_017fcf10 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x05768f40, static_vtable_block, uint8_t);
RT_ORIGINAL(0x017ea230, fn_017ea230, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_017fcf10(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_017ea230(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_017fcf10

// auto_set_vtable_after_call_0181fb10: misc_set_vtable_after_call with other addresses.
namespace twin_0181fb10 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x0576ac10, static_vtable_block, uint8_t);
RT_ORIGINAL(0x017ea230, fn_017ea230, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_0181fb10(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_017ea230(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_0181fb10

// auto_set_vtable_after_call_01871820: misc_set_vtable_after_call with other addresses.
namespace twin_01871820 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x05722270, static_vtable_block, uint8_t);
RT_ORIGINAL(0x01884e90, fn_01884e90, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_01871820(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_01884e90(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_01871820

// auto_set_vtable_after_call_018a3660: misc_set_vtable_after_call with other addresses.
namespace twin_018a3660 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x057229f0, static_vtable_block, uint8_t);
RT_ORIGINAL(0x01884e90, fn_01884e90, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_018a3660(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_01884e90(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_018a3660

// auto_set_vtable_after_call_023c0e10: misc_set_vtable_after_call with other addresses.
namespace twin_023c0e10 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x05758970, static_vtable_block, uint8_t);
RT_ORIGINAL(0x013e9fc0, fn_013e9fc0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_023c0e10(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_013e9fc0(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_023c0e10

// auto_set_vtable_after_call_023d1fe0: misc_set_vtable_after_call with other addresses.
namespace twin_023d1fe0 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x057af7f0, static_vtable_block, uint8_t);
RT_ORIGINAL(0x0138caf0, fn_0138caf0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_023d1fe0(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_0138caf0(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_023d1fe0

// auto_set_vtable_after_call_023d3950: misc_set_vtable_after_call with other addresses.
namespace twin_023d3950 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x057af870, static_vtable_block, uint8_t);
RT_ORIGINAL(0x0138caf0, fn_0138caf0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_023d3950(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_0138caf0(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_023d3950

// auto_set_vtable_after_call_023da750: misc_set_vtable_after_call with other addresses.
namespace twin_023da750 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x057afbb0, static_vtable_block, uint8_t);
RT_ORIGINAL(0x0138caf0, fn_0138caf0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_023da750(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_0138caf0(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_023da750

// auto_set_vtable_after_call_023da980: misc_set_vtable_after_call with other addresses.
namespace twin_023da980 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x057afbe0, static_vtable_block, uint8_t);
RT_ORIGINAL(0x0138caf0, fn_0138caf0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_023da980(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_0138caf0(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_023da980

// auto_set_vtable_after_call_023dcc40: misc_set_vtable_after_call with other addresses.
namespace twin_023dcc40 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x057afc60, static_vtable_block, uint8_t);
RT_ORIGINAL(0x013914a0, fn_013914a0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_023dcc40(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_013914a0(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_023dcc40

// auto_set_vtable_after_call_0245ca10: misc_set_vtable_after_call with other addresses.
namespace twin_0245ca10 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x057b24b0, static_vtable_block, uint8_t);
RT_ORIGINAL(0x0138caf0, fn_0138caf0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_0245ca10(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_0138caf0(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_0245ca10

// auto_set_vtable_after_call_02555750: misc_set_vtable_after_call with other addresses.
namespace twin_02555750 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x0575e7c0, static_vtable_block, uint8_t);
RT_ORIGINAL(0x0254b1a0, fn_0254b1a0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_02555750(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_0254b1a0(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_02555750

// auto_set_vtable_after_call_025cef70: misc_set_vtable_after_call with other addresses.
namespace twin_025cef70 {

// Misc: calls a routine on the object, then gives the object its static vtable pointer.


namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x057b6f60, static_vtable_block, uint8_t);
RT_ORIGINAL(0x025c60f0, fn_025c60f0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object and the three further arguments unchanged, and the vtable pointer is
 * written after it returns, so the stored value is the last write to the object's first word.
 */
extern "C" void bb_auto_set_vtable_after_call_025cef70(VtableHeldObject *object, uint64_t second, uint64_t third,
                                              uint64_t fourth)
{
    fn_025c60f0(object, second, third, fourth);
    object->vtable = static_vtable_block.address();
}

}  // namespace twin_025cef70
