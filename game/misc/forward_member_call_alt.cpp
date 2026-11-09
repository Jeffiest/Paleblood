// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: forwards a call through a member record: the object is the base plus an adjustment, and the target
// is either a function or a vtable slot of that object.
#include <cstddef>
#include <cstdint>

namespace {

/** The flag bit of the flag byte that says the call is forwarded. */
constexpr uint8_t forward_flag = 0x40;
/** The bit of the target that says it is a vtable offset plus one. */
constexpr uint64_t virtual_target_bit = 0x1;

/** A member record: a flag byte, the base object, the int argument, the target and the base adjustment. */
struct ForwardingRecord {
    uint8_t unknown_0x00[0x0b];
    uint8_t flags_0x0b;      /**< Bit 0x40 set: the call is forwarded. */
    uint8_t unknown_0x0c[0x04];
    void *base_0x10;         /**< The base object. */
    uint32_t value_0x18;     /**< The argument passed after the object. */
    uint8_t unknown_0x1c[0x04];
    uint64_t target_0x20;    /**< A function address, or a vtable offset plus one. */
    uint64_t adjust_0x28;    /**< Added to the base to get the object. */
};
static_assert(offsetof(ForwardingRecord, flags_0x0b) == 0x0b && offsetof(ForwardingRecord, base_0x10) == 0x10);
static_assert(offsetof(ForwardingRecord, value_0x18) == 0x18 && offsetof(ForwardingRecord, target_0x20) == 0x20);
static_assert(offsetof(ForwardingRecord, adjust_0x28) == 0x28);

}  // namespace

/**
 *
 * Forwards the call when the flag byte's forward bit is set: the object is the base plus the adjustment,
 * and the target is the function, or the slot of the object's vtable when the target is odd. The object
 * and the record's value are the arguments, and the target's result is returned.
 *
 * When the forward bit is clear nothing is called and the result is zero.
 */
extern "C" uint64_t bb_misc_forward_member_call_alt(ForwardingRecord *record)
{
    if ((record->flags_0x0b & forward_flag) == 0) return 0;

    const uint64_t object = reinterpret_cast<uint64_t>(record->base_0x10) + record->adjust_0x28;
    uint64_t target = record->target_0x20;
    if ((target & virtual_target_bit) != 0) {
        const uint64_t vtable = *reinterpret_cast<const uint64_t *>(object);
        target = *reinterpret_cast<const uint64_t *>(vtable + target - virtual_target_bit);
    }
    auto forward = reinterpret_cast<uint64_t (*)(uint64_t, uint32_t)>(target);
    return forward(object, record->value_0x18);
}
