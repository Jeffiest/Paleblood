// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_007fdeb0 reads.
 *
 */
struct Object007fdeb0 {
    uint8_t unknown_0x0000[0x2b0];
    uint64_t value_0x02b0; /**< Read by auto_return_field_007fdeb0; meaning unknown. */
};
static_assert(offsetof(Object007fdeb0, value_0x02b0) == 0x2b0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_007fdeb0(const Object007fdeb0 *self)
{
    return self->value_0x02b0;
}

/**
 *
 * The part of the object that auto_return_field_007fdec0 reads.
 *
 */
struct Object007fdec0 {
    uint8_t unknown_0x0000[0x2dc];
    uint32_t value_0x02dc; /**< Read by auto_return_field_007fdec0; meaning unknown. */
};
static_assert(offsetof(Object007fdec0, value_0x02dc) == 0x2dc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_007fdec0(const Object007fdec0 *self)
{
    return self->value_0x02dc;
}

/**
 *
 * The part of the object that auto_return_field_007fded0 reads.
 *
 */
struct Object007fded0 {
    uint8_t unknown_0x0000[0x2e0];
    uint32_t value_0x02e0; /**< Read by auto_return_field_007fded0; meaning unknown. */
};
static_assert(offsetof(Object007fded0, value_0x02e0) == 0x2e0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_007fded0(const Object007fded0 *self)
{
    return self->value_0x02e0;
}

/**
 *
 * The part of the object that auto_return_field_007fe2d0 reads.
 *
 */
struct Object007fe2d0 {
    uint8_t unknown_0x0000[0x220];
    uint32_t value_0x0220; /**< Read by auto_return_field_007fe2d0; meaning unknown. */
};
static_assert(offsetof(Object007fe2d0, value_0x0220) == 0x220);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_007fe2d0(const Object007fe2d0 *self)
{
    return self->value_0x0220;
}

/**
 *
 * The part of the object that auto_return_field_007fe7c0 reads.
 *
 */
struct Object007fe7c0 {
    uint8_t unknown_0x0000[0x220];
    uint32_t value_0x0220; /**< Read by auto_return_field_007fe7c0; meaning unknown. */
};
static_assert(offsetof(Object007fe7c0, value_0x0220) == 0x220);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_007fe7c0(const Object007fe7c0 *self)
{
    return self->value_0x0220;
}
