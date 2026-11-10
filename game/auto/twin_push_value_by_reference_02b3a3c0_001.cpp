// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_push_value_by_reference, in game/misc/push_value_by_reference.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/value_owner.h"
#include <cstdint>
#include "runtime/original.h"

// auto_push_value_by_reference_016a5050: misc_push_value_by_reference with other addresses.
namespace twin_016a5050 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x016a5130, fn_016a5130, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_016a5130(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_016a5050(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_016a5050

// auto_push_value_by_reference_016b0c80: misc_push_value_by_reference with other addresses.
namespace twin_016b0c80 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x016b1290, fn_016b1290, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_016b1290(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_016b0c80(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_016b0c80

// auto_push_value_by_reference_016d1ee0: misc_push_value_by_reference with other addresses.
namespace twin_016d1ee0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x016d1fc0, fn_016d1fc0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_016d1fc0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_016d1ee0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_016d1ee0

// auto_push_value_by_reference_016d9e90: misc_push_value_by_reference with other addresses.
namespace twin_016d9e90 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x016d9f70, fn_016d9f70, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_016d9f70(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_016d9e90(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_016d9e90

// auto_push_value_by_reference_016e0880: misc_push_value_by_reference with other addresses.
namespace twin_016e0880 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x016e1490, fn_016e1490, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_016e1490(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_016e0880(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_016e0880

// auto_push_value_by_reference_0179c2d0: misc_push_value_by_reference with other addresses.
namespace twin_0179c2d0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0179c3b0, fn_0179c3b0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0179c3b0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0179c2d0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0179c2d0

// auto_push_value_by_reference_0179fcb0: misc_push_value_by_reference with other addresses.
namespace twin_0179fcb0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0179fd90, fn_0179fd90, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0179fd90(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0179fcb0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0179fcb0

// auto_push_value_by_reference_01860dc0: misc_push_value_by_reference with other addresses.
namespace twin_01860dc0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x018615f0, fn_018615f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_018615f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_01860dc0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_01860dc0

// auto_push_value_by_reference_0187e030: misc_push_value_by_reference with other addresses.
namespace twin_0187e030 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0187df30, fn_0187df30, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0187df30(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0187e030(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0187e030

// auto_push_value_by_reference_0189a450: misc_push_value_by_reference with other addresses.
namespace twin_0189a450 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0189a350, fn_0189a350, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0189a350(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0189a450(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0189a450

// auto_push_value_by_reference_0189a530: misc_push_value_by_reference with other addresses.
namespace twin_0189a530 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0189a350, fn_0189a350, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0189a350(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0189a530(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0189a530

// auto_push_value_by_reference_0189e890: misc_push_value_by_reference with other addresses.
namespace twin_0189e890 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0189e790, fn_0189e790, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0189e790(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0189e890(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0189e890

// auto_push_value_by_reference_018bf3c0: misc_push_value_by_reference with other addresses.
namespace twin_018bf3c0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x018bf2c0, fn_018bf2c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_018bf2c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_018bf3c0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_018bf3c0

// auto_push_value_by_reference_019048a0: misc_push_value_by_reference with other addresses.
namespace twin_019048a0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x01904bb0, fn_01904bb0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_01904bb0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_019048a0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_019048a0

// auto_push_value_by_reference_0193ec80: misc_push_value_by_reference with other addresses.
namespace twin_0193ec80 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0193ed60, fn_0193ed60, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0193ed60(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0193ec80(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0193ec80

// auto_push_value_by_reference_01b3bbb0: misc_push_value_by_reference with other addresses.
namespace twin_01b3bbb0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x01b3bf60, fn_01b3bf60, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_01b3bf60(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_01b3bbb0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_01b3bbb0

// auto_push_value_by_reference_01b3bc90: misc_push_value_by_reference with other addresses.
namespace twin_01b3bc90 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x01b3c060, fn_01b3c060, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_01b3c060(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_01b3bc90(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_01b3bc90

// auto_push_value_by_reference_01c42880: misc_push_value_by_reference with other addresses.
namespace twin_01c42880 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x01c42780, fn_01c42780, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_01c42780(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_01c42880(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_01c42880

// auto_push_value_by_reference_01c62780: misc_push_value_by_reference with other addresses.
namespace twin_01c62780 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x01c62b70, fn_01c62b70, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_01c62b70(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_01c62780(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_01c62780

// auto_push_value_by_reference_01ceb3b0: misc_push_value_by_reference with other addresses.
namespace twin_01ceb3b0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x01ceb6a0, fn_01ceb6a0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_01ceb6a0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_01ceb3b0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_01ceb3b0

// auto_push_value_by_reference_01e8d1a0: misc_push_value_by_reference with other addresses.
namespace twin_01e8d1a0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x01e8d280, fn_01e8d280, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_01e8d280(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_01e8d1a0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_01e8d1a0

// auto_push_value_by_reference_0215ea10: misc_push_value_by_reference with other addresses.
namespace twin_0215ea10 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0215f2f0, fn_0215f2f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0215f2f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0215ea10(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0215ea10

// auto_push_value_by_reference_0223b420: misc_push_value_by_reference with other addresses.
namespace twin_0223b420 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0223b500, fn_0223b500, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0223b500(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0223b420(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0223b420

// auto_push_value_by_reference_02255a70: misc_push_value_by_reference with other addresses.
namespace twin_02255a70 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02255b50, fn_02255b50, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02255b50(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02255a70(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02255a70

// auto_push_value_by_reference_02266a70: misc_push_value_by_reference with other addresses.
namespace twin_02266a70 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02266eb0, fn_02266eb0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02266eb0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02266a70(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02266a70

// auto_push_value_by_reference_02266b50: misc_push_value_by_reference with other addresses.
namespace twin_02266b50 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02266fb0, fn_02266fb0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02266fb0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02266b50(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02266b50

// auto_push_value_by_reference_02273a10: misc_push_value_by_reference with other addresses.
namespace twin_02273a10 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02273af0, fn_02273af0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02273af0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02273a10(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02273a10

// auto_push_value_by_reference_022ab310: misc_push_value_by_reference with other addresses.
namespace twin_022ab310 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x022b03e0, fn_022b03e0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_022b03e0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_022ab310(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_022ab310

// auto_push_value_by_reference_022ac430: misc_push_value_by_reference with other addresses.
namespace twin_022ac430 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x022b0720, fn_022b0720, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_022b0720(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_022ac430(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_022ac430

// auto_push_value_by_reference_02463460: misc_push_value_by_reference with other addresses.
namespace twin_02463460 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02463540, fn_02463540, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02463540(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02463460(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02463460

// auto_push_value_by_reference_024708f0: misc_push_value_by_reference with other addresses.
namespace twin_024708f0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02471310, fn_02471310, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02471310(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_024708f0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_024708f0

// auto_push_value_by_reference_024709d0: misc_push_value_by_reference with other addresses.
namespace twin_024709d0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02471410, fn_02471410, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02471410(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_024709d0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_024709d0

// auto_push_value_by_reference_024fa490: misc_push_value_by_reference with other addresses.
namespace twin_024fa490 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x024fa650, fn_024fa650, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_024fa650(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_024fa490(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_024fa490

// auto_push_value_by_reference_024fa570: misc_push_value_by_reference with other addresses.
namespace twin_024fa570 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x024fa750, fn_024fa750, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_024fa750(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_024fa570(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_024fa570

// auto_push_value_by_reference_0254d640: misc_push_value_by_reference with other addresses.
namespace twin_0254d640 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0254d870, fn_0254d870, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0254d870(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0254d640(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0254d640

// auto_push_value_by_reference_025593a0: misc_push_value_by_reference with other addresses.
namespace twin_025593a0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02559480, fn_02559480, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02559480(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_025593a0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_025593a0

// auto_push_value_by_reference_025c4550: misc_push_value_by_reference with other addresses.
namespace twin_025c4550 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x025c4630, fn_025c4630, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_025c4630(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_025c4550(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_025c4550

// auto_push_value_by_reference_0260f940: misc_push_value_by_reference with other addresses.
namespace twin_0260f940 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0260fdf0, fn_0260fdf0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0260fdf0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0260f940(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0260f940

// auto_push_value_by_reference_0265c0f0: misc_push_value_by_reference with other addresses.
namespace twin_0265c0f0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0265c6a0, fn_0265c6a0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0265c6a0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0265c0f0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0265c0f0

// auto_push_value_by_reference_0265c860: misc_push_value_by_reference with other addresses.
namespace twin_0265c860 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x0265e210, fn_0265e210, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_0265e210(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_0265c860(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_0265c860

// auto_push_value_by_reference_02682310: misc_push_value_by_reference with other addresses.
namespace twin_02682310 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02682520, fn_02682520, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02682520(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02682310(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02682310

// auto_push_value_by_reference_02686b10: misc_push_value_by_reference with other addresses.
namespace twin_02686b10 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02686cd0, fn_02686cd0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02686cd0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02686b10(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02686b10

// auto_push_value_by_reference_02686bf0: misc_push_value_by_reference with other addresses.
namespace twin_02686bf0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02686dd0, fn_02686dd0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02686dd0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02686bf0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02686bf0

// auto_push_value_by_reference_026bc560: misc_push_value_by_reference with other addresses.
namespace twin_026bc560 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x026c07c0, fn_026c07c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_026c07c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_026bc560(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_026bc560

// auto_push_value_by_reference_026bc640: misc_push_value_by_reference with other addresses.
namespace twin_026bc640 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x026c08c0, fn_026c08c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_026c08c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_026bc640(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_026bc640

// auto_push_value_by_reference_026f47c0: misc_push_value_by_reference with other addresses.
namespace twin_026f47c0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x026f4c50, fn_026f4c50, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_026f4c50(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_026f47c0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_026f47c0

// auto_push_value_by_reference_02705560: misc_push_value_by_reference with other addresses.
namespace twin_02705560 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02706ac0, fn_02706ac0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02706ac0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02705560(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02705560

// auto_push_value_by_reference_02705dd0: misc_push_value_by_reference with other addresses.
namespace twin_02705dd0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02707280, fn_02707280, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02707280(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02705dd0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02705dd0

// auto_push_value_by_reference_027071a0: misc_push_value_by_reference with other addresses.
namespace twin_027071a0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x027077a0, fn_027077a0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_027077a0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_027071a0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_027071a0

// auto_push_value_by_reference_02a451a0: misc_push_value_by_reference with other addresses.
namespace twin_02a451a0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02a46410, fn_02a46410, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02a46410(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02a451a0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02a451a0

// auto_push_value_by_reference_02a6b340: misc_push_value_by_reference with other addresses.
namespace twin_02a6b340 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02a6b420, fn_02a6b420, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02a6b420(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02a6b340(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02a6b340

// auto_push_value_by_reference_02a6c360: misc_push_value_by_reference with other addresses.
namespace twin_02a6c360 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02a6f3d0, fn_02a6f3d0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02a6f3d0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02a6c360(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02a6c360

// auto_push_value_by_reference_02a6c690: misc_push_value_by_reference with other addresses.
namespace twin_02a6c690 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02a6f3d0, fn_02a6f3d0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02a6f3d0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02a6c690(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02a6c690

// auto_push_value_by_reference_02a6e880: misc_push_value_by_reference with other addresses.
namespace twin_02a6e880 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02a6e960, fn_02a6e960, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02a6e960(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02a6e880(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02a6e880

// auto_push_value_by_reference_02a76110: misc_push_value_by_reference with other addresses.
namespace twin_02a76110 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02a76a30, fn_02a76a30, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02a76a30(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02a76110(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02a76110

// auto_push_value_by_reference_02a77a80: misc_push_value_by_reference with other addresses.
namespace twin_02a77a80 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02a78620, fn_02a78620, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02a78620(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02a77a80(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02a77a80

// auto_push_value_by_reference_02a8c9c0: misc_push_value_by_reference with other addresses.
namespace twin_02a8c9c0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02a8e840, fn_02a8e840, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02a8e840(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02a8c9c0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02a8c9c0

// auto_push_value_by_reference_02a92fd0: misc_push_value_by_reference with other addresses.
namespace twin_02a92fd0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02a930b0, fn_02a930b0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02a930b0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02a92fd0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02a92fd0

// auto_push_value_by_reference_02aa2e10: misc_push_value_by_reference with other addresses.
namespace twin_02aa2e10 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02aa3430, fn_02aa3430, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02aa3430(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02aa2e10(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02aa2e10

// auto_push_value_by_reference_02b15b40: misc_push_value_by_reference with other addresses.
namespace twin_02b15b40 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b15c20, fn_02b15c20, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b15c20(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b15b40(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b15b40

// auto_push_value_by_reference_02b17680: misc_push_value_by_reference with other addresses.
namespace twin_02b17680 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b17760, fn_02b17760, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b17760(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b17680(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b17680

// auto_push_value_by_reference_02b18970: misc_push_value_by_reference with other addresses.
namespace twin_02b18970 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b18a60, fn_02b18a60, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b18a60(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b18970(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b18970

// auto_push_value_by_reference_02b1c050: misc_push_value_by_reference with other addresses.
namespace twin_02b1c050 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b1c130, fn_02b1c130, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b1c130(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b1c050(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b1c050

// auto_push_value_by_reference_02b22010: misc_push_value_by_reference with other addresses.
namespace twin_02b22010 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b220f0, fn_02b220f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b220f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b22010(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b22010

// auto_push_value_by_reference_02b267d0: misc_push_value_by_reference with other addresses.
namespace twin_02b267d0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b26b10, fn_02b26b10, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b26b10(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b267d0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b267d0

// auto_push_value_by_reference_02b29eb0: misc_push_value_by_reference with other addresses.
namespace twin_02b29eb0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b2a280, fn_02b2a280, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b2a280(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b29eb0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b29eb0

// auto_push_value_by_reference_02b2dce0: misc_push_value_by_reference with other addresses.
namespace twin_02b2dce0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b2e010, fn_02b2e010, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b2e010(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b2dce0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b2dce0

// auto_push_value_by_reference_02b2e110: misc_push_value_by_reference with other addresses.
namespace twin_02b2e110 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b2e1f0, fn_02b2e1f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b2e1f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b2e110(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b2e110

// auto_push_value_by_reference_02b2e390: misc_push_value_by_reference with other addresses.
namespace twin_02b2e390 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b2e590, fn_02b2e590, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b2e590(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b2e390(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b2e390

// auto_push_value_by_reference_02b30330: misc_push_value_by_reference with other addresses.
namespace twin_02b30330 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b30c50, fn_02b30c50, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b30c50(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b30330(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b30330

// auto_push_value_by_reference_02b32310: misc_push_value_by_reference with other addresses.
namespace twin_02b32310 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b32400, fn_02b32400, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b32400(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b32310(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b32310

// auto_push_value_by_reference_02b32500: misc_push_value_by_reference with other addresses.
namespace twin_02b32500 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b325f0, fn_02b325f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b325f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b32500(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b32500

// auto_push_value_by_reference_02b33ed0: misc_push_value_by_reference with other addresses.
namespace twin_02b33ed0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b33fc0, fn_02b33fc0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b33fc0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b33ed0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b33ed0

// auto_push_value_by_reference_02b34780: misc_push_value_by_reference with other addresses.
namespace twin_02b34780 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b34ac0, fn_02b34ac0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b34ac0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b34780(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b34780

// auto_push_value_by_reference_02b38c10: misc_push_value_by_reference with other addresses.
namespace twin_02b38c10 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b3ae50, fn_02b3ae50, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b3ae50(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b38c10(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b38c10

// auto_push_value_by_reference_02b55040: misc_push_value_by_reference with other addresses.
namespace twin_02b55040 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b5c400, fn_02b5c400, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b5c400(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b55040(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b55040

// auto_push_value_by_reference_02b56440: misc_push_value_by_reference with other addresses.
namespace twin_02b56440 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b5ae80, fn_02b5ae80, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b5ae80(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b56440(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b56440

// auto_push_value_by_reference_02b9e290: misc_push_value_by_reference with other addresses.
namespace twin_02b9e290 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b9f980, fn_02b9f980, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b9f980(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b9e290(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b9e290

// auto_push_value_by_reference_02b9e370: misc_push_value_by_reference with other addresses.
namespace twin_02b9e370 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b9f870, fn_02b9f870, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b9f870(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02b9e370(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02b9e370

// auto_push_value_by_reference_02ba2c00: misc_push_value_by_reference with other addresses.
namespace twin_02ba2c00 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ba3260, fn_02ba3260, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ba3260(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ba2c00(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ba2c00

// auto_push_value_by_reference_02ba8070: misc_push_value_by_reference with other addresses.
namespace twin_02ba8070 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ba85a0, fn_02ba85a0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ba85a0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ba8070(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ba8070

// auto_push_value_by_reference_02bba920: misc_push_value_by_reference with other addresses.
namespace twin_02bba920 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bbb730, fn_02bbb730, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bbb730(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bba920(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bba920

// auto_push_value_by_reference_02bc0ed0: misc_push_value_by_reference with other addresses.
namespace twin_02bc0ed0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bc2580, fn_02bc2580, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bc2580(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bc0ed0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bc0ed0

// auto_push_value_by_reference_02bc0fb0: misc_push_value_by_reference with other addresses.
namespace twin_02bc0fb0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bc2480, fn_02bc2480, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bc2480(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bc0fb0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bc0fb0

// auto_push_value_by_reference_02bc1940: misc_push_value_by_reference with other addresses.
namespace twin_02bc1940 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bc2280, fn_02bc2280, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bc2280(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bc1940(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bc1940

// auto_push_value_by_reference_02bc6090: misc_push_value_by_reference with other addresses.
namespace twin_02bc6090 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bc6170, fn_02bc6170, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bc6170(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bc6090(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bc6090

// auto_push_value_by_reference_02bc6770: misc_push_value_by_reference with other addresses.
namespace twin_02bc6770 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bc6850, fn_02bc6850, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bc6850(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bc6770(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bc6770

// auto_push_value_by_reference_02bc6e90: misc_push_value_by_reference with other addresses.
namespace twin_02bc6e90 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bc73d0, fn_02bc73d0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bc73d0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bc6e90(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bc6e90

// auto_push_value_by_reference_02bc6f70: misc_push_value_by_reference with other addresses.
namespace twin_02bc6f70 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bc72c0, fn_02bc72c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bc72c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bc6f70(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bc6f70

// auto_push_value_by_reference_02bca980: misc_push_value_by_reference with other addresses.
namespace twin_02bca980 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bcaa60, fn_02bcaa60, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bcaa60(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bca980(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bca980

// auto_push_value_by_reference_02bcac20: misc_push_value_by_reference with other addresses.
namespace twin_02bcac20 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bcad00, fn_02bcad00, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bcad00(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bcac20(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bcac20

// auto_push_value_by_reference_02bcb0f0: misc_push_value_by_reference with other addresses.
namespace twin_02bcb0f0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bcb1d0, fn_02bcb1d0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bcb1d0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bcb0f0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bcb0f0

// auto_push_value_by_reference_02bda440: misc_push_value_by_reference with other addresses.
namespace twin_02bda440 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bda710, fn_02bda710, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bda710(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bda440(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bda440

// auto_push_value_by_reference_02bdf5f0: misc_push_value_by_reference with other addresses.
namespace twin_02bdf5f0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bdfa20, fn_02bdfa20, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bdfa20(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bdf5f0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bdf5f0

// auto_push_value_by_reference_02be1770: misc_push_value_by_reference with other addresses.
namespace twin_02be1770 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02be1af0, fn_02be1af0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02be1af0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02be1770(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02be1770

// auto_push_value_by_reference_02be1850: misc_push_value_by_reference with other addresses.
namespace twin_02be1850 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02be19f0, fn_02be19f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02be19f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02be1850(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02be1850

// auto_push_value_by_reference_02bf2ee0: misc_push_value_by_reference with other addresses.
namespace twin_02bf2ee0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c04cb0, fn_02c04cb0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c04cb0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bf2ee0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bf2ee0

// auto_push_value_by_reference_02bf2fc0: misc_push_value_by_reference with other addresses.
namespace twin_02bf2fc0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c03ca0, fn_02c03ca0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c03ca0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bf2fc0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bf2fc0

// auto_push_value_by_reference_02bfd230: misc_push_value_by_reference with other addresses.
namespace twin_02bfd230 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c03680, fn_02c03680, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c03680(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02bfd230(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02bfd230

// auto_push_value_by_reference_02c015d0: misc_push_value_by_reference with other addresses.
namespace twin_02c015d0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c01ea0, fn_02c01ea0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c01ea0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c015d0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c015d0

// auto_push_value_by_reference_02c025d0: misc_push_value_by_reference with other addresses.
namespace twin_02c025d0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c026b0, fn_02c026b0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c026b0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c025d0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c025d0

// auto_push_value_by_reference_02c03bb0: misc_push_value_by_reference with other addresses.
namespace twin_02c03bb0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c03ca0, fn_02c03ca0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c03ca0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c03bb0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c03bb0

// auto_push_value_by_reference_02c046d0: misc_push_value_by_reference with other addresses.
namespace twin_02c046d0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bdfa20, fn_02bdfa20, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bdfa20(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c046d0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c046d0

// auto_push_value_by_reference_02c049c0: misc_push_value_by_reference with other addresses.
namespace twin_02c049c0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02bdee60, fn_02bdee60, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02bdee60(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c049c0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c049c0

// auto_push_value_by_reference_02c08dc0: misc_push_value_by_reference with other addresses.
namespace twin_02c08dc0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c0a100, fn_02c0a100, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c0a100(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c08dc0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c08dc0

// auto_push_value_by_reference_02c12250: misc_push_value_by_reference with other addresses.
namespace twin_02c12250 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c12de0, fn_02c12de0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c12de0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c12250(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c12250

// auto_push_value_by_reference_02c16840: misc_push_value_by_reference with other addresses.
namespace twin_02c16840 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c17760, fn_02c17760, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c17760(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c16840(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c16840

// auto_push_value_by_reference_02c19850: misc_push_value_by_reference with other addresses.
namespace twin_02c19850 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c19a90, fn_02c19a90, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c19a90(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c19850(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c19850

// auto_push_value_by_reference_02c1a250: misc_push_value_by_reference with other addresses.
namespace twin_02c1a250 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c17760, fn_02c17760, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c17760(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c1a250(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c1a250

// auto_push_value_by_reference_02c2b300: misc_push_value_by_reference with other addresses.
namespace twin_02c2b300 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c2b3f0, fn_02c2b3f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c2b3f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c2b300(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c2b300

// auto_push_value_by_reference_02c52f30: misc_push_value_by_reference with other addresses.
namespace twin_02c52f30 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c54a90, fn_02c54a90, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c54a90(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c52f30(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c52f30

// auto_push_value_by_reference_02c69460: misc_push_value_by_reference with other addresses.
namespace twin_02c69460 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02c69d80, fn_02c69d80, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02c69d80(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02c69460(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02c69460

// auto_push_value_by_reference_02cf9870: misc_push_value_by_reference with other addresses.
namespace twin_02cf9870 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02cf9ac0, fn_02cf9ac0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02cf9ac0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02cf9870(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02cf9870

// auto_push_value_by_reference_02d063d0: misc_push_value_by_reference with other addresses.
namespace twin_02d063d0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d064b0, fn_02d064b0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d064b0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d063d0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d063d0

// auto_push_value_by_reference_02d18230: misc_push_value_by_reference with other addresses.
namespace twin_02d18230 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d27cd0, fn_02d27cd0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d27cd0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d18230(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d18230

// auto_push_value_by_reference_02d18310: misc_push_value_by_reference with other addresses.
namespace twin_02d18310 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d1ad80, fn_02d1ad80, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d1ad80(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d18310(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d18310

// auto_push_value_by_reference_02d2a210: misc_push_value_by_reference with other addresses.
namespace twin_02d2a210 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d2a2f0, fn_02d2a2f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d2a2f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d2a210(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d2a210

// auto_push_value_by_reference_02d2ccf0: misc_push_value_by_reference with other addresses.
namespace twin_02d2ccf0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d2dcb0, fn_02d2dcb0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d2dcb0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d2ccf0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d2ccf0

// auto_push_value_by_reference_02d3ff30: misc_push_value_by_reference with other addresses.
namespace twin_02d3ff30 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d413b0, fn_02d413b0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d413b0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d3ff30(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d3ff30

// auto_push_value_by_reference_02d416c0: misc_push_value_by_reference with other addresses.
namespace twin_02d416c0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d27cd0, fn_02d27cd0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d27cd0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d416c0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d416c0

// auto_push_value_by_reference_02d43ed0: misc_push_value_by_reference with other addresses.
namespace twin_02d43ed0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d43fb0, fn_02d43fb0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d43fb0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d43ed0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d43ed0

// auto_push_value_by_reference_02d440b0: misc_push_value_by_reference with other addresses.
namespace twin_02d440b0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d44190, fn_02d44190, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d44190(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d440b0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d440b0

// auto_push_value_by_reference_02d44c20: misc_push_value_by_reference with other addresses.
namespace twin_02d44c20 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d44d00, fn_02d44d00, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d44d00(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d44c20(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d44c20

// auto_push_value_by_reference_02d48c40: misc_push_value_by_reference with other addresses.
namespace twin_02d48c40 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d48ea0, fn_02d48ea0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d48ea0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d48c40(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d48c40

// auto_push_value_by_reference_02d49370: misc_push_value_by_reference with other addresses.
namespace twin_02d49370 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d49460, fn_02d49460, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d49460(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d49370(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d49370

// auto_push_value_by_reference_02d4ac10: misc_push_value_by_reference with other addresses.
namespace twin_02d4ac10 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d4acf0, fn_02d4acf0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d4acf0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d4ac10(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d4ac10

// auto_push_value_by_reference_02d4b000: misc_push_value_by_reference with other addresses.
namespace twin_02d4b000 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d4c0b0, fn_02d4c0b0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d4c0b0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d4b000(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d4b000

// auto_push_value_by_reference_02d55f20: misc_push_value_by_reference with other addresses.
namespace twin_02d55f20 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d56420, fn_02d56420, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d56420(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d55f20(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d55f20

// auto_push_value_by_reference_02d68440: misc_push_value_by_reference with other addresses.
namespace twin_02d68440 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d691f0, fn_02d691f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d691f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d68440(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d68440

// auto_push_value_by_reference_02d68520: misc_push_value_by_reference with other addresses.
namespace twin_02d68520 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d691f0, fn_02d691f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d691f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d68520(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d68520

// auto_push_value_by_reference_02d68600: misc_push_value_by_reference with other addresses.
namespace twin_02d68600 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d690f0, fn_02d690f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d690f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d68600(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d68600

// auto_push_value_by_reference_02d686f0: misc_push_value_by_reference with other addresses.
namespace twin_02d686f0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d689b0, fn_02d689b0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d689b0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d686f0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d686f0

// auto_push_value_by_reference_02d687d0: misc_push_value_by_reference with other addresses.
namespace twin_02d687d0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d688b0, fn_02d688b0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d688b0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d687d0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d687d0

// auto_push_value_by_reference_02d6a870: misc_push_value_by_reference with other addresses.
namespace twin_02d6a870 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d6ade0, fn_02d6ade0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d6ade0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d6a870(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d6a870

// auto_push_value_by_reference_02d6a950: misc_push_value_by_reference with other addresses.
namespace twin_02d6a950 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d6ace0, fn_02d6ace0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d6ace0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d6a950(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d6a950

// auto_push_value_by_reference_02d6aa30: misc_push_value_by_reference with other addresses.
namespace twin_02d6aa30 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d6abe0, fn_02d6abe0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d6abe0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d6aa30(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d6aa30

// auto_push_value_by_reference_02d92bb0: misc_push_value_by_reference with other addresses.
namespace twin_02d92bb0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02d94450, fn_02d94450, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02d94450(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02d92bb0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02d92bb0

// auto_push_value_by_reference_02dab230: misc_push_value_by_reference with other addresses.
namespace twin_02dab230 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dab5f0, fn_02dab5f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dab5f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dab230(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dab230

// auto_push_value_by_reference_02dae530: misc_push_value_by_reference with other addresses.
namespace twin_02dae530 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dae610, fn_02dae610, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dae610(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dae530(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dae530

// auto_push_value_by_reference_02daee50: misc_push_value_by_reference with other addresses.
namespace twin_02daee50 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02daf010, fn_02daf010, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02daf010(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02daee50(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02daee50

// auto_push_value_by_reference_02db1be0: misc_push_value_by_reference with other addresses.
namespace twin_02db1be0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02db1cc0, fn_02db1cc0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02db1cc0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02db1be0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02db1be0

// auto_push_value_by_reference_02db5020: misc_push_value_by_reference with other addresses.
namespace twin_02db5020 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02db5140, fn_02db5140, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02db5140(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02db5020(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02db5020

// auto_push_value_by_reference_02db7c60: misc_push_value_by_reference with other addresses.
namespace twin_02db7c60 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02db8230, fn_02db8230, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02db8230(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02db7c60(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02db7c60

// auto_push_value_by_reference_02dba280: misc_push_value_by_reference with other addresses.
namespace twin_02dba280 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dba990, fn_02dba990, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dba990(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dba280(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dba280

// auto_push_value_by_reference_02dc1f10: misc_push_value_by_reference with other addresses.
namespace twin_02dc1f10 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dc2010, fn_02dc2010, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dc2010(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dc1f10(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dc1f10

// auto_push_value_by_reference_02dce210: misc_push_value_by_reference with other addresses.
namespace twin_02dce210 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dce2f0, fn_02dce2f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dce2f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dce210(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dce210

// auto_push_value_by_reference_02dcf190: misc_push_value_by_reference with other addresses.
namespace twin_02dcf190 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd07f0, fn_02dd07f0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd07f0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dcf190(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dcf190

// auto_push_value_by_reference_02dd1cf0: misc_push_value_by_reference with other addresses.
namespace twin_02dd1cf0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd2370, fn_02dd2370, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd2370(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dd1cf0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dd1cf0

// auto_push_value_by_reference_02dd1dd0: misc_push_value_by_reference with other addresses.
namespace twin_02dd1dd0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd2270, fn_02dd2270, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd2270(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dd1dd0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dd1dd0

// auto_push_value_by_reference_02dd1eb0: misc_push_value_by_reference with other addresses.
namespace twin_02dd1eb0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd2170, fn_02dd2170, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd2170(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dd1eb0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dd1eb0

// auto_push_value_by_reference_02dd1f90: misc_push_value_by_reference with other addresses.
namespace twin_02dd1f90 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd2070, fn_02dd2070, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd2070(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dd1f90(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dd1f90

// auto_push_value_by_reference_02dd2470: misc_push_value_by_reference with other addresses.
namespace twin_02dd2470 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd2590, fn_02dd2590, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd2590(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dd2470(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dd2470

// auto_push_value_by_reference_02dd6d30: misc_push_value_by_reference with other addresses.
namespace twin_02dd6d30 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd6e20, fn_02dd6e20, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd6e20(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dd6d30(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dd6d30

// auto_push_value_by_reference_02dd7cb0: misc_push_value_by_reference with other addresses.
namespace twin_02dd7cb0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd8270, fn_02dd8270, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd8270(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dd7cb0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dd7cb0

// auto_push_value_by_reference_02dd9440: misc_push_value_by_reference with other addresses.
namespace twin_02dd9440 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd9a30, fn_02dd9a30, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd9a30(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dd9440(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dd9440

// auto_push_value_by_reference_02dd9520: misc_push_value_by_reference with other addresses.
namespace twin_02dd9520 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dd9930, fn_02dd9930, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dd9930(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02dd9520(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02dd9520

// auto_push_value_by_reference_02ddbb60: misc_push_value_by_reference with other addresses.
namespace twin_02ddbb60 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ddbc40, fn_02ddbc40, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ddbc40(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ddbb60(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ddbb60

// auto_push_value_by_reference_02ddd0f0: misc_push_value_by_reference with other addresses.
namespace twin_02ddd0f0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ddf5c0, fn_02ddf5c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ddf5c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ddd0f0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ddd0f0

// auto_push_value_by_reference_02ddd1d0: misc_push_value_by_reference with other addresses.
namespace twin_02ddd1d0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ddf4c0, fn_02ddf4c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ddf4c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ddd1d0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ddd1d0

// auto_push_value_by_reference_02ddd310: misc_push_value_by_reference with other addresses.
namespace twin_02ddd310 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ddf4c0, fn_02ddf4c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ddf4c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ddd310(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ddd310

// auto_push_value_by_reference_02ddd630: misc_push_value_by_reference with other addresses.
namespace twin_02ddd630 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ddef60, fn_02ddef60, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ddef60(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ddd630(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ddd630

// auto_push_value_by_reference_02ddd710: misc_push_value_by_reference with other addresses.
namespace twin_02ddd710 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02dddf20, fn_02dddf20, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02dddf20(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ddd710(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ddd710

// auto_push_value_by_reference_02ddf860: misc_push_value_by_reference with other addresses.
namespace twin_02ddf860 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ddf990, fn_02ddf990, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ddf990(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ddf860(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ddf860

// auto_push_value_by_reference_02de1420: misc_push_value_by_reference with other addresses.
namespace twin_02de1420 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02de1510, fn_02de1510, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02de1510(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02de1420(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02de1420

// auto_push_value_by_reference_02de46a0: misc_push_value_by_reference with other addresses.
namespace twin_02de46a0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02de55c0, fn_02de55c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02de55c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02de46a0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02de46a0

// auto_push_value_by_reference_02de4780: misc_push_value_by_reference with other addresses.
namespace twin_02de4780 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02de54c0, fn_02de54c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02de54c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02de4780(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02de4780

// auto_push_value_by_reference_02e60b70: misc_push_value_by_reference with other addresses.
namespace twin_02e60b70 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02e60d80, fn_02e60d80, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02e60d80(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02e60b70(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02e60b70

// auto_push_value_by_reference_02e70980: misc_push_value_by_reference with other addresses.
namespace twin_02e70980 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02e73830, fn_02e73830, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02e73830(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02e70980(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02e70980

// auto_push_value_by_reference_02e70f90: misc_push_value_by_reference with other addresses.
namespace twin_02e70f90 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02e73730, fn_02e73730, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02e73730(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02e70f90(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02e70f90

// auto_push_value_by_reference_02e73930: misc_push_value_by_reference with other addresses.
namespace twin_02e73930 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02e73ca0, fn_02e73ca0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02e73ca0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02e73930(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02e73930

// auto_push_value_by_reference_02ec88e0: misc_push_value_by_reference with other addresses.
namespace twin_02ec88e0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ec98d0, fn_02ec98d0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ec98d0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ec88e0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ec88e0

// auto_push_value_by_reference_02ec89c0: misc_push_value_by_reference with other addresses.
namespace twin_02ec89c0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ec98d0, fn_02ec98d0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ec98d0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ec89c0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ec89c0

// auto_push_value_by_reference_02ecc5c0: misc_push_value_by_reference with other addresses.
namespace twin_02ecc5c0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ecc6a0, fn_02ecc6a0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ecc6a0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ecc5c0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ecc5c0

// auto_push_value_by_reference_02ed5480: misc_push_value_by_reference with other addresses.
namespace twin_02ed5480 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ed5560, fn_02ed5560, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ed5560(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ed5480(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ed5480

// auto_push_value_by_reference_02edc700: misc_push_value_by_reference with other addresses.
namespace twin_02edc700 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02edc7e0, fn_02edc7e0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02edc7e0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02edc700(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02edc700

// auto_push_value_by_reference_02ee6e20: misc_push_value_by_reference with other addresses.
namespace twin_02ee6e20 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02ee6f00, fn_02ee6f00, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02ee6f00(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02ee6e20(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02ee6e20

// auto_push_value_by_reference_02f6e0e0: misc_push_value_by_reference with other addresses.
namespace twin_02f6e0e0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02f6e1c0, fn_02f6e1c0, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02f6e1c0(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02f6e0e0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02f6e0e0

// auto_push_value_by_reference_02f8eda0: misc_push_value_by_reference with other addresses.
namespace twin_02f8eda0 {

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02f90730, fn_02f90730, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02f90730(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_auto_push_value_by_reference_02f8eda0(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}

}  // namespace twin_02f8eda0
