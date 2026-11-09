// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01091ae0()
{
}

/**
 *
 * The part of the object that auto_return_field_01091af0 reads.
 *
 */
struct Object01091af0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_01091af0; meaning unknown. */
};
static_assert(offsetof(Object01091af0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01091af0(const Object01091af0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_01091b10 reads.
 *
 */
struct Object01091b10 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_01091b10; meaning unknown. */
};
static_assert(offsetof(Object01091b10, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01091b10(const Object01091b10 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_01091b20 reads.
 *
 */
struct Object01091b20 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01091b20; meaning unknown. */
};
static_assert(offsetof(Object01091b20, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01091b20(const Object01091b20 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01092690 reads.
 *
 */
struct Object01092690 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_01092690; meaning unknown. */
};
static_assert(offsetof(Object01092690, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01092690(const Object01092690 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_010926a0 reads.
 *
 */
struct Object010926a0 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_010926a0; meaning unknown. */
};
static_assert(offsetof(Object010926a0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010926a0(const Object010926a0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_010926b0 reads.
 *
 */
struct Object010926b0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_010926b0; meaning unknown. */
};
static_assert(offsetof(Object010926b0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010926b0(const Object010926b0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01095e20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01095e30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01095e50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01097540 reads.
 *
 */
struct Object01097540 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_01097540; meaning unknown. */
};
static_assert(offsetof(Object01097540, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01097540(Object01097540 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * The part of the object that auto_return_member_address_010976b0 reads.
 *
 */
struct Object010976b0 {
    uint8_t unknown_0x0000[0x2d0];
    uint8_t member_0x02d0; /**< Read by auto_return_member_address_010976b0; meaning unknown. */
};
static_assert(offsetof(Object010976b0, member_0x02d0) == 0x2d0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010976b0(Object010976b0 *self)
{
    return &self->member_0x02d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01098470 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01098470()
{
    return value_01098470;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010994d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109a6a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109b1d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109c2d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109c2e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109c2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109c6c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109c8e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d1d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d1e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d1f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109d880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109dfd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109f300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0109f310()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010994e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0109d890()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0109df60 reads.
 *
 */
struct Object0109df60 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_0109df60; meaning unknown. */
};
static_assert(offsetof(Object0109df60, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0109df60(const Object0109df60 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_0109e430 reads.
 *
 */
struct Object0109e430 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_0109e430; meaning unknown. */
};
static_assert(offsetof(Object0109e430, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0109e430(const Object0109e430 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_0109e6e0 reads.
 *
 */
struct Object0109e6e0 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_0109e6e0; meaning unknown. */
};
static_assert(offsetof(Object0109e6e0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0109e6e0(const Object0109e6e0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_0109f7c0 reads.
 *
 */
struct Object0109f7c0 {
    uint8_t unknown_0x0000[0xa2];
    uint8_t value_0x00a2; /**< Read by auto_return_field_0109f7c0; meaning unknown. */
};
static_assert(offsetof(Object0109f7c0, value_0x00a2) == 0xa2);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0109f7c0(const Object0109f7c0 *self)
{
    return self->value_0x00a2;
}
