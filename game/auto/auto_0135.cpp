// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01351200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013522a0()
{
}

/**
 *
 * The part of the object that auto_return_field_01353e30 reads.
 *
 */
struct Object01353e30 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_01353e30; meaning unknown. */
};
static_assert(offsetof(Object01353e30, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01353e30(const Object01353e30 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01353ee0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0135b240 reads.
 *
 */
struct Object0135b240 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_0135b240; meaning unknown. */
};
static_assert(offsetof(Object0135b240, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0135b240(const Object0135b240 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0135b8f0()
{
}
