// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies six constant words into a table, makes sure the shared object exists and has its flag bit, then registers the exit record.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct ExitSharedObject;

/** The shared object's vtable; the flag query is the slot at 0x20. */
struct ExitSharedVtable {
    uint8_t unknown_0x0000[0x20];
    void (*flag_query)(uint64_t *flags, ExitSharedObject *object, uint32_t selector);
};
static_assert(offsetof(ExitSharedVtable, flag_query) == 0x20);

/** The shared object, whose first word is its vtable. */
struct ExitSharedObject {
    const ExitSharedVtable *vtable;
};

/** The exit record: a state word, two words cleared with it, and the shared object it releases. */
struct ExitRecord {
    uint8_t unknown_0x00[0x8];
    uint64_t state;
    uint64_t first;
    uint64_t second;
    ExitSharedObject *object;
};
static_assert(offsetof(ExitRecord, state) == 0x8 && offsetof(ExitRecord, first) == 0x10);
static_assert(offsetof(ExitRecord, second) == 0x18 && offsetof(ExitRecord, object) == 0x20);

/** The number of words copied into the constant table. */
constexpr size_t table_words = 6;

/** The constants copied into the table, read from the executable's read-only data. */
RT_GLOBAL(0x04d244f0, constant_source, const uint64_t[table_words]);
/** The table the constants are copied into. */
RT_GLOBAL(0x05ac41c0, constant_table, uint64_t[table_words]);
/** The lazily created shared object. */
RT_GLOBAL(0x05940670, shared_object, ExitSharedObject *);
/** The exit record, registered for release at exit. */
RT_GLOBAL(0x05ac41f0, exit_record, ExitRecord);
/** The module handle the exit registration receives. */
RT_GLOBAL(0x0553b490, module_handle, uint8_t);
/** The message the fatal report receives. */
RT_GLOBAL(0x04b37dc0, fatal_message, uint8_t);

RT_ORIGINAL(0x02fa2b10, fn_02fa2b10, ExitSharedObject *(void));
RT_ORIGINAL(0x024b55b0, fn_024b55b0, void(void *, uint32_t, const uint8_t *));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, int32_t(void (*)(void *), void *, const uint8_t *));
RT_ORIGINAL(0x02716770, release_exit_record, void(void *));

/** The bit of the flag query's result that must be set. */
constexpr uint64_t flag_required_bit = 0x20;
/** The line number that the fatal report receives. */
constexpr uint32_t fatal_report_line = 0x3e;
/** The selector the flag query receives. */
constexpr uint32_t flag_selector = 0;

}  // namespace

/**
 *
 * Copies the constant table, makes the shared object if it does not exist yet, and reports a fatal error when its
 * flag query lacks the required bit (the setup goes on). Then it clears the exit record, points it at the shared
 * object and registers its release for exit.
 *
 */
extern "C" void bb_misc_setup_exit_record_table(void)
{
    const auto &source = constant_source.get();
    auto &table = constant_table.get();
    for (size_t index = 0; index < table_words; ++index) table[index] = source[index];

    ExitSharedObject *shared = shared_object.get();
    if (shared == nullptr) {
        shared = fn_02fa2b10();
        shared_object.get() = shared;
    }

    uint64_t flags = 0;
    shared->vtable->flag_query(&flags, shared, flag_selector);
    if ((flags & flag_required_bit) == 0) fn_024b55b0(nullptr, fatal_report_line, fatal_message.address());

    ExitRecord &record = exit_record.get();
    record.second = 0;
    record.first = 0;
    record.state = 0;
    record.object = shared;
    fn_02fbe548(reinterpret_cast<void (*)(void *)>(release_exit_record.address()), exit_record.address(),
                module_handle.address());
}
