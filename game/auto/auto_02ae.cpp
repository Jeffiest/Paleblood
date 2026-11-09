// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae0af0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae0b10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae0bf0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae1270 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02ae1270()
{
    return value_02ae1270;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae1490 = 0xa3;

extern "C" uint32_t bb_auto_return_constant_02ae1490()
{
    return value_02ae1490;
}

/**
 *
 * The part of the object that auto_return_field_02ae1fb0 reads.
 *
 */
struct Object02ae1fb0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02ae1fb0; meaning unknown. */
};
static_assert(offsetof(Object02ae1fb0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02ae1fb0(const Object02ae1fb0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae2230 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02ae2230()
{
    return value_02ae2230;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae2860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae2880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae2990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae2fe0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae3430 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02ae3430()
{
    return value_02ae3430;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae39e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae3a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae3a90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae3e00 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02ae3e00()
{
    return value_02ae3e00;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ae3e10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae40b0 = 0x35;

extern "C" uint32_t bb_auto_return_constant_02ae40b0()
{
    return value_02ae40b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae4280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae42a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae4330()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae47d0 = 0xca;

extern "C" uint32_t bb_auto_return_constant_02ae47d0()
{
    return value_02ae47d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae5720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae5740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae57d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae5c70 = 0xc5;

extern "C" uint32_t bb_auto_return_constant_02ae5c70()
{
    return value_02ae5c70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae6a90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae6ab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae6b40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae6fe0 = 0xc0;

extern "C" uint32_t bb_auto_return_constant_02ae6fe0()
{
    return value_02ae6fe0;
}

/**
 *
 * The part of the object that auto_return_field_02ae6ff0 reads.
 *
 */
struct Object02ae6ff0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02ae6ff0; meaning unknown. */
};
static_assert(offsetof(Object02ae6ff0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02ae6ff0(const Object02ae6ff0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae7bc0()
{
}

/**
 *
 * The part of the object that auto_return_field_02ae7bd0 reads.
 *
 */
struct Object02ae7bd0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02ae7bd0; meaning unknown. */
};
static_assert(offsetof(Object02ae7bd0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ae7bd0(const Object02ae7bd0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae8530()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae8b50 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02ae8b50()
{
    return value_02ae8b50;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ae8b60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae8e00 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_02ae8e00()
{
    return value_02ae8e00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ae92c0 = 0x34;

extern "C" uint32_t bb_auto_return_constant_02ae92c0()
{
    return value_02ae92c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae9660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae9680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ae97a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ae9c50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ae9fe0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02ae9ff0 reads.
 *
 */
struct Object02ae9ff0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02ae9ff0; meaning unknown. */
};
static_assert(offsetof(Object02ae9ff0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ae9ff0(const Object02ae9ff0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02aea000 reads.
 *
 */
struct Object02aea000 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02aea000; meaning unknown. */
};
static_assert(offsetof(Object02aea000, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aea000(const Object02aea000 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02aea090 reads.
 *
 */
struct Object02aea090 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_02aea090; meaning unknown. */
};
static_assert(offsetof(Object02aea090, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02aea090(const Object02aea090 *self)
{
    return self->value_0x001c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aeaad0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aeaad0()
{
    return value_02aeaad0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aeaae0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aeab10()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02aeacb0 reads.
 *
 */
struct Object02aeacb0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02aeacb0; meaning unknown. */
};
static_assert(offsetof(Object02aeacb0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aeacb0(const Object02aeacb0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aeaef0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aeaef0()
{
    return value_02aeaef0;
}

/**
 *
 * The part of the object that auto_return_field_02aeb610 reads.
 *
 */
struct Object02aeb610 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_02aeb610; meaning unknown. */
};
static_assert(offsetof(Object02aeb610, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02aeb610(const Object02aeb610 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02aebe40 reads.
 *
 */
struct Object02aebe40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02aebe40; meaning unknown. */
};
static_assert(offsetof(Object02aebe40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aebe40(const Object02aebe40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02aebfd0()
{
}

/**
 *
 * The part of the object that auto_return_field_02aebfe0 reads.
 *
 */
struct Object02aebfe0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02aebfe0; meaning unknown. */
};
static_assert(offsetof(Object02aebfe0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aebfe0(const Object02aebfe0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02aec010 reads.
 *
 */
struct Object02aec010 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02aec010; meaning unknown. */
};
static_assert(offsetof(Object02aec010, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02aec010(const Object02aec010 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02aec020 reads.
 *
 */
struct Object02aec020 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_02aec020; meaning unknown. */
};
static_assert(offsetof(Object02aec020, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02aec020(const Object02aec020 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02aec040 reads.
 *
 */
struct Object02aec040 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02aec040; meaning unknown. */
};
static_assert(offsetof(Object02aec040, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02aec040(const Object02aec040 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02aec950()
{
}

/**
 *
 * The part of the object that auto_return_field_02aed6a0 reads.
 *
 */
struct Object02aed6a0 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_02aed6a0; meaning unknown. */
};
static_assert(offsetof(Object02aed6a0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02aed6a0(const Object02aed6a0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02aed6b0 reads.
 *
 */
struct Object02aed6b0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02aed6b0; meaning unknown. */
};
static_assert(offsetof(Object02aed6b0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02aed6b0(const Object02aed6b0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aedf50()
{
    return 0;
}
