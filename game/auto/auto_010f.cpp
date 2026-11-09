// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_010f1eb0 = 0xffff00ff;

extern "C" uint32_t bb_auto_return_constant_010f1eb0()
{
    return value_010f1eb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010f1f00()
{
}

/**
 *
 * The part of the object that auto_return_field_010f2ef0 reads.
 *
 */
struct Object010f2ef0 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_010f2ef0; meaning unknown. */
};
static_assert(offsetof(Object010f2ef0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f2ef0(const Object010f2ef0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_010f2f10 reads.
 *
 */
struct Object010f2f10 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_010f2f10; meaning unknown. */
};
static_assert(offsetof(Object010f2f10, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f2f10(const Object010f2f10 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_010f2f20 reads.
 *
 */
struct Object010f2f20 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_010f2f20; meaning unknown. */
};
static_assert(offsetof(Object010f2f20, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f2f20(const Object010f2f20 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_010f2f30 reads.
 *
 */
struct Object010f2f30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_010f2f30; meaning unknown. */
};
static_assert(offsetof(Object010f2f30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f2f30(const Object010f2f30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_010f30d0 reads.
 *
 */
struct Object010f30d0 {
    uint8_t unknown_0x0000[0xa4];
    uint8_t value_0x00a4; /**< Read by auto_return_field_010f30d0; meaning unknown. */
};
static_assert(offsetof(Object010f30d0, value_0x00a4) == 0xa4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010f30d0(const Object010f30d0 *self)
{
    return self->value_0x00a4;
}

/**
 *
 * The part of the object that auto_return_field_010f30f0 reads.
 *
 */
struct Object010f30f0 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_010f30f0; meaning unknown. */
};
static_assert(offsetof(Object010f30f0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f30f0(const Object010f30f0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010f3f70()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010f4020 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010f4020()
{
    return value_010f4020;
}

/**
 *
 * The part of the object that auto_return_field_010f4740 reads.
 *
 */
struct Object010f4740 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_010f4740; meaning unknown. */
};
static_assert(offsetof(Object010f4740, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f4740(const Object010f4740 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010f4bb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010f4bb0()
{
    return value_010f4bb0;
}

/**
 *
 * The part of the object that auto_return_field_010f5720 reads.
 *
 */
struct Object010f5720 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_010f5720; meaning unknown. */
};
static_assert(offsetof(Object010f5720, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f5720(const Object010f5720 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010f5740 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010f5740()
{
    return value_010f5740;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010f59c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_010f5f80 reads.
 *
 */
struct Object010f5f80 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_010f5f80; meaning unknown. */
};
static_assert(offsetof(Object010f5f80, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f5f80(const Object010f5f80 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010f6830()
{
}

/**
 *
 * The part of the object that auto_return_field_010f7b20 reads.
 *
 */
struct Object010f7b20 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_010f7b20; meaning unknown. */
};
static_assert(offsetof(Object010f7b20, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010f7b20(const Object010f7b20 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_010f7bc0 reads.
 *
 */
struct Object010f7bc0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_010f7bc0; meaning unknown. */
};
static_assert(offsetof(Object010f7bc0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010f7bc0(const Object010f7bc0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_010f7bd0 reads.
 *
 */
struct Object010f7bd0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_010f7bd0; meaning unknown. */
};
static_assert(offsetof(Object010f7bd0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f7bd0(const Object010f7bd0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_010f7dc0 reads.
 *
 */
struct Object010f7dc0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_010f7dc0; meaning unknown. */
};
static_assert(offsetof(Object010f7dc0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f7dc0(const Object010f7dc0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_010f7ed0 reads.
 *
 */
struct Object010f7ed0 {
    uint8_t unknown_0x0000[0x2c];
    uint8_t value_0x002c; /**< Read by auto_return_field_010f7ed0; meaning unknown. */
};
static_assert(offsetof(Object010f7ed0, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010f7ed0(const Object010f7ed0 *self)
{
    return self->value_0x002c;
}

/**
 *
 * The part of the object that auto_return_field_010f8ad0 reads.
 *
 */
struct Object010f8ad0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_010f8ad0; meaning unknown. */
};
static_assert(offsetof(Object010f8ad0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010f8ad0(const Object010f8ad0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_010f8ae0 reads.
 *
 */
struct Object010f8ae0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_010f8ae0; meaning unknown. */
};
static_assert(offsetof(Object010f8ae0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010f8ae0(const Object010f8ae0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_010f8af0 reads.
 *
 */
struct Object010f8af0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_010f8af0; meaning unknown. */
};
static_assert(offsetof(Object010f8af0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010f8af0(const Object010f8af0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_010f9770 reads.
 *
 */
struct Object010f9770 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_010f9770; meaning unknown. */
};
static_assert(offsetof(Object010f9770, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010f9770(const Object010f9770 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_010f9c20 reads.
 *
 */
struct Object010f9c20 {
    uint64_t value_0x0000; /**< Read by auto_return_field_010f9c20; meaning unknown. */
};
static_assert(offsetof(Object010f9c20, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f9c20(const Object010f9c20 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_010fbf20 reads.
 *
 */
struct Object010fbf20 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_010fbf20; meaning unknown. */
};
static_assert(offsetof(Object010fbf20, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010fbf20(const Object010fbf20 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010fbff0()
{
}

/**
 *
 * The part of the object that auto_return_field_010fc000 reads.
 *
 */
struct Object010fc000 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_010fc000; meaning unknown. */
};
static_assert(offsetof(Object010fc000, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010fc000(const Object010fc000 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010fc0d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010ffb30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_010ffb40 = 0x1;

extern "C" uint32_t bb_auto_return_constant_010ffb40()
{
    return value_010ffb40;
}
