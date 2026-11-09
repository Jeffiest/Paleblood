// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d11ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d11f40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d12040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d12090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d12710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d13360()
{
}

/**
 *
 * The part of the object that auto_return_field_01d13430 reads.
 *
 */
struct Object01d13430 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d13430; meaning unknown. */
};
static_assert(offsetof(Object01d13430, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d13430(const Object01d13430 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d13440 reads.
 *
 */
struct Object01d13440 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d13440; meaning unknown. */
};
static_assert(offsetof(Object01d13440, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d13440(const Object01d13440 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d13490()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d13710 = 0x48;

extern "C" uint32_t bb_auto_return_constant_01d13710()
{
    return value_01d13710;
}

/**
 *
 * The part of the object that auto_return_field_01d13750 reads.
 *
 */
struct Object01d13750 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d13750; meaning unknown. */
};
static_assert(offsetof(Object01d13750, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d13750(const Object01d13750 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d13760 reads.
 *
 */
struct Object01d13760 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d13760; meaning unknown. */
};
static_assert(offsetof(Object01d13760, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d13760(const Object01d13760 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d137b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d13a30 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d13a30()
{
    return value_01d13a30;
}
