// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016b51c0()
{
}

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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016b6240()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016b6250 = 0x1;

extern "C" uint32_t bb_auto_return_constant_016b6250()
{
    return value_016b6250;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016b6260 = 0x3;

extern "C" uint32_t bb_auto_return_constant_016b6260()
{
    return value_016b6260;
}

/**
 *
 * The part of the object that auto_return_field_016b6310 reads.
 *
 */
struct Object016b6310 {
    uint32_t value_0x0000; /**< Read by auto_return_field_016b6310; meaning unknown. */
};
static_assert(offsetof(Object016b6310, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016b6310(const Object016b6310 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_016b6320 reads.
 *
 */
struct Object016b6320 {
    uint32_t value_0x0000; /**< Read by auto_return_field_016b6320; meaning unknown. */
};
static_assert(offsetof(Object016b6320, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016b6320(const Object016b6320 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_016b6460 reads.
 *
 */
struct Object016b6460 {
    uint32_t value_0x0000; /**< Read by auto_return_field_016b6460; meaning unknown. */
};
static_assert(offsetof(Object016b6460, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016b6460(const Object016b6460 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_016b6a10 reads.
 *
 */
struct Object016b6a10 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_016b6a10; meaning unknown. */
};
static_assert(offsetof(Object016b6a10, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016b6a10(const Object016b6a10 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_016b7210 reads.
 *
 */
struct Object016b7210 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016b7210; meaning unknown. */
};
static_assert(offsetof(Object016b7210, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016b7210(const Object016b7210 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016b7220 reads.
 *
 */
struct Object016b7220 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016b7220; meaning unknown. */
};
static_assert(offsetof(Object016b7220, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016b7220(const Object016b7220 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016b7270()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016b7540 = 0x30;

extern "C" uint32_t bb_auto_return_constant_016b7540()
{
    return value_016b7540;
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
 * The part of the object that auto_return_field_016bb070 reads.
 *
 */
struct Object016bb070 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_016bb070; meaning unknown. */
};
static_assert(offsetof(Object016bb070, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016bb070(const Object016bb070 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016bb150()
{
}

/**
 *
 * The part of the object that auto_return_field_016bb1c0 reads.
 *
 */
struct Object016bb1c0 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_016bb1c0; meaning unknown. */
};
static_assert(offsetof(Object016bb1c0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016bb1c0(const Object016bb1c0 *self)
{
    return self->value_0x0030;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016bc040 = 0x1;

extern "C" uint32_t bb_auto_return_constant_016bc040()
{
    return value_016bc040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016bc560()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016bc580()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_016bc6d0 reads.
 *
 */
struct Object016bc6d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016bc6d0; meaning unknown. */
};
static_assert(offsetof(Object016bc6d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016bc6d0(const Object016bc6d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016bc6e0 reads.
 *
 */
struct Object016bc6e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016bc6e0; meaning unknown. */
};
static_assert(offsetof(Object016bc6e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016bc6e0(const Object016bc6e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016bc730()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016bc9b0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_016bc9b0()
{
    return value_016bc9b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016be210()
{
}
