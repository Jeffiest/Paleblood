// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016b5d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016b5d90()
{
}

/**
 *
 * The part of the object that auto_return_field_016b91b0 reads.
 *
 */
struct Object016b91b0 {
    uint8_t unknown_0x0000[0x310];
    uint32_t value_0x0310; /**< Read by auto_return_field_016b91b0; meaning unknown. */
};
static_assert(offsetof(Object016b91b0, value_0x0310) == 0x310);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016b91b0(const Object016b91b0 *self)
{
    return self->value_0x0310;
}

/**
 *
 * The part of the object that auto_return_member_address_016b9220 reads.
 *
 */
struct Object016b9220 {
    uint8_t unknown_0x0000[0x2e0];
    uint8_t member_0x02e0; /**< Read by auto_return_member_address_016b9220; meaning unknown. */
};
static_assert(offsetof(Object016b9220, member_0x02e0) == 0x2e0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_016b9220(Object016b9220 *self)
{
    return &self->member_0x02e0;
}

/**
 *
 * The part of the object that auto_return_member_address_016ba040 reads.
 *
 */
struct Object016ba040 {
    uint8_t unknown_0x0000[0x2a0];
    uint8_t member_0x02a0; /**< Read by auto_return_member_address_016ba040; meaning unknown. */
};
static_assert(offsetof(Object016ba040, member_0x02a0) == 0x2a0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_016ba040(Object016ba040 *self)
{
    return &self->member_0x02a0;
}

/**
 *
 * The part of the object that auto_return_field_016ba050 reads.
 *
 */
struct Object016ba050 {
    uint8_t unknown_0x0000[0x314];
    uint8_t value_0x0314; /**< Read by auto_return_field_016ba050; meaning unknown. */
};
static_assert(offsetof(Object016ba050, value_0x0314) == 0x314);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_016ba050(const Object016ba050 *self)
{
    return self->value_0x0314;
}

/**
 *
 * The part of the object that auto_return_field_016ba070 reads.
 *
 */
struct Object016ba070 {
    uint8_t unknown_0x0000[0x315];
    uint8_t value_0x0315; /**< Read by auto_return_field_016ba070; meaning unknown. */
};
static_assert(offsetof(Object016ba070, value_0x0315) == 0x315);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_016ba070(const Object016ba070 *self)
{
    return self->value_0x0315;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016baaa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016bab00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016bc020()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016bc560()
{
}
