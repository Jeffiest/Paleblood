// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_ref_holder_add_child, in game/misc/ref_holder_add_child.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_ref_holder_add_child_0093e9e0: misc_ref_holder_add_child with other addresses and constants.
namespace near_0093e9e0 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x10;
constexpr size_t count_offset = 0x18;
constexpr size_t capacity_offset = 0x1c;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_0093e9e0(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_0093e9e0

// auto_ref_holder_add_child_009f8c30: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f8c30 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x198;
constexpr size_t count_offset = 0x1a0;
constexpr size_t capacity_offset = 0x1a4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f8c30(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f8c30

// auto_ref_holder_add_child_009f8cd0: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f8cd0 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x1c8;
constexpr size_t count_offset = 0x1d0;
constexpr size_t capacity_offset = 0x1d4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f8cd0(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f8cd0

// auto_ref_holder_add_child_009f8d70: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f8d70 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x1a8;
constexpr size_t count_offset = 0x1b0;
constexpr size_t capacity_offset = 0x1b4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f8d70(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f8d70

// auto_ref_holder_add_child_009f8e10: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f8e10 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x1b8;
constexpr size_t count_offset = 0x1c0;
constexpr size_t capacity_offset = 0x1c4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f8e10(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f8e10

// auto_ref_holder_add_child_009f8eb0: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f8eb0 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x1e8;
constexpr size_t count_offset = 0x1f0;
constexpr size_t capacity_offset = 0x1f4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f8eb0(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f8eb0

// auto_ref_holder_add_child_009f8f50: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f8f50 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x218;
constexpr size_t count_offset = 0x220;
constexpr size_t capacity_offset = 0x224;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f8f50(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f8f50

// auto_ref_holder_add_child_009f8ff0: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f8ff0 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x1f8;
constexpr size_t count_offset = 0x200;
constexpr size_t capacity_offset = 0x204;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f8ff0(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f8ff0

// auto_ref_holder_add_child_009f9090: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f9090 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x208;
constexpr size_t count_offset = 0x210;
constexpr size_t capacity_offset = 0x214;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f9090(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f9090

// auto_ref_holder_add_child_009f9130: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f9130 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x238;
constexpr size_t count_offset = 0x240;
constexpr size_t capacity_offset = 0x244;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f9130(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f9130

// auto_ref_holder_add_child_009f91d0: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f91d0 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x228;
constexpr size_t count_offset = 0x230;
constexpr size_t capacity_offset = 0x234;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f91d0(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f91d0

// auto_ref_holder_add_child_009f9270: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f9270 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x248;
constexpr size_t count_offset = 0x250;
constexpr size_t capacity_offset = 0x254;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f9270(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f9270

// auto_ref_holder_add_child_009f9310: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f9310 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x1d8;
constexpr size_t count_offset = 0x1e0;
constexpr size_t capacity_offset = 0x1e4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f9310(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f9310

// auto_ref_holder_add_child_009f93b0: misc_ref_holder_add_child with other addresses and constants.
namespace near_009f93b0 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x258;
constexpr size_t count_offset = 0x260;
constexpr size_t capacity_offset = 0x264;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_009f93b0(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_009f93b0

// auto_ref_holder_add_child_00a33c50: misc_ref_holder_add_child with other addresses and constants.
namespace near_00a33c50 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0xd8;
constexpr size_t count_offset = 0xe0;
constexpr size_t capacity_offset = 0xe4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_00a33c50(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_00a33c50

// auto_ref_holder_add_child_00a33d20: misc_ref_holder_add_child with other addresses and constants.
namespace near_00a33d20 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0xc8;
constexpr size_t count_offset = 0xd0;
constexpr size_t capacity_offset = 0xd4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_00a33d20(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_00a33d20

// auto_ref_holder_add_child_00cde4e0: misc_ref_holder_add_child with other addresses and constants.
namespace near_00cde4e0 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x98;
constexpr size_t count_offset = 0xa0;
constexpr size_t capacity_offset = 0xa4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_00cde4e0(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_00cde4e0

// auto_ref_holder_add_child_00d4a070: misc_ref_holder_add_child with other addresses and constants.
namespace near_00d4a070 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x30;
constexpr size_t count_offset = 0x38;
constexpr size_t capacity_offset = 0x3c;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_00d4a070(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_00d4a070

// auto_ref_holder_add_child_00e982e0: misc_ref_holder_add_child with other addresses and constants.
namespace near_00e982e0 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0xc8;
constexpr size_t count_offset = 0xd0;
constexpr size_t capacity_offset = 0xd4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_00e982e0(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_00e982e0

// auto_ref_holder_add_child_00ec7f30: misc_ref_holder_add_child with other addresses and constants.
namespace near_00ec7f30 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x30;
constexpr size_t count_offset = 0x38;
constexpr size_t capacity_offset = 0x3c;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_00ec7f30(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_00ec7f30

// auto_ref_holder_add_child_01538410: misc_ref_holder_add_child with other addresses and constants.
namespace near_01538410 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0xc8;
constexpr size_t count_offset = 0xd0;
constexpr size_t capacity_offset = 0xd4;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_01538410(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_01538410

// auto_ref_holder_add_child_0154aa60: misc_ref_holder_add_child with other addresses and constants.
namespace near_0154aa60 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x60;
constexpr size_t count_offset = 0x68;
constexpr size_t capacity_offset = 0x6c;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_0154aa60(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_0154aa60

// auto_ref_holder_add_child_01551ef0: misc_ref_holder_add_child with other addresses and constants.
namespace near_01551ef0 {

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

// Where the holder keeps the list: its elements, how many there are, and its capacity field.
constexpr size_t elements_offset = 0x60;
constexpr size_t count_offset = 0x68;
constexpr size_t capacity_offset = 0x6c;

/** Bits of the capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

// The holder's field of the given type at an offset.
template <typename Field>
Field &field_at(void *holder, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(holder) + offset);
}

}  // namespace

/**
 *
 * Adds an element to a list a holder keeps, growing the list when it is full.
 *
 * The new element is stored after the existing ones and the count goes up by one. The list is full
 * when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_auto_ref_holder_add_child_01551ef0(void *holder, void *child)
{
    void **&elements = field_at<void **>(holder, elements_offset);
    int32_t &count = field_at<int32_t>(holder, count_offset);
    if (count == static_cast<int32_t>(field_at<uint32_t>(holder, capacity_offset) & list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &elements, sizeof(void *));
    elements[count] = child;
    ++count;
}

}  // namespace near_01551ef0
