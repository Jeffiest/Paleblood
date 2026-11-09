// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01d60700 reads.
 *
 */
struct Object01d60700 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d60700; meaning unknown. */
};
static_assert(offsetof(Object01d60700, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d60700(const Object01d60700 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d60710 reads.
 *
 */
struct Object01d60710 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d60710; meaning unknown. */
};
static_assert(offsetof(Object01d60710, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d60710(const Object01d60710 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d60760()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d609e0 = 0x258;

extern "C" uint32_t bb_auto_return_constant_01d609e0()
{
    return value_01d609e0;
}

/**
 *
 * The part of the object that auto_return_field_01d60a20 reads.
 *
 */
struct Object01d60a20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d60a20; meaning unknown. */
};
static_assert(offsetof(Object01d60a20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d60a20(const Object01d60a20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d60a30 reads.
 *
 */
struct Object01d60a30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d60a30; meaning unknown. */
};
static_assert(offsetof(Object01d60a30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d60a30(const Object01d60a30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d60a80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d60d00 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d60d00()
{
    return value_01d60d00;
}

/**
 *
 * The part of the object that auto_return_field_01d60d40 reads.
 *
 */
struct Object01d60d40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d60d40; meaning unknown. */
};
static_assert(offsetof(Object01d60d40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d60d40(const Object01d60d40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d60d50 reads.
 *
 */
struct Object01d60d50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d60d50; meaning unknown. */
};
static_assert(offsetof(Object01d60d50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d60d50(const Object01d60d50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d60da0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d61020 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d61020()
{
    return value_01d61020;
}

/**
 *
 * The part of the object that auto_return_field_01d61060 reads.
 *
 */
struct Object01d61060 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d61060; meaning unknown. */
};
static_assert(offsetof(Object01d61060, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d61060(const Object01d61060 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d61070 reads.
 *
 */
struct Object01d61070 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d61070; meaning unknown. */
};
static_assert(offsetof(Object01d61070, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d61070(const Object01d61070 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d610c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d61340 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d61340()
{
    return value_01d61340;
}

/**
 *
 * The part of the object that auto_return_field_01d61a60 reads.
 *
 */
struct Object01d61a60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_01d61a60; meaning unknown. */
};
static_assert(offsetof(Object01d61a60, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d61a60(const Object01d61a60 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d61f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d61fb0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d64cf0 reads.
 *
 */
struct Object01d64cf0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d64cf0; meaning unknown. */
};
static_assert(offsetof(Object01d64cf0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d64cf0(const Object01d64cf0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d64dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d64dd0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d65040 reads.
 *
 */
struct Object01d65040 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d65040; meaning unknown. */
};
static_assert(offsetof(Object01d65040, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d65040(const Object01d65040 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d65050 reads.
 *
 */
struct Object01d65050 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d65050; meaning unknown. */
};
static_assert(offsetof(Object01d65050, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d65050(const Object01d65050 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d650a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d65320 = 0x248;

extern "C" uint32_t bb_auto_return_constant_01d65320()
{
    return value_01d65320;
}

/**
 *
 * The part of the object that auto_return_field_01d65360 reads.
 *
 */
struct Object01d65360 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d65360; meaning unknown. */
};
static_assert(offsetof(Object01d65360, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d65360(const Object01d65360 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d65370 reads.
 *
 */
struct Object01d65370 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d65370; meaning unknown. */
};
static_assert(offsetof(Object01d65370, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d65370(const Object01d65370 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d653c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d65640 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d65640()
{
    return value_01d65640;
}

/**
 *
 * The part of the object that auto_return_field_01d65680 reads.
 *
 */
struct Object01d65680 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d65680; meaning unknown. */
};
static_assert(offsetof(Object01d65680, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d65680(const Object01d65680 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d65690 reads.
 *
 */
struct Object01d65690 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d65690; meaning unknown. */
};
static_assert(offsetof(Object01d65690, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d65690(const Object01d65690 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d656e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d65960 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d65960()
{
    return value_01d65960;
}

/**
 *
 * The part of the object that auto_return_field_01d659a0 reads.
 *
 */
struct Object01d659a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d659a0; meaning unknown. */
};
static_assert(offsetof(Object01d659a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d659a0(const Object01d659a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d659b0 reads.
 *
 */
struct Object01d659b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d659b0; meaning unknown. */
};
static_assert(offsetof(Object01d659b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d659b0(const Object01d659b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d65a00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d65c80 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d65c80()
{
    return value_01d65c80;
}

/**
 *
 * The part of the object that auto_return_field_01d68160 reads.
 *
 */
struct Object01d68160 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d68160; meaning unknown. */
};
static_assert(offsetof(Object01d68160, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d68160(const Object01d68160 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d68230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d68240()
{
}

/**
 *
 * The part of the object that auto_return_field_01d684b0 reads.
 *
 */
struct Object01d684b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d684b0; meaning unknown. */
};
static_assert(offsetof(Object01d684b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d684b0(const Object01d684b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d684c0 reads.
 *
 */
struct Object01d684c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d684c0; meaning unknown. */
};
static_assert(offsetof(Object01d684c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d684c0(const Object01d684c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d68510()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d68790 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_01d68790()
{
    return value_01d68790;
}

/**
 *
 * The part of the object that auto_return_field_01d687d0 reads.
 *
 */
struct Object01d687d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d687d0; meaning unknown. */
};
static_assert(offsetof(Object01d687d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d687d0(const Object01d687d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d687e0 reads.
 *
 */
struct Object01d687e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d687e0; meaning unknown. */
};
static_assert(offsetof(Object01d687e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d687e0(const Object01d687e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d68830()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d68ab0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d68ab0()
{
    return value_01d68ab0;
}

/**
 *
 * The part of the object that auto_return_field_01d68af0 reads.
 *
 */
struct Object01d68af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d68af0; meaning unknown. */
};
static_assert(offsetof(Object01d68af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d68af0(const Object01d68af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d68b00 reads.
 *
 */
struct Object01d68b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d68b00; meaning unknown. */
};
static_assert(offsetof(Object01d68b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d68b00(const Object01d68b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d68b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d68dd0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d68dd0()
{
    return value_01d68dd0;
}

/**
 *
 * The part of the object that auto_return_field_01d68e10 reads.
 *
 */
struct Object01d68e10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d68e10; meaning unknown. */
};
static_assert(offsetof(Object01d68e10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d68e10(const Object01d68e10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d68e20 reads.
 *
 */
struct Object01d68e20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d68e20; meaning unknown. */
};
static_assert(offsetof(Object01d68e20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d68e20(const Object01d68e20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d68e70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d690f0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d690f0()
{
    return value_01d690f0;
}

/**
 *
 * The part of the object that auto_return_field_01d69dc0 reads.
 *
 */
struct Object01d69dc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d69dc0; meaning unknown. */
};
static_assert(offsetof(Object01d69dc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d69dc0(const Object01d69dc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d69dd0 reads.
 *
 */
struct Object01d69dd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d69dd0; meaning unknown. */
};
static_assert(offsetof(Object01d69dd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d69dd0(const Object01d69dd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d69e20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6a0a0 = 0x80;

extern "C" uint32_t bb_auto_return_constant_01d6a0a0()
{
    return value_01d6a0a0;
}

/**
 *
 * The part of the object that auto_return_field_01d6a0e0 reads.
 *
 */
struct Object01d6a0e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d6a0e0; meaning unknown. */
};
static_assert(offsetof(Object01d6a0e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6a0e0(const Object01d6a0e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d6a0f0 reads.
 *
 */
struct Object01d6a0f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d6a0f0; meaning unknown. */
};
static_assert(offsetof(Object01d6a0f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6a0f0(const Object01d6a0f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d6a140()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6a3c0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d6a3c0()
{
    return value_01d6a3c0;
}

/**
 *
 * The part of the object that auto_return_field_01d6ae00 reads.
 *
 */
struct Object01d6ae00 {
    uint8_t unknown_0x0000[0x134];
    uint8_t value_0x0134; /**< Read by auto_return_field_01d6ae00; meaning unknown. */
};
static_assert(offsetof(Object01d6ae00, value_0x0134) == 0x134);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01d6ae00(const Object01d6ae00 *self)
{
    return self->value_0x0134;
}

/**
 *
 * The part of the object that auto_return_field_01d6ae10 reads.
 *
 */
struct Object01d6ae10 {
    uint8_t unknown_0x0000[0x135];
    uint8_t value_0x0135; /**< Read by auto_return_field_01d6ae10; meaning unknown. */
};
static_assert(offsetof(Object01d6ae10, value_0x0135) == 0x135);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01d6ae10(const Object01d6ae10 *self)
{
    return self->value_0x0135;
}

/**
 *
 * The part of the object that auto_return_field_01d6e0d0 reads.
 *
 */
struct Object01d6e0d0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d6e0d0; meaning unknown. */
};
static_assert(offsetof(Object01d6e0d0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d6e0d0(const Object01d6e0d0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d6e1a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d6e1b0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d6e420 reads.
 *
 */
struct Object01d6e420 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d6e420; meaning unknown. */
};
static_assert(offsetof(Object01d6e420, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6e420(const Object01d6e420 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d6e430 reads.
 *
 */
struct Object01d6e430 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d6e430; meaning unknown. */
};
static_assert(offsetof(Object01d6e430, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6e430(const Object01d6e430 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d6e480()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6e700 = 0x138;

extern "C" uint32_t bb_auto_return_constant_01d6e700()
{
    return value_01d6e700;
}

/**
 *
 * The part of the object that auto_return_field_01d6e740 reads.
 *
 */
struct Object01d6e740 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d6e740; meaning unknown. */
};
static_assert(offsetof(Object01d6e740, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6e740(const Object01d6e740 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d6e750 reads.
 *
 */
struct Object01d6e750 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d6e750; meaning unknown. */
};
static_assert(offsetof(Object01d6e750, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6e750(const Object01d6e750 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d6e7a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6ea20 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d6ea20()
{
    return value_01d6ea20;
}

/**
 *
 * The part of the object that auto_return_field_01d6ea60 reads.
 *
 */
struct Object01d6ea60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d6ea60; meaning unknown. */
};
static_assert(offsetof(Object01d6ea60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6ea60(const Object01d6ea60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d6ea70 reads.
 *
 */
struct Object01d6ea70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d6ea70; meaning unknown. */
};
static_assert(offsetof(Object01d6ea70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6ea70(const Object01d6ea70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d6eac0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6ed40 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d6ed40()
{
    return value_01d6ed40;
}

/**
 *
 * The part of the object that auto_return_field_01d6ed80 reads.
 *
 */
struct Object01d6ed80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d6ed80; meaning unknown. */
};
static_assert(offsetof(Object01d6ed80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6ed80(const Object01d6ed80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d6ed90 reads.
 *
 */
struct Object01d6ed90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d6ed90; meaning unknown. */
};
static_assert(offsetof(Object01d6ed90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d6ed90(const Object01d6ed90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d6ede0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6f060 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d6f060()
{
    return value_01d6f060;
}
