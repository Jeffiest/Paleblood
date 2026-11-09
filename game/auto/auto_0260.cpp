// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02604390()
{
}

/**
 *
 * The part of the object that auto_return_field_0260b470 reads.
 *
 */
struct Object0260b470 {
    uint8_t unknown_0x0000[0x7f0];
    uint64_t value_0x07f0; /**< Read by auto_return_field_0260b470; meaning unknown. */
};
static_assert(offsetof(Object0260b470, value_0x07f0) == 0x7f0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0260b470(const Object0260b470 *self)
{
    return self->value_0x07f0;
}

/**
 *
 * The part of the object that auto_return_field_0260b490 reads.
 *
 */
struct Object0260b490 {
    uint8_t unknown_0x0000[0x828];
    uint64_t value_0x0828; /**< Read by auto_return_field_0260b490; meaning unknown. */
};
static_assert(offsetof(Object0260b490, value_0x0828) == 0x828);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0260b490(const Object0260b490 *self)
{
    return self->value_0x0828;
}

/**
 *
 * The part of the object that auto_return_field_0260b570 reads.
 *
 */
struct Object0260b570 {
    uint8_t unknown_0x0000[0x840];
    uint64_t value_0x0840; /**< Read by auto_return_field_0260b570; meaning unknown. */
};
static_assert(offsetof(Object0260b570, value_0x0840) == 0x840);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0260b570(const Object0260b570 *self)
{
    return self->value_0x0840;
}

/**
 *
 * The part of the object that auto_return_field_0260b580 reads.
 *
 */
struct Object0260b580 {
    uint8_t unknown_0x0000[0x848];
    uint64_t value_0x0848; /**< Read by auto_return_field_0260b580; meaning unknown. */
};
static_assert(offsetof(Object0260b580, value_0x0848) == 0x848);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0260b580(const Object0260b580 *self)
{
    return self->value_0x0848;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0260f930 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0260f930()
{
    return value_0260f930;
}
