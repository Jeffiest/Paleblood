// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e400a0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e41050 reads.
 *
 */
struct Object01e41050 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_01e41050; meaning unknown. */
};
static_assert(offsetof(Object01e41050, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e41050(const Object01e41050 *self)
{
    return self->value_0x0014;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e41060()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e41070 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01e41070()
{
    return value_01e41070;
}

/**
 *
 * The part of the object that auto_return_field_01e410b0 reads.
 *
 */
struct Object01e410b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e410b0; meaning unknown. */
};
static_assert(offsetof(Object01e410b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e410b0(const Object01e410b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e410c0 reads.
 *
 */
struct Object01e410c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e410c0; meaning unknown. */
};
static_assert(offsetof(Object01e410c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e410c0(const Object01e410c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e41110()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e411b0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e411b0()
{
    return value_01e411b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e413d0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e419f0 reads.
 *
 */
struct Object01e419f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e419f0; meaning unknown. */
};
static_assert(offsetof(Object01e419f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e419f0(const Object01e419f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e41a00 reads.
 *
 */
struct Object01e41a00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e41a00; meaning unknown. */
};
static_assert(offsetof(Object01e41a00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e41a00(const Object01e41a00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e41a50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e41cd0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e41cd0()
{
    return value_01e41cd0;
}

/**
 *
 * The part of the object that auto_return_field_01e42280 reads.
 *
 */
struct Object01e42280 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e42280; meaning unknown. */
};
static_assert(offsetof(Object01e42280, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e42280(const Object01e42280 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e42290 reads.
 *
 */
struct Object01e42290 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e42290; meaning unknown. */
};
static_assert(offsetof(Object01e42290, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e42290(const Object01e42290 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e422e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e42560 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01e42560()
{
    return value_01e42560;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e42790()
{
}

/**
 *
 * The part of the object that auto_return_field_01e430f0 reads.
 *
 */
struct Object01e430f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e430f0; meaning unknown. */
};
static_assert(offsetof(Object01e430f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e430f0(const Object01e430f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e43100 reads.
 *
 */
struct Object01e43100 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e43100; meaning unknown. */
};
static_assert(offsetof(Object01e43100, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e43100(const Object01e43100 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e43150()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e433d0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01e433d0()
{
    return value_01e433d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e437d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e44200()
{
}

/**
 *
 * The part of the object that auto_return_field_01e44240 reads.
 *
 */
struct Object01e44240 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e44240; meaning unknown. */
};
static_assert(offsetof(Object01e44240, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e44240(const Object01e44240 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e44250 reads.
 *
 */
struct Object01e44250 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e44250; meaning unknown. */
};
static_assert(offsetof(Object01e44250, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e44250(const Object01e44250 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e442a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e44340 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e44340()
{
    return value_01e44340;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e44560()
{
}

/**
 *
 * The part of the object that auto_return_field_01e44c00 reads.
 *
 */
struct Object01e44c00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e44c00; meaning unknown. */
};
static_assert(offsetof(Object01e44c00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e44c00(const Object01e44c00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e44c10 reads.
 *
 */
struct Object01e44c10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e44c10; meaning unknown. */
};
static_assert(offsetof(Object01e44c10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e44c10(const Object01e44c10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e44c60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e44ee0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e44ee0()
{
    return value_01e44ee0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e45100()
{
}

/**
 *
 * The part of the object that auto_return_field_01e457c0 reads.
 *
 */
struct Object01e457c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e457c0; meaning unknown. */
};
static_assert(offsetof(Object01e457c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e457c0(const Object01e457c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e457d0 reads.
 *
 */
struct Object01e457d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e457d0; meaning unknown. */
};
static_assert(offsetof(Object01e457d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e457d0(const Object01e457d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e45820()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e45aa0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e45aa0()
{
    return value_01e45aa0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e45d10()
{
}

/**
 *
 * The part of the object that auto_return_field_01e45d20 reads.
 *
 */
struct Object01e45d20 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01e45d20; meaning unknown. */
};
static_assert(offsetof(Object01e45d20, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e45d20(const Object01e45d20 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01e45d80 reads.
 *
 */
struct Object01e45d80 {
    uint8_t unknown_0x0000[0x11];
    uint8_t value_0x0011; /**< Read by auto_return_field_01e45d80; meaning unknown. */
};
static_assert(offsetof(Object01e45d80, value_0x0011) == 0x11);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e45d80(const Object01e45d80 *self)
{
    return self->value_0x0011;
}

/**
 *
 * The part of the object that auto_return_field_01e45d90 reads.
 *
 */
struct Object01e45d90 {
    uint8_t unknown_0x0000[0x12];
    uint8_t value_0x0012; /**< Read by auto_return_field_01e45d90; meaning unknown. */
};
static_assert(offsetof(Object01e45d90, value_0x0012) == 0x12);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e45d90(const Object01e45d90 *self)
{
    return self->value_0x0012;
}

/**
 *
 * The part of the object that auto_return_float_field_01e45da0 reads.
 *
 */
struct Object01e45da0 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_01e45da0; meaning unknown. */
};
static_assert(offsetof(Object01e45da0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e45da0(const Object01e45da0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_01e464f0 reads.
 *
 */
struct Object01e464f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e464f0; meaning unknown. */
};
static_assert(offsetof(Object01e464f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e464f0(const Object01e464f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e46500 reads.
 *
 */
struct Object01e46500 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e46500; meaning unknown. */
};
static_assert(offsetof(Object01e46500, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e46500(const Object01e46500 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e46550()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e467d0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01e467d0()
{
    return value_01e467d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e46a00()
{
}

/**
 *
 * The part of the object that auto_return_field_01e46eb0 reads.
 *
 */
struct Object01e46eb0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_01e46eb0; meaning unknown. */
};
static_assert(offsetof(Object01e46eb0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e46eb0(const Object01e46eb0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e471d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e47730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e47790()
{
}

/**
 *
 * The part of the object that auto_return_field_01e47820 reads.
 *
 */
struct Object01e47820 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e47820; meaning unknown. */
};
static_assert(offsetof(Object01e47820, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e47820(const Object01e47820 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e47830 reads.
 *
 */
struct Object01e47830 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e47830; meaning unknown. */
};
static_assert(offsetof(Object01e47830, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e47830(const Object01e47830 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e47880()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e47b00 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01e47b00()
{
    return value_01e47b00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e47d40()
{
}

/**
 *
 * The part of the object that auto_return_field_01e48b10 reads.
 *
 */
struct Object01e48b10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e48b10; meaning unknown. */
};
static_assert(offsetof(Object01e48b10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e48b10(const Object01e48b10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e48b20 reads.
 *
 */
struct Object01e48b20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e48b20; meaning unknown. */
};
static_assert(offsetof(Object01e48b20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e48b20(const Object01e48b20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e48b70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e48df0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_01e48df0()
{
    return value_01e48df0;
}

/**
 *
 * The part of the object that auto_return_member_address_01e4d3b0 reads.
 *
 */
struct Object01e4d3b0 {
    uint8_t unknown_0x0000[0x1e0];
    uint8_t member_0x01e0; /**< Read by auto_return_member_address_01e4d3b0; meaning unknown. */
};
static_assert(offsetof(Object01e4d3b0, member_0x01e0) == 0x1e0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e4d3b0(Object01e4d3b0 *self)
{
    return &self->member_0x01e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e4f110()
{
}
