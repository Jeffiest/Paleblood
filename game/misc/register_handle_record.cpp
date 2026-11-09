// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets a record's vtable, frees its handle, and registers the record with the registry when one exists.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** A record with a vtable pointer at 0x00 and a handle at 0x10 that is freed and cleared. */
struct RegisteredHandleRecord {
    const void *vtable;      /**< The record's vtable block. */
    uint8_t unknown_0x08[0x08];
    void *handle_0x10;       /**< Freed and cleared by this routine when set. */
};
static_assert(offsetof(RegisteredHandleRecord, handle_0x10) == 0x10);

/** The vtable block that the record starts with. */
RT_GLOBAL(0x05722620, registered_record_vtable, uint8_t);
/** The registry: when it is set, the record is registered with it. */
RT_GLOBAL(0x058b3570, record_registry, void *);
/** The name passed to the scratch registration. */
RT_GLOBAL(0x04d55bca, record_registration_name, uint8_t);

RT_ORIGINAL(0x01401720, fn_01401720, void(void *handle));
RT_ORIGINAL(0x013aeaf0, fn_013aeaf0, void(void *scratch, const uint8_t *name));
RT_ORIGINAL(0x013a33a0, fn_013a33a0, void(void *registry, RegisteredHandleRecord **records, uint32_t count,
                                          uint32_t flag));
RT_ORIGINAL(0x013aebc0, fn_013aebc0, void(void *scratch));

/** The count of records passed to the registry, and the flag it receives. */
constexpr uint32_t registered_record_count = 1;
constexpr uint32_t registration_flag = 1;
/** The size of the scratch handle that the registration fills on the stack. */
constexpr size_t scratch_handle_size = 8;

}  // namespace

/**
 *
 * Sets the record's vtable and frees its handle, then registers the record when a registry exists.
 *
 * The scratch handle is filled by the registration routine and destroyed after the registry call.
 */
extern "C" void bb_misc_register_handle_record(RegisteredHandleRecord *record)
{
    record->vtable = registered_record_vtable.address();
    if (record->handle_0x10 != nullptr) {
        fn_01401720(record->handle_0x10);
        record->handle_0x10 = nullptr;
    }
    void *const registry = record_registry.get();
    if (registry != nullptr) {
        RegisteredHandleRecord *records[registered_record_count] = {record};
        uint8_t scratch_handle[scratch_handle_size];
        fn_013aeaf0(scratch_handle, record_registration_name.address());
        fn_013a33a0(registry, records, registered_record_count, registration_flag);
        fn_013aebc0(scratch_handle);
    }
}
