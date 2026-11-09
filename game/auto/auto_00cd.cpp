// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd1a30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd1a40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd20b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd20f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd2100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd37e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd3db0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd3dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd3de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cd3df0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cda670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cdce30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cdce40()
{
}

/**
 *
 * The part of the object that auto_return_field_00cde5e0 reads.
 *
 */
struct Object00cde5e0 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_00cde5e0; meaning unknown. */
};
static_assert(offsetof(Object00cde5e0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00cde5e0(const Object00cde5e0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_00cde5f0 reads.
 *
 */
struct Object00cde5f0 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_00cde5f0; meaning unknown. */
};
static_assert(offsetof(Object00cde5f0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00cde5f0(const Object00cde5f0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_00cde600 reads.
 *
 */
struct Object00cde600 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_00cde600; meaning unknown. */
};
static_assert(offsetof(Object00cde600, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00cde600(const Object00cde600 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cde6c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cde6d0()
{
}
