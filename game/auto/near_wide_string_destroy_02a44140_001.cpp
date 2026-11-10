// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of engine_wide_string_destroy, in game/engine/wide_string_destroy.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"

// auto_wide_string_destroy_017e9e00: engine_wide_string_destroy with other addresses and constants.
namespace near_017e9e00 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_017e9e00(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_017e9e00

// auto_wide_string_destroy_017f83a0: engine_wide_string_destroy with other addresses and constants.
namespace near_017f83a0 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_017f83a0(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_017f83a0

// auto_wide_string_destroy_017f8410: engine_wide_string_destroy with other addresses and constants.
namespace near_017f8410 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_017f8410(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_017f8410

// auto_wide_string_destroy_017f8480: engine_wide_string_destroy with other addresses and constants.
namespace near_017f8480 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_017f8480(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_017f8480

// auto_wide_string_destroy_018192c0: engine_wide_string_destroy with other addresses and constants.
namespace near_018192c0 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_018192c0(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_018192c0

// auto_wide_string_destroy_0184bd60: engine_wide_string_destroy with other addresses and constants.
namespace near_0184bd60 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_0184bd60(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_0184bd60

// auto_wide_string_destroy_01c70840: engine_wide_string_destroy with other addresses and constants.
namespace near_01c70840 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x40;
constexpr size_t length_offset = 0x50;
constexpr size_t capacity_offset = 0x58;
constexpr size_t allocator_offset = 0x60;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_01c70840(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_01c70840

// auto_wide_string_destroy_01d37320: engine_wide_string_destroy with other addresses and constants.
namespace near_01d37320 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_01d37320(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_01d37320

// auto_wide_string_destroy_01d761e0: engine_wide_string_destroy with other addresses and constants.
namespace near_01d761e0 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x18;
constexpr size_t length_offset = 0x28;
constexpr size_t capacity_offset = 0x30;
constexpr size_t allocator_offset = 0x38;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_01d761e0(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_01d761e0

// auto_wide_string_destroy_01d8d2d0: engine_wide_string_destroy with other addresses and constants.
namespace near_01d8d2d0 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_01d8d2d0(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_01d8d2d0

// auto_wide_string_destroy_01fdc870: engine_wide_string_destroy with other addresses and constants.
namespace near_01fdc870 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x18;
constexpr size_t length_offset = 0x28;
constexpr size_t capacity_offset = 0x30;
constexpr size_t allocator_offset = 0x38;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_01fdc870(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_01fdc870

// auto_wide_string_destroy_020035b0: engine_wide_string_destroy with other addresses and constants.
namespace near_020035b0 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_020035b0(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_020035b0

// auto_wide_string_destroy_02429c10: engine_wide_string_destroy with other addresses and constants.
namespace near_02429c10 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_02429c10(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_02429c10

// auto_wide_string_destroy_02429e20: engine_wide_string_destroy with other addresses and constants.
namespace near_02429e20 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_02429e20(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_02429e20

// auto_wide_string_destroy_02429e90: engine_wide_string_destroy with other addresses and constants.
namespace near_02429e90 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_02429e90(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_02429e90

// auto_wide_string_destroy_02d66e10: engine_wide_string_destroy with other addresses and constants.
namespace near_02d66e10 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_02d66e10(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_02d66e10

// auto_wide_string_destroy_02d66fa0: engine_wide_string_destroy with other addresses and constants.
namespace near_02d66fa0 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_02d66fa0(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_02d66fa0

// auto_wide_string_destroy_02d6f410: engine_wide_string_destroy with other addresses and constants.
namespace near_02d6f410 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_02d6f410(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_02d6f410

// auto_wide_string_destroy_02d6f450: engine_wide_string_destroy with other addresses and constants.
namespace near_02d6f450 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_02d6f450(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_02d6f450

// auto_wide_string_destroy_02d70830: engine_wide_string_destroy with other addresses and constants.
namespace near_02d70830 {

namespace {

// Where the object keeps the parts of its wide string: the text (inline characters, or the heap
// pointer), the length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t length_offset = 0x20;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Empties the wide string an object holds: frees its heap text when it has one, then makes it an
 * inline string again with no characters.
 *
 * The heap text is freed through the string's allocator. The stores follow the free, so they also
 * hold when the free changes the object. Only the first inline character is cleared.
 */
extern "C" void bb_auto_wide_string_destroy_02d70830(void *object)
{
    uint64_t &capacity = field_at<uint64_t>(object, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(object, allocator_offset)->free(field_at<void *>(object, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(object, length_offset) = 0;
    field_at<char16_t>(object, text_offset) = u'\0';
}

}  // namespace near_02d70830
