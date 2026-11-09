// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e61130 = 0xf4240;

extern "C" uint32_t bb_auto_return_constant_02e61130()
{
    return value_02e61130;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e61670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e61680()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e629a0 = 0x7530;

extern "C" uint32_t bb_auto_return_constant_02e629a0()
{
    return value_02e629a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e62c90()
{
}

/**
 *
 * The part of the object that auto_return_field_02e64d00 reads.
 *
 */
struct Object02e64d00 {
    uint8_t unknown_0x0000[0x6c];
    uint8_t value_0x006c; /**< Read by auto_return_field_02e64d00; meaning unknown. */
};
static_assert(offsetof(Object02e64d00, value_0x006c) == 0x6c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02e64d00(const Object02e64d00 *self)
{
    return self->value_0x006c;
}

/**
 *
 * The part of the object that auto_return_field_02e67080 reads.
 *
 */
struct Object02e67080 {
    uint8_t unknown_0x0000[0x11a];
    uint8_t value_0x011a; /**< Read by auto_return_field_02e67080; meaning unknown. */
};
static_assert(offsetof(Object02e67080, value_0x011a) == 0x11a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02e67080(const Object02e67080 *self)
{
    return self->value_0x011a;
}

/**
 *
 * The part of the object that auto_return_member_address_02e67090 reads.
 *
 */
struct Object02e67090 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_02e67090; meaning unknown. */
};
static_assert(offsetof(Object02e67090, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02e67090(Object02e67090 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e670a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02e670a0()
{
    return value_02e670a0;
}

/**
 *
 * The part of the object that auto_return_field_02e68d30 reads.
 *
 */
struct Object02e68d30 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02e68d30; meaning unknown. */
};
static_assert(offsetof(Object02e68d30, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e68d30(const Object02e68d30 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02e6b9c0 reads.
 *
 */
struct Object02e6b9c0 {
    uint8_t unknown_0x0000[0x91];
    uint8_t value_0x0091; /**< Read by auto_return_field_02e6b9c0; meaning unknown. */
};
static_assert(offsetof(Object02e6b9c0, value_0x0091) == 0x91);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02e6b9c0(const Object02e6b9c0 *self)
{
    return self->value_0x0091;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02e6b9e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e6d010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e6d020()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e6d050()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e6e0f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e6e0f0()
{
    return value_02e6e0f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e6ead0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02e6eae0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e6eaf0()
{
}
