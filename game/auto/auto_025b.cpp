// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025b2f40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025b37f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025b7000()
{
}

/**
 *
 * The part of the object that auto_return_field_025ba8f0 reads.
 *
 */
struct Object025ba8f0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_025ba8f0; meaning unknown. */
};
static_assert(offsetof(Object025ba8f0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025ba8f0(const Object025ba8f0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_025ba930 reads.
 *
 */
struct Object025ba930 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_025ba930; meaning unknown. */
};
static_assert(offsetof(Object025ba930, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025ba930(const Object025ba930 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_025ba940 reads.
 *
 */
struct Object025ba940 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_025ba940; meaning unknown. */
};
static_assert(offsetof(Object025ba940, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025ba940(const Object025ba940 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025ba990()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025bac10 = 0x28;

extern "C" uint32_t bb_auto_return_constant_025bac10()
{
    return value_025bac10;
}

/**
 *
 * The part of the object that auto_return_field_025bd240 reads.
 *
 */
struct Object025bd240 {
    uint8_t unknown_0x0000[0x4c];
    uint8_t value_0x004c; /**< Read by auto_return_field_025bd240; meaning unknown. */
};
static_assert(offsetof(Object025bd240, value_0x004c) == 0x4c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_025bd240(const Object025bd240 *self)
{
    return self->value_0x004c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025bf530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025bffc0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025bffd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025bffe0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_025bffe0()
{
    return value_025bffe0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025bfff0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_025bfff0()
{
    return value_025bfff0;
}
