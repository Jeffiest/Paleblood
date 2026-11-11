// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01770640()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01770d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01771550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01771870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01771c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017720d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017729e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017732d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01773ad0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017742e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01774a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01775300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01775ec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01776e10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01777c50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017788c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01779470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01779e40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0177a720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0177b100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0177b9f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0177c2e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0177cae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0177d2d0()
{
}

/**
 *
 * The part of the object that auto_return_field_0177d740 reads.
 *
 */
struct Object0177d740 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_0177d740; meaning unknown. */
};
static_assert(offsetof(Object0177d740, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0177d740(const Object0177d740 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0177d780 reads.
 *
 */
struct Object0177d780 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_0177d780; meaning unknown. */
};
static_assert(offsetof(Object0177d780, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0177d780(const Object0177d780 *self)
{
    return self->value_0x0018;
}
