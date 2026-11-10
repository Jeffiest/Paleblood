// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_invoke_callback, in game/misc/invoke_callback.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/callback_object.h"

// auto_invoke_callback_0257f500: misc_invoke_callback with other addresses.
namespace twin_0257f500 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_0257f500(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_0257f500

// auto_invoke_callback_02587f60: misc_invoke_callback with other addresses.
namespace twin_02587f60 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02587f60(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02587f60

// auto_invoke_callback_025df4e0: misc_invoke_callback with other addresses.
namespace twin_025df4e0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_025df4e0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_025df4e0

// auto_invoke_callback_025e2180: misc_invoke_callback with other addresses.
namespace twin_025e2180 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_025e2180(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_025e2180

// auto_invoke_callback_025e6f90: misc_invoke_callback with other addresses.
namespace twin_025e6f90 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_025e6f90(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_025e6f90

// auto_invoke_callback_025eaea0: misc_invoke_callback with other addresses.
namespace twin_025eaea0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_025eaea0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_025eaea0

// auto_invoke_callback_025effa0: misc_invoke_callback with other addresses.
namespace twin_025effa0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_025effa0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_025effa0

// auto_invoke_callback_025f3850: misc_invoke_callback with other addresses.
namespace twin_025f3850 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_025f3850(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_025f3850

// auto_invoke_callback_025f7570: misc_invoke_callback with other addresses.
namespace twin_025f7570 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_025f7570(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_025f7570

// auto_invoke_callback_025fb120: misc_invoke_callback with other addresses.
namespace twin_025fb120 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_025fb120(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_025fb120

// auto_invoke_callback_025ff630: misc_invoke_callback with other addresses.
namespace twin_025ff630 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_025ff630(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_025ff630

// auto_invoke_callback_02605160: misc_invoke_callback with other addresses.
namespace twin_02605160 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02605160(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02605160

// auto_invoke_callback_0260f900: misc_invoke_callback with other addresses.
namespace twin_0260f900 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_0260f900(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_0260f900

// auto_invoke_callback_0261fc90: misc_invoke_callback with other addresses.
namespace twin_0261fc90 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_0261fc90(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_0261fc90

// auto_invoke_callback_026265a0: misc_invoke_callback with other addresses.
namespace twin_026265a0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_026265a0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_026265a0

// auto_invoke_callback_0262f7d0: misc_invoke_callback with other addresses.
namespace twin_0262f7d0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_0262f7d0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_0262f7d0

// auto_invoke_callback_02633c90: misc_invoke_callback with other addresses.
namespace twin_02633c90 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02633c90(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02633c90

// auto_invoke_callback_02637b30: misc_invoke_callback with other addresses.
namespace twin_02637b30 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02637b30(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02637b30

// auto_invoke_callback_0263b5f0: misc_invoke_callback with other addresses.
namespace twin_0263b5f0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_0263b5f0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_0263b5f0

// auto_invoke_callback_026435d0: misc_invoke_callback with other addresses.
namespace twin_026435d0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_026435d0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_026435d0

// auto_invoke_callback_0266b010: misc_invoke_callback with other addresses.
namespace twin_0266b010 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_0266b010(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_0266b010

// auto_invoke_callback_026790e0: misc_invoke_callback with other addresses.
namespace twin_026790e0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_026790e0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_026790e0

// auto_invoke_callback_0267c9d0: misc_invoke_callback with other addresses.
namespace twin_0267c9d0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_0267c9d0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_0267c9d0

// auto_invoke_callback_02682120: misc_invoke_callback with other addresses.
namespace twin_02682120 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02682120(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02682120

// auto_invoke_callback_02682180: misc_invoke_callback with other addresses.
namespace twin_02682180 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02682180(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02682180

// auto_invoke_callback_026bb210: misc_invoke_callback with other addresses.
namespace twin_026bb210 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_026bb210(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_026bb210

// auto_invoke_callback_026bb4d0: misc_invoke_callback with other addresses.
namespace twin_026bb4d0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_026bb4d0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_026bb4d0

// auto_invoke_callback_026db750: misc_invoke_callback with other addresses.
namespace twin_026db750 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_026db750(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_026db750

// auto_invoke_callback_026e3020: misc_invoke_callback with other addresses.
namespace twin_026e3020 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_026e3020(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_026e3020

// auto_invoke_callback_02705120: misc_invoke_callback with other addresses.
namespace twin_02705120 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02705120(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02705120

// auto_invoke_callback_02d07160: misc_invoke_callback with other addresses.
namespace twin_02d07160 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d07160(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d07160

// auto_invoke_callback_02d160a0: misc_invoke_callback with other addresses.
namespace twin_02d160a0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d160a0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d160a0

// auto_invoke_callback_02d361d0: misc_invoke_callback with other addresses.
namespace twin_02d361d0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d361d0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d361d0

// auto_invoke_callback_02d38be0: misc_invoke_callback with other addresses.
namespace twin_02d38be0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d38be0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d38be0

// auto_invoke_callback_02d3a9b0: misc_invoke_callback with other addresses.
namespace twin_02d3a9b0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d3a9b0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d3a9b0

// auto_invoke_callback_02d3c4b0: misc_invoke_callback with other addresses.
namespace twin_02d3c4b0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d3c4b0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d3c4b0

// auto_invoke_callback_02d3dfc0: misc_invoke_callback with other addresses.
namespace twin_02d3dfc0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d3dfc0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d3dfc0

// auto_invoke_callback_02d43ae0: misc_invoke_callback with other addresses.
namespace twin_02d43ae0 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d43ae0(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d43ae0

// auto_invoke_callback_02d48070: misc_invoke_callback with other addresses.
namespace twin_02d48070 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d48070(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d48070

// auto_invoke_callback_02d4a930: misc_invoke_callback with other addresses.
namespace twin_02d4a930 {

// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_auto_invoke_callback_02d4a930(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}

}  // namespace twin_02d4a930
