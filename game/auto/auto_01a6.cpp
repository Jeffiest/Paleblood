// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a60540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a611a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a611c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a61310 reads.
 *
 */
struct Object01a61310 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a61310; meaning unknown. */
};
static_assert(offsetof(Object01a61310, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a61310(const Object01a61310 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a61320 reads.
 *
 */
struct Object01a61320 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a61320; meaning unknown. */
};
static_assert(offsetof(Object01a61320, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a61320(const Object01a61320 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a61370()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a615f0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a615f0()
{
    return value_01a615f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a621a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a62450()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a62470()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a625c0 reads.
 *
 */
struct Object01a625c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a625c0; meaning unknown. */
};
static_assert(offsetof(Object01a625c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a625c0(const Object01a625c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a625d0 reads.
 *
 */
struct Object01a625d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a625d0; meaning unknown. */
};
static_assert(offsetof(Object01a625d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a625d0(const Object01a625d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a62620()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a628a0 = 0x168;

extern "C" uint32_t bb_auto_return_constant_01a628a0()
{
    return value_01a628a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a62a90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a63870()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a63890()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a639e0 reads.
 *
 */
struct Object01a639e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a639e0; meaning unknown. */
};
static_assert(offsetof(Object01a639e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a639e0(const Object01a639e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a639f0 reads.
 *
 */
struct Object01a639f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a639f0; meaning unknown. */
};
static_assert(offsetof(Object01a639f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a639f0(const Object01a639f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a63a40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a63cc0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01a63cc0()
{
    return value_01a63cc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a641e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a64260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a659b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a659d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a65b20 reads.
 *
 */
struct Object01a65b20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a65b20; meaning unknown. */
};
static_assert(offsetof(Object01a65b20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a65b20(const Object01a65b20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a65b30 reads.
 *
 */
struct Object01a65b30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a65b30; meaning unknown. */
};
static_assert(offsetof(Object01a65b30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a65b30(const Object01a65b30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a65b80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a65e00 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_01a65e00()
{
    return value_01a65e00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a67420()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a67440()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a67590 reads.
 *
 */
struct Object01a67590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a67590; meaning unknown. */
};
static_assert(offsetof(Object01a67590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a67590(const Object01a67590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a675a0 reads.
 *
 */
struct Object01a675a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a675a0; meaning unknown. */
};
static_assert(offsetof(Object01a675a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a675a0(const Object01a675a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a675f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a67870 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01a67870()
{
    return value_01a67870;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a689a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a689c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a68b10 reads.
 *
 */
struct Object01a68b10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a68b10; meaning unknown. */
};
static_assert(offsetof(Object01a68b10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a68b10(const Object01a68b10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a68b20 reads.
 *
 */
struct Object01a68b20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a68b20; meaning unknown. */
};
static_assert(offsetof(Object01a68b20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a68b20(const Object01a68b20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a68b70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a68df0 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01a68df0()
{
    return value_01a68df0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a69e00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a69e20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a69f70 reads.
 *
 */
struct Object01a69f70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a69f70; meaning unknown. */
};
static_assert(offsetof(Object01a69f70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a69f70(const Object01a69f70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a69f80 reads.
 *
 */
struct Object01a69f80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a69f80; meaning unknown. */
};
static_assert(offsetof(Object01a69f80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a69f80(const Object01a69f80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a69fd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a6a250 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01a6a250()
{
    return value_01a6a250;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a6a730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a6a740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a6b480()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a6b4a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a6b5f0 reads.
 *
 */
struct Object01a6b5f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a6b5f0; meaning unknown. */
};
static_assert(offsetof(Object01a6b5f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a6b5f0(const Object01a6b5f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a6b600 reads.
 *
 */
struct Object01a6b600 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a6b600; meaning unknown. */
};
static_assert(offsetof(Object01a6b600, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a6b600(const Object01a6b600 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a6b650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a6b8d0 = 0x58;

extern "C" uint32_t bb_auto_return_constant_01a6b8d0()
{
    return value_01a6b8d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a6c860()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a6c880()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a6c9d0 reads.
 *
 */
struct Object01a6c9d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a6c9d0; meaning unknown. */
};
static_assert(offsetof(Object01a6c9d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a6c9d0(const Object01a6c9d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a6c9e0 reads.
 *
 */
struct Object01a6c9e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a6c9e0; meaning unknown. */
};
static_assert(offsetof(Object01a6c9e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a6c9e0(const Object01a6c9e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a6ca30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a6ccb0 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01a6ccb0()
{
    return value_01a6ccb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a6dbf0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a6dc10()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a6dd60 reads.
 *
 */
struct Object01a6dd60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a6dd60; meaning unknown. */
};
static_assert(offsetof(Object01a6dd60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a6dd60(const Object01a6dd60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a6dd70 reads.
 *
 */
struct Object01a6dd70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a6dd70; meaning unknown. */
};
static_assert(offsetof(Object01a6dd70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a6dd70(const Object01a6dd70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a6ddc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a6e040 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01a6e040()
{
    return value_01a6e040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a6f030()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a6f050()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a6f1a0 reads.
 *
 */
struct Object01a6f1a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a6f1a0; meaning unknown. */
};
static_assert(offsetof(Object01a6f1a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a6f1a0(const Object01a6f1a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a6f1b0 reads.
 *
 */
struct Object01a6f1b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a6f1b0; meaning unknown. */
};
static_assert(offsetof(Object01a6f1b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a6f1b0(const Object01a6f1b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a6f200()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a6f480 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01a6f480()
{
    return value_01a6f480;
}
