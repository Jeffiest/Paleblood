// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024f1150 = 0x20;

extern "C" uint32_t bb_auto_return_constant_024f1150()
{
    return value_024f1150;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024f19d0()
{
}

/**
 *
 * The part of the object that auto_return_field_024f1af0 reads.
 *
 */
struct Object024f1af0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_024f1af0; meaning unknown. */
};
static_assert(offsetof(Object024f1af0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_024f1af0(const Object024f1af0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_024f1b70 reads.
 *
 */
struct Object024f1b70 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_024f1b70; meaning unknown. */
};
static_assert(offsetof(Object024f1b70, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024f1b70(const Object024f1b70 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_024f2710 reads.
 *
 */
struct Object024f2710 {
    uint64_t value_0x0000; /**< Read by auto_return_field_024f2710; meaning unknown. */
};
static_assert(offsetof(Object024f2710, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024f2710(const Object024f2710 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024f8070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024f8290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024fa870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024faf70()
{
}

/**
 *
 * The part of the object that auto_return_field_024fb290 reads.
 *
 */
struct Object024fb290 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_024fb290; meaning unknown. */
};
static_assert(offsetof(Object024fb290, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024fb290(const Object024fb290 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024fb3b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024fb620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024fb700()
{
}
