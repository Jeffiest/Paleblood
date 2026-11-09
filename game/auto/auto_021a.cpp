// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0630()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021a0640()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0820()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021a0830()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0ae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a1200()
{
}

/**
 *
 * The part of the object that auto_return_field_021a3990 reads.
 *
 */
struct Object021a3990 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_021a3990; meaning unknown. */
};
static_assert(offsetof(Object021a3990, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021a3990(const Object021a3990 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_021a4550 reads.
 *
 */
struct Object021a4550 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_021a4550; meaning unknown. */
};
static_assert(offsetof(Object021a4550, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021a4550(const Object021a4550 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a4620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a4630()
{
}

/**
 *
 * The part of the object that auto_return_field_021a4910 reads.
 *
 */
struct Object021a4910 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021a4910; meaning unknown. */
};
static_assert(offsetof(Object021a4910, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021a4910(const Object021a4910 *self)
{
    return self->value_0x0040;
}
