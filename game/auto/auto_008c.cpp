// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008c0d10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008c0d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008c2960()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008c2a00()
{
}

/**
 *
 * The part of the object that auto_return_field_008c3760 reads.
 *
 */
struct Object008c3760 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_008c3760; meaning unknown. */
};
static_assert(offsetof(Object008c3760, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_008c3760(const Object008c3760 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_008c6040()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008c6050()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008c6060()
{
}

/**
 *
 * The part of the object that auto_return_field_008cbee0 reads.
 *
 */
struct Object008cbee0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_008cbee0; meaning unknown. */
};
static_assert(offsetof(Object008cbee0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_008cbee0(const Object008cbee0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_008cc710 reads.
 *
 */
struct Object008cc710 {
    uint8_t unknown_0x0000[0x28];
    int8_t value_0x0028; /**< Read by auto_return_field_008cc710; meaning unknown. */
};
static_assert(offsetof(Object008cc710, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_008cc710(const Object008cc710 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_008cc760 reads.
 *
 */
struct Object008cc760 {
    uint8_t unknown_0x0000[0x2a];
    int8_t value_0x002a; /**< Read by auto_return_field_008cc760; meaning unknown. */
};
static_assert(offsetof(Object008cc760, value_0x002a) == 0x2a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_008cc760(const Object008cc760 *self)
{
    return self->value_0x002a;
}

/**
 *
 * The part of the object that auto_return_field_008cc780 reads.
 *
 */
struct Object008cc780 {
    uint8_t unknown_0x0000[0x2b];
    int8_t value_0x002b; /**< Read by auto_return_field_008cc780; meaning unknown. */
};
static_assert(offsetof(Object008cc780, value_0x002b) == 0x2b);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_008cc780(const Object008cc780 *self)
{
    return self->value_0x002b;
}

/**
 *
 * The part of the object that auto_return_field_008cc7a0 reads.
 *
 */
struct Object008cc7a0 {
    uint8_t unknown_0x0000[0x2c];
    uint32_t value_0x002c; /**< Read by auto_return_field_008cc7a0; meaning unknown. */
};
static_assert(offsetof(Object008cc7a0, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_008cc7a0(const Object008cc7a0 *self)
{
    return self->value_0x002c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008cc800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008cc9f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008cca10()
{
}

/**
 *
 * The part of the object that auto_return_field_008cde40 reads.
 *
 */
struct Object008cde40 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_008cde40; meaning unknown. */
};
static_assert(offsetof(Object008cde40, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_008cde40(const Object008cde40 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_008ce040 reads.
 *
 */
struct Object008ce040 {
    uint8_t unknown_0x0000[0x48];
    uint32_t value_0x0048; /**< Read by auto_return_field_008ce040; meaning unknown. */
};
static_assert(offsetof(Object008ce040, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_008ce040(const Object008ce040 *self)
{
    return self->value_0x0048;
}
