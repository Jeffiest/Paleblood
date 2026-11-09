// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"
#include "type_descriptor.h"

namespace {

// A member object that the game initialises with the empty template before the registration.
struct EmptyMember {
    uint8_t unknown_0x00[0x18];
};

// The static descriptor of the type, and the registry the descriptor is added to.
RT_GLOBAL(0x05844c90, type_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x05844c40, type_registry, uint8_t);
RT_GLOBAL(0x05843a40, registry_source, const uint8_t);
RT_GLOBAL(0x0566d7a0, registry_table, const uint8_t);
RT_GLOBAL(0x0566e7e0, descriptor_vtable, const uint8_t);
RT_GLOBAL(0x04bb51c4, first_name_text, const char);
RT_GLOBAL(0x04bb51de, second_name_text, const char);

// The two methods of the type, stored by address only.
RT_ORIGINAL(0x00bdd270, first_method_entry, void());
RT_ORIGINAL(0x00bdd2d0, second_method_entry, void());

// Adds the descriptor to the registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));
// Initialises one empty member object (the game's empty template, no effect).
RT_ORIGINAL(0x00836830, fn_00836830, void(EmptyMember *, uint32_t));

// The size of one instance of the type, and the registry's kind and flag words.
constexpr uint64_t instance_size = 0x80;
constexpr uint32_t registry_kind = 0xb;
constexpr uint32_t registry_flags = 2;
constexpr int empty_member_count = 5;

}  // namespace

/**
 *
 * Registers a static type descriptor: it adds the type to the registry, initialises five empty
 * member objects, then fills the descriptor with its names, methods, vtable address point and size.
 *
 */
extern "C" void bb_misc_register_type_descriptor(void)
{
    fn_0081e9b0(type_registry.address(), first_name_text.address(), registry_source.address(),
                static_cast<uint32_t>(instance_size), 0, 0, 0, 0, registry_table.address(), registry_kind, 0,
                0, 0, registry_flags);

    EmptyMember scratch[empty_member_count];
    for (EmptyMember &member : scratch) fn_00836830(&member, 0);

    misc::TypeDescriptor &descriptor = type_descriptor.get();
    descriptor.first_name = first_name_text.address();
    descriptor.second_name = second_name_text.address();
    descriptor.first_method = first_method_entry.address();
    descriptor.second_method = second_method_entry.address();
    descriptor.vtable = descriptor_vtable.address() + engine::vtable_address_point;
    descriptor.instance_size = instance_size;
}
