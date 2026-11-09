// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01315130()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01315140()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01315150()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01315a00 reads.
 *
 */
struct Object01315a00 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_01315a00; meaning unknown. */
};
static_assert(offsetof(Object01315a00, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01315a00(const Object01315a00 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013160b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01316850()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01316860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01316870()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013168e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013169a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01317540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0131c4d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0131c500()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0131d080()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0131d500 reads.
 *
 */
struct Object0131d500 {
    uint8_t unknown_0x0000[0x128];
    uint64_t value_0x0128; /**< Read by auto_return_field_0131d500; meaning unknown. */
};
static_assert(offsetof(Object0131d500, value_0x0128) == 0x128);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0131d500(const Object0131d500 *self)
{
    return self->value_0x0128;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0131d970()
{
}

/**
 *
 * The part of the object that auto_return_field_0131dbb0 reads.
 *
 */
struct Object0131dbb0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0131dbb0; meaning unknown. */
};
static_assert(offsetof(Object0131dbb0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0131dbb0(const Object0131dbb0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0131f0d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0131fba0()
{
}
