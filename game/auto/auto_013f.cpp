// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f07c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f2130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f2450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f2460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f2470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f2480()
{
}

/**
 *
 * The part of the object that auto_return_field_013f3e00 reads.
 *
 */
struct Object013f3e00 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_013f3e00; meaning unknown. */
};
static_assert(offsetof(Object013f3e00, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_013f3e00(const Object013f3e00 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f49a0()
{
}

/**
 *
 * The part of the object that auto_return_field_013f5c10 reads.
 *
 */
struct Object013f5c10 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_013f5c10; meaning unknown. */
};
static_assert(offsetof(Object013f5c10, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013f5c10(const Object013f5c10 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_013f69f0 reads.
 *
 */
struct Object013f69f0 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_013f69f0; meaning unknown. */
};
static_assert(offsetof(Object013f69f0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013f69f0(const Object013f69f0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f6a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f6a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f7cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f7ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013f9460()
{
}

/**
 *
 * The part of the object that auto_return_field_013f99e0 reads.
 *
 */
struct Object013f99e0 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_013f99e0; meaning unknown. */
};
static_assert(offsetof(Object013f99e0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013f99e0(const Object013f99e0 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013fbdd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013fbde0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013fecf0()
{
}

/**
 *
 * The part of the object that auto_return_field_013ff270 reads.
 *
 */
struct Object013ff270 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_013ff270; meaning unknown. */
};
static_assert(offsetof(Object013ff270, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013ff270(const Object013ff270 *self)
{
    return self->value_0x00c0;
}
