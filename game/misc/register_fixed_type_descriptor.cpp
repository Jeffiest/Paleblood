// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"
#include "type_descriptor.h"

namespace {

// The static descriptor of the type, and the registry the descriptor is added to.
RT_GLOBAL(0x0584b828, type_descriptor, misc::TypeDescriptor);
RT_GLOBAL(0x0584b7d8, type_registry, uint8_t);
RT_GLOBAL(0x05677380, registry_table, const uint8_t);
RT_GLOBAL(0x04bc2cff, first_name_text, const char);
RT_GLOBAL(0x04bc2d12, second_name_text, const char);
RT_GLOBAL(0x02fdc2f4, registry_extra, const uint8_t);

// The two methods of the type, stored by address only.
RT_ORIGINAL(0x00cdce30, first_method_entry, void());
RT_ORIGINAL(0x00cdce40, second_method_entry, void());

// Adds the descriptor to the registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The size of one instance of the type, and the registry's table slot word.
constexpr uint32_t instance_size = 4;
constexpr uint32_t registry_slot = 1;

}  // namespace

/**
 *
 * Registers the fixed type descriptor with the registry, then fills it with its names, its two
 * methods, an empty vtable address and its instance size. The descriptor's address is returned,
 * as the original leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_register_fixed_type_descriptor(void)
{
    fn_0081e9b0(type_registry.address(), first_name_text.address(), nullptr, instance_size, 0, 0, 0, 0,
                registry_table.address(), registry_slot, reinterpret_cast<uint64_t>(registry_extra.address()),
                0, 0, 0);

    misc::TypeDescriptor &descriptor = type_descriptor.get();
    descriptor.first_name = first_name_text.address();
    descriptor.second_name = second_name_text.address();
    descriptor.first_method = first_method_entry.address();
    descriptor.second_method = second_method_entry.address();
    descriptor.vtable = nullptr;
    descriptor.instance_size = instance_size;
    return reinterpret_cast<uint64_t>(type_descriptor.address());
}
