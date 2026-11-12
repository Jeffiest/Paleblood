// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that is disposed through its virtual table, and that holds a registered range entry.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct DisposableObject;

/** Bytes of the range key that the registry takes by address. */
constexpr size_t range_key_bytes = 0x8;
/** Bytes of the range value that the registry takes by address. */
constexpr size_t range_value_bytes = 0x10;

/**
 *
 * The disposable object's virtual table: the dispose slot at +0x38 runs first when the object is released.
 *
 */
struct DisposableObjectVtable {
    uint8_t unknown_0x0000[0x38];                          /**< Slots before the dispose slot. */
    void (*dispose_0x38)(DisposableObject *object);         /**< Dispose slot at 0x38. */
};
static_assert(offsetof(DisposableObjectVtable, dispose_0x38) == 0x38);

/**
 *
 * A disposable object: its virtual table first, the range key and value at 0xc8 and 0xd0, and a registration word at 0xe0.
 *
 */
struct DisposableObject {
    const DisposableObjectVtable *vtable;  /**< The object's virtual table address point. */
    uint8_t unknown_0x0008[0xc0];          /**< Not read by the release path. */
    uint8_t range_key[range_key_bytes];      /**< The range key, passed to the registry by address. */
    uint8_t range_value[range_value_bytes];  /**< The range value, passed to the registry by address. */
    uint64_t registration_0xe0;            /**< Zero when the object is not registered. */
};
static_assert(offsetof(DisposableObject, range_key) == 0xc8);
static_assert(offsetof(DisposableObject, range_value) == 0xd0);
static_assert(offsetof(DisposableObject, registration_0xe0) == 0xe0);

}  // namespace misc
