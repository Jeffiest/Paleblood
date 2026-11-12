// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the list member a pair build fills in, the descriptor it hands to the pair's target, and the member the target makes.
#pragma once

#include <cstddef>
#include <cstdint>

#include "list_member.h"

namespace misc {

struct MemberBuildProvided;
struct MemberBuildHeld;
struct BuiltMember;

/**
 *
 * The count object a built member's handle points at: its count word sits at +0x08 and is taken down on release.
 *
 */
struct MemberBuildCounted {
    uint8_t unknown_0x0000[0x8];
    int32_t count;      /**< The number of holders; the object is released when one holder lets go of the last count. */
};
static_assert(offsetof(MemberBuildCounted, count) == 0x08);

/**
 *
 * The descriptor the pair's target reads: a kind, the provider's word, two flags set to one, the route word, the
 * pair word, the source word and a zero word.
 *
 */
struct MemberBuildDescriptor {
    uint32_t kind;              /**< The kind the target reads first: two. */
    uint8_t unknown_0x0004[0x4];
    uint64_t provided_word;     /**< The word the provider gives back. */
    uint32_t first_flag;        /**< A flag the target reads, set to one. */
    uint32_t second_flag;       /**< A second flag the target reads, set to one. */
    uint64_t route_word;        /**< The route's word, or the dispatch result when the route word is zero. */
    uint64_t pair_word;         /**< The pair's head word. */
    uint64_t source_word;       /**< The source's value word. */
    uint64_t zero_word;         /**< A word the target reads as zero. */
};
static_assert(offsetof(MemberBuildDescriptor, provided_word) == 0x08);
static_assert(offsetof(MemberBuildDescriptor, first_flag) == 0x10);
static_assert(offsetof(MemberBuildDescriptor, route_word) == 0x18);
static_assert(offsetof(MemberBuildDescriptor, source_word) == 0x28);
static_assert(offsetof(MemberBuildDescriptor, zero_word) == 0x30);

/**
 *
 * The vtable of a built member, of which only the bind slot is used.
 *
 */
struct BuiltMemberVtable {
    uint8_t unknown_0x0000[0x10];
    void (*bind)(BuiltMember *self, MemberBuildProvided *provided); /**< Slot at 0x10: binds the member to the provided object. */
};
static_assert(offsetof(BuiltMemberVtable, bind) == 0x10);

/**
 *
 * A member the pair's target makes: its vtable pointer, which is the only word read here.
 *
 */
struct BuiltMember {
    const BuiltMemberVtable *vtable; /**< Dispatch table of the built member. */
};

static_assert(sizeof(ListMember) == 0x20, "the list member base is 0x20 bytes, so the fields below start at 0x20");

/**
 *
 * The list member a pair build fills in: the list member fields, then the cleared word, the tag, the built member,
 * the provided object, the held object, the flag, the extra pointer and the count cell.
 *
 */
struct MemberBuildObject : ListMember {
    uint64_t cleared;                   /**< Zeroed when the member is built. */
    uint32_t tag;                       /**< The tag the pair's target is handed the address of. */
    uint8_t unknown_0x002c[0x4];
    BuiltMember *built;                 /**< The member the pair's target made; released when replaced. */
    MemberBuildProvided *provided;      /**< The provided object, which takes a reference. */
    MemberBuildHeld *held;              /**< The held object the provided object points at. */
    bool flag;                          /**< Set when the held object reports bit four. */
    uint8_t unknown_0x0049[0x7];
    void *extra;                        /**< The extra pointer the build is given. */
    uint64_t *cell;                     /**< The eight-byte cell from the scratch service, or null. */
};

}  // namespace misc
