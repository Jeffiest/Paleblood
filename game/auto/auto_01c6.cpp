// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c61650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c625b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c62680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c66d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c671e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c672b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c6b060()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c6cdf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c6ce40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c6cf10()
{
}

/**
 *
 * The part of the object that auto_return_field_01c6f120 reads.
 *
 */
struct Object01c6f120 {
    uint8_t unknown_0x0000[0x90];
    uint32_t value_0x0090; /**< Read by auto_return_field_01c6f120; meaning unknown. */
};
static_assert(offsetof(Object01c6f120, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01c6f120(const Object01c6f120 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_01c6f1b0 reads.
 *
 */
struct Object01c6f1b0 {
    uint8_t unknown_0x0000[0xc];
    uint8_t value_0x000c; /**< Read by auto_return_field_01c6f1b0; meaning unknown. */
};
static_assert(offsetof(Object01c6f1b0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01c6f1b0(const Object01c6f1b0 *self)
{
    return self->value_0x000c;
}
