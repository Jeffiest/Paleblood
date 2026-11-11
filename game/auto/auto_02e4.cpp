// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02e42920 reads.
 *
 */
struct Object02e42920 {
    uint8_t unknown_0x0000[0x351c];
    uint32_t value_0x351c; /**< Read by auto_return_field_02e42920; meaning unknown. */
};
static_assert(offsetof(Object02e42920, value_0x351c) == 0x351c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e42920(const Object02e42920 *self)
{
    return self->value_0x351c;
}

/**
 *
 * The part of the object that auto_return_field_02e429a0 reads.
 *
 */
struct Object02e429a0 {
    uint8_t unknown_0x0000[0xaa0];
    uint64_t value_0x0aa0; /**< Read by auto_return_field_02e429a0; meaning unknown. */
};
static_assert(offsetof(Object02e429a0, value_0x0aa0) == 0xaa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e429a0(const Object02e429a0 *self)
{
    return self->value_0x0aa0;
}

/**
 *
 * The part of the object that auto_return_field_02e429b0 reads.
 *
 */
struct Object02e429b0 {
    uint8_t unknown_0x0000[0xaa8];
    uint64_t value_0x0aa8; /**< Read by auto_return_field_02e429b0; meaning unknown. */
};
static_assert(offsetof(Object02e429b0, value_0x0aa8) == 0xaa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e429b0(const Object02e429b0 *self)
{
    return self->value_0x0aa8;
}

/**
 *
 * The part of the object that auto_return_field_02e429c0 reads.
 *
 */
struct Object02e429c0 {
    uint8_t unknown_0x0000[0xad0];
    uint64_t value_0x0ad0; /**< Read by auto_return_field_02e429c0; meaning unknown. */
};
static_assert(offsetof(Object02e429c0, value_0x0ad0) == 0xad0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e429c0(const Object02e429c0 *self)
{
    return self->value_0x0ad0;
}

/**
 *
 * The part of the object that auto_return_field_02e429d0 reads.
 *
 */
struct Object02e429d0 {
    uint8_t unknown_0x0000[0xad8];
    uint64_t value_0x0ad8; /**< Read by auto_return_field_02e429d0; meaning unknown. */
};
static_assert(offsetof(Object02e429d0, value_0x0ad8) == 0xad8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e429d0(const Object02e429d0 *self)
{
    return self->value_0x0ad8;
}

/**
 *
 * The part of the object that auto_return_field_02e429e0 reads.
 *
 */
struct Object02e429e0 {
    uint8_t unknown_0x0000[0xae0];
    uint64_t value_0x0ae0; /**< Read by auto_return_field_02e429e0; meaning unknown. */
};
static_assert(offsetof(Object02e429e0, value_0x0ae0) == 0xae0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e429e0(const Object02e429e0 *self)
{
    return self->value_0x0ae0;
}

/**
 *
 * The part of the object that auto_return_field_02e429f0 reads.
 *
 */
struct Object02e429f0 {
    uint8_t unknown_0x0000[0xae8];
    uint64_t value_0x0ae8; /**< Read by auto_return_field_02e429f0; meaning unknown. */
};
static_assert(offsetof(Object02e429f0, value_0x0ae8) == 0xae8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e429f0(const Object02e429f0 *self)
{
    return self->value_0x0ae8;
}

/**
 *
 * The part of the object that auto_return_field_02e42a40 reads.
 *
 */
struct Object02e42a40 {
    uint8_t unknown_0x0000[0xbf0];
    uint32_t value_0x0bf0; /**< Read by auto_return_field_02e42a40; meaning unknown. */
};
static_assert(offsetof(Object02e42a40, value_0x0bf0) == 0xbf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e42a40(const Object02e42a40 *self)
{
    return self->value_0x0bf0;
}

/**
 *
 * The part of the object that auto_return_member_address_02e42b80 reads.
 *
 */
struct Object02e42b80 {
    uint8_t unknown_0x0000[0xa98];
    uint8_t member_0x0a98; /**< Read by auto_return_member_address_02e42b80; meaning unknown. */
};
static_assert(offsetof(Object02e42b80, member_0x0a98) == 0xa98);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02e42b80(Object02e42b80 *self)
{
    return &self->member_0x0a98;
}

/**
 *
 * The part of the object that auto_return_field_02e44030 reads.
 *
 */
struct Object02e44030 {
    uint8_t unknown_0x0000[0x80];
    uint32_t value_0x0080; /**< Read by auto_return_field_02e44030; meaning unknown. */
};
static_assert(offsetof(Object02e44030, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e44030(const Object02e44030 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_02e454e0 reads.
 *
 */
struct Object02e454e0 {
    uint8_t unknown_0x0000[0xd8];
    uint64_t value_0x00d8; /**< Read by auto_return_field_02e454e0; meaning unknown. */
};
static_assert(offsetof(Object02e454e0, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e454e0(const Object02e454e0 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * The part of the object that auto_return_field_02e48c30 reads.
 *
 */
struct Object02e48c30 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_02e48c30; meaning unknown. */
};
static_assert(offsetof(Object02e48c30, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e48c30(const Object02e48c30 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_02e496f0 reads.
 *
 */
struct Object02e496f0 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_02e496f0; meaning unknown. */
};
static_assert(offsetof(Object02e496f0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e496f0(const Object02e496f0 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_02e4aff0 reads.
 *
 */
struct Object02e4aff0 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_02e4aff0; meaning unknown. */
};
static_assert(offsetof(Object02e4aff0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e4aff0(const Object02e4aff0 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_02e4be70 reads.
 *
 */
struct Object02e4be70 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_02e4be70; meaning unknown. */
};
static_assert(offsetof(Object02e4be70, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e4be70(const Object02e4be70 *self)
{
    return self->value_0x00c0;
}
