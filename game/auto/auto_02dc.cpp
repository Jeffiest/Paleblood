// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02dc1de0 reads.
 *
 */
struct Object02dc1de0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dc1de0; meaning unknown. */
};
static_assert(offsetof(Object02dc1de0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dc1de0(const Object02dc1de0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dc1df0 reads.
 *
 */
struct Object02dc1df0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dc1df0; meaning unknown. */
};
static_assert(offsetof(Object02dc1df0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dc1df0(const Object02dc1df0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dc1e40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dc1e60 = 0x88;

extern "C" uint32_t bb_auto_return_constant_02dc1e60()
{
    return value_02dc1e60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc1ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc2000()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dc2110()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc4d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc4dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc4e50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc4ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc4f70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc51b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc52d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc53f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5480()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc55a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc56c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc57e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5a20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5ab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5b40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5bd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc5f20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc63a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc64c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc65e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6700()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6a60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6b80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6ca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc6ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc7000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc7120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc7240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc7360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc7480()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc75a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc76c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc77e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc7900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc7a20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc7f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dc8080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dca820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dca880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcb420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcb4f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcc8f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcc900()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcc910()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcc920()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcc930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcc940()
{
}

/**
 *
 * The part of the object that auto_return_field_02dcc950 reads.
 *
 */
struct Object02dcc950 {
    uint8_t unknown_0x0000[0xa28];
    uint64_t value_0x0a28; /**< Read by auto_return_field_02dcc950; meaning unknown. */
};
static_assert(offsetof(Object02dcc950, value_0x0a28) == 0xa28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcc950(const Object02dcc950 *self)
{
    return self->value_0x0a28;
}

/**
 *
 * The part of the object that auto_return_field_02dccb10 reads.
 *
 */
struct Object02dccb10 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02dccb10; meaning unknown. */
};
static_assert(offsetof(Object02dccb10, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02dccb10(const Object02dccb10 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02dccb20 reads.
 *
 */
struct Object02dccb20 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02dccb20; meaning unknown. */
};
static_assert(offsetof(Object02dccb20, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dccb20(const Object02dccb20 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dccb30()
{
}

/**
 *
 * The part of the object that auto_return_field_02dccb50 reads.
 *
 */
struct Object02dccb50 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02dccb50; meaning unknown. */
};
static_assert(offsetof(Object02dccb50, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dccb50(const Object02dccb50 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02dccbd0 reads.
 *
 */
struct Object02dccbd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dccbd0; meaning unknown. */
};
static_assert(offsetof(Object02dccbd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dccbd0(const Object02dccbd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dccbe0 reads.
 *
 */
struct Object02dccbe0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dccbe0; meaning unknown. */
};
static_assert(offsetof(Object02dccbe0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dccbe0(const Object02dccbe0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dccc30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dccc50 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dccc50()
{
    return value_02dccc50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcccf0()
{
}

/**
 *
 * The part of the object that auto_return_field_02dccd40 reads.
 *
 */
struct Object02dccd40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dccd40; meaning unknown. */
};
static_assert(offsetof(Object02dccd40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dccd40(const Object02dccd40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dccd50 reads.
 *
 */
struct Object02dccd50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dccd50; meaning unknown. */
};
static_assert(offsetof(Object02dccd50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dccd50(const Object02dccd50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dccda0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dccdc0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dccdc0()
{
    return value_02dccdc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcce60()
{
}

/**
 *
 * The part of the object that auto_return_field_02dcce80 reads.
 *
 */
struct Object02dcce80 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02dcce80; meaning unknown. */
};
static_assert(offsetof(Object02dcce80, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcce80(const Object02dcce80 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02dccf00 reads.
 *
 */
struct Object02dccf00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dccf00; meaning unknown. */
};
static_assert(offsetof(Object02dccf00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dccf00(const Object02dccf00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dccf10 reads.
 *
 */
struct Object02dccf10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dccf10; meaning unknown. */
};
static_assert(offsetof(Object02dccf10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dccf10(const Object02dccf10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dccf60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dccf80 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dccf80()
{
    return value_02dccf80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd020()
{
}

/**
 *
 * The part of the object that auto_return_field_02dcd070 reads.
 *
 */
struct Object02dcd070 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dcd070; meaning unknown. */
};
static_assert(offsetof(Object02dcd070, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcd070(const Object02dcd070 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dcd080 reads.
 *
 */
struct Object02dcd080 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dcd080; meaning unknown. */
};
static_assert(offsetof(Object02dcd080, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcd080(const Object02dcd080 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcd0d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dcd0f0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dcd0f0()
{
    return value_02dcd0f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd190()
{
}

/**
 *
 * The part of the object that auto_return_field_02dcd1b0 reads.
 *
 */
struct Object02dcd1b0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02dcd1b0; meaning unknown. */
};
static_assert(offsetof(Object02dcd1b0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcd1b0(const Object02dcd1b0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02dcd220 reads.
 *
 */
struct Object02dcd220 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dcd220; meaning unknown. */
};
static_assert(offsetof(Object02dcd220, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcd220(const Object02dcd220 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dcd230 reads.
 *
 */
struct Object02dcd230 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dcd230; meaning unknown. */
};
static_assert(offsetof(Object02dcd230, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcd230(const Object02dcd230 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcd280()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dcd2a0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dcd2a0()
{
    return value_02dcd2a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd340()
{
}

/**
 *
 * The part of the object that auto_return_field_02dcd390 reads.
 *
 */
struct Object02dcd390 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dcd390; meaning unknown. */
};
static_assert(offsetof(Object02dcd390, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcd390(const Object02dcd390 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dcd3a0 reads.
 *
 */
struct Object02dcd3a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dcd3a0; meaning unknown. */
};
static_assert(offsetof(Object02dcd3a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcd3a0(const Object02dcd3a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcd3f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dcd410 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dcd410()
{
    return value_02dcd410;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd4b0()
{
}

/**
 *
 * The part of the object that auto_return_field_02dcd500 reads.
 *
 */
struct Object02dcd500 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dcd500; meaning unknown. */
};
static_assert(offsetof(Object02dcd500, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcd500(const Object02dcd500 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dcd510 reads.
 *
 */
struct Object02dcd510 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dcd510; meaning unknown. */
};
static_assert(offsetof(Object02dcd510, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcd510(const Object02dcd510 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcd560()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dcd580 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02dcd580()
{
    return value_02dcd580;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd640()
{
}

/**
 *
 * The part of the object that auto_return_field_02dcf6a0 reads.
 *
 */
struct Object02dcf6a0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02dcf6a0; meaning unknown. */
};
static_assert(offsetof(Object02dcf6a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02dcf6a0(const Object02dcf6a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02dcfd90 reads.
 *
 */
struct Object02dcfd90 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02dcfd90; meaning unknown. */
};
static_assert(offsetof(Object02dcfd90, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02dcfd90(const Object02dcfd90 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcfe60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcfe70()
{
}
