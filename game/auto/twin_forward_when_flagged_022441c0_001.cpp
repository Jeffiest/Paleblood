// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_forward_when_flagged_022441c0, in game/misc/forward_when_flagged_022441c0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_forward_when_flagged_013ce990: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_013ce990 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_013ce990(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_013ce990

// auto_forward_when_flagged_013cf9c0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_013cf9c0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_013cf9c0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_013cf9c0

// auto_forward_when_flagged_013db2d0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_013db2d0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_013db2d0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_013db2d0

// auto_forward_when_flagged_013e7ae0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_013e7ae0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_013e7ae0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_013e7ae0

// auto_forward_when_flagged_013e88f0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_013e88f0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_013e88f0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_013e88f0

// auto_forward_when_flagged_013f63b0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_013f63b0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_013f63b0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_013f63b0

// auto_forward_when_flagged_013f95a0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_013f95a0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_013f95a0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_013f95a0

// auto_forward_when_flagged_013fee30: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_013fee30 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_013fee30(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_013fee30

// auto_forward_when_flagged_01dcce50: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_01dcce50 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_01dcce50(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_01dcce50

// auto_forward_when_flagged_01e627a0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_01e627a0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_01e627a0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_01e627a0

// auto_forward_when_flagged_02145930: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02145930 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02145930(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02145930

// auto_forward_when_flagged_02173dc0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02173dc0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02173dc0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02173dc0

// auto_forward_when_flagged_02175880: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02175880 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02175880(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02175880

// auto_forward_when_flagged_021771c0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_021771c0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_021771c0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_021771c0

// auto_forward_when_flagged_0217a4f0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0217a4f0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0217a4f0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0217a4f0

// auto_forward_when_flagged_0217be40: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0217be40 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0217be40(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0217be40

// auto_forward_when_flagged_0217d780: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0217d780 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0217d780(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0217d780

// auto_forward_when_flagged_0217fed0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0217fed0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0217fed0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0217fed0

// auto_forward_when_flagged_02188830: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02188830 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6c40, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02188830(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02188830

// auto_forward_when_flagged_0218d600: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0218d600 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0218d600(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0218d600

// auto_forward_when_flagged_021c3120: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_021c3120 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_021c3120(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_021c3120

// auto_forward_when_flagged_02203840: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02203840 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02203840(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02203840

// auto_forward_when_flagged_02206e80: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02206e80 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02206e80(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02206e80

// auto_forward_when_flagged_02208890: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02208890 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02208890(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02208890

// auto_forward_when_flagged_0220b220: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0220b220 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0220b220(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0220b220

// auto_forward_when_flagged_02246230: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02246230 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02246230(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02246230

// auto_forward_when_flagged_022e0b60: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022e0b60 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022e0b60(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022e0b60

// auto_forward_when_flagged_022e51b0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022e51b0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022e51b0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022e51b0

// auto_forward_when_flagged_022e7420: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022e7420 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022e7420(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022e7420

// auto_forward_when_flagged_022e8b00: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022e8b00 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022e8b00(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022e8b00

// auto_forward_when_flagged_022ea630: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022ea630 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022ea630(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022ea630

// auto_forward_when_flagged_022ed9e0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022ed9e0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022ed9e0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022ed9e0

// auto_forward_when_flagged_022effe0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022effe0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022effe0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022effe0

// auto_forward_when_flagged_022f1760: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022f1760 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022f1760(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022f1760

// auto_forward_when_flagged_022f4050: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022f4050 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022f4050(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022f4050

// auto_forward_when_flagged_022f7eb0: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_022f7eb0 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_022f7eb0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_022f7eb0

// auto_forward_when_flagged_02307230: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02307230 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02307230(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02307230

// auto_forward_when_flagged_02309210: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02309210 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02309210(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02309210

// auto_forward_when_flagged_0230b520: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0230b520 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0230b520(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0230b520

// auto_forward_when_flagged_0230d150: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0230d150 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0230d150(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0230d150

// auto_forward_when_flagged_0232dd00: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0232dd00 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0232dd00(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0232dd00

// auto_forward_when_flagged_02383880: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_02383880 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_02383880(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_02383880

// auto_forward_when_flagged_0245ff90: misc_forward_when_flagged_022441c0 with other addresses.
namespace twin_0245ff90 {

// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.


namespace {

struct NotifiedObject;
struct NotifiedVtable {
    void *unknown_slots[1];
    void (*notify)(NotifiedObject *object);
};
static_assert(offsetof(NotifiedVtable, notify) == 0x08);

/** An object that is notified before it is forwarded. */
struct NotifiedObject {
    const NotifiedVtable *vtable;
};

struct Target;
struct TargetVtable {
    void *unknown_slots[14];
    uint64_t (*forward)(Target *target, NotifiedObject *object);
};
static_assert(offsetof(TargetVtable, forward) == 0x70);

/** The routine that forwards the object: its vtable is read after the notification. */
struct Target {
    const TargetVtable *vtable;
};

/** The owner: its member at +0x68 is the one the check is made on. */
struct FlaggedOwner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(FlaggedOwner, unknown_0x68) == 0x68);

RT_ORIGINAL(0x013e6ae0, check_member, uint64_t(void *member));
RT_ORIGINAL(0x0247b720, find_target, Target *(NotifiedObject *object));

/** The bit the check's low byte is flipped with before it is tested. */
constexpr uint8_t flip_bit = 1;
/** The bits of a 64-bit result that the low byte does not cover. */
constexpr uint64_t high_bits_mask = ~static_cast<uint64_t>(0xff);

}  // namespace

/**
 *
 * Forwards an object when the owner's member check says so: with no object, or with the flipped low byte of
 * the check's result not zero, the result is returned as it stands (its low byte flipped). Otherwise the
 * object is notified and its target forwards it, and the target's result is returned.
 *
 */
extern "C" uint64_t bb_auto_forward_when_flagged_0245ff90(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}

}  // namespace twin_0245ff90
