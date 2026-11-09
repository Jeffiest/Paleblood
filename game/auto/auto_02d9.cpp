// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d921c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d921e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d921f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d92200()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92220()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d92230()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d922d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d922e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d922f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d92340()
{
}

/**
 *
 * The part of the object that auto_return_field_02d92370 reads.
 *
 */
struct Object02d92370 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d92370; meaning unknown. */
};
static_assert(offsetof(Object02d92370, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d92370(const Object02d92370 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d94c80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d94ce0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d97f30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d98950()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d98d10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d98d20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d98d30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02d9b640 reads.
 *
 */
struct Object02d9b640 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02d9b640; meaning unknown. */
};
static_assert(offsetof(Object02d9b640, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02d9b640(const Object02d9b640 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02d9b660 reads.
 *
 */
struct Object02d9b660 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_02d9b660; meaning unknown. */
};
static_assert(offsetof(Object02d9b660, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02d9b660(const Object02d9b660 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02d9b680 reads.
 *
 */
struct Object02d9b680 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d9b680; meaning unknown. */
};
static_assert(offsetof(Object02d9b680, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d9b680(const Object02d9b680 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d9b6a0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02d9b6a0()
{
    return value_02d9b6a0;
}

/**
 *
 * The part of the object that auto_return_field_02d9bfd0 reads.
 *
 */
struct Object02d9bfd0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02d9bfd0; meaning unknown. */
};
static_assert(offsetof(Object02d9bfd0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02d9bfd0(const Object02d9bfd0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02d9bff0 reads.
 *
 */
struct Object02d9bff0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d9bff0; meaning unknown. */
};
static_assert(offsetof(Object02d9bff0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d9bff0(const Object02d9bff0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d9c0d0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02d9c0d0()
{
    return value_02d9c0d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d9c940 = 0xb;

extern "C" uint32_t bb_auto_return_constant_02d9c940()
{
    return value_02d9c940;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d9cfe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d9d790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d9d7f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d9f4d0()
{
}
