// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_00450a30 reads.
 *
 */
struct Object00450a30 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_00450a30; meaning unknown. */
};
static_assert(offsetof(Object00450a30, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00450a30(Object00450a30 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_00450ba0 reads.
 *
 */
struct Object00450ba0 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_00450ba0; meaning unknown. */
};
static_assert(offsetof(Object00450ba0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00450ba0(const Object00450ba0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004510e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004510f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00451100 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00451100()
{
    return value_00451100;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00451500()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00452710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00452720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00452730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00452860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00452870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00452880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00452890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454530()
{
}

/**
 *
 * The part of the object that auto_return_field_00454c70 reads.
 *
 */
struct Object00454c70 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_00454c70; meaning unknown. */
};
static_assert(offsetof(Object00454c70, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00454c70(const Object00454c70 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454ca0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00454cb0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454cc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454cf0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00454d20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00454d30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00454d60()
{
}

/**
 *
 * The part of the object that auto_return_field_00455130 reads.
 *
 */
struct Object00455130 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_00455130; meaning unknown. */
};
static_assert(offsetof(Object00455130, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00455130(const Object00455130 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_00455410 reads.
 *
 */
struct Object00455410 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_00455410; meaning unknown. */
};
static_assert(offsetof(Object00455410, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00455410(const Object00455410 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_00457230 reads.
 *
 */
struct Object00457230 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_00457230; meaning unknown. */
};
static_assert(offsetof(Object00457230, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00457230(const Object00457230 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_00457700 reads.
 *
 */
struct Object00457700 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_00457700; meaning unknown. */
};
static_assert(offsetof(Object00457700, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00457700(const Object00457700 *self)
{
    return self->value_0x0040;
}
