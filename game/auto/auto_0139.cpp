// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_013918c0 reads.
 *
 */
struct Object013918c0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_013918c0; meaning unknown. */
};
static_assert(offsetof(Object013918c0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_013918c0(const Object013918c0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_013918d0 reads.
 *
 */
struct Object013918d0 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_013918d0; meaning unknown. */
};
static_assert(offsetof(Object013918d0, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_013918d0(const Object013918d0 *self)
{
    return self->value_0x0024;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01391930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01392ac0()
{
}

/**
 *
 * The part of the object that auto_return_field_01393000 reads.
 *
 */
struct Object01393000 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_01393000; meaning unknown. */
};
static_assert(offsetof(Object01393000, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01393000(const Object01393000 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01393510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01393670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013936e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013936f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01393700()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01393710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01393720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01393730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01395950()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01397280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01399850()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01399860 = 0x4;

extern "C" uint32_t bb_auto_return_constant_01399860()
{
    return value_01399860;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0139a380()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0139a390 = 0x6;

extern "C" uint32_t bb_auto_return_constant_0139a390()
{
    return value_0139a390;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0139b4f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0139d9d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0139ea10()
{
    return 0;
}
