// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a44030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a44280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a44290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a442a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a442b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a442c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a442d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a44630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a44650()
{
}

/**
 *
 * The part of the object that auto_return_field_02a44730 reads.
 *
 */
struct Object02a44730 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a44730; meaning unknown. */
};
static_assert(offsetof(Object02a44730, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a44730(const Object02a44730 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a44740 reads.
 *
 */
struct Object02a44740 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a44740; meaning unknown. */
};
static_assert(offsetof(Object02a44740, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a44740(const Object02a44740 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a44790()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a448f0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a448f0()
{
    return value_02a448f0;
}

/**
 *
 * The part of the object that auto_return_field_02a44930 reads.
 *
 */
struct Object02a44930 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a44930; meaning unknown. */
};
static_assert(offsetof(Object02a44930, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a44930(const Object02a44930 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a44940 reads.
 *
 */
struct Object02a44940 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a44940; meaning unknown. */
};
static_assert(offsetof(Object02a44940, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a44940(const Object02a44940 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a44990()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a44ae0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a44ae0()
{
    return value_02a44ae0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a44de0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a46810()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a46ae0 reads.
 *
 */
struct Object02a46ae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a46ae0; meaning unknown. */
};
static_assert(offsetof(Object02a46ae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a46ae0(const Object02a46ae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a46af0 reads.
 *
 */
struct Object02a46af0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a46af0; meaning unknown. */
};
static_assert(offsetof(Object02a46af0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a46af0(const Object02a46af0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a46b40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a46c90 = 0xe8;

extern "C" uint32_t bb_auto_return_constant_02a46c90()
{
    return value_02a46c90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a46fe0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a47ab0 reads.
 *
 */
struct Object02a47ab0 {
    uint8_t unknown_0x0000[0x48];
    uint32_t value_0x0048; /**< Read by auto_return_field_02a47ab0; meaning unknown. */
};
static_assert(offsetof(Object02a47ab0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a47ab0(const Object02a47ab0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a48120()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a48330 reads.
 *
 */
struct Object02a48330 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a48330; meaning unknown. */
};
static_assert(offsetof(Object02a48330, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a48330(const Object02a48330 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a48340 reads.
 *
 */
struct Object02a48340 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a48340; meaning unknown. */
};
static_assert(offsetof(Object02a48340, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a48340(const Object02a48340 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a48390()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a484e0 = 0xa8;

extern "C" uint32_t bb_auto_return_constant_02a484e0()
{
    return value_02a484e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a48b50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a48b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a48f60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a48f70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a48f80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a48fd0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a493d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a493d0()
{
    return value_02a493d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a49820()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a49a30 reads.
 *
 */
struct Object02a49a30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a49a30; meaning unknown. */
};
static_assert(offsetof(Object02a49a30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a49a30(const Object02a49a30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a49a40 reads.
 *
 */
struct Object02a49a40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a49a40; meaning unknown. */
};
static_assert(offsetof(Object02a49a40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a49a40(const Object02a49a40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a49a90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a49be0 = 0x78;

extern "C" uint32_t bb_auto_return_constant_02a49be0()
{
    return value_02a49be0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a49f30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a4a630()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a4a9e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a4abf0 reads.
 *
 */
struct Object02a4abf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a4abf0; meaning unknown. */
};
static_assert(offsetof(Object02a4abf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a4abf0(const Object02a4abf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a4ac00 reads.
 *
 */
struct Object02a4ac00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a4ac00; meaning unknown. */
};
static_assert(offsetof(Object02a4ac00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a4ac00(const Object02a4ac00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a4ac50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a4ada0 = 0x68;

extern "C" uint32_t bb_auto_return_constant_02a4ada0()
{
    return value_02a4ada0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a4cd90()
{
}

/**
 *
 * The part of the object that auto_return_field_02a4f300 reads.
 *
 */
struct Object02a4f300 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a4f300; meaning unknown. */
};
static_assert(offsetof(Object02a4f300, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a4f300(const Object02a4f300 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a4f310 reads.
 *
 */
struct Object02a4f310 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a4f310; meaning unknown. */
};
static_assert(offsetof(Object02a4f310, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a4f310(const Object02a4f310 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a4f360()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a4f4c0 = 0xc0;

extern "C" uint32_t bb_auto_return_constant_02a4f4c0()
{
    return value_02a4f4c0;
}
