// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets up the shared record once, like the unguarded twin, with the stack guard check left to the compiler.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct GuardedOnceSharedObject;

/** The shared object's vtable; the flag query is the slot at 0x20. */
struct GuardedOnceSharedVtable {
    uint8_t unknown_0x0000[0x20];
    void (*flag_query_0x0020)(uint64_t *flags, GuardedOnceSharedObject *object, uint32_t selector);
};
static_assert(offsetof(GuardedOnceSharedVtable, flag_query_0x0020) == 0x20);

/** The shared object, whose first word is its vtable. */
struct GuardedOnceSharedObject {
    const GuardedOnceSharedVtable *vtable;   /**< The object's vtable. */
};

/** The record registered for teardown: a zero word at 0x08, a zero word at 0x18, a kind at 0x20 and the object at 0x28. */
struct GuardedOnceTeardownRecord {
    uint8_t unknown_0x00[0x08];
    uint16_t zero_0x08;      /**< Cleared before the teardown is registered. */
    uint8_t unknown_0x0a[0x0e];
    uint64_t zero_0x18;      /**< Cleared before the teardown is registered. */
    uint64_t kind_0x20;      /**< The record kind. */
    GuardedOnceSharedObject *object_0x28;  /**< The shared object the teardown releases. */
    uint8_t flag_0x30;       /**< Set once the record is registered. */
};
static_assert(offsetof(GuardedOnceTeardownRecord, zero_0x08) == 0x08);
static_assert(offsetof(GuardedOnceTeardownRecord, zero_0x18) == 0x18);
static_assert(offsetof(GuardedOnceTeardownRecord, kind_0x20) == 0x20);
static_assert(offsetof(GuardedOnceTeardownRecord, object_0x28) == 0x28);
static_assert(offsetof(GuardedOnceTeardownRecord, flag_0x30) == 0x30);

/** The init flag: its low byte is tested, and the full qword is set to 1 once the setup has run. */
RT_GLOBAL(0x05acebc8, guarded_once_init_flag, uint64_t);
/** The lazily created shared object. */
RT_GLOBAL(0x05940670, guarded_once_shared_object, GuardedOnceSharedObject *);
/** The teardown record, registered once. */
RT_GLOBAL(0x05aceb90, guarded_once_teardown_record, GuardedOnceTeardownRecord);
/** The destructor that the teardown registration receives. */
RT_GLOBAL(0x02a44140, guarded_once_teardown_entry, uint8_t);
/** The handle the teardown registration receives. */
RT_GLOBAL(0x0553b490, guarded_once_dso_handle, uint8_t);
/** The message that the fatal report receives. */
RT_GLOBAL(0x04b37dc0, guarded_once_fatal_message, uint8_t);

RT_ORIGINAL(0x02fa2b10, fn_02fa2b10, GuardedOnceSharedObject *(void));
RT_ORIGINAL(0x024b55b0, fn_024b55b0, void(void *, uint32_t, const uint8_t *));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, void(const uint8_t *, GuardedOnceTeardownRecord *, const uint8_t *));

/** The bit of the flag query's record that must be set. */
constexpr uint64_t flag_query_required_bit = 0x20;
/** The line number that the fatal report receives. */
constexpr uint32_t fatal_report_line = 0x3e;
/** The record kind written to the teardown record. */
constexpr uint64_t teardown_record_kind = 7;

}  // namespace

/**
 *
 * Creates the shared object on first use, checks its flag, and registers the teardown record once.
 *
 * The compiler's stack guard check runs after the setup and is not written here. The three 16-byte
 * copies that follow its failure call cannot run, because that call does not return.
 */
extern "C" void bb_misc_init_shared_record_once_guarded(void)
{
    if (static_cast<uint8_t>(guarded_once_init_flag.get()) != 0) return;
    GuardedOnceSharedObject *shared = guarded_once_shared_object.get();
    if (shared == nullptr) {
        shared = fn_02fa2b10();
        guarded_once_shared_object.get() = shared;
    }
    uint64_t flags = 0;
    shared->vtable->flag_query_0x0020(&flags, shared, 0);
    if ((static_cast<uint8_t>(flags) & flag_query_required_bit) == 0) {
        fn_024b55b0(nullptr, fatal_report_line, guarded_once_fatal_message.address());
    }
    GuardedOnceTeardownRecord *record = guarded_once_teardown_record.address();
    record->object_0x28 = shared;
    record->kind_0x20 = teardown_record_kind;
    record->zero_0x18 = 0;
    record->zero_0x08 = 0;
    record->flag_0x30 = 1;
    fn_02fbe548(guarded_once_teardown_entry.address(), record, guarded_once_dso_handle.address());
    guarded_once_init_flag.get() = 1;
}
