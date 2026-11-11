// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: initializes a byte record in place or in a new allocation, copying the source record's byte.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** Bytes of a byte record: the vtable pointer, the copied byte at 0x08 and the padding after it. */
constexpr uint64_t byte_record_size = 0x10;

/** A record with a vtable pointer and a byte at 0x08. */
struct ByteRecord {
    const void *vtable;      /**< The record's vtable block. */
    uint8_t value_0x08;      /**< The byte copied from the source record. */
    uint8_t unknown_0x09[7];
};
static_assert(offsetof(ByteRecord, value_0x08) == 0x08);
static_assert(sizeof(ByteRecord) == byte_record_size);

RT_GLOBAL(0x05722730, byte_record_vtable, uint8_t);

RT_ORIGINAL(0x02fbe9a8, allocate, void *(uint64_t size));
RT_ORIGINAL(0x02fbf188, report_allocation_failure, void());

}  // namespace

/**
 *
 * Initializes a byte record with its vtable and the source's byte, in the given record or in a new block.
 *
 * With no record given, one is allocated; when the allocator refuses, the failure is reported and the
 * call never returns. The record is returned in both cases.
 */
extern "C" ByteRecord *bb_misc_init_byte_record_or_allocate_0188e130(const ByteRecord *source, ByteRecord *record)
{
    if (record == nullptr) {
        record = static_cast<ByteRecord *>(allocate(byte_record_size));
        if (record == nullptr) {
            report_allocation_failure();
            __builtin_unreachable();
        }
    }
    record->vtable = byte_record_vtable.address();
    record->value_0x08 = source->value_0x08;
    return record;
}
