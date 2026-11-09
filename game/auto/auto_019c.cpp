// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c0de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c1190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c1340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c1410()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c1470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c2880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c2890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c29d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c2cc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c2d90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c40f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c4100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c5b00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c5b10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c5e20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c6130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c6200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c7210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c72e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c7420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c7430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c8ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c8cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c92d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c95d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019c96a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019cc520()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019cc540()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019cc690 reads.
 *
 */
struct Object019cc690 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019cc690; meaning unknown. */
};
static_assert(offsetof(Object019cc690, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019cc690(const Object019cc690 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019cc6a0 reads.
 *
 */
struct Object019cc6a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019cc6a0; meaning unknown. */
};
static_assert(offsetof(Object019cc6a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019cc6a0(const Object019cc6a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019cc6f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019cc970 = 0x190;

extern "C" uint32_t bb_auto_return_constant_019cc970()
{
    return value_019cc970;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ce050()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ce360()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019ce380()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019ce4d0 reads.
 *
 */
struct Object019ce4d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019ce4d0; meaning unknown. */
};
static_assert(offsetof(Object019ce4d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019ce4d0(const Object019ce4d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019ce4e0 reads.
 *
 */
struct Object019ce4e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019ce4e0; meaning unknown. */
};
static_assert(offsetof(Object019ce4e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019ce4e0(const Object019ce4e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019ce530()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019ce7b0 = 0x1a0;

extern "C" uint32_t bb_auto_return_constant_019ce7b0()
{
    return value_019ce7b0;
}
