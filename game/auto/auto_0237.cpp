// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02379a40 reads.
 *
 */
struct Object02379a40 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02379a40; meaning unknown. */
};
static_assert(offsetof(Object02379a40, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02379a40(const Object02379a40 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_02379ff0 reads.
 *
 */
struct Object02379ff0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02379ff0; meaning unknown. */
};
static_assert(offsetof(Object02379ff0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02379ff0(const Object02379ff0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0237d0e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0237d140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0237d1a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0237d1f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0237d250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0237d2b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0237d310()
{
}
