// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: creates the shared instance once for the holder's owner, filling a local record that the lookup prepares.
#include <cstddef>
#include <cstdint>

#include "owned_holder.h"
#include "runtime/original.h"

namespace {

/** Size of the instance that the first call allocates. */
constexpr uint32_t shared_instance_size = 0x70;

/** Alignment of the instance that the first call allocates. */
constexpr uint32_t shared_instance_alignment = 8;

/** Bytes of the local record that the lookup fills and the instance creation and finish read. */
constexpr uint64_t lookup_record_size = 0x20;

/** The shared instance: set once, and a later call finds it set and does nothing. */
RT_GLOBAL(0x058b35f0, shared_instance, void *);

RT_ORIGINAL(0x013a6520, fn_013a6520, void(void *record, void *owner, uint64_t key));
RT_ORIGINAL(0x0247c4e0, fn_0247c4e0, void *(uint32_t size, uint32_t alignment, void *owner));
RT_ORIGINAL(0x013a5100, fn_013a5100, void(void *instance, void *record));
RT_ORIGINAL(0x013a6570, fn_013a6570, void(void *record));

}  // namespace

/**
 *
 * Does nothing unless the holder is active and no shared instance exists yet. Otherwise it prepares the record for
 * the owner, allocates the instance when it is still unset, hands the record to the instance, then finishes the record.
 *
 * An allocation that fails leaves the instance unset.
 *
 */
extern "C" void bb_misc_ensure_shared_instance_013a1850(misc::OwnedHolder *holder, uint64_t key)
{
    if (holder->active_0x00 == 0 || shared_instance.get() != nullptr) return;

    void *const owner = holder->owner_0x08;
    uint8_t record[lookup_record_size];
    fn_013a6520(record, owner, key);
    if (shared_instance.get() == nullptr) {
        void *const instance = fn_0247c4e0(shared_instance_size, shared_instance_alignment, owner);
        if (instance != nullptr) fn_013a5100(instance, record);
        shared_instance.get() = instance;
    }
    fn_013a6570(record);
}
