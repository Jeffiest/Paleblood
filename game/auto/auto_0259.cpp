// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025928a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592a70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592ae0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02592b40 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02592b40()
{
    return value_02592b40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02599c30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02599c30()
{
    return value_02599c30;
}

/**
 *
 * The part of the object that auto_return_field_02599c50 reads.
 *
 */
struct Object02599c50 {
    uint8_t unknown_0x0000[0x248];
    uint64_t value_0x0248; /**< Read by auto_return_field_02599c50; meaning unknown. */
};
static_assert(offsetof(Object02599c50, value_0x0248) == 0x248);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02599c50(const Object02599c50 *self)
{
    return self->value_0x0248;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02599c70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02599c70()
{
    return value_02599c70;
}

/**
 *
 * The part of the object that auto_return_field_02599d30 reads.
 *
 */
struct Object02599d30 {
    uint8_t unknown_0x0000[0x100];
    uint32_t value_0x0100; /**< Read by auto_return_field_02599d30; meaning unknown. */
};
static_assert(offsetof(Object02599d30, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02599d30(const Object02599d30 *self)
{
    return self->value_0x0100;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0259c8a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0259d2a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0259e5f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0259e5f0()
{
    return value_0259e5f0;
}
