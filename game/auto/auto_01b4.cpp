// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b40fc0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b40fe0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b41130 reads.
 *
 */
struct Object01b41130 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b41130; meaning unknown. */
};
static_assert(offsetof(Object01b41130, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b41130(const Object01b41130 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b41140 reads.
 *
 */
struct Object01b41140 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b41140; meaning unknown. */
};
static_assert(offsetof(Object01b41140, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b41140(const Object01b41140 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b41190()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b41410 = 0x218;

extern "C" uint32_t bb_auto_return_constant_01b41410()
{
    return value_01b41410;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b44e20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b45a60 = 0x4;

extern "C" uint32_t bb_auto_return_constant_01b45a60()
{
    return value_01b45a60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b45d60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b45d80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b45ed0 reads.
 *
 */
struct Object01b45ed0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b45ed0; meaning unknown. */
};
static_assert(offsetof(Object01b45ed0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b45ed0(const Object01b45ed0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b45ee0 reads.
 *
 */
struct Object01b45ee0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b45ee0; meaning unknown. */
};
static_assert(offsetof(Object01b45ee0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b45ee0(const Object01b45ee0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b45f30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b461b0 = 0x240;

extern "C" uint32_t bb_auto_return_constant_01b461b0()
{
    return value_01b461b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b47ca0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b47cc0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b47e10 reads.
 *
 */
struct Object01b47e10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b47e10; meaning unknown. */
};
static_assert(offsetof(Object01b47e10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b47e10(const Object01b47e10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b47e20 reads.
 *
 */
struct Object01b47e20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b47e20; meaning unknown. */
};
static_assert(offsetof(Object01b47e20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b47e20(const Object01b47e20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b47e70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b480f0 = 0x1b8;

extern "C" uint32_t bb_auto_return_constant_01b480f0()
{
    return value_01b480f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b49ec0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b49ee0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b4a030 reads.
 *
 */
struct Object01b4a030 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b4a030; meaning unknown. */
};
static_assert(offsetof(Object01b4a030, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b4a030(const Object01b4a030 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b4a040 reads.
 *
 */
struct Object01b4a040 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b4a040; meaning unknown. */
};
static_assert(offsetof(Object01b4a040, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b4a040(const Object01b4a040 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b4a090()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b4a310 = 0x1d8;

extern "C" uint32_t bb_auto_return_constant_01b4a310()
{
    return value_01b4a310;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b4bc60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b4bc80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b4bdd0 reads.
 *
 */
struct Object01b4bdd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b4bdd0; meaning unknown. */
};
static_assert(offsetof(Object01b4bdd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b4bdd0(const Object01b4bdd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b4bde0 reads.
 *
 */
struct Object01b4bde0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b4bde0; meaning unknown. */
};
static_assert(offsetof(Object01b4bde0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b4bde0(const Object01b4bde0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b4be30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b4c0b0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01b4c0b0()
{
    return value_01b4c0b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b4c710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b4c9d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b4d6b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b4d6d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b4d820 reads.
 *
 */
struct Object01b4d820 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b4d820; meaning unknown. */
};
static_assert(offsetof(Object01b4d820, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b4d820(const Object01b4d820 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b4d830 reads.
 *
 */
struct Object01b4d830 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b4d830; meaning unknown. */
};
static_assert(offsetof(Object01b4d830, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b4d830(const Object01b4d830 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b4d880()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b4db00 = 0x1c0;

extern "C" uint32_t bb_auto_return_constant_01b4db00()
{
    return value_01b4db00;
}
