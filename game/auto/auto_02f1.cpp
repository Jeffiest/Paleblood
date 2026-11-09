// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f12cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f12d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f12d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f12d90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f12e70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f12ea0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f12ed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f12f00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f12f30()
{
}

/**
 *
 * The part of the object that auto_return_field_02f13180 reads.
 *
 */
struct Object02f13180 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f13180; meaning unknown. */
};
static_assert(offsetof(Object02f13180, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f13180(const Object02f13180 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f13190 reads.
 *
 */
struct Object02f13190 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f13190; meaning unknown. */
};
static_assert(offsetof(Object02f13190, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f13190(const Object02f13190 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f131e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f13330 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f13330()
{
    return value_02f13330;
}

/**
 *
 * The part of the object that auto_return_field_02f134d0 reads.
 *
 */
struct Object02f134d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f134d0; meaning unknown. */
};
static_assert(offsetof(Object02f134d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f134d0(const Object02f134d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f134e0 reads.
 *
 */
struct Object02f134e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f134e0; meaning unknown. */
};
static_assert(offsetof(Object02f134e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f134e0(const Object02f134e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f13530()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f13680 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f13680()
{
    return value_02f13680;
}

/**
 *
 * The part of the object that auto_return_field_02f13820 reads.
 *
 */
struct Object02f13820 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f13820; meaning unknown. */
};
static_assert(offsetof(Object02f13820, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f13820(const Object02f13820 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f13830 reads.
 *
 */
struct Object02f13830 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f13830; meaning unknown. */
};
static_assert(offsetof(Object02f13830, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f13830(const Object02f13830 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f13880()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f139d0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f139d0()
{
    return value_02f139d0;
}

/**
 *
 * The part of the object that auto_return_field_02f13b70 reads.
 *
 */
struct Object02f13b70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f13b70; meaning unknown. */
};
static_assert(offsetof(Object02f13b70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f13b70(const Object02f13b70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f13b80 reads.
 *
 */
struct Object02f13b80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f13b80; meaning unknown. */
};
static_assert(offsetof(Object02f13b80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f13b80(const Object02f13b80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f13bd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f13d20 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f13d20()
{
    return value_02f13d20;
}

/**
 *
 * The part of the object that auto_return_field_02f13ec0 reads.
 *
 */
struct Object02f13ec0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f13ec0; meaning unknown. */
};
static_assert(offsetof(Object02f13ec0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f13ec0(const Object02f13ec0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f13ed0 reads.
 *
 */
struct Object02f13ed0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f13ed0; meaning unknown. */
};
static_assert(offsetof(Object02f13ed0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f13ed0(const Object02f13ed0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f13f20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f14070 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f14070()
{
    return value_02f14070;
}

/**
 *
 * The part of the object that auto_return_field_02f14210 reads.
 *
 */
struct Object02f14210 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f14210; meaning unknown. */
};
static_assert(offsetof(Object02f14210, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f14210(const Object02f14210 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f14220 reads.
 *
 */
struct Object02f14220 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f14220; meaning unknown. */
};
static_assert(offsetof(Object02f14220, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f14220(const Object02f14220 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f14270()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f143c0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f143c0()
{
    return value_02f143c0;
}

/**
 *
 * The part of the object that auto_return_field_02f14560 reads.
 *
 */
struct Object02f14560 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f14560; meaning unknown. */
};
static_assert(offsetof(Object02f14560, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f14560(const Object02f14560 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f14570 reads.
 *
 */
struct Object02f14570 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f14570; meaning unknown. */
};
static_assert(offsetof(Object02f14570, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f14570(const Object02f14570 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f145c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f14710 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f14710()
{
    return value_02f14710;
}

/**
 *
 * The part of the object that auto_return_field_02f148b0 reads.
 *
 */
struct Object02f148b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f148b0; meaning unknown. */
};
static_assert(offsetof(Object02f148b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f148b0(const Object02f148b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f148c0 reads.
 *
 */
struct Object02f148c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f148c0; meaning unknown. */
};
static_assert(offsetof(Object02f148c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f148c0(const Object02f148c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f14910()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f14a60 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f14a60()
{
    return value_02f14a60;
}

/**
 *
 * The part of the object that auto_return_field_02f14c00 reads.
 *
 */
struct Object02f14c00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f14c00; meaning unknown. */
};
static_assert(offsetof(Object02f14c00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f14c00(const Object02f14c00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f14c10 reads.
 *
 */
struct Object02f14c10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f14c10; meaning unknown. */
};
static_assert(offsetof(Object02f14c10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f14c10(const Object02f14c10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f14c60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f14db0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f14db0()
{
    return value_02f14db0;
}

/**
 *
 * The part of the object that auto_return_field_02f14f50 reads.
 *
 */
struct Object02f14f50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f14f50; meaning unknown. */
};
static_assert(offsetof(Object02f14f50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f14f50(const Object02f14f50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f14f60 reads.
 *
 */
struct Object02f14f60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f14f60; meaning unknown. */
};
static_assert(offsetof(Object02f14f60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f14f60(const Object02f14f60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f14fb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f15100 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f15100()
{
    return value_02f15100;
}

/**
 *
 * The part of the object that auto_return_field_02f152a0 reads.
 *
 */
struct Object02f152a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f152a0; meaning unknown. */
};
static_assert(offsetof(Object02f152a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f152a0(const Object02f152a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f152b0 reads.
 *
 */
struct Object02f152b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f152b0; meaning unknown. */
};
static_assert(offsetof(Object02f152b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f152b0(const Object02f152b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f15300()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f15450 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f15450()
{
    return value_02f15450;
}

/**
 *
 * The part of the object that auto_return_field_02f155f0 reads.
 *
 */
struct Object02f155f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f155f0; meaning unknown. */
};
static_assert(offsetof(Object02f155f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f155f0(const Object02f155f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f15600 reads.
 *
 */
struct Object02f15600 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f15600; meaning unknown. */
};
static_assert(offsetof(Object02f15600, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f15600(const Object02f15600 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f15650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f157a0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f157a0()
{
    return value_02f157a0;
}

/**
 *
 * The part of the object that auto_return_field_02f15940 reads.
 *
 */
struct Object02f15940 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f15940; meaning unknown. */
};
static_assert(offsetof(Object02f15940, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f15940(const Object02f15940 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f15950 reads.
 *
 */
struct Object02f15950 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f15950; meaning unknown. */
};
static_assert(offsetof(Object02f15950, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f15950(const Object02f15950 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f159a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f15af0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f15af0()
{
    return value_02f15af0;
}

/**
 *
 * The part of the object that auto_return_field_02f15c90 reads.
 *
 */
struct Object02f15c90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f15c90; meaning unknown. */
};
static_assert(offsetof(Object02f15c90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f15c90(const Object02f15c90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f15ca0 reads.
 *
 */
struct Object02f15ca0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f15ca0; meaning unknown. */
};
static_assert(offsetof(Object02f15ca0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f15ca0(const Object02f15ca0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f15cf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f15e40 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f15e40()
{
    return value_02f15e40;
}

/**
 *
 * The part of the object that auto_return_field_02f15fe0 reads.
 *
 */
struct Object02f15fe0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f15fe0; meaning unknown. */
};
static_assert(offsetof(Object02f15fe0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f15fe0(const Object02f15fe0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f15ff0 reads.
 *
 */
struct Object02f15ff0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f15ff0; meaning unknown. */
};
static_assert(offsetof(Object02f15ff0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f15ff0(const Object02f15ff0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f16040()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f16190 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f16190()
{
    return value_02f16190;
}

/**
 *
 * The part of the object that auto_return_field_02f16330 reads.
 *
 */
struct Object02f16330 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f16330; meaning unknown. */
};
static_assert(offsetof(Object02f16330, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f16330(const Object02f16330 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f16340 reads.
 *
 */
struct Object02f16340 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f16340; meaning unknown. */
};
static_assert(offsetof(Object02f16340, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f16340(const Object02f16340 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f16390()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f164e0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f164e0()
{
    return value_02f164e0;
}

/**
 *
 * The part of the object that auto_return_field_02f16680 reads.
 *
 */
struct Object02f16680 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f16680; meaning unknown. */
};
static_assert(offsetof(Object02f16680, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f16680(const Object02f16680 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f16690 reads.
 *
 */
struct Object02f16690 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f16690; meaning unknown. */
};
static_assert(offsetof(Object02f16690, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f16690(const Object02f16690 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f166e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f16830 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f16830()
{
    return value_02f16830;
}

/**
 *
 * The part of the object that auto_return_field_02f169d0 reads.
 *
 */
struct Object02f169d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f169d0; meaning unknown. */
};
static_assert(offsetof(Object02f169d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f169d0(const Object02f169d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f169e0 reads.
 *
 */
struct Object02f169e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f169e0; meaning unknown. */
};
static_assert(offsetof(Object02f169e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f169e0(const Object02f169e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f16a30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f16b80 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f16b80()
{
    return value_02f16b80;
}

/**
 *
 * The part of the object that auto_return_field_02f16d20 reads.
 *
 */
struct Object02f16d20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f16d20; meaning unknown. */
};
static_assert(offsetof(Object02f16d20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f16d20(const Object02f16d20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f16d30 reads.
 *
 */
struct Object02f16d30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f16d30; meaning unknown. */
};
static_assert(offsetof(Object02f16d30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f16d30(const Object02f16d30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f16d80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f16ed0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f16ed0()
{
    return value_02f16ed0;
}

/**
 *
 * The part of the object that auto_return_field_02f17070 reads.
 *
 */
struct Object02f17070 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f17070; meaning unknown. */
};
static_assert(offsetof(Object02f17070, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f17070(const Object02f17070 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f17080 reads.
 *
 */
struct Object02f17080 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f17080; meaning unknown. */
};
static_assert(offsetof(Object02f17080, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f17080(const Object02f17080 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f170d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f17220 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f17220()
{
    return value_02f17220;
}

/**
 *
 * The part of the object that auto_return_field_02f173c0 reads.
 *
 */
struct Object02f173c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f173c0; meaning unknown. */
};
static_assert(offsetof(Object02f173c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f173c0(const Object02f173c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f173d0 reads.
 *
 */
struct Object02f173d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f173d0; meaning unknown. */
};
static_assert(offsetof(Object02f173d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f173d0(const Object02f173d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f17420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f17570 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f17570()
{
    return value_02f17570;
}

/**
 *
 * The part of the object that auto_return_field_02f17710 reads.
 *
 */
struct Object02f17710 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f17710; meaning unknown. */
};
static_assert(offsetof(Object02f17710, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f17710(const Object02f17710 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f17720 reads.
 *
 */
struct Object02f17720 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f17720; meaning unknown. */
};
static_assert(offsetof(Object02f17720, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f17720(const Object02f17720 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f17770()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f178c0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f178c0()
{
    return value_02f178c0;
}

/**
 *
 * The part of the object that auto_return_field_02f17a60 reads.
 *
 */
struct Object02f17a60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f17a60; meaning unknown. */
};
static_assert(offsetof(Object02f17a60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f17a60(const Object02f17a60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f17a70 reads.
 *
 */
struct Object02f17a70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f17a70; meaning unknown. */
};
static_assert(offsetof(Object02f17a70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f17a70(const Object02f17a70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f17ac0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f17c10 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f17c10()
{
    return value_02f17c10;
}

/**
 *
 * The part of the object that auto_return_field_02f17db0 reads.
 *
 */
struct Object02f17db0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f17db0; meaning unknown. */
};
static_assert(offsetof(Object02f17db0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f17db0(const Object02f17db0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f17dc0 reads.
 *
 */
struct Object02f17dc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f17dc0; meaning unknown. */
};
static_assert(offsetof(Object02f17dc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f17dc0(const Object02f17dc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f17e10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f17f60 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f17f60()
{
    return value_02f17f60;
}

/**
 *
 * The part of the object that auto_return_field_02f18100 reads.
 *
 */
struct Object02f18100 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f18100; meaning unknown. */
};
static_assert(offsetof(Object02f18100, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f18100(const Object02f18100 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f18110 reads.
 *
 */
struct Object02f18110 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f18110; meaning unknown. */
};
static_assert(offsetof(Object02f18110, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f18110(const Object02f18110 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f18160()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f182b0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f182b0()
{
    return value_02f182b0;
}

/**
 *
 * The part of the object that auto_return_field_02f18450 reads.
 *
 */
struct Object02f18450 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f18450; meaning unknown. */
};
static_assert(offsetof(Object02f18450, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f18450(const Object02f18450 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f18460 reads.
 *
 */
struct Object02f18460 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f18460; meaning unknown. */
};
static_assert(offsetof(Object02f18460, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f18460(const Object02f18460 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f184b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f18600 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f18600()
{
    return value_02f18600;
}

/**
 *
 * The part of the object that auto_return_field_02f187a0 reads.
 *
 */
struct Object02f187a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f187a0; meaning unknown. */
};
static_assert(offsetof(Object02f187a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f187a0(const Object02f187a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f187b0 reads.
 *
 */
struct Object02f187b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f187b0; meaning unknown. */
};
static_assert(offsetof(Object02f187b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f187b0(const Object02f187b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f18800()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f18950 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f18950()
{
    return value_02f18950;
}

/**
 *
 * The part of the object that auto_return_field_02f18af0 reads.
 *
 */
struct Object02f18af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f18af0; meaning unknown. */
};
static_assert(offsetof(Object02f18af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f18af0(const Object02f18af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f18b00 reads.
 *
 */
struct Object02f18b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f18b00; meaning unknown. */
};
static_assert(offsetof(Object02f18b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f18b00(const Object02f18b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f18b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f18ca0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f18ca0()
{
    return value_02f18ca0;
}

/**
 *
 * The part of the object that auto_return_field_02f18e40 reads.
 *
 */
struct Object02f18e40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f18e40; meaning unknown. */
};
static_assert(offsetof(Object02f18e40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f18e40(const Object02f18e40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f18e50 reads.
 *
 */
struct Object02f18e50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f18e50; meaning unknown. */
};
static_assert(offsetof(Object02f18e50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f18e50(const Object02f18e50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f18ea0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f18ff0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f18ff0()
{
    return value_02f18ff0;
}

/**
 *
 * The part of the object that auto_return_field_02f19190 reads.
 *
 */
struct Object02f19190 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f19190; meaning unknown. */
};
static_assert(offsetof(Object02f19190, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f19190(const Object02f19190 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f191a0 reads.
 *
 */
struct Object02f191a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f191a0; meaning unknown. */
};
static_assert(offsetof(Object02f191a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f191a0(const Object02f191a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f191f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f19340 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f19340()
{
    return value_02f19340;
}

/**
 *
 * The part of the object that auto_return_field_02f194e0 reads.
 *
 */
struct Object02f194e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f194e0; meaning unknown. */
};
static_assert(offsetof(Object02f194e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f194e0(const Object02f194e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f194f0 reads.
 *
 */
struct Object02f194f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f194f0; meaning unknown. */
};
static_assert(offsetof(Object02f194f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f194f0(const Object02f194f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f19540()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f19690 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f19690()
{
    return value_02f19690;
}

/**
 *
 * The part of the object that auto_return_field_02f19830 reads.
 *
 */
struct Object02f19830 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f19830; meaning unknown. */
};
static_assert(offsetof(Object02f19830, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f19830(const Object02f19830 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f19840 reads.
 *
 */
struct Object02f19840 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f19840; meaning unknown. */
};
static_assert(offsetof(Object02f19840, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f19840(const Object02f19840 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f19890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f199e0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f199e0()
{
    return value_02f199e0;
}

/**
 *
 * The part of the object that auto_return_field_02f19b80 reads.
 *
 */
struct Object02f19b80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f19b80; meaning unknown. */
};
static_assert(offsetof(Object02f19b80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f19b80(const Object02f19b80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f19b90 reads.
 *
 */
struct Object02f19b90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f19b90; meaning unknown. */
};
static_assert(offsetof(Object02f19b90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f19b90(const Object02f19b90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f19be0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f19d30 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f19d30()
{
    return value_02f19d30;
}

/**
 *
 * The part of the object that auto_return_field_02f19ed0 reads.
 *
 */
struct Object02f19ed0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f19ed0; meaning unknown. */
};
static_assert(offsetof(Object02f19ed0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f19ed0(const Object02f19ed0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f19ee0 reads.
 *
 */
struct Object02f19ee0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f19ee0; meaning unknown. */
};
static_assert(offsetof(Object02f19ee0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f19ee0(const Object02f19ee0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f19f30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1a080 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f1a080()
{
    return value_02f1a080;
}

/**
 *
 * The part of the object that auto_return_field_02f1a220 reads.
 *
 */
struct Object02f1a220 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1a220; meaning unknown. */
};
static_assert(offsetof(Object02f1a220, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1a220(const Object02f1a220 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1a230 reads.
 *
 */
struct Object02f1a230 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1a230; meaning unknown. */
};
static_assert(offsetof(Object02f1a230, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1a230(const Object02f1a230 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1a280()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1a3d0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f1a3d0()
{
    return value_02f1a3d0;
}

/**
 *
 * The part of the object that auto_return_field_02f1a570 reads.
 *
 */
struct Object02f1a570 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1a570; meaning unknown. */
};
static_assert(offsetof(Object02f1a570, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1a570(const Object02f1a570 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1a580 reads.
 *
 */
struct Object02f1a580 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1a580; meaning unknown. */
};
static_assert(offsetof(Object02f1a580, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1a580(const Object02f1a580 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1a5d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1a720 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f1a720()
{
    return value_02f1a720;
}

/**
 *
 * The part of the object that auto_return_field_02f1a8c0 reads.
 *
 */
struct Object02f1a8c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1a8c0; meaning unknown. */
};
static_assert(offsetof(Object02f1a8c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1a8c0(const Object02f1a8c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1a8d0 reads.
 *
 */
struct Object02f1a8d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1a8d0; meaning unknown. */
};
static_assert(offsetof(Object02f1a8d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1a8d0(const Object02f1a8d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1a920()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1aa70 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f1aa70()
{
    return value_02f1aa70;
}

/**
 *
 * The part of the object that auto_return_field_02f1ac10 reads.
 *
 */
struct Object02f1ac10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1ac10; meaning unknown. */
};
static_assert(offsetof(Object02f1ac10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1ac10(const Object02f1ac10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1ac20 reads.
 *
 */
struct Object02f1ac20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1ac20; meaning unknown. */
};
static_assert(offsetof(Object02f1ac20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1ac20(const Object02f1ac20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1ac70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1adc0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f1adc0()
{
    return value_02f1adc0;
}

/**
 *
 * The part of the object that auto_return_field_02f1af60 reads.
 *
 */
struct Object02f1af60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1af60; meaning unknown. */
};
static_assert(offsetof(Object02f1af60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1af60(const Object02f1af60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1af70 reads.
 *
 */
struct Object02f1af70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1af70; meaning unknown. */
};
static_assert(offsetof(Object02f1af70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1af70(const Object02f1af70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1afc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1b110 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f1b110()
{
    return value_02f1b110;
}

/**
 *
 * The part of the object that auto_return_field_02f1b2b0 reads.
 *
 */
struct Object02f1b2b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1b2b0; meaning unknown. */
};
static_assert(offsetof(Object02f1b2b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1b2b0(const Object02f1b2b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1b2c0 reads.
 *
 */
struct Object02f1b2c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1b2c0; meaning unknown. */
};
static_assert(offsetof(Object02f1b2c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1b2c0(const Object02f1b2c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1b310()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1b460 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f1b460()
{
    return value_02f1b460;
}

/**
 *
 * The part of the object that auto_return_field_02f1b600 reads.
 *
 */
struct Object02f1b600 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1b600; meaning unknown. */
};
static_assert(offsetof(Object02f1b600, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1b600(const Object02f1b600 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1b610 reads.
 *
 */
struct Object02f1b610 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1b610; meaning unknown. */
};
static_assert(offsetof(Object02f1b610, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1b610(const Object02f1b610 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1b660()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1b7b0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f1b7b0()
{
    return value_02f1b7b0;
}

/**
 *
 * The part of the object that auto_return_field_02f1b950 reads.
 *
 */
struct Object02f1b950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1b950; meaning unknown. */
};
static_assert(offsetof(Object02f1b950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1b950(const Object02f1b950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1b960 reads.
 *
 */
struct Object02f1b960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1b960; meaning unknown. */
};
static_assert(offsetof(Object02f1b960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1b960(const Object02f1b960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1b9b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1bb00 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f1bb00()
{
    return value_02f1bb00;
}

/**
 *
 * The part of the object that auto_return_field_02f1bca0 reads.
 *
 */
struct Object02f1bca0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1bca0; meaning unknown. */
};
static_assert(offsetof(Object02f1bca0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1bca0(const Object02f1bca0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1bcb0 reads.
 *
 */
struct Object02f1bcb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1bcb0; meaning unknown. */
};
static_assert(offsetof(Object02f1bcb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1bcb0(const Object02f1bcb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1bd00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1be50 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f1be50()
{
    return value_02f1be50;
}

/**
 *
 * The part of the object that auto_return_field_02f1bff0 reads.
 *
 */
struct Object02f1bff0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1bff0; meaning unknown. */
};
static_assert(offsetof(Object02f1bff0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1bff0(const Object02f1bff0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1c000 reads.
 *
 */
struct Object02f1c000 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1c000; meaning unknown. */
};
static_assert(offsetof(Object02f1c000, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1c000(const Object02f1c000 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1c050()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1c1a0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f1c1a0()
{
    return value_02f1c1a0;
}

/**
 *
 * The part of the object that auto_return_field_02f1c340 reads.
 *
 */
struct Object02f1c340 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1c340; meaning unknown. */
};
static_assert(offsetof(Object02f1c340, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1c340(const Object02f1c340 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1c350 reads.
 *
 */
struct Object02f1c350 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1c350; meaning unknown. */
};
static_assert(offsetof(Object02f1c350, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1c350(const Object02f1c350 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1c3a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1c4f0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f1c4f0()
{
    return value_02f1c4f0;
}

/**
 *
 * The part of the object that auto_return_field_02f1c690 reads.
 *
 */
struct Object02f1c690 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1c690; meaning unknown. */
};
static_assert(offsetof(Object02f1c690, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1c690(const Object02f1c690 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1c6a0 reads.
 *
 */
struct Object02f1c6a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1c6a0; meaning unknown. */
};
static_assert(offsetof(Object02f1c6a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1c6a0(const Object02f1c6a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1c6f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1c840 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f1c840()
{
    return value_02f1c840;
}

/**
 *
 * The part of the object that auto_return_field_02f1c880 reads.
 *
 */
struct Object02f1c880 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1c880; meaning unknown. */
};
static_assert(offsetof(Object02f1c880, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1c880(const Object02f1c880 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1c890 reads.
 *
 */
struct Object02f1c890 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1c890; meaning unknown. */
};
static_assert(offsetof(Object02f1c890, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1c890(const Object02f1c890 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1c8e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1ca30 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f1ca30()
{
    return value_02f1ca30;
}

/**
 *
 * The part of the object that auto_return_field_02f1ca70 reads.
 *
 */
struct Object02f1ca70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f1ca70; meaning unknown. */
};
static_assert(offsetof(Object02f1ca70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1ca70(const Object02f1ca70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f1ca80 reads.
 *
 */
struct Object02f1ca80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f1ca80; meaning unknown. */
};
static_assert(offsetof(Object02f1ca80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f1ca80(const Object02f1ca80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f1cad0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1cc20 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02f1cc20()
{
    return value_02f1cc20;
}

/**
 *
 * The part of the object that auto_return_field_02f1f540 reads.
 *
 */
struct Object02f1f540 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02f1f540; meaning unknown. */
};
static_assert(offsetof(Object02f1f540, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f1f540(const Object02f1f540 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f1f570 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f1f570()
{
    return value_02f1f570;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f1f770()
{
}
