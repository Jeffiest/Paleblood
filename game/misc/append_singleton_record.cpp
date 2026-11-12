// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: appends a record of the source object's value, or of the record singleton, to the owner's record list.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct RecordSource;

/** The source object's vtable: its slot at zero produces the value the record keeps. */
struct RecordSourceVtable {
    uint64_t (*slot_00)(RecordSource *source); /**< Produces the value the record keeps. */
};
static_assert(offsetof(RecordSourceVtable, slot_00) == 0x00);

/** A source object, whose first word is its vtable. */
struct RecordSource {
    const RecordSourceVtable *vtable; /**< The object's virtual functions. */
};

/**
 *
 * The record the routine appends: the caller's source slot, the value, the source and three words that are zero.
 *
 */
struct AppendedRecord {
    RecordSource **source_slot;   /**< The slot the source was read from. */
    uint64_t value_0x08;          /**< The source's slot 0 value, or the record singleton when there is no source. */
    RecordSource *source_0x10;    /**< The source as read from the slot. */
    uint32_t flags_0x18;          /**< Set to zero by the routine. */
    uint8_t unknown_0x1c[0x04];   /**< Padding. */
    uint64_t zero_0x20;           /**< Set to zero by the routine. */
    uint64_t zero_0x28;           /**< Set to zero by the routine. */
};
static_assert(offsetof(AppendedRecord, source_slot) == 0x00);
static_assert(offsetof(AppendedRecord, value_0x08) == 0x08);
static_assert(offsetof(AppendedRecord, source_0x10) == 0x10);
static_assert(offsetof(AppendedRecord, flags_0x18) == 0x18);
static_assert(offsetof(AppendedRecord, zero_0x20) == 0x20);
static_assert(offsetof(AppendedRecord, zero_0x28) == 0x28);
static_assert(sizeof(AppendedRecord) == 0x30);

/**
 *
 * The record list owner the routine is given: the list's three words sit at 0x10 and are used by the append routine.
 *
 */
constexpr size_t record_list_bytes = 0x20; /**< Size in bytes of the record list held by the owner. */

struct RecordListOwner {
    uint8_t unknown_0x00[0x10];                  /**< Not used by the routine. */
    uint8_t record_list[record_list_bytes];      /**< The list: begin, end and capacity words at 0x08, 0x10 and 0x18 of it. */
};
static_assert(offsetof(RecordListOwner, record_list) == 0x10);

/** The record singleton's layout: its vtable, then two words that its builder clears. */
struct RecordSingleton {
    const void *vtable;         /**< The object's vtable, stored as is. */
    uint8_t unknown_0x08[0x38]; /**< Not read by the routine. */
    uint64_t value_0x40;        /**< Set to zero when the singleton is built. */
    uint64_t value_0x48;        /**< Set to zero when the singleton is built. */
};
static_assert(offsetof(RecordSingleton, value_0x40) == 0x40);
static_assert(offsetof(RecordSingleton, value_0x48) == 0x48);
static_assert(sizeof(RecordSingleton) == 0x50);

RT_GLOBAL(0x05ac7670, record_singleton_instance, RecordSingleton *);
RT_GLOBAL(0x05ac7678, record_singleton_pending, uint8_t);
RT_GLOBAL(0x05ac7680, record_singleton_storage, RecordSingleton);
RT_GLOBAL(0x05ac76d0, record_singleton_guard, uint8_t);
RT_GLOBAL(0x056c7bf0, record_singleton_vtable, uint8_t);

RT_ORIGINAL(0x024ede50, lazy_setup, void());
RT_ORIGINAL(0x024b6d00, construct, void(RecordSingleton *));
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *));
RT_ORIGINAL(0x02b50270, append_record, void(uint8_t *list, AppendedRecord *record));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

/**
 *
 * Returns the record singleton, building it in its storage when the instance pointer is still null.
 *
 * The build clears the pending flag when it is set, runs the one-time guard when the guard byte is clear, constructs
 * the singleton and then publishes it in the instance pointer.
 */
RecordSingleton *ensure_record_singleton()
{
    RecordSingleton *singleton = record_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    lazy_setup();
    singleton = record_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    if (record_singleton_pending.get() != 0) record_singleton_pending.get() = 0;
    if (record_singleton_guard.get() == 0 && guard_acquire(&record_singleton_guard.get()) != 0) {
        guard_release(&record_singleton_guard.get());
    }
    RecordSingleton *built = record_singleton_storage.address();
    construct(built);
    built->vtable = record_singleton_vtable.address() + vtable_address_point;
    built->value_0x48 = 0;
    built->value_0x40 = 0;
    record_singleton_instance.get() = built;
    return built;
}

}  // namespace

/**
 *
 * Appends a record to the owner's list. The record holds the slot the source was read from, the source's slot 0
 * value and the source. A null source makes the value the record singleton instead, and the slot 0 call is not made.
 *
 * The routine returns nothing; the caller never reads RAX after it.
 */
extern "C" void bb_misc_append_singleton_record_02b50530(RecordListOwner *owner, RecordSource **source_slot)
{
    RecordSource *source = *source_slot;
    uint64_t value = 0;
    if (source != nullptr) {
        value = source->vtable->slot_00(source);
    } else {
        value = reinterpret_cast<uint64_t>(ensure_record_singleton());
    }
    AppendedRecord record{};
    record.source_slot = source_slot;
    record.value_0x08 = value;
    record.source_0x10 = source;
    append_record(owner->record_list, &record);
}
