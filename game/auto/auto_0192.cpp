// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01921150()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019235a0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_019235a0()
{
    return value_019235a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_019235b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_019235b0()
{
    return value_019235b0;
}

/**
 *
 * The part of the object that auto_return_field_01923f60 reads.
 *
 */
struct Object01923f60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01923f60; meaning unknown. */
};
static_assert(offsetof(Object01923f60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01923f60(const Object01923f60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01923f70 reads.
 *
 */
struct Object01923f70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01923f70; meaning unknown. */
};
static_assert(offsetof(Object01923f70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01923f70(const Object01923f70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01923fc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01924240 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01924240()
{
    return value_01924240;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019256e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_019256e0()
{
    return value_019256e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_019256f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_019256f0()
{
    return value_019256f0;
}

/**
 *
 * The part of the object that auto_return_field_01925f40 reads.
 *
 */
struct Object01925f40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01925f40; meaning unknown. */
};
static_assert(offsetof(Object01925f40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01925f40(const Object01925f40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01925f50 reads.
 *
 */
struct Object01925f50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01925f50; meaning unknown. */
};
static_assert(offsetof(Object01925f50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01925f50(const Object01925f50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01925fa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01926220 = 0x160;

extern "C" uint32_t bb_auto_return_constant_01926220()
{
    return value_01926220;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01929460 = 0x1;

extern "C" uint32_t bb_auto_return_constant_01929460()
{
    return value_01929460;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192a230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192a290()
{
}

/**
 *
 * The part of the object that auto_return_field_0192a320 reads.
 *
 */
struct Object0192a320 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0192a320; meaning unknown. */
};
static_assert(offsetof(Object0192a320, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0192a320(const Object0192a320 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0192a330 reads.
 *
 */
struct Object0192a330 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0192a330; meaning unknown. */
};
static_assert(offsetof(Object0192a330, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0192a330(const Object0192a330 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0192a380()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0192a600 = 0x1a0;

extern "C" uint32_t bb_auto_return_constant_0192a600()
{
    return value_0192a600;
}

/**
 *
 * The part of the object that auto_return_field_0192b0f0 reads.
 *
 */
struct Object0192b0f0 {
    uint8_t unknown_0x0000[0x1c8];
    uint64_t value_0x01c8; /**< Read by auto_return_field_0192b0f0; meaning unknown. */
};
static_assert(offsetof(Object0192b0f0, value_0x01c8) == 0x1c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0192b0f0(const Object0192b0f0 *self)
{
    return self->value_0x01c8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192b680()
{
}

/**
 *
 * The part of the object that auto_return_field_0192bc60 reads.
 *
 */
struct Object0192bc60 {
    uint8_t unknown_0x0000[0x2a8];
    uint8_t value_0x02a8; /**< Read by auto_return_field_0192bc60; meaning unknown. */
};
static_assert(offsetof(Object0192bc60, value_0x02a8) == 0x2a8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0192bc60(const Object0192bc60 *self)
{
    return self->value_0x02a8;
}

/**
 *
 * The part of the object that auto_return_field_0192bca0 reads.
 *
 */
struct Object0192bca0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0192bca0; meaning unknown. */
};
static_assert(offsetof(Object0192bca0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0192bca0(const Object0192bca0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0192bcb0 reads.
 *
 */
struct Object0192bcb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0192bcb0; meaning unknown. */
};
static_assert(offsetof(Object0192bcb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0192bcb0(const Object0192bcb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0192bd00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0192bf80 = 0x2b0;

extern "C" uint32_t bb_auto_return_constant_0192bf80()
{
    return value_0192bf80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0192c370 = 0x3;

extern "C" uint32_t bb_auto_return_constant_0192c370()
{
    return value_0192c370;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0192c380 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0192c380()
{
    return value_0192c380;
}

/**
 *
 * The part of the object that auto_return_field_0192d020 reads.
 *
 */
struct Object0192d020 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0192d020; meaning unknown. */
};
static_assert(offsetof(Object0192d020, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0192d020(const Object0192d020 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0192d030 reads.
 *
 */
struct Object0192d030 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0192d030; meaning unknown. */
};
static_assert(offsetof(Object0192d030, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0192d030(const Object0192d030 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0192d080()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0192d300 = 0x110;

extern "C" uint32_t bb_auto_return_constant_0192d300()
{
    return value_0192d300;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0192e7c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0192e7d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192e7e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192e7f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192e810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192e830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192e850()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0192e890 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_0192e890()
{
    return value_0192e890;
}
