// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: resets a counted block record's block, registers the record with the registry when one exists, then releases the record.
#include <cstddef>
#include <cstdint>

#include "counted_block_record.h"
#include "runtime/original.h"

namespace {

/** The registry: when it is set, the record is registered with it before the release. */
RT_GLOBAL(0x058b3570, record_registry, void *);
/** The name passed to the scratch registration. */
RT_GLOBAL(0x04d95374, counted_block_registration_name, uint8_t);

RT_ORIGINAL(0x01e91880, reset_counted_word_block,
            void(misc::CountedWordBlock *block, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t));
RT_ORIGINAL(0x013aeaf0, fn_013aeaf0, void(void *scratch, const uint8_t *name));
RT_ORIGINAL(0x013a33a0, fn_013a33a0,
            void(void *registry, misc::CountedBlockRecord **records, uint32_t count, uint32_t flag));
RT_ORIGINAL(0x013aebc0, fn_013aebc0, void(void *scratch));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *record));

/** The size of the scratch handle that the registration fills on the stack. */
constexpr size_t scratch_handle_size = 8;

}  // namespace

/**
 *
 * Sets the record's reset table, resets its counted word block, sets its final table and registers the record with the
 * registry when one exists. Then the record is released by a tail call, and the release routine's result is returned.
 *
 * The block reset receives the caller's second and last four integer registers unchanged, and the scratch handle is
 * destroyed after the registry call.
 */
extern "C" uint64_t bb_misc_destroy_counted_block_record_01e93a20(misc::CountedBlockRecord *record, uint64_t caller_rsi,
                                                                 uint64_t caller_rdx, uint64_t caller_rcx,
                                                                 uint64_t report_arg_0, uint64_t report_arg_1)
{
    record->vtable = misc::counted_block_record_reset_vtable.address();
    reset_counted_word_block(&record->block, caller_rsi, caller_rdx, caller_rcx, report_arg_0, report_arg_1);
    record->vtable = misc::counted_block_record_final_vtable.address();
    void *const registry = record_registry.get();
    if (registry != nullptr) {
        misc::CountedBlockRecord *records[misc::counted_block_registered_count] = {record};
        uint8_t scratch_handle[scratch_handle_size];
        fn_013aeaf0(scratch_handle, counted_block_registration_name.address());
        fn_013a33a0(registry, records, misc::counted_block_registered_count, misc::counted_block_registration_flag);
        fn_013aebc0(scratch_handle);
    }
    return fn_02fbe588(record);
}
