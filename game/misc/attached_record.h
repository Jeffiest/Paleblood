// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct RecordAttachOwner;

/** Size in bytes of an attached record. */
constexpr size_t attached_record_size = 0x70;

/**
 *
 * A record that an owner holds once an acceptor has taken it. Its vtable is first, then its name, the owner
 * it was attached to, a callback entry and two zero words.
 *
 */
struct AttachedRecord {
    const void *vtable;                 /**< The record's vtable address point, set when it is built. */
    uint8_t unknown_0x08[0x40];         /**< Not written by the attach path. */
    const char *name_0x48;              /**< The record's name, set when it is built. */
    RecordAttachOwner *owner_0x50;      /**< The owner the record is attached to. */
    const void *callback_0x58;          /**< The callback entry the record stores. */
    uint64_t zero_0x60;                 /**< Zeroed when the record is built. */
    uint32_t zero_0x68;                 /**< Zeroed when the record is built. */
    uint8_t unknown_0x6c[0x4];          /**< Not written by the attach path. */
};
static_assert(sizeof(AttachedRecord) == attached_record_size);
static_assert(offsetof(AttachedRecord, owner_0x50) == 0x50);

}  // namespace misc
