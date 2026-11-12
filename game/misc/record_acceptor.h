// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "attached_record.h"

namespace misc {

struct RecordAcceptor;

/**
 *
 * The acceptor's vtable. Its accept slot at 0x78 decides whether it takes a record and returns the decision in AL.
 *
 */
struct RecordAcceptorVtable {
    uint8_t unknown_0x0000[0x78];                                              /**< Slots before the accept slot. */
    bool (*accept)(RecordAcceptor *acceptor, AttachedRecord *record, bool first); /**< Accept slot at 0x78. */
};
static_assert(offsetof(RecordAcceptorVtable, accept) == 0x78);

/**
 *
 * An object that accepts or refuses an attached record; its vtable is first.
 *
 */
struct RecordAcceptor {
    const RecordAcceptorVtable *vtable; /**< The acceptor's vtable, set when it is built. */
};

}  // namespace misc
