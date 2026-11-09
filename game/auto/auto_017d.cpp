// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017d1630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017d1690()
{
}

/**
 *
 * The part of the object that auto_return_field_017d2900 reads.
 *
 */
struct Object017d2900 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_017d2900; meaning unknown. */
};
static_assert(offsetof(Object017d2900, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017d2900(const Object017d2900 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017d5300()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017d6680()
{
}

/**
 *
 * The part of the object that auto_return_field_017d66a0 reads.
 *
 */
struct Object017d66a0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_017d66a0; meaning unknown. */
};
static_assert(offsetof(Object017d66a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_017d66a0(const Object017d66a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017d68a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017d7f80()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017d7ff0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_017d7ff0()
{
    return value_017d7ff0;
}

/**
 *
 * The part of the object that auto_return_member_address_017d83f0 reads.
 *
 */
struct Object017d83f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_017d83f0; meaning unknown. */
};
static_assert(offsetof(Object017d83f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_017d83f0(Object017d83f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_017dc470 reads.
 *
 */
struct Object017dc470 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_017dc470; meaning unknown. */
};
static_assert(offsetof(Object017dc470, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_017dc470(const Object017dc470 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_017dc4f0 reads.
 *
 */
struct Object017dc4f0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_017dc4f0; meaning unknown. */
};
static_assert(offsetof(Object017dc4f0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_017dc4f0(const Object017dc4f0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017dddd0()
{
}

/**
 *
 * The part of the object that auto_return_field_017dddf0 reads.
 *
 */
struct Object017dddf0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_017dddf0; meaning unknown. */
};
static_assert(offsetof(Object017dddf0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_017dddf0(const Object017dddf0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_017de900 reads.
 *
 */
struct Object017de900 {
    uint8_t unknown_0x0000[0x26];
    uint8_t value_0x0026; /**< Read by auto_return_field_017de900; meaning unknown. */
};
static_assert(offsetof(Object017de900, value_0x0026) == 0x26);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_017de900(const Object017de900 *self)
{
    return self->value_0x0026;
}

/**
 *
 * The part of the object that auto_return_float_field_017de930 reads.
 *
 */
struct Object017de930 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_017de930; meaning unknown. */
};
static_assert(offsetof(Object017de930, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_017de930(const Object017de930 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_017de940 reads.
 *
 */
struct Object017de940 {
    uint8_t unknown_0x0000[0x24];
    int8_t value_0x0024; /**< Read by auto_return_field_017de940; meaning unknown. */
};
static_assert(offsetof(Object017de940, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_017de940(const Object017de940 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_017de960 reads.
 *
 */
struct Object017de960 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_017de960; meaning unknown. */
};
static_assert(offsetof(Object017de960, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017de960(const Object017de960 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_017decf0 reads.
 *
 */
struct Object017decf0 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_017decf0; meaning unknown. */
};
static_assert(offsetof(Object017decf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_017decf0(const Object017decf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017defb0()
{
}
