// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010b9850()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010b4490()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_010b5bb0 reads.
 *
 */
struct Object010b5bb0 {
    uint8_t unknown_0x0000[0x57c];
    uint8_t value_0x057c; /**< Read by auto_return_field_010b5bb0; meaning unknown. */
};
static_assert(offsetof(Object010b5bb0, value_0x057c) == 0x57c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010b5bb0(const Object010b5bb0 *self)
{
    return self->value_0x057c;
}

/**
 *
 * The part of the object that auto_return_field_010b5e80 reads.
 *
 */
struct Object010b5e80 {
    uint8_t unknown_0x0000[0x594];
    uint8_t value_0x0594; /**< Read by auto_return_field_010b5e80; meaning unknown. */
};
static_assert(offsetof(Object010b5e80, value_0x0594) == 0x594);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010b5e80(const Object010b5e80 *self)
{
    return self->value_0x0594;
}

/**
 *
 * The part of the object that auto_return_field_010b90b0 reads.
 *
 */
struct Object010b90b0 {
    uint8_t unknown_0x0000[0xd8];
    uint8_t value_0x00d8; /**< Read by auto_return_field_010b90b0; meaning unknown. */
};
static_assert(offsetof(Object010b90b0, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010b90b0(const Object010b90b0 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * The part of the object that auto_return_field_010b90c0 reads.
 *
 */
struct Object010b90c0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t value_0x00e0; /**< Read by auto_return_field_010b90c0; meaning unknown. */
};
static_assert(offsetof(Object010b90c0, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010b90c0(const Object010b90c0 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * The part of the object that auto_return_field_010b9c80 reads.
 *
 */
struct Object010b9c80 {
    uint8_t unknown_0x0000[0x98];
    uint8_t value_0x0098; /**< Read by auto_return_field_010b9c80; meaning unknown. */
};
static_assert(offsetof(Object010b9c80, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010b9c80(const Object010b9c80 *self)
{
    return self->value_0x0098;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010ba360 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010ba360()
{
    return value_010ba360;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010bcc70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_010bf730 reads.
 *
 */
struct Object010bf730 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_010bf730; meaning unknown. */
};
static_assert(offsetof(Object010bf730, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010bf730(const Object010bf730 *self)
{
    return self->value_0x0020;
}
