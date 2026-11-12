// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder of one registered range entry, which the registry hands back to be released.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct DisposableObject;
struct RangeHolder;
struct RangeIndex;

/**
 *
 * The range holder's virtual table: the release slot at +0x20 takes whether the entry was moved on.
 *
 */
struct RangeHolderVtable {
    uint8_t unknown_0x0000[0x20];                                    /**< Slots before the release slot. */
    void (*release_0x20)(RangeHolder *holder, bool moved_on);         /**< Release slot at 0x20. */
};
static_assert(offsetof(RangeHolderVtable, release_0x20) == 0x20);

/**
 *
 * A range holder: its virtual table first, then the disposable object it belongs to.
 *
 */
struct RangeHolder {
    const RangeHolderVtable *vtable;  /**< The holder's virtual table address point, set when it is built. */
    DisposableObject *owner_0x08;     /**< The object the holder was built for. */
};
static_assert(offsetof(RangeHolder, owner_0x08) == 0x08);

}  // namespace misc
