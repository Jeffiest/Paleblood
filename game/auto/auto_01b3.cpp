// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b30a90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b30aa0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b30aa0()
{
    return value_01b30aa0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b30d70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b30d90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b30ee0 reads.
 *
 */
struct Object01b30ee0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b30ee0; meaning unknown. */
};
static_assert(offsetof(Object01b30ee0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b30ee0(const Object01b30ee0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b30ef0 reads.
 *
 */
struct Object01b30ef0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b30ef0; meaning unknown. */
};
static_assert(offsetof(Object01b30ef0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b30ef0(const Object01b30ef0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b30f40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b311c0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01b311c0()
{
    return value_01b311c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b32440()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b32460()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b325b0 reads.
 *
 */
struct Object01b325b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b325b0; meaning unknown. */
};
static_assert(offsetof(Object01b325b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b325b0(const Object01b325b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b325c0 reads.
 *
 */
struct Object01b325c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b325c0; meaning unknown. */
};
static_assert(offsetof(Object01b325c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b325c0(const Object01b325c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b32610()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b32890 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01b32890()
{
    return value_01b32890;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b39260()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b3a590 = 0x5;

extern "C" uint32_t bb_auto_return_constant_01b3a590()
{
    return value_01b3a590;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b3a890()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b3a8b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b3aa00 reads.
 *
 */
struct Object01b3aa00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b3aa00; meaning unknown. */
};
static_assert(offsetof(Object01b3aa00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b3aa00(const Object01b3aa00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b3aa10 reads.
 *
 */
struct Object01b3aa10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b3aa10; meaning unknown. */
};
static_assert(offsetof(Object01b3aa10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b3aa10(const Object01b3aa10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b3aa60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b3ace0 = 0x278;

extern "C" uint32_t bb_auto_return_constant_01b3ace0()
{
    return value_01b3ace0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b3fc50()
{
    return 0;
}
