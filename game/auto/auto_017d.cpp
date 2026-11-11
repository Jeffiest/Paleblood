// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017d1630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017d1690()
{
}

/**
 *
 * The part of the object that auto_return_field_017d66a0 reads.
 *
 */
struct Object017d66a0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_017d66a0; meaning unknown. */
};
static_assert(offsetof(Object017d66a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_017d66a0(const Object017d66a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017d7ff0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_017d7ff0()
{
    return value_017d7ff0;
}

/**
 *
 * The part of the object that auto_return_field_017dddf0 reads.
 *
 */
struct Object017dddf0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_017dddf0; meaning unknown. */
};
static_assert(offsetof(Object017dddf0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_017dddf0(const Object017dddf0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_017de900 reads.
 *
 */
struct Object017de900 {
    uint8_t unknown_0x0000[0x26];
    uint8_t value_0x0026; /**< Read by auto_return_field_017de900; meaning unknown. */
};
static_assert(offsetof(Object017de900, value_0x0026) == 0x26);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_017de900(const Object017de900 *self)
{
    return self->value_0x0026;
}

/**
 *
 * The part of the object that auto_return_float_field_017de930 reads.
 *
 */
struct Object017de930 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_017de930; meaning unknown. */
};
static_assert(offsetof(Object017de930, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_017de930(const Object017de930 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_017de940 reads.
 *
 */
struct Object017de940 {
    uint8_t unknown_0x0000[0x24];
    int8_t value_0x0024; /**< Read by auto_return_field_017de940; meaning unknown. */
};
static_assert(offsetof(Object017de940, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_017de940(const Object017de940 *self)
{
    return self->value_0x0024;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017defb0()
{
}
