// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f215f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f21600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f21670()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f217c0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f217c0()
{
    return value_02f217c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f21be0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f21be0()
{
    return value_02f21be0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f22ee0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f23030 reads.
 *
 */
struct Object02f23030 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f23030; meaning unknown. */
};
static_assert(offsetof(Object02f23030, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f23030(const Object02f23030 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f23040 reads.
 *
 */
struct Object02f23040 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f23040; meaning unknown. */
};
static_assert(offsetof(Object02f23040, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f23040(const Object02f23040 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f23090()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f231e0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f231e0()
{
    return value_02f231e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f235e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f24c50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f24c60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f24ca0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f24e20 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f24e20()
{
    return value_02f24e20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f25240 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f25240()
{
    return value_02f25240;
}
