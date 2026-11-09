// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01b8b4b0 reads.
 *
 */
struct Object01b8b4b0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_01b8b4b0; meaning unknown. */
};
static_assert(offsetof(Object01b8b4b0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b8b4b0(const Object01b8b4b0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b8e0b0()
{
}

/**
 *
 * The part of the object that auto_return_field_01b8e110 reads.
 *
 */
struct Object01b8e110 {
    uint8_t unknown_0x0000[0xd8];
    uint32_t value_0x00d8; /**< Read by auto_return_field_01b8e110; meaning unknown. */
};
static_assert(offsetof(Object01b8e110, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01b8e110(const Object01b8e110 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b8e150()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b8e3e0 = 0x63f8;

extern "C" uint32_t bb_auto_return_constant_01b8e3e0()
{
    return value_01b8e3e0;
}

/**
 *
 * The part of the object that auto_return_field_01b8fa80 reads.
 *
 */
struct Object01b8fa80 {
    uint8_t unknown_0x0000[0x118];
    uint8_t value_0x0118; /**< Read by auto_return_field_01b8fa80; meaning unknown. */
};
static_assert(offsetof(Object01b8fa80, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01b8fa80(const Object01b8fa80 *self)
{
    return self->value_0x0118;
}
