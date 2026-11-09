// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eb5a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eb5a30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eb6df0()
{
}

/**
 *
 * The part of the object that auto_return_field_00ebfc50 reads.
 *
 */
struct Object00ebfc50 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_00ebfc50; meaning unknown. */
};
static_assert(offsetof(Object00ebfc50, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ebfc50(const Object00ebfc50 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_00ebfd10 reads.
 *
 */
struct Object00ebfd10 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_00ebfd10; meaning unknown. */
};
static_assert(offsetof(Object00ebfd10, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ebfd10(const Object00ebfd10 *self)
{
    return self->value_0x00a8;
}
