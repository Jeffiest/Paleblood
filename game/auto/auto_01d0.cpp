// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01d07790 reads.
 *
 */
struct Object01d07790 {
    uint8_t unknown_0x0000[0x3c8];
    uint64_t value_0x03c8; /**< Read by auto_return_field_01d07790; meaning unknown. */
};
static_assert(offsetof(Object01d07790, value_0x03c8) == 0x3c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d07790(const Object01d07790 *self)
{
    return self->value_0x03c8;
}

/**
 *
 * The part of the object that auto_return_field_01d077a0 reads.
 *
 */
struct Object01d077a0 {
    uint8_t unknown_0x0000[0x440];
    uint64_t value_0x0440; /**< Read by auto_return_field_01d077a0; meaning unknown. */
};
static_assert(offsetof(Object01d077a0, value_0x0440) == 0x440);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d077a0(const Object01d077a0 *self)
{
    return self->value_0x0440;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01d077b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01d077b0()
{
    return value_01d077b0;
}

/**
 *
 * The part of the object that auto_return_field_01d077d0 reads.
 *
 */
struct Object01d077d0 {
    uint8_t unknown_0x0000[0x4b8];
    uint64_t value_0x04b8; /**< Read by auto_return_field_01d077d0; meaning unknown. */
};
static_assert(offsetof(Object01d077d0, value_0x04b8) == 0x4b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d077d0(const Object01d077d0 *self)
{
    return self->value_0x04b8;
}

/**
 *
 * The part of the object that auto_return_field_01d077e0 reads.
 *
 */
struct Object01d077e0 {
    uint8_t unknown_0x0000[0x4b8];
    uint64_t value_0x04b8; /**< Read by auto_return_field_01d077e0; meaning unknown. */
};
static_assert(offsetof(Object01d077e0, value_0x04b8) == 0x4b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d077e0(const Object01d077e0 *self)
{
    return self->value_0x04b8;
}

/**
 *
 * The part of the object that auto_return_field_01d07930 reads.
 *
 */
struct Object01d07930 {
    uint8_t unknown_0x0000[0x530];
    uint32_t value_0x0530; /**< Read by auto_return_field_01d07930; meaning unknown. */
};
static_assert(offsetof(Object01d07930, value_0x0530) == 0x530);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d07930(const Object01d07930 *self)
{
    return self->value_0x0530;
}

/**
 *
 * The part of the object that auto_return_field_01d07980 reads.
 *
 */
struct Object01d07980 {
    uint8_t unknown_0x0000[0x498];
    uint64_t value_0x0498; /**< Read by auto_return_field_01d07980; meaning unknown. */
};
static_assert(offsetof(Object01d07980, value_0x0498) == 0x498);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d07980(const Object01d07980 *self)
{
    return self->value_0x0498;
}

/**
 *
 * The part of the object that auto_return_field_01d07990 reads.
 *
 */
struct Object01d07990 {
    uint8_t unknown_0x0000[0x4a0];
    uint32_t value_0x04a0; /**< Read by auto_return_field_01d07990; meaning unknown. */
};
static_assert(offsetof(Object01d07990, value_0x04a0) == 0x4a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d07990(const Object01d07990 *self)
{
    return self->value_0x04a0;
}

/**
 *
 * The part of the object that auto_return_field_01d079a0 reads.
 *
 */
struct Object01d079a0 {
    uint8_t unknown_0x0000[0x528];
    uint32_t value_0x0528; /**< Read by auto_return_field_01d079a0; meaning unknown. */
};
static_assert(offsetof(Object01d079a0, value_0x0528) == 0x528);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d079a0(const Object01d079a0 *self)
{
    return self->value_0x0528;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d079b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d07a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d07a70()
{
}

/**
 *
 * The part of the object that auto_return_field_01d086a0 reads.
 *
 */
struct Object01d086a0 {
    uint8_t unknown_0x0000[0x570];
    uint8_t value_0x0570; /**< Read by auto_return_field_01d086a0; meaning unknown. */
};
static_assert(offsetof(Object01d086a0, value_0x0570) == 0x570);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01d086a0(const Object01d086a0 *self)
{
    return self->value_0x0570;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01d086c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01d086c0()
{
    return value_01d086c0;
}

/**
 *
 * The part of the object that auto_return_field_01d0a850 reads.
 *
 */
struct Object01d0a850 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t value_0x00d0; /**< Read by auto_return_field_01d0a850; meaning unknown. */
};
static_assert(offsetof(Object01d0a850, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01d0a850(const Object01d0a850 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d0b0d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d0b130()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01d0e680 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01d0e680()
{
    return value_01d0e680;
}
