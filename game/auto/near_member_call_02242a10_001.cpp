// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_member_call_02242a10, in game/misc/member_call_02242a10.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>

// auto_member_call_0182de20: misc_member_call_02242a10 with other addresses and constants.
namespace near_0182de20 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_0182de20(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_0182de20

// auto_member_call_0188e550: misc_member_call_02242a10 with other addresses and constants.
namespace near_0188e550 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_0188e550(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_0188e550

// auto_member_call_018942f0: misc_member_call_02242a10 with other addresses and constants.
namespace near_018942f0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_018942f0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_018942f0

// auto_member_call_0196f6a0: misc_member_call_02242a10 with other addresses and constants.
namespace near_0196f6a0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_0196f6a0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_0196f6a0

// auto_member_call_0199da60: misc_member_call_02242a10 with other addresses and constants.
namespace near_0199da60 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_0199da60(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_0199da60

// auto_member_call_019ad0c0: misc_member_call_02242a10 with other addresses and constants.
namespace near_019ad0c0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_019ad0c0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_019ad0c0

// auto_member_call_01b6f260: misc_member_call_02242a10 with other addresses and constants.
namespace near_01b6f260 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01b6f260(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01b6f260

// auto_member_call_01b6f300: misc_member_call_02242a10 with other addresses and constants.
namespace near_01b6f300 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01b6f300(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01b6f300

// auto_member_call_01b9a0a0: misc_member_call_02242a10 with other addresses and constants.
namespace near_01b9a0a0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01b9a0a0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01b9a0a0

// auto_member_call_01bf3900: misc_member_call_02242a10 with other addresses and constants.
namespace near_01bf3900 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01bf3900(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01bf3900

// auto_member_call_01bfc340: misc_member_call_02242a10 with other addresses and constants.
namespace near_01bfc340 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01bfc340(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01bfc340

// auto_member_call_01c1bf70: misc_member_call_02242a10 with other addresses and constants.
namespace near_01c1bf70 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01c1bf70(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01c1bf70

// auto_member_call_01c288f0: misc_member_call_02242a10 with other addresses and constants.
namespace near_01c288f0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01c288f0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01c288f0

// auto_member_call_01c4c2b0: misc_member_call_02242a10 with other addresses and constants.
namespace near_01c4c2b0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01c4c2b0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01c4c2b0

// auto_member_call_01d43200: misc_member_call_02242a10 with other addresses and constants.
namespace near_01d43200 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01d43200(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01d43200

// auto_member_call_01d56290: misc_member_call_02242a10 with other addresses and constants.
namespace near_01d56290 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01d56290(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01d56290

// auto_member_call_01dc8af0: misc_member_call_02242a10 with other addresses and constants.
namespace near_01dc8af0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01dc8af0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01dc8af0

// auto_member_call_01e65d40: misc_member_call_02242a10 with other addresses and constants.
namespace near_01e65d40 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01e65d40(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01e65d40

// auto_member_call_01e65e60: misc_member_call_02242a10 with other addresses and constants.
namespace near_01e65e60 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01e65e60(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01e65e60

// auto_member_call_01e65f80: misc_member_call_02242a10 with other addresses and constants.
namespace near_01e65f80 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01e65f80(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01e65f80

// auto_member_call_01e774c0: misc_member_call_02242a10 with other addresses and constants.
namespace near_01e774c0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01e774c0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01e774c0

// auto_member_call_01e84f70: misc_member_call_02242a10 with other addresses and constants.
namespace near_01e84f70 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01e84f70(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01e84f70

// auto_member_call_01ec1f90: misc_member_call_02242a10 with other addresses and constants.
namespace near_01ec1f90 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_01ec1f90(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_01ec1f90

// auto_member_call_020a44a0: misc_member_call_02242a10 with other addresses and constants.
namespace near_020a44a0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_020a44a0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_020a44a0

// auto_member_call_0214eeb0: misc_member_call_02242a10 with other addresses and constants.
namespace near_0214eeb0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_0214eeb0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_0214eeb0

// auto_member_call_02153320: misc_member_call_02242a10 with other addresses and constants.
namespace near_02153320 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02153320(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02153320

// auto_member_call_02155480: misc_member_call_02242a10 with other addresses and constants.
namespace near_02155480 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02155480(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02155480

// auto_member_call_02156a00: misc_member_call_02242a10 with other addresses and constants.
namespace near_02156a00 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02156a00(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02156a00

// auto_member_call_02157a80: misc_member_call_02242a10 with other addresses and constants.
namespace near_02157a80 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02157a80(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02157a80

// auto_member_call_021940e0: misc_member_call_02242a10 with other addresses and constants.
namespace near_021940e0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_021940e0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_021940e0

// auto_member_call_021aee20: misc_member_call_02242a10 with other addresses and constants.
namespace near_021aee20 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_021aee20(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_021aee20

// auto_member_call_02239d20: misc_member_call_02242a10 with other addresses and constants.
namespace near_02239d20 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02239d20(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02239d20

// auto_member_call_0223c6a0: misc_member_call_02242a10 with other addresses and constants.
namespace near_0223c6a0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_0223c6a0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_0223c6a0

// auto_member_call_02259f30: misc_member_call_02242a10 with other addresses and constants.
namespace near_02259f30 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02259f30(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02259f30

// auto_member_call_02276e20: misc_member_call_02242a10 with other addresses and constants.
namespace near_02276e20 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02276e20(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02276e20

// auto_member_call_022a7e00: misc_member_call_02242a10 with other addresses and constants.
namespace near_022a7e00 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_022a7e00(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_022a7e00

// auto_member_call_022a7ea0: misc_member_call_02242a10 with other addresses and constants.
namespace near_022a7ea0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_022a7ea0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_022a7ea0

// auto_member_call_0237d3f0: misc_member_call_02242a10 with other addresses and constants.
namespace near_0237d3f0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_0237d3f0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_0237d3f0

// auto_member_call_023ab030: misc_member_call_02242a10 with other addresses and constants.
namespace near_023ab030 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_023ab030(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_023ab030

// auto_member_call_023cc1b0: misc_member_call_02242a10 with other addresses and constants.
namespace near_023cc1b0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_023cc1b0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_023cc1b0

// auto_member_call_023d0f20: misc_member_call_02242a10 with other addresses and constants.
namespace near_023d0f20 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_023d0f20(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_023d0f20

// auto_member_call_023de120: misc_member_call_02242a10 with other addresses and constants.
namespace near_023de120 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_023de120(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_023de120

// auto_member_call_023dee70: misc_member_call_02242a10 with other addresses and constants.
namespace near_023dee70 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_023dee70(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_023dee70

// auto_member_call_024133e0: misc_member_call_02242a10 with other addresses and constants.
namespace near_024133e0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_024133e0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_024133e0

// auto_member_call_0241e9a0: misc_member_call_02242a10 with other addresses and constants.
namespace near_0241e9a0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_0241e9a0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_0241e9a0

// auto_member_call_02425fc0: misc_member_call_02242a10 with other addresses and constants.
namespace near_02425fc0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x18;
constexpr size_t target_offset = 0x20;
constexpr size_t adjustment_offset = 0x28;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02425fc0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02425fc0

// auto_member_call_02432760: misc_member_call_02242a10 with other addresses and constants.
namespace near_02432760 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x20;
constexpr size_t target_offset = 0x28;
constexpr size_t adjustment_offset = 0x30;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02432760(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02432760

// auto_member_call_02e5f980: misc_member_call_02242a10 with other addresses and constants.
namespace near_02e5f980 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x8;
constexpr size_t target_offset = 0x10;
constexpr size_t adjustment_offset = 0x18;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02e5f980(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02e5f980

// auto_member_call_02e5fa70: misc_member_call_02242a10 with other addresses and constants.
namespace near_02e5fa70 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x8;
constexpr size_t target_offset = 0x10;
constexpr size_t adjustment_offset = 0x18;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02e5fa70(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02e5fa70

// auto_member_call_02e5fb60: misc_member_call_02242a10 with other addresses and constants.
namespace near_02e5fb60 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x8;
constexpr size_t target_offset = 0x10;
constexpr size_t adjustment_offset = 0x18;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02e5fb60(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02e5fb60

// auto_member_call_02e73eb0: misc_member_call_02242a10 with other addresses and constants.
namespace near_02e73eb0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x8;
constexpr size_t target_offset = 0x10;
constexpr size_t adjustment_offset = 0x18;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02e73eb0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02e73eb0

// auto_member_call_02e7ab80: misc_member_call_02242a10 with other addresses and constants.
namespace near_02e7ab80 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x8;
constexpr size_t target_offset = 0x10;
constexpr size_t adjustment_offset = 0x18;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02e7ab80(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02e7ab80

// auto_member_call_02e7dcf0: misc_member_call_02242a10 with other addresses and constants.
namespace near_02e7dcf0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x8;
constexpr size_t target_offset = 0x10;
constexpr size_t adjustment_offset = 0x18;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02e7dcf0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02e7dcf0

// auto_member_call_02e7dde0: misc_member_call_02242a10 with other addresses and constants.
namespace near_02e7dde0 {

namespace {

// Where the thunk keeps the object pointer, the target and the adjustment.
constexpr size_t object_offset = 0x8;
constexpr size_t target_offset = 0x10;
constexpr size_t adjustment_offset = 0x18;

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/** The signature shared by the targets: the adjusted object and the caller's further arguments. */
using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);

// The 64-bit word at an offset of the thunk.
uint64_t word_at(const void *thunk, size_t offset)
{
    return *reinterpret_cast<const uint64_t *>(static_cast<const uint8_t *>(thunk) + offset);
}

}  // namespace

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the
 * virtual bit. The second and third arguments reach the target unchanged, as the original's tail jump
 * leaves them.
 */
extern "C" uint64_t bb_auto_member_call_02e7dde0(const void *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = word_at(thunk, object_offset) + word_at(thunk, adjustment_offset);
    uint64_t target = word_at(thunk, target_offset);
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace near_02e7dde0
