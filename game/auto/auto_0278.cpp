// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02784c80()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027852a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027852a0()
{
    return value_027852a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02785340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02785520()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02785550 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02785550()
{
    return value_02785550;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278aeb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278aeb0()
{
    return value_0278aeb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278b5e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278b5e0()
{
    return value_0278b5e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278c4f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278c4f0()
{
    return value_0278c4f0;
}

/**
 *
 * The part of the object that auto_return_field_0278c720 reads.
 *
 */
struct Object0278c720 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_0278c720; meaning unknown. */
};
static_assert(offsetof(Object0278c720, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0278c720(const Object0278c720 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_0278c750 reads.
 *
 */
struct Object0278c750 {
    uint8_t unknown_0x0000[0x24];
    int32_t value_0x0024; /**< Read by auto_return_field_0278c750; meaning unknown. */
};
static_assert(offsetof(Object0278c750, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int64_t bb_auto_return_field_0278c750(const Object0278c750 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_0278c770 reads.
 *
 */
struct Object0278c770 {
    uint8_t unknown_0x0000[0x20];
    int32_t value_0x0020; /**< Read by auto_return_field_0278c770; meaning unknown. */
};
static_assert(offsetof(Object0278c770, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int64_t bb_auto_return_field_0278c770(const Object0278c770 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278c810 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278c810()
{
    return value_0278c810;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278d6a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278d6a0()
{
    return value_0278d6a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278dae0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278dae0()
{
    return value_0278dae0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278e3a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278e3f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278e3f0()
{
    return value_0278e3f0;
}
