// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f70430()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f707d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f707d0()
{
    return value_02f707d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f71e40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f71e40()
{
    return value_02f71e40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f73150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f74a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f75210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f7f7d0()
{
}

/**
 *
 * The part of the object that auto_return_field_02f7fa00 reads.
 *
 */
struct Object02f7fa00 {
    uint8_t unknown_0x0000[0x19];
    uint8_t value_0x0019; /**< Read by auto_return_field_02f7fa00; meaning unknown. */
};
static_assert(offsetof(Object02f7fa00, value_0x0019) == 0x19);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f7fa00(const Object02f7fa00 *self)
{
    return self->value_0x0019;
}

/**
 *
 * The part of the object that auto_return_field_02f7fa10 reads.
 *
 */
struct Object02f7fa10 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_02f7fa10; meaning unknown. */
};
static_assert(offsetof(Object02f7fa10, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f7fa10(const Object02f7fa10 *self)
{
    return self->value_0x0018;
}
