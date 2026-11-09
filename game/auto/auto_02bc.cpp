// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc0440()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02bc0590 reads.
 *
 */
struct Object02bc0590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02bc0590; meaning unknown. */
};
static_assert(offsetof(Object02bc0590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc0590(const Object02bc0590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02bc05a0 reads.
 *
 */
struct Object02bc05a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bc05a0; meaning unknown. */
};
static_assert(offsetof(Object02bc05a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc05a0(const Object02bc05a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc05f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bc0740 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_02bc0740()
{
    return value_02bc0740;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc0a10()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc0ae0 reads.
 *
 */
struct Object02bc0ae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02bc0ae0; meaning unknown. */
};
static_assert(offsetof(Object02bc0ae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc0ae0(const Object02bc0ae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02bc0af0 reads.
 *
 */
struct Object02bc0af0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bc0af0; meaning unknown. */
};
static_assert(offsetof(Object02bc0af0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc0af0(const Object02bc0af0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc0b40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bc0b60 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02bc0b60()
{
    return value_02bc0b60;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc1c90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc3870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc4800()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc4b90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02bc4f80 reads.
 *
 */
struct Object02bc4f80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02bc4f80; meaning unknown. */
};
static_assert(offsetof(Object02bc4f80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc4f80(const Object02bc4f80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02bc4f90 reads.
 *
 */
struct Object02bc4f90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bc4f90; meaning unknown. */
};
static_assert(offsetof(Object02bc4f90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc4f90(const Object02bc4f90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc4fe0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bc5000 = 0x168;

extern "C" uint32_t bb_auto_return_constant_02bc5000()
{
    return value_02bc5000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc50a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc5190 reads.
 *
 */
struct Object02bc5190 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02bc5190; meaning unknown. */
};
static_assert(offsetof(Object02bc5190, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc5190(const Object02bc5190 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02bc51a0 reads.
 *
 */
struct Object02bc51a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bc51a0; meaning unknown. */
};
static_assert(offsetof(Object02bc51a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc51a0(const Object02bc51a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc51f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bc5210 = 0x38;

extern "C" uint32_t bb_auto_return_constant_02bc5210()
{
    return value_02bc5210;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc5320()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02bc6c60 reads.
 *
 */
struct Object02bc6c60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02bc6c60; meaning unknown. */
};
static_assert(offsetof(Object02bc6c60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc6c60(const Object02bc6c60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02bc6c70 reads.
 *
 */
struct Object02bc6c70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bc6c70; meaning unknown. */
};
static_assert(offsetof(Object02bc6c70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc6c70(const Object02bc6c70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc6cc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bc6ce0 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_02bc6ce0()
{
    return value_02bc6ce0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc7c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc7c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc7ca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc7cc0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc7d30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc7d50()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02bc7d60 reads.
 *
 */
struct Object02bc7d60 {
    uint8_t unknown_0x0000[0x24];
    uint16_t value_0x0024; /**< Read by auto_return_field_02bc7d60; meaning unknown. */
};
static_assert(offsetof(Object02bc7d60, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bc7d60(const Object02bc7d60 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_02bc7d70 reads.
 *
 */
struct Object02bc7d70 {
    uint8_t unknown_0x0000[0x1a];
    int16_t value_0x001a; /**< Read by auto_return_field_02bc7d70; meaning unknown. */
};
static_assert(offsetof(Object02bc7d70, value_0x001a) == 0x1a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_02bc7d70(const Object02bc7d70 *self)
{
    return self->value_0x001a;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc7d80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc7dd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc7de0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc7df0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc7e00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc7e10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc7e20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02bc7f20 reads.
 *
 */
struct Object02bc7f20 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02bc7f20; meaning unknown. */
};
static_assert(offsetof(Object02bc7f20, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc7f20(const Object02bc7f20 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc7f30()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc8030 reads.
 *
 */
struct Object02bc8030 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02bc8030; meaning unknown. */
};
static_assert(offsetof(Object02bc8030, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc8030(const Object02bc8030 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8040()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc8140 reads.
 *
 */
struct Object02bc8140 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02bc8140; meaning unknown. */
};
static_assert(offsetof(Object02bc8140, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc8140(const Object02bc8140 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8150()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc8250 reads.
 *
 */
struct Object02bc8250 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02bc8250; meaning unknown. */
};
static_assert(offsetof(Object02bc8250, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc8250(const Object02bc8250 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8260()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc8360 reads.
 *
 */
struct Object02bc8360 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02bc8360; meaning unknown. */
};
static_assert(offsetof(Object02bc8360, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc8360(const Object02bc8360 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8370()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc8460 reads.
 *
 */
struct Object02bc8460 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02bc8460; meaning unknown. */
};
static_assert(offsetof(Object02bc8460, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc8460(const Object02bc8460 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8470()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc8560 reads.
 *
 */
struct Object02bc8560 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02bc8560; meaning unknown. */
};
static_assert(offsetof(Object02bc8560, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc8560(const Object02bc8560 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8570()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc85f0 reads.
 *
 */
struct Object02bc85f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bc85f0; meaning unknown. */
};
static_assert(offsetof(Object02bc85f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc85f0(const Object02bc85f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8640()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8660()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc86c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc86d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc86e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc86f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc8700()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc8710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8780()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc8910 reads.
 *
 */
struct Object02bc8910 {
    uint8_t unknown_0x0000[0x40];
    uint16_t value_0x0040; /**< Read by auto_return_field_02bc8910; meaning unknown. */
};
static_assert(offsetof(Object02bc8910, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bc8910(const Object02bc8910 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02bc8930 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02bc8930()
{
    return value_02bc8930;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc89b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc89d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8a20()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc8bc0 reads.
 *
 */
struct Object02bc8bc0 {
    uint8_t unknown_0x0000[0x38];
    uint16_t value_0x0038; /**< Read by auto_return_field_02bc8bc0; meaning unknown. */
};
static_assert(offsetof(Object02bc8bc0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bc8bc0(const Object02bc8bc0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02bca700 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02bca700()
{
    return value_02bca700;
}

/**
 *
 * The part of the object that auto_return_field_02bcae30 reads.
 *
 */
struct Object02bcae30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02bcae30; meaning unknown. */
};
static_assert(offsetof(Object02bcae30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bcae30(const Object02bcae30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02bcae40 reads.
 *
 */
struct Object02bcae40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bcae40; meaning unknown. */
};
static_assert(offsetof(Object02bcae40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bcae40(const Object02bcae40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bcae90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bcaeb0 = 0x1c0;

extern "C" uint32_t bb_auto_return_constant_02bcaeb0()
{
    return value_02bcaeb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcaf50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcaf60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcaf80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcb090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcb0b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcb0d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcb5e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bcc290 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02bcc290()
{
    return value_02bcc290;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcc610()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6b0 reads.
 *
 */
struct Object02bcc6b0 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_02bcc6b0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6b0, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6b0(Object02bcc6b0 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6c0 reads.
 *
 */
struct Object02bcc6c0 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_02bcc6c0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6c0, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6c0(Object02bcc6c0 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6d0 reads.
 *
 */
struct Object02bcc6d0 {
    uint8_t unknown_0x0000[0x12c];
    uint8_t member_0x012c; /**< Read by auto_return_member_address_02bcc6d0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6d0, member_0x012c) == 0x12c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6d0(Object02bcc6d0 *self)
{
    return &self->member_0x012c;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6e0 reads.
 *
 */
struct Object02bcc6e0 {
    uint8_t unknown_0x0000[0x138];
    uint8_t member_0x0138; /**< Read by auto_return_member_address_02bcc6e0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6e0, member_0x0138) == 0x138);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6e0(Object02bcc6e0 *self)
{
    return &self->member_0x0138;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6f0 reads.
 *
 */
struct Object02bcc6f0 {
    uint8_t unknown_0x0000[0x144];
    uint8_t member_0x0144; /**< Read by auto_return_member_address_02bcc6f0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6f0, member_0x0144) == 0x144);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6f0(Object02bcc6f0 *self)
{
    return &self->member_0x0144;
}

/**
 *
 * The part of the object that auto_return_float_field_02bcc700 reads.
 *
 */
struct Object02bcc700 {
    uint8_t unknown_0x0000[0x150];
    float value_0x0150; /**< Read by auto_return_float_field_02bcc700; meaning unknown. */
};
static_assert(offsetof(Object02bcc700, value_0x0150) == 0x150);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bcc700(const Object02bcc700 *self)
{
    return self->value_0x0150;
}

/**
 *
 * The part of the object that auto_return_field_02bccb00 reads.
 *
 */
struct Object02bccb00 {
    uint8_t unknown_0x0000[0x155];
    uint8_t value_0x0155; /**< Read by auto_return_field_02bccb00; meaning unknown. */
};
static_assert(offsetof(Object02bccb00, value_0x0155) == 0x155);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02bccb00(const Object02bccb00 *self)
{
    return self->value_0x0155;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bccbd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bccbe0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bcd300 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02bcd300()
{
    return value_02bcd300;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcd540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcd5c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd5d0 reads.
 *
 */
struct Object02bcd5d0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_02bcd5d0; meaning unknown. */
};
static_assert(offsetof(Object02bcd5d0, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd5d0(Object02bcd5d0 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd5e0 reads.
 *
 */
struct Object02bcd5e0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_02bcd5e0; meaning unknown. */
};
static_assert(offsetof(Object02bcd5e0, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd5e0(Object02bcd5e0 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd5f0 reads.
 *
 */
struct Object02bcd5f0 {
    uint8_t unknown_0x0000[0xec];
    uint8_t member_0x00ec; /**< Read by auto_return_member_address_02bcd5f0; meaning unknown. */
};
static_assert(offsetof(Object02bcd5f0, member_0x00ec) == 0xec);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd5f0(Object02bcd5f0 *self)
{
    return &self->member_0x00ec;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd600 reads.
 *
 */
struct Object02bcd600 {
    uint8_t unknown_0x0000[0xf8];
    uint8_t member_0x00f8; /**< Read by auto_return_member_address_02bcd600; meaning unknown. */
};
static_assert(offsetof(Object02bcd600, member_0x00f8) == 0xf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd600(Object02bcd600 *self)
{
    return &self->member_0x00f8;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd610 reads.
 *
 */
struct Object02bcd610 {
    uint8_t unknown_0x0000[0x104];
    uint8_t member_0x0104; /**< Read by auto_return_member_address_02bcd610; meaning unknown. */
};
static_assert(offsetof(Object02bcd610, member_0x0104) == 0x104);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd610(Object02bcd610 *self)
{
    return &self->member_0x0104;
}

/**
 *
 * The part of the object that auto_return_float_field_02bcd620 reads.
 *
 */
struct Object02bcd620 {
    uint8_t unknown_0x0000[0x110];
    float value_0x0110; /**< Read by auto_return_float_field_02bcd620; meaning unknown. */
};
static_assert(offsetof(Object02bcd620, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bcd620(const Object02bcd620 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_02bcdb20 reads.
 *
 */
struct Object02bcdb20 {
    uint8_t unknown_0x0000[0x115];
    uint8_t value_0x0115; /**< Read by auto_return_field_02bcdb20; meaning unknown. */
};
static_assert(offsetof(Object02bcdb20, value_0x0115) == 0x115);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02bcdb20(const Object02bcdb20 *self)
{
    return self->value_0x0115;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcddc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcddd0()
{
}

/**
 *
 * The part of the object that auto_return_field_02bce1e0 reads.
 *
 */
struct Object02bce1e0 {
    uint8_t unknown_0x0000[0x18];
    uint16_t value_0x0018; /**< Read by auto_return_field_02bce1e0; meaning unknown. */
};
static_assert(offsetof(Object02bce1e0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bce1e0(const Object02bce1e0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02bce270 reads.
 *
 */
struct Object02bce270 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02bce270; meaning unknown. */
};
static_assert(offsetof(Object02bce270, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bce270(const Object02bce270 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02bce280 reads.
 *
 */
struct Object02bce280 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02bce280; meaning unknown. */
};
static_assert(offsetof(Object02bce280, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bce280(const Object02bce280 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bce290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bce3b0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02bce3c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02bce3c0()
{
    return value_02bce3c0;
}
