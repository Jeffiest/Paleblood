// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_020b2640 reads.
 *
 */
struct Object020b2640 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020b2640; meaning unknown. */
};
static_assert(offsetof(Object020b2640, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b2640(const Object020b2640 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020b2650 reads.
 *
 */
struct Object020b2650 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020b2650; meaning unknown. */
};
static_assert(offsetof(Object020b2650, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b2650(const Object020b2650 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b26a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b2740 = 0x220;

extern "C" uint32_t bb_auto_return_constant_020b2740()
{
    return value_020b2740;
}

/**
 *
 * The part of the object that auto_return_member_address_020b3e30 reads.
 *
 */
struct Object020b3e30 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_020b3e30; meaning unknown. */
};
static_assert(offsetof(Object020b3e30, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020b3e30(Object020b3e30 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_020b3e70 reads.
 *
 */
struct Object020b3e70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020b3e70; meaning unknown. */
};
static_assert(offsetof(Object020b3e70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b3e70(const Object020b3e70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020b3e80 reads.
 *
 */
struct Object020b3e80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020b3e80; meaning unknown. */
};
static_assert(offsetof(Object020b3e80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b3e80(const Object020b3e80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b3ed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b3f70 = 0x190;

extern "C" uint32_t bb_auto_return_constant_020b3f70()
{
    return value_020b3f70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5a60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5ac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5b20()
{
}

/**
 *
 * The part of the object that auto_return_field_020b6aa0 reads.
 *
 */
struct Object020b6aa0 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_020b6aa0; meaning unknown. */
};
static_assert(offsetof(Object020b6aa0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b6aa0(const Object020b6aa0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_020b6e70 reads.
 *
 */
struct Object020b6e70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020b6e70; meaning unknown. */
};
static_assert(offsetof(Object020b6e70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b6e70(const Object020b6e70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020b6e80 reads.
 *
 */
struct Object020b6e80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020b6e80; meaning unknown. */
};
static_assert(offsetof(Object020b6e80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b6e80(const Object020b6e80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b6ed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b7150 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_020b7150()
{
    return value_020b7150;
}

/**
 *
 * The part of the object that auto_return_field_020b7680 reads.
 *
 */
struct Object020b7680 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020b7680; meaning unknown. */
};
static_assert(offsetof(Object020b7680, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b7680(const Object020b7680 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020b7690 reads.
 *
 */
struct Object020b7690 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020b7690; meaning unknown. */
};
static_assert(offsetof(Object020b7690, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b7690(const Object020b7690 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b76e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b7960 = 0x8;

extern "C" uint32_t bb_auto_return_constant_020b7960()
{
    return value_020b7960;
}

/**
 *
 * The part of the object that auto_return_field_020b7d30 reads.
 *
 */
struct Object020b7d30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020b7d30; meaning unknown. */
};
static_assert(offsetof(Object020b7d30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b7d30(const Object020b7d30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020b7d40 reads.
 *
 */
struct Object020b7d40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020b7d40; meaning unknown. */
};
static_assert(offsetof(Object020b7d40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b7d40(const Object020b7d40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b7d90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b8010 = 0x8;

extern "C" uint32_t bb_auto_return_constant_020b8010()
{
    return value_020b8010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b8170()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_020b8540 reads.
 *
 */
struct Object020b8540 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020b8540; meaning unknown. */
};
static_assert(offsetof(Object020b8540, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b8540(const Object020b8540 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020b8550 reads.
 *
 */
struct Object020b8550 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020b8550; meaning unknown. */
};
static_assert(offsetof(Object020b8550, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b8550(const Object020b8550 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b85a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b8820 = 0x10;

extern "C" uint32_t bb_auto_return_constant_020b8820()
{
    return value_020b8820;
}

/**
 *
 * The part of the object that auto_return_field_020b8e20 reads.
 *
 */
struct Object020b8e20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020b8e20; meaning unknown. */
};
static_assert(offsetof(Object020b8e20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b8e20(const Object020b8e20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020b8e30 reads.
 *
 */
struct Object020b8e30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020b8e30; meaning unknown. */
};
static_assert(offsetof(Object020b8e30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b8e30(const Object020b8e30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b8e80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b9100 = 0x28;

extern "C" uint32_t bb_auto_return_constant_020b9100()
{
    return value_020b9100;
}

/**
 *
 * The part of the object that auto_return_field_020b94d0 reads.
 *
 */
struct Object020b94d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020b94d0; meaning unknown. */
};
static_assert(offsetof(Object020b94d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b94d0(const Object020b94d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020b94e0 reads.
 *
 */
struct Object020b94e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020b94e0; meaning unknown. */
};
static_assert(offsetof(Object020b94e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b94e0(const Object020b94e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b9530()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b97b0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_020b97b0()
{
    return value_020b97b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020bc040()
{
}

/**
 *
 * The part of the object that auto_return_field_020bdb10 reads.
 *
 */
struct Object020bdb10 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_020bdb10; meaning unknown. */
};
static_assert(offsetof(Object020bdb10, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020bdb10(const Object020bdb10 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_020be6f0 reads.
 *
 */
struct Object020be6f0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_020be6f0; meaning unknown. */
};
static_assert(offsetof(Object020be6f0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020be6f0(const Object020be6f0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020be7c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020be7d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020be900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020be960()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020be9c0()
{
}

/**
 *
 * The part of the object that auto_return_field_020bec50 reads.
 *
 */
struct Object020bec50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020bec50; meaning unknown. */
};
static_assert(offsetof(Object020bec50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020bec50(const Object020bec50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020bec60 reads.
 *
 */
struct Object020bec60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020bec60; meaning unknown. */
};
static_assert(offsetof(Object020bec60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020bec60(const Object020bec60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020becb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020bef30 = 0x250;

extern "C" uint32_t bb_auto_return_constant_020bef30()
{
    return value_020bef30;
}

/**
 *
 * The part of the object that auto_return_field_020bef70 reads.
 *
 */
struct Object020bef70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020bef70; meaning unknown. */
};
static_assert(offsetof(Object020bef70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020bef70(const Object020bef70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020bef80 reads.
 *
 */
struct Object020bef80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020bef80; meaning unknown. */
};
static_assert(offsetof(Object020bef80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020bef80(const Object020bef80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020befd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020bf250 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020bf250()
{
    return value_020bf250;
}

/**
 *
 * The part of the object that auto_return_field_020bf290 reads.
 *
 */
struct Object020bf290 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020bf290; meaning unknown. */
};
static_assert(offsetof(Object020bf290, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020bf290(const Object020bf290 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020bf2a0 reads.
 *
 */
struct Object020bf2a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020bf2a0; meaning unknown. */
};
static_assert(offsetof(Object020bf2a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020bf2a0(const Object020bf2a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020bf2f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020bf570 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020bf570()
{
    return value_020bf570;
}

/**
 *
 * The part of the object that auto_return_field_020bf5b0 reads.
 *
 */
struct Object020bf5b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020bf5b0; meaning unknown. */
};
static_assert(offsetof(Object020bf5b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020bf5b0(const Object020bf5b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020bf5c0 reads.
 *
 */
struct Object020bf5c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020bf5c0; meaning unknown. */
};
static_assert(offsetof(Object020bf5c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020bf5c0(const Object020bf5c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020bf610()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020bf890 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020bf890()
{
    return value_020bf890;
}
