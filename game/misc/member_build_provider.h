// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the provider a pair build takes its provided object from, and the held object that object points at.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct MemberBuildProvider;
struct MemberBuildHeld;

/**
 *
 * The vtable of a provider, of which only the slot at 0x98 is used: it gives back a word.
 *
 */
struct MemberBuildProviderVtable {
    uint8_t unknown_0x0000[0x98];
    uint64_t (*word)(MemberBuildProvider *self); /**< Slot at 0x98: returns the provider's word. */
};
static_assert(offsetof(MemberBuildProviderVtable, word) == 0x98);

/**
 *
 * The provider: its vtable pointer, and the provided object at +0x48.
 *
 */
struct MemberBuildProvider {
    const MemberBuildProviderVtable *vtable; /**< Dispatch table of the provider. */
    uint8_t unknown_0x0008[0x40];
    struct MemberBuildProvided *provided;    /**< The provided object, which takes a reference. */
};
static_assert(offsetof(MemberBuildProvider, provided) == 0x48);

/**
 *
 * The provided object: the held object at +0x18.
 *
 */
struct MemberBuildProvided {
    uint8_t unknown_0x0000[0x18];
    MemberBuildHeld *held;      /**< The held object, which reports a flag word. */
};
static_assert(offsetof(MemberBuildProvided, held) == 0x18);

/**
 *
 * The vtable of a held object, of which only the slot at 0xa0 is used: it reports a flag byte.
 *
 */
struct MemberBuildHeldVtable {
    uint8_t unknown_0x0000[0xa0];
    uint8_t (*report)(MemberBuildHeld *self); /**< Slot at 0xa0: returns the flag byte. */
};
static_assert(offsetof(MemberBuildHeldVtable, report) == 0xa0);

/** The held object: its vtable pointer, which is the only word read here. */
struct MemberBuildHeld {
    const MemberBuildHeldVtable *vtable; /**< Dispatch table of the held object. */
};

}  // namespace misc
