// SPDX-License-Identifier: GPL-2.0-or-later
// A source reader object: its vtable's read slot fills a destination buffer and reports the byte count.
#pragma once

#include <cstddef>
#include <cstdint>

struct SourceReaderObject;

/** The vtable of a source reader, whose read slot sits at 0x20. */
struct SourceReaderVtable {
    uint8_t unknown_0x0000[0x20];
    uint64_t (*read)(SourceReaderObject *reader, void *destination, uint64_t count); /**< Returns the bytes read. */
};
static_assert(offsetof(SourceReaderVtable, read) == 0x20);

/** A source reader whose first field is the pointer to its vtable. */
struct SourceReaderObject {
    const SourceReaderVtable *vtable; /**< The reader's vtable. */
};
static_assert(offsetof(SourceReaderObject, vtable) == 0x0);
