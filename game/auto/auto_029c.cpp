// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_029c0fc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_029c0fc0()
{
    return value_029c0fc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_029c4a50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_029c4a50()
{
    return value_029c4a50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ce0f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ce120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ce1f0()
{
}

/**
 *
 * The part of the object that auto_return_field_029ce230 reads.
 *
 */
struct Object029ce230 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_029ce230; meaning unknown. */
};
static_assert(offsetof(Object029ce230, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_029ce230(const Object029ce230 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_029ce330 reads.
 *
 */
struct Object029ce330 {
    uint8_t unknown_0x0000[0x7de8];
    uint64_t value_0x7de8; /**< Read by auto_return_field_029ce330; meaning unknown. */
};
static_assert(offsetof(Object029ce330, value_0x7de8) == 0x7de8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_029ce330(const Object029ce330 *self)
{
    return self->value_0x7de8;
}
