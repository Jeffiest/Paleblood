// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The static descriptor of one game type: its two names, its two methods, its vtable and its instance size.
 *
 */
struct TypeDescriptor {
    const char *first_name;   /**< Name written at 0x00. */
    const char *second_name;  /**< Name written at 0x08. */
    const void *first_method; /**< Method entry written at 0x10. */
    const void *second_method; /**< Method entry written at 0x18. */
    const void *vtable;       /**< Vtable address point written at 0x20. */
    uint64_t instance_size;   /**< Size of one instance, written at 0x28. */
};
static_assert(offsetof(TypeDescriptor, first_name) == 0x00);
static_assert(offsetof(TypeDescriptor, second_name) == 0x08);
static_assert(offsetof(TypeDescriptor, first_method) == 0x10);
static_assert(offsetof(TypeDescriptor, second_method) == 0x18);
static_assert(offsetof(TypeDescriptor, vtable) == 0x20);
static_assert(offsetof(TypeDescriptor, instance_size) == 0x28);
static_assert(sizeof(TypeDescriptor) == 0x30);

}  // namespace misc
