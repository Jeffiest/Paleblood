// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3b2a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02b3b2b0 reads.
 *
 */
struct Object02b3b2b0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02b3b2b0; meaning unknown. */
};
static_assert(offsetof(Object02b3b2b0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3b2b0(const Object02b3b2b0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02b3b2c0 reads.
 *
 */
struct Object02b3b2c0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02b3b2c0; meaning unknown. */
};
static_assert(offsetof(Object02b3b2c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3b2c0(const Object02b3b2c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02b3b2d0 reads.
 *
 */
struct Object02b3b2d0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02b3b2d0; meaning unknown. */
};
static_assert(offsetof(Object02b3b2d0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b3b2d0(const Object02b3b2d0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02b3b310 reads.
 *
 */
struct Object02b3b310 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02b3b310; meaning unknown. */
};
static_assert(offsetof(Object02b3b310, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b3b310(const Object02b3b310 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3be00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3be10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3d6e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3d6f0()
{
}

/**
 *
 * The part of the object that auto_return_field_02b3d720 reads.
 *
 */
struct Object02b3d720 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02b3d720; meaning unknown. */
};
static_assert(offsetof(Object02b3d720, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3d720(const Object02b3d720 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02b3de50 reads.
 *
 */
struct Object02b3de50 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02b3de50; meaning unknown. */
};
static_assert(offsetof(Object02b3de50, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b3de50(const Object02b3de50 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_member_address_02b3dfc0 reads.
 *
 */
struct Object02b3dfc0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02b3dfc0; meaning unknown. */
};
static_assert(offsetof(Object02b3dfc0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02b3dfc0(Object02b3dfc0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3e130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3e160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3e180()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3e5f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3e610()
{
}

/**
 *
 * The part of the object that auto_return_field_02b3e820 reads.
 *
 */
struct Object02b3e820 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02b3e820; meaning unknown. */
};
static_assert(offsetof(Object02b3e820, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3e820(const Object02b3e820 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02b3e830 reads.
 *
 */
struct Object02b3e830 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02b3e830; meaning unknown. */
};
static_assert(offsetof(Object02b3e830, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3e830(const Object02b3e830 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02b3e840 reads.
 *
 */
struct Object02b3e840 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02b3e840; meaning unknown. */
};
static_assert(offsetof(Object02b3e840, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b3e840(const Object02b3e840 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02b3f870 reads.
 *
 */
struct Object02b3f870 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_02b3f870; meaning unknown. */
};
static_assert(offsetof(Object02b3f870, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3f870(const Object02b3f870 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02b3f880 reads.
 *
 */
struct Object02b3f880 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_02b3f880; meaning unknown. */
};
static_assert(offsetof(Object02b3f880, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3f880(const Object02b3f880 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02b3f890 reads.
 *
 */
struct Object02b3f890 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02b3f890; meaning unknown. */
};
static_assert(offsetof(Object02b3f890, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3f890(const Object02b3f890 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02b3f8e0 reads.
 *
 */
struct Object02b3f8e0 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_02b3f8e0; meaning unknown. */
};
static_assert(offsetof(Object02b3f8e0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3f8e0(const Object02b3f8e0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_02b3f8f0 reads.
 *
 */
struct Object02b3f8f0 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_02b3f8f0; meaning unknown. */
};
static_assert(offsetof(Object02b3f8f0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b3f8f0(const Object02b3f8f0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b3f900()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b3f910()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b351f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b36f60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b36f70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b38580()
{
}

/**
 *
 * The part of the object that auto_return_field_02b39360 reads.
 *
 */
struct Object02b39360 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_02b39360; meaning unknown. */
};
static_assert(offsetof(Object02b39360, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b39360(const Object02b39360 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02b39370 reads.
 *
 */
struct Object02b39370 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_02b39370; meaning unknown. */
};
static_assert(offsetof(Object02b39370, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b39370(const Object02b39370 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02b393a0 reads.
 *
 */
struct Object02b393a0 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02b393a0; meaning unknown. */
};
static_assert(offsetof(Object02b393a0, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b393a0(const Object02b393a0 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_02b393b0 reads.
 *
 */
struct Object02b393b0 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02b393b0; meaning unknown. */
};
static_assert(offsetof(Object02b393b0, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b393b0(const Object02b393b0 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_02b3a6c0 reads.
 *
 */
struct Object02b3a6c0 {
    uint8_t unknown_0x0000[0x160];
    uint32_t value_0x0160; /**< Read by auto_return_field_02b3a6c0; meaning unknown. */
};
static_assert(offsetof(Object02b3a6c0, value_0x0160) == 0x160);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b3a6c0(const Object02b3a6c0 *self)
{
    return self->value_0x0160;
}

/**
 *
 * The part of the object that auto_return_field_02b3abb0 reads.
 *
 */
struct Object02b3abb0 {
    uint8_t unknown_0x0000[0x150];
    uint32_t value_0x0150; /**< Read by auto_return_field_02b3abb0; meaning unknown. */
};
static_assert(offsetof(Object02b3abb0, value_0x0150) == 0x150);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b3abb0(const Object02b3abb0 *self)
{
    return self->value_0x0150;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b3aca0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b3b290()
{
}
