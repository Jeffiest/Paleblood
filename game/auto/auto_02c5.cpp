// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c50400()
{
}

/**
 *
 * The part of the object that auto_return_field_02c506c0 reads.
 *
 */
struct Object02c506c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c506c0; meaning unknown. */
};
static_assert(offsetof(Object02c506c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c506c0(const Object02c506c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c50b30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c50b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c50b70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c50c40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c50c50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c50c60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c50c70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c50c80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c510c0 reads.
 *
 */
struct Object02c510c0 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_02c510c0; meaning unknown. */
};
static_assert(offsetof(Object02c510c0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c510c0(const Object02c510c0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_member_address_02c510d0 reads.
 *
 */
struct Object02c510d0 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_02c510d0; meaning unknown. */
};
static_assert(offsetof(Object02c510d0, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c510d0(Object02c510d0 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_02c510e0 reads.
 *
 */
struct Object02c510e0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02c510e0; meaning unknown. */
};
static_assert(offsetof(Object02c510e0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c510e0(const Object02c510e0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c51150 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c51150()
{
    return value_02c51150;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c511f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c51210()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c51970()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c51f30 reads.
 *
 */
struct Object02c51f30 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02c51f30; meaning unknown. */
};
static_assert(offsetof(Object02c51f30, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c51f30(const Object02c51f30 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02c51f40 reads.
 *
 */
struct Object02c51f40 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02c51f40; meaning unknown. */
};
static_assert(offsetof(Object02c51f40, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c51f40(const Object02c51f40 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c51f50 reads.
 *
 */
struct Object02c51f50 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02c51f50; meaning unknown. */
};
static_assert(offsetof(Object02c51f50, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c51f50(const Object02c51f50 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c52cc0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c53010 reads.
 *
 */
struct Object02c53010 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02c53010; meaning unknown. */
};
static_assert(offsetof(Object02c53010, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c53010(const Object02c53010 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5ab40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5ab50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5bb00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c5bb30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5c070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5c080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5cef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5d370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5d380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5d8f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5ddd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5dde0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5f140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5f880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c5f890()
{
}
