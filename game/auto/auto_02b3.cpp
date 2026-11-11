// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3e130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b351f0()
{
}

/**
 *
 * The part of the object that auto_return_field_02b393a0 reads.
 *
 */
struct Object02b393a0 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02b393a0; meaning unknown. */
};
static_assert(offsetof(Object02b393a0, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b393a0(const Object02b393a0 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_02b393b0 reads.
 *
 */
struct Object02b393b0 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02b393b0; meaning unknown. */
};
static_assert(offsetof(Object02b393b0, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b393b0(const Object02b393b0 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_02b3a6c0 reads.
 *
 */
struct Object02b3a6c0 {
    uint8_t unknown_0x0000[0x160];
    uint32_t value_0x0160; /**< Read by auto_return_field_02b3a6c0; meaning unknown. */
};
static_assert(offsetof(Object02b3a6c0, value_0x0160) == 0x160);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b3a6c0(const Object02b3a6c0 *self)
{
    return self->value_0x0160;
}

/**
 *
 * The part of the object that auto_return_field_02b3abb0 reads.
 *
 */
struct Object02b3abb0 {
    uint8_t unknown_0x0000[0x150];
    uint32_t value_0x0150; /**< Read by auto_return_field_02b3abb0; meaning unknown. */
};
static_assert(offsetof(Object02b3abb0, value_0x0150) == 0x150);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b3abb0(const Object02b3abb0 *self)
{
    return self->value_0x0150;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b3aca0()
{
    return 0;
}
