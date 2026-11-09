// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: same as misc_insert_scaled_entry, with the key and value built by 0x0045cd00. Inserts a scaled handle into a record's entry table under a key taken from the source. A key
// that is already present is left alone. Temporary references are dropped as soon as they are used,
// and the key reference is dropped last.
#include <cstdint>
#include <cstdlib>

#include "../engine/ref_object.h"
#include "entry_table.h"
#include "misc.h"

namespace {
using engine::RefObject;
using misc::EntryTable;

/** The owner of an entry table, which is held at +0x10. */
struct EntryOwner {
    uint8_t unknown_0x00[0x10];
    EntryTable *table; /**< The entry table, or null when none is held. */
};
static_assert(offsetof(EntryOwner, table) == 0x10);

/** The value an entry keeps: a reference, a scale and flags. */
struct ScaledHandle {
    RefObject *handle; /**< The reference the entry keeps. */
    float scale;       /**< The scale given to the insert. */
    uint32_t flags;    /**< The flags given to the insert. */
};
static_assert(offsetof(ScaledHandle, scale) == 0x08);
static_assert(offsetof(ScaledHandle, flags) == 0x0c);
static_assert(sizeof(ScaledHandle) == 0x10);

/** The key and value that a lookup or insert is given: the key at +0 and the value at +8. */
struct InsertPair {
    RefObject **key;
    ScaledHandle *value;
};
static_assert(offsetof(InsertPair, value) == 0x08);

RT_ORIGINAL(0x0045cd00, fn_0045cd00, void(RefObject **out, const void *source));
RT_ORIGINAL(0x0278aa10, fn_0278aa10, uint64_t(EntryTable *table, InsertPair *pair));
RT_ORIGINAL(0x0045cae0, fn_0045cae0, void(ScaledHandle *out, RefObject **source));
RT_ORIGINAL(0x0278a040, fn_0278a040, void(EntryTable *table, EntryTable *context, InsertPair *pair));
RT_GLOBAL(0x057e3be0, stack_guard_pointer, const uint64_t *);
RT_ORIGINAL(0x02fbe4f8, stack_check_failure, void());

/**
 *
 * Hands a block to the scratch service's release slot.
 *
 */
void release_to_scratch(void *block)
{
    misc::Service *service = misc::scratch_service.get();
    service->vtable->release(service, block);
}

/**
 *
 * Drops one reference held through a word whose low bits are tags. The object goes back to the
 * scratch service when that was its last reference.
 *
 */
void drop_reference(uintptr_t word)
{
    RefObject *object = reinterpret_cast<RefObject *>(word & ~misc::tag_bits_mask);
    const int32_t before = __atomic_fetch_sub(&object->references, 1, __ATOMIC_SEQ_CST);
    if (before == 1) release_to_scratch(object);
}
}  // namespace

/**
 *
 * Looks the source's key up in the record's entry table, and when it is absent inserts the value
 * built from the second source with the given scale and flags. Returns true when it inserted.
 *
 * The key is dropped once the table has taken it, and the value's reference is dropped after the
 * insert, so the table is the only holder of the value.
 *
 */
extern "C" bool bb_misc_insert_scaled_entry_alt(EntryOwner *self, const void *source, const void *value,
                                            uint32_t flags, float scale)
{
    // The guard pointer and its value are taken on entry and checked again before returning.
    const uint64_t *guard = stack_guard_pointer.get();
    const uint64_t guard_value = *guard;

    bool inserted = false;
    if (self->table != nullptr && source != nullptr) {
        RefObject *key = nullptr;
        fn_0045cd00(&key, source);
        InsertPair pair{&key, nullptr};

        if (fn_0278aa10(self->table, &pair) == 0) {
            RefObject *argument = nullptr;
            fn_0045cd00(&argument, value);
            ScaledHandle scaled{};
            fn_0045cae0(&scaled, &argument);
            scaled.scale = scale;
            scaled.flags = flags;
            drop_reference(reinterpret_cast<uintptr_t>(argument));

            pair.value = &scaled;
            fn_0278a040(self->table, self->table, &pair);
            drop_reference(reinterpret_cast<uintptr_t>(scaled.handle));
            inserted = true;
        }
        drop_reference(reinterpret_cast<uintptr_t>(key));
    }

    if (*guard != guard_value) {
        stack_check_failure();
        // A return from the original failure routine remains unsupported.
        std::abort();
    }
    return inserted;
}
