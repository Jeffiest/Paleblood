// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783780()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02783c30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783c40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783c50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783c80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783d00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02783d10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02783d20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783d60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02783d70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02783d80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02784c80()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027852a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027852a0()
{
    return value_027852a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02785340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02785510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02785520()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02785550 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02785550()
{
    return value_02785550;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02785560()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02785570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027855e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02785610()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02785690()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027856a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027856b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027856c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027856d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027856e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027856f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02785700 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02785700()
{
    return value_02785700;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02785740()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02785750()
{
}

/**
 *
 * The part of the object that auto_return_field_02787910 reads.
 *
 */
struct Object02787910 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_02787910; meaning unknown. */
};
static_assert(offsetof(Object02787910, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02787910(const Object02787910 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_02787920 reads.
 *
 */
struct Object02787920 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02787920; meaning unknown. */
};
static_assert(offsetof(Object02787920, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02787920(const Object02787920 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_02787b80 reads.
 *
 */
struct Object02787b80 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_02787b80; meaning unknown. */
};
static_assert(offsetof(Object02787b80, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02787b80(const Object02787b80 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02787b90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278aba0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278ae20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278ae30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278ae40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278ae50()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278aeb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278aeb0()
{
    return value_0278aeb0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278b340()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0278b360 reads.
 *
 */
struct Object0278b360 {
    uint8_t unknown_0x0000[0x60];
    uint32_t value_0x0060; /**< Read by auto_return_field_0278b360; meaning unknown. */
};
static_assert(offsetof(Object0278b360, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0278b360(const Object0278b360 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_0278b5d0 reads.
 *
 */
struct Object0278b5d0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_0278b5d0; meaning unknown. */
};
static_assert(offsetof(Object0278b5d0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0278b5d0(const Object0278b5d0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278b5e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278b5e0()
{
    return value_0278b5e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278b740()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278b7c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278b810()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0278bc10 reads.
 *
 */
struct Object0278bc10 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_0278bc10; meaning unknown. */
};
static_assert(offsetof(Object0278bc10, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0278bc10(const Object0278bc10 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278c4a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278c4b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278c4c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278c4f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278c4f0()
{
    return value_0278c4f0;
}

/**
 *
 * The part of the object that auto_return_field_0278c720 reads.
 *
 */
struct Object0278c720 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_0278c720; meaning unknown. */
};
static_assert(offsetof(Object0278c720, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0278c720(const Object0278c720 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278c730()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0278c740 reads.
 *
 */
struct Object0278c740 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_0278c740; meaning unknown. */
};
static_assert(offsetof(Object0278c740, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0278c740(const Object0278c740 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_0278c750 reads.
 *
 */
struct Object0278c750 {
    uint8_t unknown_0x0000[0x24];
    int32_t value_0x0024; /**< Read by auto_return_field_0278c750; meaning unknown. */
};
static_assert(offsetof(Object0278c750, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int64_t bb_auto_return_field_0278c750(const Object0278c750 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_0278c760 reads.
 *
 */
struct Object0278c760 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_0278c760; meaning unknown. */
};
static_assert(offsetof(Object0278c760, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0278c760(const Object0278c760 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_0278c770 reads.
 *
 */
struct Object0278c770 {
    uint8_t unknown_0x0000[0x20];
    int32_t value_0x0020; /**< Read by auto_return_field_0278c770; meaning unknown. */
};
static_assert(offsetof(Object0278c770, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int64_t bb_auto_return_field_0278c770(const Object0278c770 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278c780()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278c790()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278c810 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278c810()
{
    return value_0278c810;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278c880()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278cc10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278d5c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278d6a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278d6a0()
{
    return value_0278d6a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278dae0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278dae0()
{
    return value_0278dae0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278df90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278e090()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0278e0c0 = 0x8000;

extern "C" uint32_t bb_auto_return_constant_0278e0c0()
{
    return value_0278e0c0;
}

/**
 *
 * The part of the object that auto_return_member_address_0278e0d0 reads.
 *
 */
struct Object0278e0d0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_0278e0d0; meaning unknown. */
};
static_assert(offsetof(Object0278e0d0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0278e0d0(Object0278e0d0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0278e0e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_0278e0e0()
{
    return value_0278e0e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278e0f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278e370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278e390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278e3a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278e3d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0278e3e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0278e3f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0278e3f0()
{
    return value_0278e3f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278e400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0278e410()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0278e450 = 0x300;

extern "C" uint32_t bb_auto_return_constant_0278e450()
{
    return value_0278e450;
}
