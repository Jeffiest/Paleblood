// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d430e0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d43250 reads.
 *
 */
struct Object01d43250 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d43250; meaning unknown. */
};
static_assert(offsetof(Object01d43250, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d43250(const Object01d43250 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d43260 reads.
 *
 */
struct Object01d43260 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d43260; meaning unknown. */
};
static_assert(offsetof(Object01d43260, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d43260(const Object01d43260 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d432b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d43530 = 0x300;

extern "C" uint32_t bb_auto_return_constant_01d43530()
{
    return value_01d43530;
}

/**
 *
 * The part of the object that auto_return_field_01d43570 reads.
 *
 */
struct Object01d43570 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d43570; meaning unknown. */
};
static_assert(offsetof(Object01d43570, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d43570(const Object01d43570 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d43580 reads.
 *
 */
struct Object01d43580 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d43580; meaning unknown. */
};
static_assert(offsetof(Object01d43580, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d43580(const Object01d43580 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d435d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d43850 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d43850()
{
    return value_01d43850;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d43860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d46280()
{
}

/**
 *
 * The part of the object that auto_return_field_01d46350 reads.
 *
 */
struct Object01d46350 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d46350; meaning unknown. */
};
static_assert(offsetof(Object01d46350, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d46350(const Object01d46350 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d46360 reads.
 *
 */
struct Object01d46360 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d46360; meaning unknown. */
};
static_assert(offsetof(Object01d46360, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d46360(const Object01d46360 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d463b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d46630 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01d46630()
{
    return value_01d46630;
}

/**
 *
 * The part of the object that auto_return_field_01d46670 reads.
 *
 */
struct Object01d46670 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d46670; meaning unknown. */
};
static_assert(offsetof(Object01d46670, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d46670(const Object01d46670 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d46680 reads.
 *
 */
struct Object01d46680 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d46680; meaning unknown. */
};
static_assert(offsetof(Object01d46680, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d46680(const Object01d46680 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d466d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d46950 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d46950()
{
    return value_01d46950;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d485c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d48660()
{
}

/**
 *
 * The part of the object that auto_return_field_01d48740 reads.
 *
 */
struct Object01d48740 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d48740; meaning unknown. */
};
static_assert(offsetof(Object01d48740, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d48740(const Object01d48740 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d48750 reads.
 *
 */
struct Object01d48750 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d48750; meaning unknown. */
};
static_assert(offsetof(Object01d48750, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d48750(const Object01d48750 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d487a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d48a20 = 0x50;

extern "C" uint32_t bb_auto_return_constant_01d48a20()
{
    return value_01d48a20;
}

/**
 *
 * The part of the object that auto_return_field_01d48a60 reads.
 *
 */
struct Object01d48a60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d48a60; meaning unknown. */
};
static_assert(offsetof(Object01d48a60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d48a60(const Object01d48a60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d48a70 reads.
 *
 */
struct Object01d48a70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d48a70; meaning unknown. */
};
static_assert(offsetof(Object01d48a70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d48a70(const Object01d48a70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d48ac0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d48d40 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d48d40()
{
    return value_01d48d40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d49c10()
{
}

/**
 *
 * The part of the object that auto_return_field_01d49ce0 reads.
 *
 */
struct Object01d49ce0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d49ce0; meaning unknown. */
};
static_assert(offsetof(Object01d49ce0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d49ce0(const Object01d49ce0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d49cf0 reads.
 *
 */
struct Object01d49cf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d49cf0; meaning unknown. */
};
static_assert(offsetof(Object01d49cf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d49cf0(const Object01d49cf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d49d40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d49fc0 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01d49fc0()
{
    return value_01d49fc0;
}

/**
 *
 * The part of the object that auto_return_field_01d4a000 reads.
 *
 */
struct Object01d4a000 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d4a000; meaning unknown. */
};
static_assert(offsetof(Object01d4a000, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d4a000(const Object01d4a000 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d4a010 reads.
 *
 */
struct Object01d4a010 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d4a010; meaning unknown. */
};
static_assert(offsetof(Object01d4a010, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d4a010(const Object01d4a010 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d4a060()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d4a2e0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d4a2e0()
{
    return value_01d4a2e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d4f190()
{
}

/**
 *
 * The part of the object that auto_return_field_01d4f260 reads.
 *
 */
struct Object01d4f260 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d4f260; meaning unknown. */
};
static_assert(offsetof(Object01d4f260, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d4f260(const Object01d4f260 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d4f270 reads.
 *
 */
struct Object01d4f270 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d4f270; meaning unknown. */
};
static_assert(offsetof(Object01d4f270, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d4f270(const Object01d4f270 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d4f2c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d4f540 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01d4f540()
{
    return value_01d4f540;
}

/**
 *
 * The part of the object that auto_return_field_01d4f580 reads.
 *
 */
struct Object01d4f580 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d4f580; meaning unknown. */
};
static_assert(offsetof(Object01d4f580, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d4f580(const Object01d4f580 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d4f590 reads.
 *
 */
struct Object01d4f590 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d4f590; meaning unknown. */
};
static_assert(offsetof(Object01d4f590, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d4f590(const Object01d4f590 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d4f5e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d4f860 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d4f860()
{
    return value_01d4f860;
}
