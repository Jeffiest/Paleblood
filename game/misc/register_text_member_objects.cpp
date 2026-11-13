// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: registers a text member's objects with the registry when the name is not yet there, then runs the object setup on a fixed set of slots.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The size of the record that the object setup receives by address. */
constexpr size_t record_size = 0x10;

/** A context with the holder object at 0x18, two flags at 0x1d80 and 0x1d81, and a record at 0x1d90. */
struct RegistryMemberContext {
    uint8_t unknown_0x0000[0x18];
    void *holder;                  /**< The object that receives the member value. */
    uint8_t unknown_0x0020[0x1d60];
    uint8_t second_flag;           /**< Flag passed by address to the second member call. */
    uint8_t first_flag;            /**< Flag passed by address to the first member call. */
    uint8_t unknown_0x1d82[0x0e];
    uint8_t record[record_size];    /**< The record passed by address to the object setup. */
};
static_assert(offsetof(RegistryMemberContext, holder) == 0x18);
static_assert(offsetof(RegistryMemberContext, second_flag) == 0x1d80);
static_assert(offsetof(RegistryMemberContext, first_flag) == 0x1d81);
static_assert(offsetof(RegistryMemberContext, record) == 0x1d90);

/** The registry: when it is null the routine does nothing. */
RT_GLOBAL(0x058b3570, registry, void *);
/** The name whose presence in the registry stops the routine. */
RT_GLOBAL(0x04cbc84c, registry_name, uint8_t);
/** The key and context for the member lookup. */
RT_GLOBAL(0x04cbc830, member_key, uint8_t);
RT_GLOBAL(0x04cbc878, member_context, uint8_t);
/** The names passed to the member flag calls. */
RT_GLOBAL(0x04cbc890, first_flag_name, uint8_t);
RT_GLOBAL(0x04cbc8a8, second_flag_name, uint8_t);
/** The name passed to the scratch registration and to the object lookup. */
RT_GLOBAL(0x04cbc9a6, scratch_name, uint8_t);
RT_GLOBAL(0x04cbc8ba, object_name, uint8_t);
/** The names passed to the object setup calls, and the table they receive. */
RT_GLOBAL(0x04cbc8dc, setup_name, uint8_t);
RT_GLOBAL(0x04cbc8ee, finish_name, uint8_t);
RT_GLOBAL(0x056f3a20, setup_table, uint8_t);
/** The source file, function and message of the fatal report raised when the registry vanishes. */
RT_GLOBAL(0x04cbcae0, fatal_file, uint8_t);
RT_GLOBAL(0x04cbcb2d, fatal_function, uint8_t);
RT_GLOBAL(0x04cbcb70, fatal_message, uint8_t);

RT_ORIGINAL(0x013a2a00, fn_013a2a00, uint64_t(void *registry, const uint8_t *name));
RT_ORIGINAL(0x013a0920, fn_013a0920, void *(void *holder, const uint8_t *key, const uint8_t *argument,
                                              const uint8_t *context));
RT_ORIGINAL(0x0139df40, fn_0139df40, void(void *member, const uint8_t *name, void *flag, uint32_t enable));
RT_ORIGINAL(0x01412a60, fn_01412a60, void(void *holder, void *value));
RT_ORIGINAL(0x013aeaf0, fn_013aeaf0, void(void *scratch, const uint8_t *name));
RT_ORIGINAL(0x013aebc0, fn_013aebc0, void(void *scratch));
RT_ORIGINAL(0x0139cd80, fn_0139cd80, void *(void *member, const uint8_t *name, const uint8_t *name_again,
                                           uint64_t *out));
RT_ORIGINAL(0x02d9d1a0, fn_02d9d1a0, void(void *object, const uint8_t *name, void *record, const void *table,
                                         uint32_t count, uint32_t flag));
RT_ORIGINAL(0x0139d6b0, fn_0139d6b0, void(void *object, const uint8_t *name));
RT_ORIGINAL(0x02d9d290, fn_02d9d290, void(void *object, RegistryMemberContext *context, uint64_t zero_rdx,
                                         uint64_t zero_rcx, const void *callback, uint64_t zero_r9,
                                         int32_t slot_index));
RT_ORIGINAL(0x013bb6d0, fn_013bb6d0, void());
RT_ORIGINAL(0x024b55b0, fn_024b55b0, void(const uint8_t *file, uint32_t line, const uint8_t *function,
                                         const uint8_t *message));

/** The line number passed to the fatal report. */
constexpr uint32_t fatal_line = 0xb1;
/** The size of the scratch handle that the registration fills on the stack. */
constexpr size_t scratch_size = 8;
/** The number of object setup calls made after the first one. */
constexpr uint32_t setup_slot_count = 0x20;
/** The count and flag passed to the object routine. */
constexpr uint32_t setup_object_count = 2;
constexpr uint32_t setup_object_flag = 1;

}  // namespace

/**
 *
 * Does nothing unless the registry exists, the name is not yet in it, and a member value is found for the key. Then the
 * member gets its two flags, the holder receives the value, and an object is looked up and registered under a scratch
 * name. The object is finished once, then set up for each of the thirty-two slot indices after the first call, which
 * runs with index minus one. Nothing is returned.
 */
extern "C" void bb_misc_register_text_member_objects(RegistryMemberContext *context)
{
    if (registry.get() == nullptr) return;
    if (fn_013a2a00(registry.get(), registry_name.address()) != 0) return;

    if (registry.get() == nullptr) {
        fn_024b55b0(fatal_file.address(), fatal_line, fatal_function.address(), fatal_message.address());
    }
    void *const value = fn_013a0920(registry.get(), member_key.address(), registry_name.address(),
                                    member_context.address());
    if (value == nullptr) return;

    fn_0139df40(value, first_flag_name.address(), &context->first_flag, 1);
    fn_0139df40(value, second_flag_name.address(), &context->second_flag, 1);
    fn_01412a60(context->holder, value);

    uint64_t out = 0;
    uint8_t scratch[scratch_size];
    fn_013aeaf0(scratch, scratch_name.address());
    void *const object = fn_0139cd80(value, object_name.address(), object_name.address(), &out);
    fn_013aebc0(scratch);

    fn_02d9d1a0(object, setup_name.address(), context->record, setup_table.address(), setup_object_count,
                setup_object_flag);
    fn_0139d6b0(object, finish_name.address());

    fn_02d9d290(object, context, 0, 0, fn_013bb6d0.address(), 0, -1);
    for (uint32_t slot_index = 0; slot_index < setup_slot_count; ++slot_index) {
        fn_02d9d290(object, context, 0, 0, fn_013bb6d0.address(), 0, static_cast<int32_t>(slot_index));
    }
}
