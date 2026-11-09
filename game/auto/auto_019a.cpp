// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019a03c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019a0420()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019a4a30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019a8670 = 0x2;

extern "C" uint32_t bb_auto_return_constant_019a8670()
{
    return value_019a8670;
}

/**
 *
 * The part of the object that auto_return_field_019a86b0 reads.
 *
 */
struct Object019a86b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019a86b0; meaning unknown. */
};
static_assert(offsetof(Object019a86b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019a86b0(const Object019a86b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019a86c0 reads.
 *
 */
struct Object019a86c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019a86c0; meaning unknown. */
};
static_assert(offsetof(Object019a86c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019a86c0(const Object019a86c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019a8710()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019a8990 = 0x2e0;

extern "C" uint32_t bb_auto_return_constant_019a8990()
{
    return value_019a8990;
}

/**
 *
 * The part of the object that auto_return_member_address_019aa430 reads.
 *
 */
struct Object019aa430 {
    uint8_t unknown_0x0000[0x108];
    uint8_t member_0x0108; /**< Read by auto_return_member_address_019aa430; meaning unknown. */
};
static_assert(offsetof(Object019aa430, member_0x0108) == 0x108);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_019aa430(Object019aa430 *self)
{
    return &self->member_0x0108;
}

/**
 *
 * The part of the object that auto_return_field_019ac1b0 reads.
 *
 */
struct Object019ac1b0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_019ac1b0; meaning unknown. */
};
static_assert(offsetof(Object019ac1b0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_019ac1b0(const Object019ac1b0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_019acda0 reads.
 *
 */
struct Object019acda0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_019acda0; meaning unknown. */
};
static_assert(offsetof(Object019acda0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_019acda0(const Object019acda0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ace70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ace80()
{
}

/**
 *
 * The part of the object that auto_return_field_019ad210 reads.
 *
 */
struct Object019ad210 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019ad210; meaning unknown. */
};
static_assert(offsetof(Object019ad210, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019ad210(const Object019ad210 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019ad220 reads.
 *
 */
struct Object019ad220 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019ad220; meaning unknown. */
};
static_assert(offsetof(Object019ad220, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019ad220(const Object019ad220 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019ad270()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019ad4f0 = 0x178;

extern "C" uint32_t bb_auto_return_constant_019ad4f0()
{
    return value_019ad4f0;
}

/**
 *
 * The part of the object that auto_return_field_019ad530 reads.
 *
 */
struct Object019ad530 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019ad530; meaning unknown. */
};
static_assert(offsetof(Object019ad530, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019ad530(const Object019ad530 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019ad540 reads.
 *
 */
struct Object019ad540 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019ad540; meaning unknown. */
};
static_assert(offsetof(Object019ad540, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019ad540(const Object019ad540 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019ad590()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019ad810 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_019ad810()
{
    return value_019ad810;
}

/**
 *
 * The part of the object that auto_return_field_019ad850 reads.
 *
 */
struct Object019ad850 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019ad850; meaning unknown. */
};
static_assert(offsetof(Object019ad850, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019ad850(const Object019ad850 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019ad860 reads.
 *
 */
struct Object019ad860 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019ad860; meaning unknown. */
};
static_assert(offsetof(Object019ad860, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019ad860(const Object019ad860 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019ad8b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019adb30 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_019adb30()
{
    return value_019adb30;
}

/**
 *
 * The part of the object that auto_return_field_019adb70 reads.
 *
 */
struct Object019adb70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019adb70; meaning unknown. */
};
static_assert(offsetof(Object019adb70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019adb70(const Object019adb70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019adb80 reads.
 *
 */
struct Object019adb80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019adb80; meaning unknown. */
};
static_assert(offsetof(Object019adb80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019adb80(const Object019adb80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019adbd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019ade50 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_019ade50()
{
    return value_019ade50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ae8d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019af3f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019af400()
{
}
