// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019e1180()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019e14c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019e41e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019e5620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019e7180()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019e91b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ea4d0()
{
}

/**
 *
 * The part of the object that auto_return_field_019eb6e0 reads.
 *
 */
struct Object019eb6e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_019eb6e0; meaning unknown. */
};
static_assert(offsetof(Object019eb6e0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_019eb6e0(const Object019eb6e0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019eba50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ebab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ecba0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019eec10()
{
}
