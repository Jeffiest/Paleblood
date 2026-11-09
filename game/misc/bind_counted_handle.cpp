// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: binds a record's key to a target through a counted object, releases one count of that object, then releases the target.
#include <cstdint>

#include "bind_record.h"
#include "bound_target.h"
#include "packed_count_object.h"
#include "runtime/original.h"

namespace {

using misc::BindRecord;
using misc::BoundTarget;
using misc::PackedCountObject;

RT_ORIGINAL(0x00f86b00, fn_00f86b00, PackedCountObject *(uint64_t first, uint64_t second));
RT_ORIGINAL(0x01c013e0, fn_01c013e0, BoundTarget *(PackedCountObject *counted, int32_t kind, uint64_t key, uint32_t zero));

/** The binding kind passed to the binding call. */
constexpr int32_t binding_kind = 2;

/** The code passed to the target's release. */
constexpr uint64_t target_release_code = 0x22;

/** The packed count's gate: releases happen only while the high half is nonzero. */
constexpr uint32_t packed_count_gate = 0x10000;

/** The high half of the packed count, which a release leaves unchanged. */
constexpr uint32_t packed_count_high_mask = 0xffff0000;

}  // namespace

/**
 *
 * Binds the record's key to a target through a counted object, then releases the target.
 *
 * The counted object gives up one count from its low half while its high half is nonzero, and the
 * object is destroyed when that low half reaches zero. The high half is kept. The record's target
 * is released last, read from the record after any destruction.
 *
 */
extern "C" bool bb_misc_bind_counted_handle(BindRecord *record, uint64_t first, uint64_t second, uint64_t key)
{
    record->key_0x08 = key;
    PackedCountObject *counted = fn_00f86b00(first, second);
    record->target_0x10 = fn_01c013e0(counted, binding_kind, record->key_0x08, 0);

    if (counted->packed_count >= packed_count_gate) {
        uint32_t observed = 0;
        uint32_t expected = 0;
        uint32_t desired = 0;
        do {
            observed = counted->packed_count;
            desired = (observed & packed_count_high_mask) | static_cast<uint16_t>(observed - 1);
            expected = observed;
        } while (!__atomic_compare_exchange_n(&counted->packed_count, &expected, desired, false,
                                              __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST));
        const auto remaining = static_cast<uint16_t>(observed - 1);
        if (remaining == 0) counted->vtable->destroy(counted);
    }

    BoundTarget *target = record->target_0x10;
    target->vtable->slot_0x30(target, target_release_code);
    return true;
}
