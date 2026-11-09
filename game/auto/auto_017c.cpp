// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c0fc0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017c0fd0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c0fe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c0ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c21f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c39f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c3a50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c7520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c7530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c7540()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017c7550()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c7630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c78e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c7b90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c7d10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c7ea0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c8130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c8bd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017c8be0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017ccdf0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017cf0c0()
{
}

/**
 *
 * The part of the object that auto_return_field_017cf6b0 reads.
 *
 */
struct Object017cf6b0 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_017cf6b0; meaning unknown. */
};
static_assert(offsetof(Object017cf6b0, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_017cf6b0(const Object017cf6b0 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_017cf6d0 reads.
 *
 */
struct Object017cf6d0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_017cf6d0; meaning unknown. */
};
static_assert(offsetof(Object017cf6d0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_017cf6d0(const Object017cf6d0 *self)
{
    return self->value_0x0020;
}
