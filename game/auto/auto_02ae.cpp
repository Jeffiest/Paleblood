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
extern "C" void bb_auto_empty_02ae2860()
{
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
extern "C" void bb_auto_empty_02ae4280()
{
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
extern "C" void bb_auto_empty_02ae6a90()
{
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
