// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01990170 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01990170()
{
    return value_01990170;
}

/**
 *
 * The part of the object that auto_return_field_019901b0 reads.
 *
 */
struct Object019901b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019901b0; meaning unknown. */
};
static_assert(offsetof(Object019901b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019901b0(const Object019901b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019901c0 reads.
 *
 */
struct Object019901c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019901c0; meaning unknown. */
};
static_assert(offsetof(Object019901c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019901c0(const Object019901c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01990210()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01990490 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01990490()
{
    return value_01990490;
}

/**
 *
 * The part of the object that auto_return_field_019904d0 reads.
 *
 */
struct Object019904d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019904d0; meaning unknown. */
};
static_assert(offsetof(Object019904d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019904d0(const Object019904d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019904e0 reads.
 *
 */
struct Object019904e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019904e0; meaning unknown. */
};
static_assert(offsetof(Object019904e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019904e0(const Object019904e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01990530()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019907b0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_019907b0()
{
    return value_019907b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01991c50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01991c60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019945d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01996390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019963a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01998dc0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01998ee0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01998ee0()
{
    return value_01998ee0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01998ef0()
{
}

/**
 *
 * The part of the object that auto_return_field_0199a260 reads.
 *
 */
struct Object0199a260 {
    uint8_t unknown_0x0000[0x110];
    uint64_t value_0x0110; /**< Read by auto_return_field_0199a260; meaning unknown. */
};
static_assert(offsetof(Object0199a260, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199a260(const Object0199a260 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_0199cae0 reads.
 *
 */
struct Object0199cae0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0199cae0; meaning unknown. */
};
static_assert(offsetof(Object0199cae0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0199cae0(const Object0199cae0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_0199d6c0 reads.
 *
 */
struct Object0199d6c0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_0199d6c0; meaning unknown. */
};
static_assert(offsetof(Object0199d6c0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0199d6c0(const Object0199d6c0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0199d790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0199d7a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0199d860()
{
}

/**
 *
 * The part of the object that auto_return_field_0199dc00 reads.
 *
 */
struct Object0199dc00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0199dc00; meaning unknown. */
};
static_assert(offsetof(Object0199dc00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199dc00(const Object0199dc00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0199dc10 reads.
 *
 */
struct Object0199dc10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0199dc10; meaning unknown. */
};
static_assert(offsetof(Object0199dc10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199dc10(const Object0199dc10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0199dc60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0199dee0 = 0x160;

extern "C" uint32_t bb_auto_return_constant_0199dee0()
{
    return value_0199dee0;
}

/**
 *
 * The part of the object that auto_return_field_0199df20 reads.
 *
 */
struct Object0199df20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0199df20; meaning unknown. */
};
static_assert(offsetof(Object0199df20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199df20(const Object0199df20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0199df30 reads.
 *
 */
struct Object0199df30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0199df30; meaning unknown. */
};
static_assert(offsetof(Object0199df30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199df30(const Object0199df30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0199df80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0199e200 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0199e200()
{
    return value_0199e200;
}

/**
 *
 * The part of the object that auto_return_field_0199e240 reads.
 *
 */
struct Object0199e240 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0199e240; meaning unknown. */
};
static_assert(offsetof(Object0199e240, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199e240(const Object0199e240 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0199e250 reads.
 *
 */
struct Object0199e250 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0199e250; meaning unknown. */
};
static_assert(offsetof(Object0199e250, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199e250(const Object0199e250 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0199e2a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0199e520 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0199e520()
{
    return value_0199e520;
}

/**
 *
 * The part of the object that auto_return_field_0199e560 reads.
 *
 */
struct Object0199e560 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0199e560; meaning unknown. */
};
static_assert(offsetof(Object0199e560, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199e560(const Object0199e560 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0199e570 reads.
 *
 */
struct Object0199e570 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0199e570; meaning unknown. */
};
static_assert(offsetof(Object0199e570, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199e570(const Object0199e570 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0199e5c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0199e840 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0199e840()
{
    return value_0199e840;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0199fd20()
{
}
