// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ab08e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab0900()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ab0a50 reads.
 *
 */
struct Object01ab0a50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ab0a50; meaning unknown. */
};
static_assert(offsetof(Object01ab0a50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab0a50(const Object01ab0a50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ab0a60 reads.
 *
 */
struct Object01ab0a60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ab0a60; meaning unknown. */
};
static_assert(offsetof(Object01ab0a60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab0a60(const Object01ab0a60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab0ab0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ab0d30 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01ab0d30()
{
    return value_01ab0d30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ab2cb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab2cd0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ab2e20 reads.
 *
 */
struct Object01ab2e20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ab2e20; meaning unknown. */
};
static_assert(offsetof(Object01ab2e20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab2e20(const Object01ab2e20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ab2e30 reads.
 *
 */
struct Object01ab2e30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ab2e30; meaning unknown. */
};
static_assert(offsetof(Object01ab2e30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab2e30(const Object01ab2e30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab2e80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ab3100 = 0x1c8;

extern "C" uint32_t bb_auto_return_constant_01ab3100()
{
    return value_01ab3100;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ab43d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab43f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ab4540 reads.
 *
 */
struct Object01ab4540 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ab4540; meaning unknown. */
};
static_assert(offsetof(Object01ab4540, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab4540(const Object01ab4540 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ab4550 reads.
 *
 */
struct Object01ab4550 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ab4550; meaning unknown. */
};
static_assert(offsetof(Object01ab4550, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab4550(const Object01ab4550 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab45a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ab4820 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01ab4820()
{
    return value_01ab4820;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ab5aa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ab6890()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab68b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ab6a00 reads.
 *
 */
struct Object01ab6a00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ab6a00; meaning unknown. */
};
static_assert(offsetof(Object01ab6a00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab6a00(const Object01ab6a00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ab6a10 reads.
 *
 */
struct Object01ab6a10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ab6a10; meaning unknown. */
};
static_assert(offsetof(Object01ab6a10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab6a10(const Object01ab6a10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab6a60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ab6ce0 = 0x1a0;

extern "C" uint32_t bb_auto_return_constant_01ab6ce0()
{
    return value_01ab6ce0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ab7230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ab7e50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab7e70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ab7fc0 reads.
 *
 */
struct Object01ab7fc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ab7fc0; meaning unknown. */
};
static_assert(offsetof(Object01ab7fc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab7fc0(const Object01ab7fc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ab7fd0 reads.
 *
 */
struct Object01ab7fd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ab7fd0; meaning unknown. */
};
static_assert(offsetof(Object01ab7fd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ab7fd0(const Object01ab7fd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ab8020()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ab82a0 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01ab82a0()
{
    return value_01ab82a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01abc490()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01abc4b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01abc600 reads.
 *
 */
struct Object01abc600 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01abc600; meaning unknown. */
};
static_assert(offsetof(Object01abc600, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01abc600(const Object01abc600 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01abc610 reads.
 *
 */
struct Object01abc610 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01abc610; meaning unknown. */
};
static_assert(offsetof(Object01abc610, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01abc610(const Object01abc610 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01abc660()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01abc8e0 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01abc8e0()
{
    return value_01abc8e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01abcca0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01abccc0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01abce10 reads.
 *
 */
struct Object01abce10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01abce10; meaning unknown. */
};
static_assert(offsetof(Object01abce10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01abce10(const Object01abce10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01abce20 reads.
 *
 */
struct Object01abce20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01abce20; meaning unknown. */
};
static_assert(offsetof(Object01abce20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01abce20(const Object01abce20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01abce70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01abd0f0 = 0x270;

extern "C" uint32_t bb_auto_return_constant_01abd0f0()
{
    return value_01abd0f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01abd870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01abe7a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01abe800()
{
}
