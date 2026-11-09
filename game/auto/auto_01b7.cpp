// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b72930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b72980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b729e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b73590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b73790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b73a70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b73ad0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b74fd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b75320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b77540()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b77560()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b776b0 reads.
 *
 */
struct Object01b776b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b776b0; meaning unknown. */
};
static_assert(offsetof(Object01b776b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b776b0(const Object01b776b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b776c0 reads.
 *
 */
struct Object01b776c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b776c0; meaning unknown. */
};
static_assert(offsetof(Object01b776c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b776c0(const Object01b776c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b77710()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b77990 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01b77990()
{
    return value_01b77990;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b77cc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b78ba0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b78bc0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b78d10 reads.
 *
 */
struct Object01b78d10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b78d10; meaning unknown. */
};
static_assert(offsetof(Object01b78d10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b78d10(const Object01b78d10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b78d20 reads.
 *
 */
struct Object01b78d20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b78d20; meaning unknown. */
};
static_assert(offsetof(Object01b78d20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b78d20(const Object01b78d20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b78d70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b78ff0 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01b78ff0()
{
    return value_01b78ff0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b7ab00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b7ab20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b7ac70 reads.
 *
 */
struct Object01b7ac70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b7ac70; meaning unknown. */
};
static_assert(offsetof(Object01b7ac70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b7ac70(const Object01b7ac70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b7ac80 reads.
 *
 */
struct Object01b7ac80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b7ac80; meaning unknown. */
};
static_assert(offsetof(Object01b7ac80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b7ac80(const Object01b7ac80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b7acd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b7af50 = 0x1c0;

extern "C" uint32_t bb_auto_return_constant_01b7af50()
{
    return value_01b7af50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b7d0d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b7d0f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b7d240 reads.
 *
 */
struct Object01b7d240 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b7d240; meaning unknown. */
};
static_assert(offsetof(Object01b7d240, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b7d240(const Object01b7d240 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b7d250 reads.
 *
 */
struct Object01b7d250 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b7d250; meaning unknown. */
};
static_assert(offsetof(Object01b7d250, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b7d250(const Object01b7d250 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b7d2a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b7d520 = 0x1e0;

extern "C" uint32_t bb_auto_return_constant_01b7d520()
{
    return value_01b7d520;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b7db80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b7e7c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b7e7e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b7e930 reads.
 *
 */
struct Object01b7e930 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b7e930; meaning unknown. */
};
static_assert(offsetof(Object01b7e930, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b7e930(const Object01b7e930 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b7e940 reads.
 *
 */
struct Object01b7e940 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b7e940; meaning unknown. */
};
static_assert(offsetof(Object01b7e940, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b7e940(const Object01b7e940 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b7e990()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b7ec10 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01b7ec10()
{
    return value_01b7ec10;
}

/**
 *
 * The part of the object that auto_return_field_01b7fa20 reads.
 *
 */
struct Object01b7fa20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b7fa20; meaning unknown. */
};
static_assert(offsetof(Object01b7fa20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b7fa20(const Object01b7fa20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b7fa30 reads.
 *
 */
struct Object01b7fa30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b7fa30; meaning unknown. */
};
static_assert(offsetof(Object01b7fa30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b7fa30(const Object01b7fa30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b7fa80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b7fd00 = 0x1c0;

extern "C" uint32_t bb_auto_return_constant_01b7fd00()
{
    return value_01b7fd00;
}
