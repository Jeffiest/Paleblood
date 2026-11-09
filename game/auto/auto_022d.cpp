// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d2d10()
{
}

/**
 *
 * The part of the object that auto_return_field_022d4580 reads.
 *
 */
struct Object022d4580 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_022d4580; meaning unknown. */
};
static_assert(offsetof(Object022d4580, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_022d4580(const Object022d4580 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_022d5150 reads.
 *
 */
struct Object022d5150 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_022d5150; meaning unknown. */
};
static_assert(offsetof(Object022d5150, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_022d5150(const Object022d5150 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d5220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d5230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d52f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d5350()
{
}

/**
 *
 * The part of the object that auto_return_field_022d55e0 reads.
 *
 */
struct Object022d55e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022d55e0; meaning unknown. */
};
static_assert(offsetof(Object022d55e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022d55e0(const Object022d55e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022d55f0 reads.
 *
 */
struct Object022d55f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022d55f0; meaning unknown. */
};
static_assert(offsetof(Object022d55f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022d55f0(const Object022d55f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022d5640()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022d58c0 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_022d58c0()
{
    return value_022d58c0;
}

/**
 *
 * The part of the object that auto_return_field_022d5900 reads.
 *
 */
struct Object022d5900 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022d5900; meaning unknown. */
};
static_assert(offsetof(Object022d5900, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022d5900(const Object022d5900 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022d5910 reads.
 *
 */
struct Object022d5910 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022d5910; meaning unknown. */
};
static_assert(offsetof(Object022d5910, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022d5910(const Object022d5910 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022d5960()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022d5be0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_022d5be0()
{
    return value_022d5be0;
}

/**
 *
 * The part of the object that auto_return_field_022d5c20 reads.
 *
 */
struct Object022d5c20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022d5c20; meaning unknown. */
};
static_assert(offsetof(Object022d5c20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022d5c20(const Object022d5c20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022d5c30 reads.
 *
 */
struct Object022d5c30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022d5c30; meaning unknown. */
};
static_assert(offsetof(Object022d5c30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022d5c30(const Object022d5c30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022d5c80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022d5f00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_022d5f00()
{
    return value_022d5f00;
}

/**
 *
 * The part of the object that auto_return_field_022d5f40 reads.
 *
 */
struct Object022d5f40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022d5f40; meaning unknown. */
};
static_assert(offsetof(Object022d5f40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022d5f40(const Object022d5f40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022d5f50 reads.
 *
 */
struct Object022d5f50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022d5f50; meaning unknown. */
};
static_assert(offsetof(Object022d5f50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022d5f50(const Object022d5f50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022d5fa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022d6220 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_022d6220()
{
    return value_022d6220;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d7220()
{
}

/**
 *
 * The part of the object that auto_return_field_022db3f0 reads.
 *
 */
struct Object022db3f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022db3f0; meaning unknown. */
};
static_assert(offsetof(Object022db3f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022db3f0(const Object022db3f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022db400 reads.
 *
 */
struct Object022db400 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022db400; meaning unknown. */
};
static_assert(offsetof(Object022db400, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022db400(const Object022db400 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022db450()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022db6d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_022db6d0()
{
    return value_022db6d0;
}

/**
 *
 * The part of the object that auto_return_field_022db710 reads.
 *
 */
struct Object022db710 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022db710; meaning unknown. */
};
static_assert(offsetof(Object022db710, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022db710(const Object022db710 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022db720 reads.
 *
 */
struct Object022db720 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022db720; meaning unknown. */
};
static_assert(offsetof(Object022db720, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022db720(const Object022db720 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022db770()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022db9f0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_022db9f0()
{
    return value_022db9f0;
}

/**
 *
 * The part of the object that auto_return_field_022dba30 reads.
 *
 */
struct Object022dba30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022dba30; meaning unknown. */
};
static_assert(offsetof(Object022dba30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022dba30(const Object022dba30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022dba40 reads.
 *
 */
struct Object022dba40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022dba40; meaning unknown. */
};
static_assert(offsetof(Object022dba40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022dba40(const Object022dba40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022dba90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022dbd10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_022dbd10()
{
    return value_022dbd10;
}

/**
 *
 * The part of the object that auto_return_field_022dbd50 reads.
 *
 */
struct Object022dbd50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022dbd50; meaning unknown. */
};
static_assert(offsetof(Object022dbd50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022dbd50(const Object022dbd50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022dbd60 reads.
 *
 */
struct Object022dbd60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022dbd60; meaning unknown. */
};
static_assert(offsetof(Object022dbd60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022dbd60(const Object022dbd60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022dbdb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022dc030 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_022dc030()
{
    return value_022dc030;
}

/**
 *
 * The part of the object that auto_return_member_address_022de910 reads.
 *
 */
struct Object022de910 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_022de910; meaning unknown. */
};
static_assert(offsetof(Object022de910, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_022de910(Object022de910 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_022dea10 reads.
 *
 */
struct Object022dea10 {
    uint8_t unknown_0x0000[0x530];
    uint32_t value_0x0530; /**< Read by auto_return_field_022dea10; meaning unknown. */
};
static_assert(offsetof(Object022dea10, value_0x0530) == 0x530);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_022dea10(const Object022dea10 *self)
{
    return self->value_0x0530;
}

/**
 *
 * The part of the object that auto_return_field_022dea30 reads.
 *
 */
struct Object022dea30 {
    uint8_t unknown_0x0000[0x534];
    uint8_t value_0x0534; /**< Read by auto_return_field_022dea30; meaning unknown. */
};
static_assert(offsetof(Object022dea30, value_0x0534) == 0x534);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_022dea30(const Object022dea30 *self)
{
    return self->value_0x0534;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022dfab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022dfb10()
{
}

/**
 *
 * The part of the object that auto_return_field_022dfed0 reads.
 *
 */
struct Object022dfed0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022dfed0; meaning unknown. */
};
static_assert(offsetof(Object022dfed0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022dfed0(const Object022dfed0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022dfee0 reads.
 *
 */
struct Object022dfee0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022dfee0; meaning unknown. */
};
static_assert(offsetof(Object022dfee0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022dfee0(const Object022dfee0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022dff30()
{
    return 0;
}
