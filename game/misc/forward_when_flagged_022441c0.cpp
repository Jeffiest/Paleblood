// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: when an object is given and the owner's member check reports it set, the object is notified
// through its own slot and handed to the target's forwarding slot; otherwise the check's result is
// returned with its low byte flipped, as the original leaves it.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

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
extern "C" uint64_t bb_misc_forward_when_flagged_022441c0(FlaggedOwner *owner, NotifiedObject *object)
{
    const uint64_t check_result = check_member(owner->unknown_0x68);
    if (object == nullptr) return check_result;
    const uint8_t flipped = static_cast<uint8_t>(static_cast<uint8_t>(check_result) ^ flip_bit);
    if (flipped != 0) return (check_result & high_bits_mask) | flipped;
    Target *target = find_target(object);
    object->vtable->notify(object);
    return target->vtable->forward(target, object);
}
