// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021903a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02190ed0 reads.
 *
 */
struct Object02190ed0 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_02190ed0; meaning unknown. */
};
static_assert(offsetof(Object02190ed0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02190ed0(const Object02190ed0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02190f00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02191400()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02193e60 reads.
 *
 */
struct Object02193e60 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02193e60; meaning unknown. */
};
static_assert(offsetof(Object02193e60, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02193e60(const Object02193e60 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02193f30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02193f40()
{
}

/**
 *
 * The part of the object that auto_return_field_02194250 reads.
 *
 */
struct Object02194250 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02194250; meaning unknown. */
};
static_assert(offsetof(Object02194250, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02194250(const Object02194250 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02194260 reads.
 *
 */
struct Object02194260 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02194260; meaning unknown. */
};
static_assert(offsetof(Object02194260, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02194260(const Object02194260 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021942b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02194530 = 0x1c0;

extern "C" uint32_t bb_auto_return_constant_02194530()
{
    return value_02194530;
}

/**
 *
 * The part of the object that auto_return_field_02194570 reads.
 *
 */
struct Object02194570 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02194570; meaning unknown. */
};
static_assert(offsetof(Object02194570, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02194570(const Object02194570 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02194580 reads.
 *
 */
struct Object02194580 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02194580; meaning unknown. */
};
static_assert(offsetof(Object02194580, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02194580(const Object02194580 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021945d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02194850 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02194850()
{
    return value_02194850;
}

/**
 *
 * The part of the object that auto_return_field_02194890 reads.
 *
 */
struct Object02194890 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02194890; meaning unknown. */
};
static_assert(offsetof(Object02194890, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02194890(const Object02194890 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021948a0 reads.
 *
 */
struct Object021948a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021948a0; meaning unknown. */
};
static_assert(offsetof(Object021948a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021948a0(const Object021948a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021948f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02194b70 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02194b70()
{
    return value_02194b70;
}

/**
 *
 * The part of the object that auto_return_field_02194bb0 reads.
 *
 */
struct Object02194bb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02194bb0; meaning unknown. */
};
static_assert(offsetof(Object02194bb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02194bb0(const Object02194bb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02194bc0 reads.
 *
 */
struct Object02194bc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02194bc0; meaning unknown. */
};
static_assert(offsetof(Object02194bc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02194bc0(const Object02194bc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02194c10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02194e90 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02194e90()
{
    return value_02194e90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02198fa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02199000()
{
}

/**
 *
 * The part of the object that auto_return_field_0219cec0 reads.
 *
 */
struct Object0219cec0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0219cec0; meaning unknown. */
};
static_assert(offsetof(Object0219cec0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0219cec0(const Object0219cec0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0219cf90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0219cfa0()
{
}

/**
 *
 * The part of the object that auto_return_field_0219d210 reads.
 *
 */
struct Object0219d210 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0219d210; meaning unknown. */
};
static_assert(offsetof(Object0219d210, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0219d210(const Object0219d210 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0219d220 reads.
 *
 */
struct Object0219d220 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0219d220; meaning unknown. */
};
static_assert(offsetof(Object0219d220, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0219d220(const Object0219d220 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0219d270()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0219d4f0 = 0x160;

extern "C" uint32_t bb_auto_return_constant_0219d4f0()
{
    return value_0219d4f0;
}

/**
 *
 * The part of the object that auto_return_field_0219d530 reads.
 *
 */
struct Object0219d530 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0219d530; meaning unknown. */
};
static_assert(offsetof(Object0219d530, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0219d530(const Object0219d530 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0219d540 reads.
 *
 */
struct Object0219d540 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0219d540; meaning unknown. */
};
static_assert(offsetof(Object0219d540, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0219d540(const Object0219d540 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0219d590()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0219d810 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0219d810()
{
    return value_0219d810;
}

/**
 *
 * The part of the object that auto_return_field_0219d850 reads.
 *
 */
struct Object0219d850 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0219d850; meaning unknown. */
};
static_assert(offsetof(Object0219d850, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0219d850(const Object0219d850 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0219d860 reads.
 *
 */
struct Object0219d860 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0219d860; meaning unknown. */
};
static_assert(offsetof(Object0219d860, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0219d860(const Object0219d860 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0219d8b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0219db30 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0219db30()
{
    return value_0219db30;
}

/**
 *
 * The part of the object that auto_return_field_0219db70 reads.
 *
 */
struct Object0219db70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0219db70; meaning unknown. */
};
static_assert(offsetof(Object0219db70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0219db70(const Object0219db70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0219db80 reads.
 *
 */
struct Object0219db80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0219db80; meaning unknown. */
};
static_assert(offsetof(Object0219db80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0219db80(const Object0219db80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0219dbd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0219de50 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0219de50()
{
    return value_0219de50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0219e830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0219e840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0219e8a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0219e8b0()
{
}
