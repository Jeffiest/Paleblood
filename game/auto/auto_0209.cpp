// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02090980 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02090980()
{
    return value_02090980;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020910f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_020912d0 reads.
 *
 */
struct Object020912d0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_020912d0; meaning unknown. */
};
static_assert(offsetof(Object020912d0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020912d0(Object020912d0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02091380()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020913c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020913e0 reads.
 *
 */
struct Object020913e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020913e0; meaning unknown. */
};
static_assert(offsetof(Object020913e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020913e0(Object020913e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02091480()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020914c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020914e0 reads.
 *
 */
struct Object020914e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020914e0; meaning unknown. */
};
static_assert(offsetof(Object020914e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020914e0(Object020914e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02091590()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020915d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020915f0 reads.
 *
 */
struct Object020915f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020915f0; meaning unknown. */
};
static_assert(offsetof(Object020915f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020915f0(Object020915f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020916a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020916e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02091700 reads.
 *
 */
struct Object02091700 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02091700; meaning unknown. */
};
static_assert(offsetof(Object02091700, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02091700(Object02091700 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020917b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020917f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02091810 reads.
 *
 */
struct Object02091810 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02091810; meaning unknown. */
};
static_assert(offsetof(Object02091810, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02091810(Object02091810 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020918c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091900()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02091920 reads.
 *
 */
struct Object02091920 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02091920; meaning unknown. */
};
static_assert(offsetof(Object02091920, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02091920(Object02091920 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020919d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091a10()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02091a30 reads.
 *
 */
struct Object02091a30 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02091a30; meaning unknown. */
};
static_assert(offsetof(Object02091a30, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02091a30(Object02091a30 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02091ae0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091b20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02091b40 reads.
 *
 */
struct Object02091b40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02091b40; meaning unknown. */
};
static_assert(offsetof(Object02091b40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02091b40(Object02091b40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02091bf0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091c30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02091c50 reads.
 *
 */
struct Object02091c50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02091c50; meaning unknown. */
};
static_assert(offsetof(Object02091c50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02091c50(Object02091c50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02091d00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091d40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02091d60 reads.
 *
 */
struct Object02091d60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02091d60; meaning unknown. */
};
static_assert(offsetof(Object02091d60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02091d60(Object02091d60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02091e10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091e50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02091e70 reads.
 *
 */
struct Object02091e70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02091e70; meaning unknown. */
};
static_assert(offsetof(Object02091e70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02091e70(Object02091e70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020943c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02094400()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02094420 reads.
 *
 */
struct Object02094420 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02094420; meaning unknown. */
};
static_assert(offsetof(Object02094420, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02094420(Object02094420 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02095290()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020952d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020952f0 reads.
 *
 */
struct Object020952f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020952f0; meaning unknown. */
};
static_assert(offsetof(Object020952f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020952f0(Object020952f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02095520()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02095560()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02095580 reads.
 *
 */
struct Object02095580 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02095580; meaning unknown. */
};
static_assert(offsetof(Object02095580, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02095580(Object02095580 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0209a940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0209a950()
{
}

/**
 *
 * The part of the object that auto_return_field_0209b640 reads.
 *
 */
struct Object0209b640 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0209b640; meaning unknown. */
};
static_assert(offsetof(Object0209b640, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0209b640(const Object0209b640 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0209b650 reads.
 *
 */
struct Object0209b650 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0209b650; meaning unknown. */
};
static_assert(offsetof(Object0209b650, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0209b650(const Object0209b650 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0209b6a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0209b920 = 0x300;

extern "C" uint32_t bb_auto_return_constant_0209b920()
{
    return value_0209b920;
}

/**
 *
 * The part of the object that auto_return_field_0209c1e0 reads.
 *
 */
struct Object0209c1e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0209c1e0; meaning unknown. */
};
static_assert(offsetof(Object0209c1e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0209c1e0(const Object0209c1e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0209c1f0 reads.
 *
 */
struct Object0209c1f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0209c1f0; meaning unknown. */
};
static_assert(offsetof(Object0209c1f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0209c1f0(const Object0209c1f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0209c240()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0209c4c0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_0209c4c0()
{
    return value_0209c4c0;
}
