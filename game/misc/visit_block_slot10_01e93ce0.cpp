// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: walks a field block with a visitor: three fields, four member objects through their third slot, then tail-calls the tail member's third slot.
#include <cstdint>

#include "field_visit_block.h"

namespace {

/** The size the visitor is told each field has. */
constexpr uint32_t field_visit_size = 4;

}  // namespace

/**
 *
 * Walks a field block with a visitor: passes its three fields to the visitor's field slot, calls the third slot of each of
 * its four member objects with the visitor, then returns the result of the third slot of the tail member, called with the
 * visitor in the same way.
 *
 * The four member calls ignore their results. The tail result is returned as the whole of RAX.
 *
 */
extern "C" uint64_t bb_misc_visit_block_slot10_01e93ce0(misc::FieldVisitBlock *block, misc::FieldVisitor *visitor)
{
    visitor->vtable->visit_field_0x20(visitor, &block->first_field, field_visit_size);
    visitor->vtable->visit_field_0x20(visitor, &block->second_field, field_visit_size);
    visitor->vtable->visit_field_0x20(visitor, &block->third_field, field_visit_size);
    block->member_a.vtable->visit_0x10(&block->member_a, visitor);
    block->member_b.vtable->visit_0x10(&block->member_b, visitor);
    block->member_c.vtable->visit_0x10(&block->member_c, visitor);
    block->member_d.vtable->visit_0x10(&block->member_d, visitor);
    return block->tail_member.vtable->visit_0x10(&block->tail_member, visitor);
}
