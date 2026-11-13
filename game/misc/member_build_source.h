// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the source a pair build reads: its pair, its route and its value, and the pair's target that makes the member.
#pragma once

#include <cstddef>
#include <cstdint>

#include "member_build_object.h"

namespace misc {

/**
 *
 * The route a source carries: a word at +0x18 that the build reads first.
 *
 */
struct MemberBuildRoute {
    uint8_t unknown_0x0000[0x18];
    uint64_t value;     /**< The route's word, zero when the route has no value. */
};
static_assert(offsetof(MemberBuildRoute, value) == 0x18);

/**
 *
 * The target a pair hands the member to: its vtable slot at 0x18 makes the built member.
 *
 */
struct MemberBuildPairTarget;

struct MemberBuildPairTargetVtable {
    uint8_t unknown_0x0000[0x18];
    BuiltMember *(*make)(MemberBuildPairTarget *self, void *tag, uint64_t key, MemberBuildDescriptor *descriptor); /**< Slot at 0x18. */
};
static_assert(offsetof(MemberBuildPairTargetVtable, make) == 0x18);

/** The target of a pair: its vtable pointer, which is the only word read here. */
struct MemberBuildPairTarget {
    const MemberBuildPairTargetVtable *vtable; /**< Dispatch table of the target. */
};

/**
 *
 * The pair a source reads: a head word at +0x10, a key at +0x20, and the target at +0x48.
 *
 */
struct MemberBuildPair {
    uint8_t unknown_0x0000[0x10];
    uint64_t head;                  /**< The head word the descriptor carries. */
    uint8_t unknown_0x0018[0x8];
    uint64_t key;                   /**< The key the target is handed. */
    uint8_t unknown_0x0028[0x20];
    MemberBuildPairTarget *target;  /**< The target that makes the member, or null. */
};
static_assert(offsetof(MemberBuildPair, head) == 0x10);
static_assert(offsetof(MemberBuildPair, key) == 0x20);
static_assert(offsetof(MemberBuildPair, target) == 0x48);

/**
 *
 * The source of a pair build: the pair at +0x10, the route at +0x18, and the value at +0x38.
 *
 */
struct MemberBuildSource {
    uint8_t unknown_0x0000[0x10];
    MemberBuildPair *pair;          /**< The pair the build reads. */
    MemberBuildRoute *route;        /**< The route the build reads, or null. */
    uint8_t unknown_0x0020[0x18];
    uint64_t value;                 /**< The value the descriptor carries. */
};
static_assert(offsetof(MemberBuildSource, pair) == 0x10);
static_assert(offsetof(MemberBuildSource, route) == 0x18);
static_assert(offsetof(MemberBuildSource, value) == 0x38);

}  // namespace misc
