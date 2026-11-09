// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e90500()
{
}

/**
 *
 * The part of the object that auto_return_field_01e90540 reads.
 *
 */
struct Object01e90540 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_01e90540; meaning unknown. */
};
static_assert(offsetof(Object01e90540, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e90540(const Object01e90540 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e912b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e91750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e917b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e92e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e93170()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01e93280 reads.
 *
 */
struct Object01e93280 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01e93280; meaning unknown. */
};
static_assert(offsetof(Object01e93280, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e93280(Object01e93280 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * The part of the object that auto_return_member_address_01e93290 reads.
 *
 */
struct Object01e93290 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_01e93290; meaning unknown. */
};
static_assert(offsetof(Object01e93290, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e93290(Object01e93290 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_01e932a0 reads.
 *
 */
struct Object01e932a0 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_01e932a0; meaning unknown. */
};
static_assert(offsetof(Object01e932a0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e932a0(const Object01e932a0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_01e934e0 reads.
 *
 */
struct Object01e934e0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_01e934e0; meaning unknown. */
};
static_assert(offsetof(Object01e934e0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e934e0(const Object01e934e0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e936f0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e93b70 reads.
 *
 */
struct Object01e93b70 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_01e93b70; meaning unknown. */
};
static_assert(offsetof(Object01e93b70, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e93b70(const Object01e93b70 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_01e93b90 reads.
 *
 */
struct Object01e93b90 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_01e93b90; meaning unknown. */
};
static_assert(offsetof(Object01e93b90, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e93b90(const Object01e93b90 *self)
{
    return self->value_0x001c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e94000()
{
}

/**
 *
 * The part of the object that auto_return_field_01e94c40 reads.
 *
 */
struct Object01e94c40 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_01e94c40; meaning unknown. */
};
static_assert(offsetof(Object01e94c40, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e94c40(const Object01e94c40 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_01e94c60 reads.
 *
 */
struct Object01e94c60 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_01e94c60; meaning unknown. */
};
static_assert(offsetof(Object01e94c60, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e94c60(const Object01e94c60 *self)
{
    return self->value_0x001c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e998d0()
{
}
