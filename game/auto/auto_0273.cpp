// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02738dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02738dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02739280()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027392a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027392a0()
{
    return value_027392a0;
}

/**
 *
 * The part of the object that auto_return_field_02739410 reads.
 *
 */
struct Object02739410 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02739410; meaning unknown. */
};
static_assert(offsetof(Object02739410, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02739410(const Object02739410 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02739420 reads.
 *
 */
struct Object02739420 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02739420; meaning unknown. */
};
static_assert(offsetof(Object02739420, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02739420(const Object02739420 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02739470()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027396f0 = 0x140;

extern "C" uint32_t bb_auto_return_constant_027396f0()
{
    return value_027396f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0273ee00()
{
}

/**
 *
 * The part of the object that auto_return_field_0273f7c0 reads.
 *
 */
struct Object0273f7c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0273f7c0; meaning unknown. */
};
static_assert(offsetof(Object0273f7c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0273f7c0(const Object0273f7c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0273f7d0 reads.
 *
 */
struct Object0273f7d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0273f7d0; meaning unknown. */
};
static_assert(offsetof(Object0273f7d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0273f7d0(const Object0273f7d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0273f820()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0273faa0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_0273faa0()
{
    return value_0273faa0;
}
