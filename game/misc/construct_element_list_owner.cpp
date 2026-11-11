// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: constructs an element list owner: sets its vtable, empties both lists and records the shared allocator for each array.
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/block_holder.h"
#include "../engine/engine.h"
#include "element_list_owner.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x04b37dc0, allocator_info_message, const char);
constexpr int32_t line_allocator_info = 0x3e;

/**
 *
 * Checks that an allocator reports itself valid, and reports a fatal error when it does not, then carries on.
 *
 */
void require_valid_allocator(engine::Allocator *allocator)
{
    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, line_allocator_info, allocator_info_message.address());
    }
}

}  // namespace

/**
 *
 * Constructs an element list owner: stores its vtable, empties both lists, and stores the shared allocator for each array.
 *
 * The shared allocator is read and checked once for each array, so a second read follows the first check. Nothing is returned.
 *
 */
extern "C" void bb_misc_construct_element_list_owner(misc::ElementListOwner *owner)
{
    owner->vtable = misc::element_list_owner_vtable.address();

    engine::Allocator *first_allocator = engine::shared_allocator.get();
    require_valid_allocator(first_allocator);
    owner->first_capacity_0x20 = nullptr;
    owner->first_end_0x18 = nullptr;
    owner->first_begin_0x10 = nullptr;
    owner->first_allocator_0x28 = first_allocator;

    engine::Allocator *second_allocator = engine::shared_allocator.get();
    require_valid_allocator(second_allocator);
    owner->second_capacity_0x48 = nullptr;
    owner->second_end_0x40 = nullptr;
    owner->second_begin_0x38 = nullptr;
    owner->second_allocator_0x50 = second_allocator;
}
