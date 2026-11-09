// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f0070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f0080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f0280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f0490()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f08d0()
{
}

/**
 *
 * The part of the object that auto_return_field_009f26a0 reads.
 *
 */
struct Object009f26a0 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_009f26a0; meaning unknown. */
};
static_assert(offsetof(Object009f26a0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_009f26a0(const Object009f26a0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f2a80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f2e40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f3360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f9a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009f9a10()
{
}

/**
 *
 * The part of the object that auto_return_field_009f9f90 reads.
 *
 */
struct Object009f9f90 {
    uint8_t unknown_0x0000[0x78];
    uint64_t value_0x0078; /**< Read by auto_return_field_009f9f90; meaning unknown. */
};
static_assert(offsetof(Object009f9f90, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_009f9f90(const Object009f9f90 *self)
{
    return self->value_0x0078;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009fc090()
{
}

/**
 *
 * The part of the object that auto_return_field_009fc160 reads.
 *
 */
struct Object009fc160 {
    uint8_t unknown_0x0000[0x280];
    uint64_t value_0x0280; /**< Read by auto_return_field_009fc160; meaning unknown. */
};
static_assert(offsetof(Object009fc160, value_0x0280) == 0x280);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_009fc160(const Object009fc160 *self)
{
    return self->value_0x0280;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009fdb10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009fdb20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_009fdb30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_009fdb30()
{
    return value_009fdb30;
}
