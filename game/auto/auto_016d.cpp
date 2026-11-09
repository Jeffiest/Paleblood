// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_016d0e90 reads.
 *
 */
struct Object016d0e90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016d0e90; meaning unknown. */
};
static_assert(offsetof(Object016d0e90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016d0e90(const Object016d0e90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016d0ea0 reads.
 *
 */
struct Object016d0ea0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016d0ea0; meaning unknown. */
};
static_assert(offsetof(Object016d0ea0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016d0ea0(const Object016d0ea0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016d0ef0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016d1170 = 0x160;

extern "C" uint32_t bb_auto_return_constant_016d1170()
{
    return value_016d1170;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d3500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d38c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d3920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d3980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d5230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d54b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d5510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d89d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d91e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d9240()
{
}

/**
 *
 * The part of the object that auto_return_field_016dc890 reads.
 *
 */
struct Object016dc890 {
    uint8_t unknown_0x0000[0x35f8];
    uint64_t value_0x35f8; /**< Read by auto_return_field_016dc890; meaning unknown. */
};
static_assert(offsetof(Object016dc890, value_0x35f8) == 0x35f8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016dc890(const Object016dc890 *self)
{
    return self->value_0x35f8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016dd080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016ddfb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016df9a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016dfa00()
{
}
