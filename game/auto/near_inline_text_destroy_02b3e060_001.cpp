// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_inline_text_destroy, in game/misc/inline_text_destroy.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "runtime/original.h"

// auto_inline_text_destroy_0143cfb0: misc_inline_text_destroy with other addresses and constants.
namespace near_0143cfb0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056fe030, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x28;
constexpr size_t capacity_offset = 0x40;
constexpr size_t allocator_offset = 0x48;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x10;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_0143cfb0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_0143cfb0

// auto_inline_text_destroy_01448c50: misc_inline_text_destroy with other addresses and constants.
namespace near_01448c50 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056fe800, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_01448c50(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_01448c50

// auto_inline_text_destroy_0145f520: misc_inline_text_destroy with other addresses and constants.
namespace near_0145f520 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x057b3320, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_0145f520(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_0145f520

// auto_inline_text_destroy_02494280: misc_inline_text_destroy with other addresses and constants.
namespace near_02494280 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x057b3320, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02494280(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02494280

// auto_inline_text_destroy_02a275a0: misc_inline_text_destroy with other addresses and constants.
namespace near_02a275a0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056b5030, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x38;
constexpr size_t capacity_offset = 0x50;
constexpr size_t allocator_offset = 0x58;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02a275a0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02a275a0

// auto_inline_text_destroy_02a2de00: misc_inline_text_destroy with other addresses and constants.
namespace near_02a2de00 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056b5560, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x20;
constexpr size_t capacity_offset = 0x38;
constexpr size_t allocator_offset = 0x40;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02a2de00(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02a2de00

// auto_inline_text_destroy_02a2e300: misc_inline_text_destroy with other addresses and constants.
namespace near_02a2e300 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056b5560, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x20;
constexpr size_t capacity_offset = 0x38;
constexpr size_t allocator_offset = 0x40;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02a2e300(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02a2e300

// auto_inline_text_destroy_02a522f0: misc_inline_text_destroy with other addresses and constants.
namespace near_02a522f0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x057b3320, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02a522f0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02a522f0

// auto_inline_text_destroy_02d2ddb0: misc_inline_text_destroy with other addresses and constants.
namespace near_02d2ddb0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056e74d0, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x20b0;
constexpr size_t capacity_offset = 0x20c8;
constexpr size_t allocator_offset = 0x20d0;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02d2ddb0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02d2ddb0

// auto_inline_text_destroy_02d2f730: misc_inline_text_destroy with other addresses and constants.
namespace near_02d2f730 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056e78a0, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x40;
constexpr size_t capacity_offset = 0x58;
constexpr size_t allocator_offset = 0x60;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02d2f730(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02d2f730

// auto_inline_text_destroy_02d6b810: misc_inline_text_destroy with other addresses and constants.
namespace near_02d6b810 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f06f0, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02d6b810(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02d6b810

// auto_inline_text_destroy_02d71c10: misc_inline_text_destroy with other addresses and constants.
namespace near_02d71c10 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b60, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02d71c10(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02d71c10

// auto_inline_text_destroy_02d73390: misc_inline_text_destroy with other addresses and constants.
namespace near_02d73390 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b40, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02d73390(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02d73390

// auto_inline_text_destroy_02d74040: misc_inline_text_destroy with other addresses and constants.
namespace near_02d74040 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b40, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02d74040(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02d74040

// auto_inline_text_destroy_02d74080: misc_inline_text_destroy with other addresses and constants.
namespace near_02d74080 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f1b60, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02d74080(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02d74080

// auto_inline_text_destroy_02d9b5f0: misc_inline_text_destroy with other addresses and constants.
namespace near_02d9b5f0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f3810, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x20;
constexpr size_t capacity_offset = 0x38;
constexpr size_t allocator_offset = 0x40;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02d9b5f0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02d9b5f0

// auto_inline_text_destroy_02d9be90: misc_inline_text_destroy with other addresses and constants.
namespace near_02d9be90 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x056f3880, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x38;
constexpr size_t capacity_offset = 0x50;
constexpr size_t allocator_offset = 0x58;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x8;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02d9be90(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02d9be90

// auto_inline_text_destroy_02e7b2f0: misc_inline_text_destroy with other addresses and constants.
namespace near_02e7b2f0 {

namespace {

/** The class vtable of the text object; objects point past its header, at the address point. */
RT_GLOBAL(0x0570de20, text_vtable, const uint8_t);
constexpr size_t vtable_address_point = 0x10;

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

// Where the object keeps the parts of its text that are used here: the heap pointer, the capacity
// and the allocator that frees heap text.
constexpr size_t text_offset = 0x10;
constexpr size_t capacity_offset = 0x28;
constexpr size_t allocator_offset = 0x30;

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t heap_capacity = 0x10;

// The object's field of the given type at an offset.
template <typename Field>
Field &field_at(void *object, size_t offset)
{
    return *reinterpret_cast<Field *>(static_cast<uint8_t *>(object) + offset);
}

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap text when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap text is freed through the object's allocator.
 */
extern "C" uint64_t bb_auto_inline_text_destroy_02e7b2f0(void *text)
{
    field_at<const uint8_t *>(text, 0) = text_vtable.address() + vtable_address_point;
    if (field_at<uint64_t>(text, capacity_offset) >= heap_capacity) {
        field_at<engine::Allocator *>(text, allocator_offset)->free(field_at<void *>(text, text_offset));
    }
    return release_object(text);
}

}  // namespace near_02e7b2f0
