// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01201f10 reads.
 *
 */
struct Object01201f10 {
    uint8_t unknown_0x0000[0x350];
    uint64_t value_0x0350; /**< Read by auto_return_field_01201f10; meaning unknown. */
};
static_assert(offsetof(Object01201f10, value_0x0350) == 0x350);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01201f10(const Object01201f10 *self)
{
    return self->value_0x0350;
}

/**
 *
 * The part of the object that auto_return_field_01201f20 reads.
 *
 */
struct Object01201f20 {
    uint8_t unknown_0x0000[0x358];
    uint64_t value_0x0358; /**< Read by auto_return_field_01201f20; meaning unknown. */
};
static_assert(offsetof(Object01201f20, value_0x0358) == 0x358);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01201f20(const Object01201f20 *self)
{
    return self->value_0x0358;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01205930()
{
}

/**
 *
 * The part of the object that auto_return_field_0120a8f0 reads.
 *
 */
struct Object0120a8f0 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_0120a8f0; meaning unknown. */
};
static_assert(offsetof(Object0120a8f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0120a8f0(const Object0120a8f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0120a900 reads.
 *
 */
struct Object0120a900 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_0120a900; meaning unknown. */
};
static_assert(offsetof(Object0120a900, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0120a900(const Object0120a900 *self)
{
    return self->value_0x0008;
}
