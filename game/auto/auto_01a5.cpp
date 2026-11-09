// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a51280()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a512a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a513f0 reads.
 *
 */
struct Object01a513f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a513f0; meaning unknown. */
};
static_assert(offsetof(Object01a513f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a513f0(const Object01a513f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a51400 reads.
 *
 */
struct Object01a51400 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a51400; meaning unknown. */
};
static_assert(offsetof(Object01a51400, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a51400(const Object01a51400 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a51450()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a516d0 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01a516d0()
{
    return value_01a516d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a528d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a528f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a52a40 reads.
 *
 */
struct Object01a52a40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a52a40; meaning unknown. */
};
static_assert(offsetof(Object01a52a40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a52a40(const Object01a52a40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a52a50 reads.
 *
 */
struct Object01a52a50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a52a50; meaning unknown. */
};
static_assert(offsetof(Object01a52a50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a52a50(const Object01a52a50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a52aa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a52d20 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_01a52d20()
{
    return value_01a52d20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a54150()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a54170()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a542c0 reads.
 *
 */
struct Object01a542c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a542c0; meaning unknown. */
};
static_assert(offsetof(Object01a542c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a542c0(const Object01a542c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a542d0 reads.
 *
 */
struct Object01a542d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a542d0; meaning unknown. */
};
static_assert(offsetof(Object01a542d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a542d0(const Object01a542d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a54320()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a545a0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01a545a0()
{
    return value_01a545a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a56330()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a56350()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a564a0 reads.
 *
 */
struct Object01a564a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a564a0; meaning unknown. */
};
static_assert(offsetof(Object01a564a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a564a0(const Object01a564a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a564b0 reads.
 *
 */
struct Object01a564b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a564b0; meaning unknown. */
};
static_assert(offsetof(Object01a564b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a564b0(const Object01a564b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a56500()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a56780 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01a56780()
{
    return value_01a56780;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a57da0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a57dc0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a57f10 reads.
 *
 */
struct Object01a57f10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a57f10; meaning unknown. */
};
static_assert(offsetof(Object01a57f10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a57f10(const Object01a57f10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a57f20 reads.
 *
 */
struct Object01a57f20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a57f20; meaning unknown. */
};
static_assert(offsetof(Object01a57f20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a57f20(const Object01a57f20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a57f70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a581f0 = 0x1b0;

extern "C" uint32_t bb_auto_return_constant_01a581f0()
{
    return value_01a581f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a58fb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a5a9d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a5a9f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a5ab40 reads.
 *
 */
struct Object01a5ab40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a5ab40; meaning unknown. */
};
static_assert(offsetof(Object01a5ab40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a5ab40(const Object01a5ab40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a5ab50 reads.
 *
 */
struct Object01a5ab50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a5ab50; meaning unknown. */
};
static_assert(offsetof(Object01a5ab50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a5ab50(const Object01a5ab50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a5aba0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a5ae20 = 0x1f8;

extern "C" uint32_t bb_auto_return_constant_01a5ae20()
{
    return value_01a5ae20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a5b0d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a5b0f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a5b240 reads.
 *
 */
struct Object01a5b240 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a5b240; meaning unknown. */
};
static_assert(offsetof(Object01a5b240, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a5b240(const Object01a5b240 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a5b250 reads.
 *
 */
struct Object01a5b250 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a5b250; meaning unknown. */
};
static_assert(offsetof(Object01a5b250, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a5b250(const Object01a5b250 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a5b2a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a5b520 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01a5b520()
{
    return value_01a5b520;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a5f760()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a5f780()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a5f8d0 reads.
 *
 */
struct Object01a5f8d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a5f8d0; meaning unknown. */
};
static_assert(offsetof(Object01a5f8d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a5f8d0(const Object01a5f8d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a5f8e0 reads.
 *
 */
struct Object01a5f8e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a5f8e0; meaning unknown. */
};
static_assert(offsetof(Object01a5f8e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a5f8e0(const Object01a5f8e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a5f930()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a5fbb0 = 0x1b8;

extern "C" uint32_t bb_auto_return_constant_01a5fbb0()
{
    return value_01a5fbb0;
}
