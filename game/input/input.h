// SPDX-License-Identifier: GPL-2.0-or-later
// Input: the pad vibration and the mouse input object, shared by the input replacements.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace input {

/**
 * The motor speeds scePadSetVibration reads.
 *
 * The large motor's byte comes first, then the small motor's.
 */
struct PadVibrationParam {
    uint8_t large_motor; /**< Speed of the large motor, 0 to 255. */
    uint8_t small_motor; /**< Speed of the small motor, 0 to 255. */
};
static_assert(sizeof(PadVibrationParam) == 2);

/**
 * A pad output object that sends motor speeds to one scePad handle.
 *
 * The enable byte is read as raw bytes, so any nonzero value counts as enabled.
 */
struct PadVibrationOwner {
    uint8_t unknown_0x0000[0x8];
    int32_t handle;            /**< The scePad handle the motors are set on. */
    uint8_t vibration_enabled; /**< Zero: nothing is sent to the pad. */
};
static_assert(offsetof(PadVibrationOwner, handle) == 0x8);
static_assert(offsetof(PadVibrationOwner, vibration_enabled) == 0xc);

/**
 * Sets a pad's motor speeds through libScePad.
 *
 * Returns 0 on success.
 */
RT_ORIGINAL(0x02fbf528, pad_set_vibration, int32_t(int32_t handle, const PadVibrationParam *speeds));

/**
 * Loads a system module through libSceSysmodule.
 *
 * Returns 0 on success.
 */
RT_ORIGINAL(0x02fbf448, sysmodule_load_module, int32_t(uint32_t module_id));

/**
 * Initializes the mouse library through libSceMouse.
 *
 * Returns 0 on success.
 */
RT_ORIGINAL(0x02fbf458, mouse_init, int32_t());

/**
 * The base class part of a mouse input object.
 *
 * Its own function is not decompiled yet; the constructor passes the owner pointer through.
 */
RT_ORIGINAL(0x02a8d2b0, mouse_base_construct, void(void *self, void *owner));

/**
 * The class's vtable, from which the mouse object's vtable pointer is taken.
 *
 * The pointer is set to the vtable's address point, not its start.
 */
RT_GLOBAL(0x056b7cf0, mouse_vtable, const uint8_t);

struct MouseInput;

/**
 * A virtual method of MouseInput.
 *
 * Its bool result is the low byte of the return value.
 */
using MouseMethod = uint8_t (*)(MouseInput *self);

/**
 * The vtable of MouseInput, starting at its address point.
 *
 * Only the slot the constructor calls is named.
 */
struct MouseVtable {
    uint8_t unknown_0x0000[0x100];
    MouseMethod method_0x100; /**< Called once the mouse library is set up. */
};
static_assert(offsetof(MouseVtable, method_0x100) == 0x100);

/**
 * The number of qwords from 0x140 that the constructor clears.
 *
 * They run up to, not including, the handle slot at 0x168.
 */
constexpr int mouse_cleared_qword_count = 5;

/**
 * A mouse input object, 0x178 bytes, built on a fresh allocation by the input setup.
 *
 * The base class part at the start is initialized by mouse_base_construct.
 */
struct MouseInput {
    const void *vtable;         /**< The class's vtable address point (a MouseVtable). */
    uint8_t unknown_0x0008[0x138];
    uint64_t unknown_0x0140[mouse_cleared_qword_count];
    uint32_t handle_0x0168;     /**< Cleared when setup fails; possibly the open mouse's handle. */
    uint32_t unknown_0x016c;
    uint64_t unknown_0x0170;
};
static_assert(offsetof(MouseInput, vtable) == 0x00);
static_assert(offsetof(MouseInput, unknown_0x0140) == 0x140);
static_assert(offsetof(MouseInput, handle_0x0168) == 0x168);
static_assert(offsetof(MouseInput, unknown_0x016c) == 0x16c);
static_assert(offsetof(MouseInput, unknown_0x0170) == 0x170);
static_assert(sizeof(MouseInput) == 0x178);

}  // namespace input
