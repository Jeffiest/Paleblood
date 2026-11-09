// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c0110()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c0160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c0170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c0180()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c04c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c0510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c0b70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c0ed0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_029c0fc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_029c0fc0()
{
    return value_029c0fc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c0fd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c1020()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c1070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c10c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c1110()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c1160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c11b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c1200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c1430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c1840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c21d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c22c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029c3f40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_029c4a50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_029c4a50()
{
    return value_029c4a50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ca3d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_029ce0d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ce0e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ce0f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_029ce110()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ce120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ce1f0()
{
}

/**
 *
 * The part of the object that auto_return_field_029ce230 reads.
 *
 */
struct Object029ce230 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_029ce230; meaning unknown. */
};
static_assert(offsetof(Object029ce230, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_029ce230(const Object029ce230 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_029ce330 reads.
 *
 */
struct Object029ce330 {
    uint8_t unknown_0x0000[0x7de8];
    uint64_t value_0x7de8; /**< Read by auto_return_field_029ce330; meaning unknown. */
};
static_assert(offsetof(Object029ce330, value_0x7de8) == 0x7de8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_029ce330(const Object029ce330 *self)
{
    return self->value_0x7de8;
}
