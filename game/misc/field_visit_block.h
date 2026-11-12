// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a block of three visited fields and five member objects, each walked through a virtual table by a visitor.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct FieldVisitor;
struct FieldVisitMember;

/**
 *
 * The virtual table of a field visitor: slot 0x20 receives one field of the block and its size.
 *
 */
struct FieldVisitorVtable {
    uint8_t unknown_0x0000[0x20];
    void (*visit_field_0x20)(FieldVisitor *visitor, uint32_t *field, uint32_t size); /**< Visits one field. */
};
static_assert(offsetof(FieldVisitorVtable, visit_field_0x20) == 0x20);

/**
 *
 * A visitor that walks a block: its virtual table is the first word of the visitor.
 *
 */
struct FieldVisitor {
    const FieldVisitorVtable *vtable; /**< The visitor's virtual table. */
};
static_assert(offsetof(FieldVisitor, vtable) == 0x0);

/**
 *
 * The virtual table of a member object: three slots each take the member and the visitor it is walked with.
 *
 */
struct FieldVisitMemberVtable {
    uint64_t (*visit_0x00)(FieldVisitMember *member, FieldVisitor *visitor); /**< Slot 0x00. */
    uint64_t (*visit_0x08)(FieldVisitMember *member, FieldVisitor *visitor); /**< Slot 0x08. */
    uint64_t (*visit_0x10)(FieldVisitMember *member, FieldVisitor *visitor); /**< Slot 0x10. */
};
static_assert(offsetof(FieldVisitMemberVtable, visit_0x00) == 0x0);
static_assert(offsetof(FieldVisitMemberVtable, visit_0x08) == 0x8);
static_assert(offsetof(FieldVisitMemberVtable, visit_0x10) == 0x10);

/**
 *
 * A member object of a field block: a virtual table pointer and eight bytes the walk does not read.
 *
 */
struct FieldVisitMember {
    const FieldVisitMemberVtable *vtable; /**< The member's virtual table. */
    uint8_t unknown_0x0008[0x08];
};
static_assert(offsetof(FieldVisitMember, vtable) == 0x0);
static_assert(sizeof(FieldVisitMember) == 0x10);

/**
 *
 * A block of three 32-bit fields followed by five member objects, which a visitor walks in order.
 *
 */
struct FieldVisitBlock {
    uint8_t unknown_0x0000[0x18];
    uint32_t first_field;           /**< Visited first. */
    uint32_t second_field;          /**< Visited second. */
    uint8_t unknown_0x0020[0x08];
    uint32_t third_field;           /**< Visited third. */
    uint8_t unknown_0x002c[0x04];
    FieldVisitMember member_a;      /**< The first member object. */
    FieldVisitMember member_b;      /**< The second member object. */
    FieldVisitMember member_c;      /**< The third member object. */
    FieldVisitMember member_d;      /**< The fourth member object. */
    FieldVisitMember tail_member;   /**< The member the walk ends with. */
};
static_assert(offsetof(FieldVisitBlock, first_field) == 0x18 && offsetof(FieldVisitBlock, third_field) == 0x28);
static_assert(offsetof(FieldVisitBlock, member_a) == 0x30 && offsetof(FieldVisitBlock, member_d) == 0x60);
static_assert(offsetof(FieldVisitBlock, tail_member) == 0x70);
static_assert(sizeof(FieldVisitBlock) == 0x80);

}  // namespace misc
