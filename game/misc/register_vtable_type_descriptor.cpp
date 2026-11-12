// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"
#include "type_descriptor.h"

namespace {

// The static descriptor of the type, the registry it joins, and the table and source it is given.
RT_GLOBAL(0x0584c680, type_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x0584c630, type_registry, uint8_t);
RT_GLOBAL(0x05849d20, registry_source, const uint8_t);
RT_GLOBAL(0x05677ef0, registry_table, const uint8_t);
RT_GLOBAL(0x05675910, object_vtable, const uint8_t);
RT_GLOBAL(0x04bc39a6, first_name_text, const char);
RT_GLOBAL(0x04bc39bd, second_name_text, const char);

// The two methods of the type, stored by address only.
RT_ORIGINAL(0x00ce73e0, first_method_entry, void());
RT_ORIGINAL(0x00ce7400, second_method_entry, void());

// Adds the descriptor to the registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));
// Initialises a scratch object that the registration does not read afterwards.
RT_ORIGINAL(0x0085d9e0, fn_0085d9e0, void(void *object, uint32_t flag));

constexpr uint32_t instance_size = 0x60;
constexpr uint32_t registry_kind = 2;
constexpr size_t scratch_object_size = 0x30;

}  // namespace

/**
 *
 * Registers a type with a vtable: it adds the type to the registry, initialises a scratch object,
 * then fills the static descriptor with its names, methods, vtable address point and size.
 *
 * The scratch object lives on the stack and is never read again. The function returns nothing.
 */
extern "C" void bb_misc_register_vtable_type_descriptor(void)
{
    fn_0081e9b0(type_registry.address(), first_name_text.address(), registry_source.address(), instance_size, 0,
                0, 0, 0, registry_table.address(), registry_kind, 0, 0, 0, 0);

    uint8_t scratch_object[scratch_object_size];
    fn_0085d9e0(scratch_object, 0);

    misc::TypeDescriptor &descriptor = type_descriptor.get();
    descriptor.first_name = first_name_text.address();
    descriptor.second_name = second_name_text.address();
    descriptor.first_method = first_method_entry.address();
    descriptor.second_method = second_method_entry.address();
    descriptor.vtable = object_vtable.address() + engine::vtable_address_point;
    descriptor.instance_size = instance_size;
}
