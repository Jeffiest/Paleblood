// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_inline_text_reset, in game/misc/inline_text_reset.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "runtime/original.h"

// auto_inline_text_reset_01448c90: misc_inline_text_reset with other addresses and constants.
namespace near_01448c90 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056fe800, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_01448c90(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_01448c90

// auto_inline_text_reset_0145f560: misc_inline_text_reset with other addresses and constants.
namespace near_0145f560 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x057b3320, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_0145f560(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_0145f560

// auto_inline_text_reset_02494230: misc_inline_text_reset with other addresses and constants.
namespace near_02494230 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x057b3320, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02494230(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02494230

// auto_inline_text_reset_02a275e0: misc_inline_text_reset with other addresses and constants.
namespace near_02a275e0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056b5030, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x38;
constexpr size_t length_offset = 0x48;
constexpr size_t capacity_offset = 0x50;
constexpr size_t allocator_offset = 0x58;

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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02a275e0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02a275e0

// auto_inline_text_reset_02a2de40: misc_inline_text_reset with other addresses and constants.
namespace near_02a2de40 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056b5560, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x20;
constexpr size_t length_offset = 0x30;
constexpr size_t capacity_offset = 0x38;
constexpr size_t allocator_offset = 0x40;

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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02a2de40(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02a2de40

// auto_inline_text_reset_02a52330: misc_inline_text_reset with other addresses and constants.
namespace near_02a52330 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x057b3320, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02a52330(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02a52330

// auto_inline_text_reset_02d2cef0: misc_inline_text_reset with other addresses and constants.
namespace near_02d2cef0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056e74d0, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x20b0;
constexpr size_t length_offset = 0x20c0;
constexpr size_t capacity_offset = 0x20c8;
constexpr size_t allocator_offset = 0x20d0;

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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d2cef0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d2cef0

// auto_inline_text_reset_02d2f6e0: misc_inline_text_reset with other addresses and constants.
namespace near_02d2f6e0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056e78a0, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d2f6e0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d2f6e0

// auto_inline_text_reset_02d6b670: misc_inline_text_reset with other addresses and constants.
namespace near_02d6b670 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f06f0, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d6b670(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d6b670

// auto_inline_text_reset_02d71c50: misc_inline_text_reset with other addresses and constants.
namespace near_02d71c50 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b60, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d71c50(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d71c50

// auto_inline_text_reset_02d71ca0: misc_inline_text_reset with other addresses and constants.
namespace near_02d71ca0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b60, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d71ca0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d71ca0

// auto_inline_text_reset_02d71e40: misc_inline_text_reset with other addresses and constants.
namespace near_02d71e40 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b60, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d71e40(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d71e40

// auto_inline_text_reset_02d733d0: misc_inline_text_reset with other addresses and constants.
namespace near_02d733d0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b40, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d733d0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d733d0

// auto_inline_text_reset_02d73420: misc_inline_text_reset with other addresses and constants.
namespace near_02d73420 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b40, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d73420(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d73420

// auto_inline_text_reset_02d735c0: misc_inline_text_reset with other addresses and constants.
namespace near_02d735c0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b40, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d735c0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d735c0

// auto_inline_text_reset_02d9b5a0: misc_inline_text_reset with other addresses and constants.
namespace near_02d9b5a0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f3810, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x20;
constexpr size_t length_offset = 0x30;
constexpr size_t capacity_offset = 0x38;
constexpr size_t allocator_offset = 0x40;

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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d9b5a0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d9b5a0

// auto_inline_text_reset_02d9be40: misc_inline_text_reset with other addresses and constants.
namespace near_02d9be40 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f3880, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

// Where the object keeps the parts of its text: the characters (inline, or the heap pointer), the
// length, the capacity and the allocator that frees heap text.
constexpr size_t text_offset = 0x38;
constexpr size_t length_offset = 0x48;
constexpr size_t capacity_offset = 0x50;
constexpr size_t allocator_offset = 0x58;

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
 * Empties a text object: sets its vtable, frees its heap text when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap text is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_auto_inline_text_reset_02d9be40(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    uint64_t &capacity = field_at<uint64_t>(text, capacity_offset);
    if (capacity >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    capacity = heap_capacity - 1;
    field_at<uint64_t>(text, length_offset) = 0;
    field_at<uint16_t>(text, text_offset) = 0;
}

}  // namespace near_02d9be40
