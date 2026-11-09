// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02160030 reads.
 *
 */
struct Object02160030 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02160030; meaning unknown. */
};
static_assert(offsetof(Object02160030, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02160030(const Object02160030 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02160040 reads.
 *
 */
struct Object02160040 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02160040; meaning unknown. */
};
static_assert(offsetof(Object02160040, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02160040(const Object02160040 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02160090()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02160310 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02160310()
{
    return value_02160310;
}

/**
 *
 * The part of the object that auto_return_field_02161c60 reads.
 *
 */
struct Object02161c60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02161c60; meaning unknown. */
};
static_assert(offsetof(Object02161c60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02161c60(const Object02161c60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02161c70 reads.
 *
 */
struct Object02161c70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02161c70; meaning unknown. */
};
static_assert(offsetof(Object02161c70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02161c70(const Object02161c70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02161cc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02161f40 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02161f40()
{
    return value_02161f40;
}

/**
 *
 * The part of the object that auto_return_field_021630b0 reads.
 *
 */
struct Object021630b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021630b0; meaning unknown. */
};
static_assert(offsetof(Object021630b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021630b0(const Object021630b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021630c0 reads.
 *
 */
struct Object021630c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021630c0; meaning unknown. */
};
static_assert(offsetof(Object021630c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021630c0(const Object021630c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02163110()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02163390 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02163390()
{
    return value_02163390;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021638c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021638d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02164590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02164d60()
{
}

/**
 *
 * The part of the object that auto_return_field_02164d70 reads.
 *
 */
struct Object02164d70 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_02164d70; meaning unknown. */
};
static_assert(offsetof(Object02164d70, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02164d70(const Object02164d70 *self)
{
    return self->value_0x0070;
}

/**
 *
 * The part of the object that auto_return_field_02164d80 reads.
 *
 */
struct Object02164d80 {
    uint8_t unknown_0x0000[0x78];
    uint64_t value_0x0078; /**< Read by auto_return_field_02164d80; meaning unknown. */
};
static_assert(offsetof(Object02164d80, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02164d80(const Object02164d80 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_field_02164d90 reads.
 *
 */
struct Object02164d90 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_02164d90; meaning unknown. */
};
static_assert(offsetof(Object02164d90, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02164d90(const Object02164d90 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_02164da0 reads.
 *
 */
struct Object02164da0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t value_0x00e0; /**< Read by auto_return_field_02164da0; meaning unknown. */
};
static_assert(offsetof(Object02164da0, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02164da0(const Object02164da0 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * The part of the object that auto_return_field_02166770 reads.
 *
 */
struct Object02166770 {
    uint8_t unknown_0x0000[0x388];
    uint64_t value_0x0388; /**< Read by auto_return_field_02166770; meaning unknown. */
};
static_assert(offsetof(Object02166770, value_0x0388) == 0x388);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02166770(const Object02166770 *self)
{
    return self->value_0x0388;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02166cb0()
{
}

/**
 *
 * The part of the object that auto_return_field_0216a240 reads.
 *
 */
struct Object0216a240 {
    uint32_t value_0x0000; /**< Read by auto_return_field_0216a240; meaning unknown. */
};
static_assert(offsetof(Object0216a240, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0216a240(const Object0216a240 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_0216a320 reads.
 *
 */
struct Object0216a320 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_0216a320; meaning unknown. */
};
static_assert(offsetof(Object0216a320, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0216a320(const Object0216a320 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_0216a330 reads.
 *
 */
struct Object0216a330 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_0216a330; meaning unknown. */
};
static_assert(offsetof(Object0216a330, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0216a330(const Object0216a330 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_0216a340 reads.
 *
 */
struct Object0216a340 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_0216a340; meaning unknown. */
};
static_assert(offsetof(Object0216a340, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0216a340(const Object0216a340 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0216a730()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0216dca0 reads.
 *
 */
struct Object0216dca0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0216dca0; meaning unknown. */
};
static_assert(offsetof(Object0216dca0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0216dca0(Object0216dca0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_0216ddc0 reads.
 *
 */
struct Object0216ddc0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t member_0x0028; /**< Read by auto_return_member_address_0216ddc0; meaning unknown. */
};
static_assert(offsetof(Object0216ddc0, member_0x0028) == 0x28);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0216ddc0(Object0216ddc0 *self)
{
    return &self->member_0x0028;
}

/**
 *
 * The part of the object that auto_return_member_address_0216dee0 reads.
 *
 */
struct Object0216dee0 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_0216dee0; meaning unknown. */
};
static_assert(offsetof(Object0216dee0, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0216dee0(Object0216dee0 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * The part of the object that auto_return_member_address_0216e000 reads.
 *
 */
struct Object0216e000 {
    uint8_t unknown_0x0000[0x68];
    uint8_t member_0x0068; /**< Read by auto_return_member_address_0216e000; meaning unknown. */
};
static_assert(offsetof(Object0216e000, member_0x0068) == 0x68);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0216e000(Object0216e000 *self)
{
    return &self->member_0x0068;
}

/**
 *
 * The part of the object that auto_return_member_address_0216e010 reads.
 *
 */
struct Object0216e010 {
    uint8_t unknown_0x0000[0x88];
    uint8_t member_0x0088; /**< Read by auto_return_member_address_0216e010; meaning unknown. */
};
static_assert(offsetof(Object0216e010, member_0x0088) == 0x88);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0216e010(Object0216e010 *self)
{
    return &self->member_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_0216f990 reads.
 *
 */
struct Object0216f990 {
    uint8_t unknown_0x0000[0x460];
    uint64_t value_0x0460; /**< Read by auto_return_field_0216f990; meaning unknown. */
};
static_assert(offsetof(Object0216f990, value_0x0460) == 0x460);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0216f990(const Object0216f990 *self)
{
    return self->value_0x0460;
}

/**
 *
 * The part of the object that auto_return_field_0216f9a0 reads.
 *
 */
struct Object0216f9a0 {
    uint8_t unknown_0x0000[0x468];
    uint64_t value_0x0468; /**< Read by auto_return_field_0216f9a0; meaning unknown. */
};
static_assert(offsetof(Object0216f9a0, value_0x0468) == 0x468);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0216f9a0(const Object0216f9a0 *self)
{
    return self->value_0x0468;
}
