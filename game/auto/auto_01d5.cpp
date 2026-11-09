// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d50950()
{
}

/**
 *
 * The part of the object that auto_return_field_01d50a20 reads.
 *
 */
struct Object01d50a20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d50a20; meaning unknown. */
};
static_assert(offsetof(Object01d50a20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d50a20(const Object01d50a20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d50a30 reads.
 *
 */
struct Object01d50a30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d50a30; meaning unknown. */
};
static_assert(offsetof(Object01d50a30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d50a30(const Object01d50a30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d50a80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d50d00 = 0x68;

extern "C" uint32_t bb_auto_return_constant_01d50d00()
{
    return value_01d50d00;
}

/**
 *
 * The part of the object that auto_return_field_01d50d40 reads.
 *
 */
struct Object01d50d40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d50d40; meaning unknown. */
};
static_assert(offsetof(Object01d50d40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d50d40(const Object01d50d40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d50d50 reads.
 *
 */
struct Object01d50d50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d50d50; meaning unknown. */
};
static_assert(offsetof(Object01d50d50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d50d50(const Object01d50d50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d50da0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d51020 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d51020()
{
    return value_01d51020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d51f00()
{
}

/**
 *
 * The part of the object that auto_return_field_01d51fd0 reads.
 *
 */
struct Object01d51fd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d51fd0; meaning unknown. */
};
static_assert(offsetof(Object01d51fd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d51fd0(const Object01d51fd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d51fe0 reads.
 *
 */
struct Object01d51fe0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d51fe0; meaning unknown. */
};
static_assert(offsetof(Object01d51fe0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d51fe0(const Object01d51fe0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d52030()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d522b0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_01d522b0()
{
    return value_01d522b0;
}

/**
 *
 * The part of the object that auto_return_field_01d522f0 reads.
 *
 */
struct Object01d522f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d522f0; meaning unknown. */
};
static_assert(offsetof(Object01d522f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d522f0(const Object01d522f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d52300 reads.
 *
 */
struct Object01d52300 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d52300; meaning unknown. */
};
static_assert(offsetof(Object01d52300, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d52300(const Object01d52300 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d52350()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d525d0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d525d0()
{
    return value_01d525d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d540b0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d54180 reads.
 *
 */
struct Object01d54180 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d54180; meaning unknown. */
};
static_assert(offsetof(Object01d54180, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d54180(const Object01d54180 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d54190 reads.
 *
 */
struct Object01d54190 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d54190; meaning unknown. */
};
static_assert(offsetof(Object01d54190, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d54190(const Object01d54190 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d541e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d54460 = 0x78;

extern "C" uint32_t bb_auto_return_constant_01d54460()
{
    return value_01d54460;
}

/**
 *
 * The part of the object that auto_return_field_01d544a0 reads.
 *
 */
struct Object01d544a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d544a0; meaning unknown. */
};
static_assert(offsetof(Object01d544a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d544a0(const Object01d544a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d544b0 reads.
 *
 */
struct Object01d544b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d544b0; meaning unknown. */
};
static_assert(offsetof(Object01d544b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d544b0(const Object01d544b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d54500()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d54780 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d54780()
{
    return value_01d54780;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d54b90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d54ba0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d54f70 reads.
 *
 */
struct Object01d54f70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d54f70; meaning unknown. */
};
static_assert(offsetof(Object01d54f70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d54f70(const Object01d54f70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d54f80 reads.
 *
 */
struct Object01d54f80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d54f80; meaning unknown. */
};
static_assert(offsetof(Object01d54f80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d54f80(const Object01d54f80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d54fd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d55070 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01d55070()
{
    return value_01d55070;
}

/**
 *
 * The part of the object that auto_return_field_01d55770 reads.
 *
 */
struct Object01d55770 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d55770; meaning unknown. */
};
static_assert(offsetof(Object01d55770, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d55770(const Object01d55770 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d55780 reads.
 *
 */
struct Object01d55780 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d55780; meaning unknown. */
};
static_assert(offsetof(Object01d55780, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d55780(const Object01d55780 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d557d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d55a50 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d55a50()
{
    return value_01d55a50;
}

/**
 *
 * The part of the object that auto_return_field_01d562e0 reads.
 *
 */
struct Object01d562e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d562e0; meaning unknown. */
};
static_assert(offsetof(Object01d562e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d562e0(const Object01d562e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d562f0 reads.
 *
 */
struct Object01d562f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d562f0; meaning unknown. */
};
static_assert(offsetof(Object01d562f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d562f0(const Object01d562f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d56340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d565c0 = 0x58;

extern "C" uint32_t bb_auto_return_constant_01d565c0()
{
    return value_01d565c0;
}

/**
 *
 * The part of the object that auto_return_field_01d58950 reads.
 *
 */
struct Object01d58950 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d58950; meaning unknown. */
};
static_assert(offsetof(Object01d58950, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d58950(const Object01d58950 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d58a20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d58a30()
{
}

/**
 *
 * The part of the object that auto_return_field_01d58ca0 reads.
 *
 */
struct Object01d58ca0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d58ca0; meaning unknown. */
};
static_assert(offsetof(Object01d58ca0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d58ca0(const Object01d58ca0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d58cb0 reads.
 *
 */
struct Object01d58cb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d58cb0; meaning unknown. */
};
static_assert(offsetof(Object01d58cb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d58cb0(const Object01d58cb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d58d00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d58f80 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_01d58f80()
{
    return value_01d58f80;
}

/**
 *
 * The part of the object that auto_return_field_01d58fc0 reads.
 *
 */
struct Object01d58fc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d58fc0; meaning unknown. */
};
static_assert(offsetof(Object01d58fc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d58fc0(const Object01d58fc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d58fd0 reads.
 *
 */
struct Object01d58fd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d58fd0; meaning unknown. */
};
static_assert(offsetof(Object01d58fd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d58fd0(const Object01d58fd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d59020()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d592a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d592a0()
{
    return value_01d592a0;
}

/**
 *
 * The part of the object that auto_return_field_01d592e0 reads.
 *
 */
struct Object01d592e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d592e0; meaning unknown. */
};
static_assert(offsetof(Object01d592e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d592e0(const Object01d592e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d592f0 reads.
 *
 */
struct Object01d592f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d592f0; meaning unknown. */
};
static_assert(offsetof(Object01d592f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d592f0(const Object01d592f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d59340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d595c0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d595c0()
{
    return value_01d595c0;
}

/**
 *
 * The part of the object that auto_return_field_01d59600 reads.
 *
 */
struct Object01d59600 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d59600; meaning unknown. */
};
static_assert(offsetof(Object01d59600, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d59600(const Object01d59600 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d59610 reads.
 *
 */
struct Object01d59610 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d59610; meaning unknown. */
};
static_assert(offsetof(Object01d59610, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d59610(const Object01d59610 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d59660()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d598e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d598e0()
{
    return value_01d598e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5c920()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5c9c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5ca80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cac0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d5cae0 reads.
 *
 */
struct Object01d5cae0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01d5cae0; meaning unknown. */
};
static_assert(offsetof(Object01d5cae0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5cae0(Object01d5cae0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5cba0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cbe0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d5cc00 reads.
 *
 */
struct Object01d5cc00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01d5cc00; meaning unknown. */
};
static_assert(offsetof(Object01d5cc00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5cc00(Object01d5cc00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5cca0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cce0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d5cd00 reads.
 *
 */
struct Object01d5cd00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01d5cd00; meaning unknown. */
};
static_assert(offsetof(Object01d5cd00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5cd00(Object01d5cd00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5cdb0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cdf0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d5ce10 reads.
 *
 */
struct Object01d5ce10 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01d5ce10; meaning unknown. */
};
static_assert(offsetof(Object01d5ce10, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5ce10(Object01d5ce10 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5ceb0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cef0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d5cf10 reads.
 *
 */
struct Object01d5cf10 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01d5cf10; meaning unknown. */
};
static_assert(offsetof(Object01d5cf10, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5cf10(Object01d5cf10 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5cfc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5d000()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d5d020 reads.
 *
 */
struct Object01d5d020 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01d5d020; meaning unknown. */
};
static_assert(offsetof(Object01d5d020, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5d020(Object01d5d020 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5d0c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5d100()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d5d120 reads.
 *
 */
struct Object01d5d120 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01d5d120; meaning unknown. */
};
static_assert(offsetof(Object01d5d120, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5d120(Object01d5d120 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5d1d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5d210()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d5d230 reads.
 *
 */
struct Object01d5d230 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01d5d230; meaning unknown. */
};
static_assert(offsetof(Object01d5d230, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5d230(Object01d5d230 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01d5d270 reads.
 *
 */
struct Object01d5d270 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d5d270; meaning unknown. */
};
static_assert(offsetof(Object01d5d270, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d5d270(const Object01d5d270 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d5d280 reads.
 *
 */
struct Object01d5d280 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d5d280; meaning unknown. */
};
static_assert(offsetof(Object01d5d280, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d5d280(const Object01d5d280 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5d2d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d5d550 = 0x1d0;

extern "C" uint32_t bb_auto_return_constant_01d5d550()
{
    return value_01d5d550;
}

/**
 *
 * The part of the object that auto_return_field_01d5d590 reads.
 *
 */
struct Object01d5d590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d5d590; meaning unknown. */
};
static_assert(offsetof(Object01d5d590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d5d590(const Object01d5d590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d5d5a0 reads.
 *
 */
struct Object01d5d5a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d5d5a0; meaning unknown. */
};
static_assert(offsetof(Object01d5d5a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d5d5a0(const Object01d5d5a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5d5f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d5d870 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d5d870()
{
    return value_01d5d870;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d5d9b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d5da70 reads.
 *
 */
struct Object01d5da70 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01d5da70; meaning unknown. */
};
static_assert(offsetof(Object01d5da70, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5da70(Object01d5da70 *self)
{
    return &self->member_0x0010;
}
