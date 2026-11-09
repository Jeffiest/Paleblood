// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00503c50 reads.
 *
 */
struct Object00503c50 {
    uint8_t unknown_0x0000[0xa8];
    uint32_t value_0x00a8; /**< Read by auto_return_field_00503c50; meaning unknown. */
};
static_assert(offsetof(Object00503c50, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00503c50(const Object00503c50 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_00503de0 reads.
 *
 */
struct Object00503de0 {
    uint8_t unknown_0x0000[0x78];
    uint64_t value_0x0078; /**< Read by auto_return_field_00503de0; meaning unknown. */
};
static_assert(offsetof(Object00503de0, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00503de0(const Object00503de0 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_field_005049c0 reads.
 *
 */
struct Object005049c0 {
    uint8_t unknown_0x0000[0x60];
    uint32_t value_0x0060; /**< Read by auto_return_field_005049c0; meaning unknown. */
};
static_assert(offsetof(Object005049c0, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_005049c0(const Object005049c0 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_00504b50 reads.
 *
 */
struct Object00504b50 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_00504b50; meaning unknown. */
};
static_assert(offsetof(Object00504b50, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00504b50(const Object00504b50 *self)
{
    return self->value_0x0070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_005057a0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_005057a0()
{
    return value_005057a0;
}

/**
 *
 * The part of the object that auto_return_field_00508090 reads.
 *
 */
struct Object00508090 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_00508090; meaning unknown. */
};
static_assert(offsetof(Object00508090, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00508090(const Object00508090 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0050af70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0050b380()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0050b420 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0050b420()
{
    return value_0050b420;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0050b4b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0050b4c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0050b690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0050b6a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0050dac0()
{
}
