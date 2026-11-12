// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: registers a record under a fixed name with the registry when one exists, and does nothing otherwise.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The registry: when it is set, the record is registered with it. */
RT_GLOBAL(0x058b3570, record_registry, void *);
/** The name passed to the scratch registration. */
RT_GLOBAL(0x04d6251c, record_registration_name, uint8_t);

RT_ORIGINAL(0x013aeaf0, fn_013aeaf0, void(void *scratch, const uint8_t *name));
RT_ORIGINAL(0x013a33a0, fn_013a33a0, void(void *registry, void **records, uint32_t count, uint32_t flag));
RT_ORIGINAL(0x013aebc0, fn_013aebc0, void(void *scratch));

/** The count of records passed to the registry, and the flag it receives. */
constexpr uint32_t registered_record_count = 1;
constexpr uint32_t registration_flag = 1;
/** The size of the scratch handle that the registration fills on the stack. */
constexpr size_t scratch_handle_size = 8;

}  // namespace

/**
 *
 * Registers the record with the registry under the fixed name when a registry exists.
 *
 * The scratch handle is filled by the registration routine and destroyed after the registry call.
 */
extern "C" void bb_misc_register_record_named(void *record)
{
    void *const registry = record_registry.get();
    if (registry != nullptr) {
        void *records[registered_record_count] = {record};
        uint8_t scratch_handle[scratch_handle_size];
        fn_013aeaf0(scratch_handle, record_registration_name.address());
        fn_013a33a0(registry, records, registered_record_count, registration_flag);
        fn_013aebc0(scratch_handle);
    }
}
