// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018429a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01842a00()
{
}

/**
 *
 * The part of the object that auto_return_field_01842af0 reads.
 *
 */
struct Object01842af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01842af0; meaning unknown. */
};
static_assert(offsetof(Object01842af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01842af0(const Object01842af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01842b00 reads.
 *
 */
struct Object01842b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01842b00; meaning unknown. */
};
static_assert(offsetof(Object01842b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01842b00(const Object01842b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01842b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01842dd0 = 0x350;

extern "C" uint32_t bb_auto_return_constant_01842dd0()
{
    return value_01842dd0;
}

/**
 *
 * The part of the object that auto_return_field_018434e0 reads.
 *
 */
struct Object018434e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018434e0; meaning unknown. */
};
static_assert(offsetof(Object018434e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018434e0(const Object018434e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018434f0 reads.
 *
 */
struct Object018434f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018434f0; meaning unknown. */
};
static_assert(offsetof(Object018434f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018434f0(const Object018434f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01843540()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018437c0 = 0x1f0;

extern "C" uint32_t bb_auto_return_constant_018437c0()
{
    return value_018437c0;
}

/**
 *
 * The part of the object that auto_return_field_01843de0 reads.
 *
 */
struct Object01843de0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01843de0; meaning unknown. */
};
static_assert(offsetof(Object01843de0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01843de0(const Object01843de0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01843df0 reads.
 *
 */
struct Object01843df0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01843df0; meaning unknown. */
};
static_assert(offsetof(Object01843df0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01843df0(const Object01843df0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01843e40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018440c0 = 0x110;

extern "C" uint32_t bb_auto_return_constant_018440c0()
{
    return value_018440c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01844540()
{
}

/**
 *
 * The part of the object that auto_return_field_01844af0 reads.
 *
 */
struct Object01844af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01844af0; meaning unknown. */
};
static_assert(offsetof(Object01844af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01844af0(const Object01844af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01844b00 reads.
 *
 */
struct Object01844b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01844b00; meaning unknown. */
};
static_assert(offsetof(Object01844b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01844b00(const Object01844b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01844b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01844dd0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_01844dd0()
{
    return value_01844dd0;
}

/**
 *
 * The part of the object that auto_return_field_01845b90 reads.
 *
 */
struct Object01845b90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01845b90; meaning unknown. */
};
static_assert(offsetof(Object01845b90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01845b90(const Object01845b90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01845ba0 reads.
 *
 */
struct Object01845ba0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01845ba0; meaning unknown. */
};
static_assert(offsetof(Object01845ba0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01845ba0(const Object01845ba0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01845bf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01845e70 = 0x60;

extern "C" uint32_t bb_auto_return_constant_01845e70()
{
    return value_01845e70;
}

/**
 *
 * The part of the object that auto_return_field_018469f0 reads.
 *
 */
struct Object018469f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018469f0; meaning unknown. */
};
static_assert(offsetof(Object018469f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018469f0(const Object018469f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01846a00 reads.
 *
 */
struct Object01846a00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01846a00; meaning unknown. */
};
static_assert(offsetof(Object01846a00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01846a00(const Object01846a00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01846a50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01846cd0 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_01846cd0()
{
    return value_01846cd0;
}

/**
 *
 * The part of the object that auto_return_field_01847280 reads.
 *
 */
struct Object01847280 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01847280; meaning unknown. */
};
static_assert(offsetof(Object01847280, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01847280(const Object01847280 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01847290 reads.
 *
 */
struct Object01847290 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01847290; meaning unknown. */
};
static_assert(offsetof(Object01847290, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01847290(const Object01847290 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018472e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01847560 = 0x60;

extern "C" uint32_t bb_auto_return_constant_01847560()
{
    return value_01847560;
}

/**
 *
 * The part of the object that auto_return_field_01847b10 reads.
 *
 */
struct Object01847b10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01847b10; meaning unknown. */
};
static_assert(offsetof(Object01847b10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01847b10(const Object01847b10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01847b20 reads.
 *
 */
struct Object01847b20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01847b20; meaning unknown. */
};
static_assert(offsetof(Object01847b20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01847b20(const Object01847b20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01847b70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01847df0 = 0x70;

extern "C" uint32_t bb_auto_return_constant_01847df0()
{
    return value_01847df0;
}

/**
 *
 * The part of the object that auto_return_field_018483a0 reads.
 *
 */
struct Object018483a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018483a0; meaning unknown. */
};
static_assert(offsetof(Object018483a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018483a0(const Object018483a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018483b0 reads.
 *
 */
struct Object018483b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018483b0; meaning unknown. */
};
static_assert(offsetof(Object018483b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018483b0(const Object018483b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01848400()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01848680 = 0x60;

extern "C" uint32_t bb_auto_return_constant_01848680()
{
    return value_01848680;
}

/**
 *
 * The part of the object that auto_return_field_01848e00 reads.
 *
 */
struct Object01848e00 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_01848e00; meaning unknown. */
};
static_assert(offsetof(Object01848e00, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01848e00(const Object01848e00 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_0184a1e0 reads.
 *
 */
struct Object0184a1e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0184a1e0; meaning unknown. */
};
static_assert(offsetof(Object0184a1e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184a1e0(const Object0184a1e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0184a1f0 reads.
 *
 */
struct Object0184a1f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0184a1f0; meaning unknown. */
};
static_assert(offsetof(Object0184a1f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184a1f0(const Object0184a1f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0184a240()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0184a4c0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0184a4c0()
{
    return value_0184a4c0;
}

/**
 *
 * The part of the object that auto_return_field_0184aa70 reads.
 *
 */
struct Object0184aa70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0184aa70; meaning unknown. */
};
static_assert(offsetof(Object0184aa70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184aa70(const Object0184aa70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0184aa80 reads.
 *
 */
struct Object0184aa80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0184aa80; meaning unknown. */
};
static_assert(offsetof(Object0184aa80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184aa80(const Object0184aa80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0184aad0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0184ad50 = 0x80;

extern "C" uint32_t bb_auto_return_constant_0184ad50()
{
    return value_0184ad50;
}

/**
 *
 * The part of the object that auto_return_field_0184ba40 reads.
 *
 */
struct Object0184ba40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0184ba40; meaning unknown. */
};
static_assert(offsetof(Object0184ba40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184ba40(const Object0184ba40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0184ba50 reads.
 *
 */
struct Object0184ba50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0184ba50; meaning unknown. */
};
static_assert(offsetof(Object0184ba50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184ba50(const Object0184ba50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0184baa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0184bd20 = 0xa8;

extern "C" uint32_t bb_auto_return_constant_0184bd20()
{
    return value_0184bd20;
}

/**
 *
 * The part of the object that auto_return_field_0184c4e0 reads.
 *
 */
struct Object0184c4e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0184c4e0; meaning unknown. */
};
static_assert(offsetof(Object0184c4e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184c4e0(const Object0184c4e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0184c4f0 reads.
 *
 */
struct Object0184c4f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0184c4f0; meaning unknown. */
};
static_assert(offsetof(Object0184c4f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184c4f0(const Object0184c4f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0184c540()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0184c7c0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0184c7c0()
{
    return value_0184c7c0;
}

/**
 *
 * The part of the object that auto_return_field_0184cd70 reads.
 *
 */
struct Object0184cd70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0184cd70; meaning unknown. */
};
static_assert(offsetof(Object0184cd70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184cd70(const Object0184cd70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0184cd80 reads.
 *
 */
struct Object0184cd80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0184cd80; meaning unknown. */
};
static_assert(offsetof(Object0184cd80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184cd80(const Object0184cd80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0184cdd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0184d050 = 0x90;

extern "C" uint32_t bb_auto_return_constant_0184d050()
{
    return value_0184d050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0184d4c0()
{
}

/**
 *
 * The part of the object that auto_return_field_0184d8d0 reads.
 *
 */
struct Object0184d8d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0184d8d0; meaning unknown. */
};
static_assert(offsetof(Object0184d8d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184d8d0(const Object0184d8d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0184d8e0 reads.
 *
 */
struct Object0184d8e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0184d8e0; meaning unknown. */
};
static_assert(offsetof(Object0184d8e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184d8e0(const Object0184d8e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0184d930()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0184d9d0 = 0x88;

extern "C" uint32_t bb_auto_return_constant_0184d9d0()
{
    return value_0184d9d0;
}

/**
 *
 * The part of the object that auto_return_field_0184df80 reads.
 *
 */
struct Object0184df80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0184df80; meaning unknown. */
};
static_assert(offsetof(Object0184df80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184df80(const Object0184df80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0184df90 reads.
 *
 */
struct Object0184df90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0184df90; meaning unknown. */
};
static_assert(offsetof(Object0184df90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0184df90(const Object0184df90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0184dfe0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0184e260 = 0x88;

extern "C" uint32_t bb_auto_return_constant_0184e260()
{
    return value_0184e260;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0184f080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0184f520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0184fa10()
{
}
