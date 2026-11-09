// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d60ee0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02d60ee0()
{
    return value_02d60ee0;
}

/**
 *
 * The part of the object that auto_return_field_02d61380 reads.
 *
 */
struct Object02d61380 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d61380; meaning unknown. */
};
static_assert(offsetof(Object02d61380, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d61380(const Object02d61380 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d61390 reads.
 *
 */
struct Object02d61390 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d61390; meaning unknown. */
};
static_assert(offsetof(Object02d61390, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d61390(const Object02d61390 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d613e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d61530 = 0x78;

extern "C" uint32_t bb_auto_return_constant_02d61530()
{
    return value_02d61530;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d61540()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d61550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d61560()
{
}

/**
 *
 * The part of the object that auto_return_field_02d61660 reads.
 *
 */
struct Object02d61660 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d61660; meaning unknown. */
};
static_assert(offsetof(Object02d61660, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d61660(const Object02d61660 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d61670 reads.
 *
 */
struct Object02d61670 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d61670; meaning unknown. */
};
static_assert(offsetof(Object02d61670, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d61670(const Object02d61670 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d616c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d61810 = 0x28;

extern "C" uint32_t bb_auto_return_constant_02d61810()
{
    return value_02d61810;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d61820()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d61a00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d61ab0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02d61ab0()
{
    return value_02d61ab0;
}

/**
 *
 * The part of the object that auto_return_field_02d61ec0 reads.
 *
 */
struct Object02d61ec0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d61ec0; meaning unknown. */
};
static_assert(offsetof(Object02d61ec0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d61ec0(const Object02d61ec0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d61ed0 reads.
 *
 */
struct Object02d61ed0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d61ed0; meaning unknown. */
};
static_assert(offsetof(Object02d61ed0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d61ed0(const Object02d61ed0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d61f20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d62070 = 0x1f0;

extern "C" uint32_t bb_auto_return_constant_02d62070()
{
    return value_02d62070;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d62080()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d62190 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02d62190()
{
    return value_02d62190;
}

/**
 *
 * The part of the object that auto_return_field_02d625e0 reads.
 *
 */
struct Object02d625e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d625e0; meaning unknown. */
};
static_assert(offsetof(Object02d625e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d625e0(const Object02d625e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d625f0 reads.
 *
 */
struct Object02d625f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d625f0; meaning unknown. */
};
static_assert(offsetof(Object02d625f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d625f0(const Object02d625f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d62640()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d62790 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02d62790()
{
    return value_02d62790;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d65290()
{
}

/**
 *
 * The part of the object that auto_return_field_02d652e0 reads.
 *
 */
struct Object02d652e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d652e0; meaning unknown. */
};
static_assert(offsetof(Object02d652e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d652e0(const Object02d652e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d652f0 reads.
 *
 */
struct Object02d652f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d652f0; meaning unknown. */
};
static_assert(offsetof(Object02d652f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d652f0(const Object02d652f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d65340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d65360 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d65360()
{
    return value_02d65360;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d65400()
{
}

/**
 *
 * The part of the object that auto_return_field_02d65450 reads.
 *
 */
struct Object02d65450 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d65450; meaning unknown. */
};
static_assert(offsetof(Object02d65450, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d65450(const Object02d65450 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d65460 reads.
 *
 */
struct Object02d65460 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d65460; meaning unknown. */
};
static_assert(offsetof(Object02d65460, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d65460(const Object02d65460 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d654b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d654d0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02d654d0()
{
    return value_02d654d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d65570()
{
}

/**
 *
 * The part of the object that auto_return_field_02d65880 reads.
 *
 */
struct Object02d65880 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d65880; meaning unknown. */
};
static_assert(offsetof(Object02d65880, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d65880(const Object02d65880 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d65890 reads.
 *
 */
struct Object02d65890 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d65890; meaning unknown. */
};
static_assert(offsetof(Object02d65890, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d65890(const Object02d65890 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d658e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d65900 = 0x48;

extern "C" uint32_t bb_auto_return_constant_02d65900()
{
    return value_02d65900;
}

/**
 *
 * The part of the object that auto_return_field_02d659d0 reads.
 *
 */
struct Object02d659d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d659d0; meaning unknown. */
};
static_assert(offsetof(Object02d659d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d659d0(const Object02d659d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d659e0 reads.
 *
 */
struct Object02d659e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d659e0; meaning unknown. */
};
static_assert(offsetof(Object02d659e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d659e0(const Object02d659e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d65a30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d65a50 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02d65a50()
{
    return value_02d65a50;
}

/**
 *
 * The part of the object that auto_return_field_02d66770 reads.
 *
 */
struct Object02d66770 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02d66770; meaning unknown. */
};
static_assert(offsetof(Object02d66770, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02d66770(const Object02d66770 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02d66780 reads.
 *
 */
struct Object02d66780 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02d66780; meaning unknown. */
};
static_assert(offsetof(Object02d66780, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d66780(const Object02d66780 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d66790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d66c80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d66ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d66e00()
{
}

/**
 *
 * The part of the object that auto_return_field_02d66e80 reads.
 *
 */
struct Object02d66e80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d66e80; meaning unknown. */
};
static_assert(offsetof(Object02d66e80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d66e80(const Object02d66e80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d66e90 reads.
 *
 */
struct Object02d66e90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d66e90; meaning unknown. */
};
static_assert(offsetof(Object02d66e90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d66e90(const Object02d66e90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d66ee0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d66f00 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02d66f00()
{
    return value_02d66f00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d670f0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d67110 reads.
 *
 */
struct Object02d67110 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d67110; meaning unknown. */
};
static_assert(offsetof(Object02d67110, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d67110(const Object02d67110 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02d67150 reads.
 *
 */
struct Object02d67150 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d67150; meaning unknown. */
};
static_assert(offsetof(Object02d67150, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d67150(const Object02d67150 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d67160 reads.
 *
 */
struct Object02d67160 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d67160; meaning unknown. */
};
static_assert(offsetof(Object02d67160, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d67160(const Object02d67160 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d671b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d671d0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02d671d0()
{
    return value_02d671d0;
}

/**
 *
 * The part of the object that auto_return_field_02d672a0 reads.
 *
 */
struct Object02d672a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d672a0; meaning unknown. */
};
static_assert(offsetof(Object02d672a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d672a0(const Object02d672a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d672b0 reads.
 *
 */
struct Object02d672b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d672b0; meaning unknown. */
};
static_assert(offsetof(Object02d672b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d672b0(const Object02d672b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d67300()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d67320 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02d67320()
{
    return value_02d67320;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d673c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d67410 reads.
 *
 */
struct Object02d67410 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d67410; meaning unknown. */
};
static_assert(offsetof(Object02d67410, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d67410(const Object02d67410 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d67420 reads.
 *
 */
struct Object02d67420 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d67420; meaning unknown. */
};
static_assert(offsetof(Object02d67420, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d67420(const Object02d67420 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d67470()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d67490 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02d67490()
{
    return value_02d67490;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d67740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d677a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d67800()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d67940()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d67950()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d67960()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d67970()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d686e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d69f40()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6a130 reads.
 *
 */
struct Object02d6a130 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6a130; meaning unknown. */
};
static_assert(offsetof(Object02d6a130, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a130(const Object02d6a130 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6a140 reads.
 *
 */
struct Object02d6a140 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6a140; meaning unknown. */
};
static_assert(offsetof(Object02d6a140, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a140(const Object02d6a140 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6a190()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6a1b0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02d6a1b0()
{
    return value_02d6a1b0;
}

/**
 *
 * The part of the object that auto_return_field_02d6a250 reads.
 *
 */
struct Object02d6a250 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d6a250; meaning unknown. */
};
static_assert(offsetof(Object02d6a250, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a250(const Object02d6a250 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02d6a290 reads.
 *
 */
struct Object02d6a290 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6a290; meaning unknown. */
};
static_assert(offsetof(Object02d6a290, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a290(const Object02d6a290 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6a2a0 reads.
 *
 */
struct Object02d6a2a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6a2a0; meaning unknown. */
};
static_assert(offsetof(Object02d6a2a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a2a0(const Object02d6a2a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6a2f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6a310 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d6a310()
{
    return value_02d6a310;
}

/**
 *
 * The part of the object that auto_return_field_02d6a3e0 reads.
 *
 */
struct Object02d6a3e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6a3e0; meaning unknown. */
};
static_assert(offsetof(Object02d6a3e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a3e0(const Object02d6a3e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6a3f0 reads.
 *
 */
struct Object02d6a3f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6a3f0; meaning unknown. */
};
static_assert(offsetof(Object02d6a3f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a3f0(const Object02d6a3f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6a440()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6a460 = 0x78;

extern "C" uint32_t bb_auto_return_constant_02d6a460()
{
    return value_02d6a460;
}

/**
 *
 * The part of the object that auto_return_field_02d6a500 reads.
 *
 */
struct Object02d6a500 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d6a500; meaning unknown. */
};
static_assert(offsetof(Object02d6a500, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a500(const Object02d6a500 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02d6a540 reads.
 *
 */
struct Object02d6a540 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6a540; meaning unknown. */
};
static_assert(offsetof(Object02d6a540, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a540(const Object02d6a540 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6a550 reads.
 *
 */
struct Object02d6a550 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6a550; meaning unknown. */
};
static_assert(offsetof(Object02d6a550, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6a550(const Object02d6a550 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6a5a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6a5c0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d6a5c0()
{
    return value_02d6a5c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6ab50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6ab60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6ab70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6ab80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6ab90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6aba0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6abb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6abc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6abd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6aee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6af40()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6afd0 reads.
 *
 */
struct Object02d6afd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6afd0; meaning unknown. */
};
static_assert(offsetof(Object02d6afd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6afd0(const Object02d6afd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6afe0 reads.
 *
 */
struct Object02d6afe0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6afe0; meaning unknown. */
};
static_assert(offsetof(Object02d6afe0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6afe0(const Object02d6afe0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6b030()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6b050 = 0x80;

extern "C" uint32_t bb_auto_return_constant_02d6b050()
{
    return value_02d6b050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6b0f0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6b140 reads.
 *
 */
struct Object02d6b140 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6b140; meaning unknown. */
};
static_assert(offsetof(Object02d6b140, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b140(const Object02d6b140 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6b150 reads.
 *
 */
struct Object02d6b150 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6b150; meaning unknown. */
};
static_assert(offsetof(Object02d6b150, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b150(const Object02d6b150 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6b1a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6b1c0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d6b1c0()
{
    return value_02d6b1c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6b260()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6b2b0 reads.
 *
 */
struct Object02d6b2b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6b2b0; meaning unknown. */
};
static_assert(offsetof(Object02d6b2b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b2b0(const Object02d6b2b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6b2c0 reads.
 *
 */
struct Object02d6b2c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6b2c0; meaning unknown. */
};
static_assert(offsetof(Object02d6b2c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b2c0(const Object02d6b2c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6b310()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6b330 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02d6b330()
{
    return value_02d6b330;
}

/**
 *
 * The part of the object that auto_return_field_02d6b400 reads.
 *
 */
struct Object02d6b400 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6b400; meaning unknown. */
};
static_assert(offsetof(Object02d6b400, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b400(const Object02d6b400 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6b410 reads.
 *
 */
struct Object02d6b410 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6b410; meaning unknown. */
};
static_assert(offsetof(Object02d6b410, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b410(const Object02d6b410 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6b460()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6b480 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02d6b480()
{
    return value_02d6b480;
}

/**
 *
 * The part of the object that auto_return_field_02d6b550 reads.
 *
 */
struct Object02d6b550 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6b550; meaning unknown. */
};
static_assert(offsetof(Object02d6b550, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b550(const Object02d6b550 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6b560 reads.
 *
 */
struct Object02d6b560 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6b560; meaning unknown. */
};
static_assert(offsetof(Object02d6b560, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b560(const Object02d6b560 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6b5b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6b5d0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02d6b5d0()
{
    return value_02d6b5d0;
}

/**
 *
 * The part of the object that auto_return_field_02d6b6f0 reads.
 *
 */
struct Object02d6b6f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6b6f0; meaning unknown. */
};
static_assert(offsetof(Object02d6b6f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b6f0(const Object02d6b6f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6b700 reads.
 *
 */
struct Object02d6b700 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6b700; meaning unknown. */
};
static_assert(offsetof(Object02d6b700, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b700(const Object02d6b700 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6b750()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6b770 = 0x208;

extern "C" uint32_t bb_auto_return_constant_02d6b770()
{
    return value_02d6b770;
}

/**
 *
 * The part of the object that auto_return_field_02d6b880 reads.
 *
 */
struct Object02d6b880 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6b880; meaning unknown. */
};
static_assert(offsetof(Object02d6b880, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b880(const Object02d6b880 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6b890 reads.
 *
 */
struct Object02d6b890 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6b890; meaning unknown. */
};
static_assert(offsetof(Object02d6b890, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b890(const Object02d6b890 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6b8e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6b900 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02d6b900()
{
    return value_02d6b900;
}

/**
 *
 * The part of the object that auto_return_field_02d6b9d0 reads.
 *
 */
struct Object02d6b9d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6b9d0; meaning unknown. */
};
static_assert(offsetof(Object02d6b9d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b9d0(const Object02d6b9d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6b9e0 reads.
 *
 */
struct Object02d6b9e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6b9e0; meaning unknown. */
};
static_assert(offsetof(Object02d6b9e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6b9e0(const Object02d6b9e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6ba30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6ba50 = 0x88;

extern "C" uint32_t bb_auto_return_constant_02d6ba50()
{
    return value_02d6ba50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6baf0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6bb40 reads.
 *
 */
struct Object02d6bb40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6bb40; meaning unknown. */
};
static_assert(offsetof(Object02d6bb40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6bb40(const Object02d6bb40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6bb50 reads.
 *
 */
struct Object02d6bb50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6bb50; meaning unknown. */
};
static_assert(offsetof(Object02d6bb50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6bb50(const Object02d6bb50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6bba0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6bbc0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02d6bbc0()
{
    return value_02d6bbc0;
}

/**
 *
 * The part of the object that auto_return_field_02d6bc90 reads.
 *
 */
struct Object02d6bc90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6bc90; meaning unknown. */
};
static_assert(offsetof(Object02d6bc90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6bc90(const Object02d6bc90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6bca0 reads.
 *
 */
struct Object02d6bca0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6bca0; meaning unknown. */
};
static_assert(offsetof(Object02d6bca0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6bca0(const Object02d6bca0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6bcf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6bd10 = 0x88;

extern "C" uint32_t bb_auto_return_constant_02d6bd10()
{
    return value_02d6bd10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6bdb0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6be00 reads.
 *
 */
struct Object02d6be00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6be00; meaning unknown. */
};
static_assert(offsetof(Object02d6be00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6be00(const Object02d6be00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6be10 reads.
 *
 */
struct Object02d6be10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6be10; meaning unknown. */
};
static_assert(offsetof(Object02d6be10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6be10(const Object02d6be10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6be60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6be80 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02d6be80()
{
    return value_02d6be80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6bf20()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6bf40 reads.
 *
 */
struct Object02d6bf40 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d6bf40; meaning unknown. */
};
static_assert(offsetof(Object02d6bf40, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6bf40(const Object02d6bf40 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02d6bf50 reads.
 *
 */
struct Object02d6bf50 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02d6bf50; meaning unknown. */
};
static_assert(offsetof(Object02d6bf50, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6bf50(const Object02d6bf50 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02d6bf70 reads.
 *
 */
struct Object02d6bf70 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02d6bf70; meaning unknown. */
};
static_assert(offsetof(Object02d6bf70, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02d6bf70(const Object02d6bf70 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02d6bf80 reads.
 *
 */
struct Object02d6bf80 {
    uint8_t unknown_0x0000[0x24];
    uint8_t value_0x0024; /**< Read by auto_return_field_02d6bf80; meaning unknown. */
};
static_assert(offsetof(Object02d6bf80, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02d6bf80(const Object02d6bf80 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_02d6bfc0 reads.
 *
 */
struct Object02d6bfc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6bfc0; meaning unknown. */
};
static_assert(offsetof(Object02d6bfc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6bfc0(const Object02d6bfc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6bfd0 reads.
 *
 */
struct Object02d6bfd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6bfd0; meaning unknown. */
};
static_assert(offsetof(Object02d6bfd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6bfd0(const Object02d6bfd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6c020()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6c040 = 0x28;

extern "C" uint32_t bb_auto_return_constant_02d6c040()
{
    return value_02d6c040;
}

/**
 *
 * The part of the object that auto_return_field_02d6c110 reads.
 *
 */
struct Object02d6c110 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6c110; meaning unknown. */
};
static_assert(offsetof(Object02d6c110, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c110(const Object02d6c110 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6c120 reads.
 *
 */
struct Object02d6c120 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6c120; meaning unknown. */
};
static_assert(offsetof(Object02d6c120, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c120(const Object02d6c120 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6c170()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6c190 = 0x68;

extern "C" uint32_t bb_auto_return_constant_02d6c190()
{
    return value_02d6c190;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6c230()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6c280 reads.
 *
 */
struct Object02d6c280 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6c280; meaning unknown. */
};
static_assert(offsetof(Object02d6c280, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c280(const Object02d6c280 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6c290 reads.
 *
 */
struct Object02d6c290 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6c290; meaning unknown. */
};
static_assert(offsetof(Object02d6c290, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c290(const Object02d6c290 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6c2e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6c300 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02d6c300()
{
    return value_02d6c300;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6c3a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6c3f0 reads.
 *
 */
struct Object02d6c3f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6c3f0; meaning unknown. */
};
static_assert(offsetof(Object02d6c3f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c3f0(const Object02d6c3f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6c400 reads.
 *
 */
struct Object02d6c400 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6c400; meaning unknown. */
};
static_assert(offsetof(Object02d6c400, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c400(const Object02d6c400 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6c450()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6c470 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d6c470()
{
    return value_02d6c470;
}

/**
 *
 * The part of the object that auto_return_field_02d6c540 reads.
 *
 */
struct Object02d6c540 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6c540; meaning unknown. */
};
static_assert(offsetof(Object02d6c540, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c540(const Object02d6c540 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6c550 reads.
 *
 */
struct Object02d6c550 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6c550; meaning unknown. */
};
static_assert(offsetof(Object02d6c550, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c550(const Object02d6c550 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6c5a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6c5c0 = 0x68;

extern "C" uint32_t bb_auto_return_constant_02d6c5c0()
{
    return value_02d6c5c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6c660()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6c6b0 reads.
 *
 */
struct Object02d6c6b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6c6b0; meaning unknown. */
};
static_assert(offsetof(Object02d6c6b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c6b0(const Object02d6c6b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6c6c0 reads.
 *
 */
struct Object02d6c6c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6c6c0; meaning unknown. */
};
static_assert(offsetof(Object02d6c6c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c6c0(const Object02d6c6c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6c710()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6c730 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d6c730()
{
    return value_02d6c730;
}

/**
 *
 * The part of the object that auto_return_field_02d6c800 reads.
 *
 */
struct Object02d6c800 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6c800; meaning unknown. */
};
static_assert(offsetof(Object02d6c800, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c800(const Object02d6c800 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6c810 reads.
 *
 */
struct Object02d6c810 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6c810; meaning unknown. */
};
static_assert(offsetof(Object02d6c810, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c810(const Object02d6c810 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6c860()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6c880 = 0x138;

extern "C" uint32_t bb_auto_return_constant_02d6c880()
{
    return value_02d6c880;
}

/**
 *
 * The part of the object that auto_return_field_02d6c950 reads.
 *
 */
struct Object02d6c950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6c950; meaning unknown. */
};
static_assert(offsetof(Object02d6c950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c950(const Object02d6c950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6c960 reads.
 *
 */
struct Object02d6c960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6c960; meaning unknown. */
};
static_assert(offsetof(Object02d6c960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6c960(const Object02d6c960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6c9b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6c9d0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d6c9d0()
{
    return value_02d6c9d0;
}

/**
 *
 * The part of the object that auto_return_field_02d6caa0 reads.
 *
 */
struct Object02d6caa0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6caa0; meaning unknown. */
};
static_assert(offsetof(Object02d6caa0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6caa0(const Object02d6caa0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6cab0 reads.
 *
 */
struct Object02d6cab0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6cab0; meaning unknown. */
};
static_assert(offsetof(Object02d6cab0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6cab0(const Object02d6cab0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6cb00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6cb20 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02d6cb20()
{
    return value_02d6cb20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6cbc0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6cc00 reads.
 *
 */
struct Object02d6cc00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6cc00; meaning unknown. */
};
static_assert(offsetof(Object02d6cc00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6cc00(const Object02d6cc00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6cc10 reads.
 *
 */
struct Object02d6cc10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6cc10; meaning unknown. */
};
static_assert(offsetof(Object02d6cc10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6cc10(const Object02d6cc10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6cc60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6cc80 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d6cc80()
{
    return value_02d6cc80;
}

/**
 *
 * The part of the object that auto_return_field_02d6cd50 reads.
 *
 */
struct Object02d6cd50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6cd50; meaning unknown. */
};
static_assert(offsetof(Object02d6cd50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6cd50(const Object02d6cd50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6cd60 reads.
 *
 */
struct Object02d6cd60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6cd60; meaning unknown. */
};
static_assert(offsetof(Object02d6cd60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6cd60(const Object02d6cd60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6cdb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6cdd0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02d6cdd0()
{
    return value_02d6cdd0;
}

/**
 *
 * The part of the object that auto_return_field_02d6cea0 reads.
 *
 */
struct Object02d6cea0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6cea0; meaning unknown. */
};
static_assert(offsetof(Object02d6cea0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6cea0(const Object02d6cea0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6ceb0 reads.
 *
 */
struct Object02d6ceb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6ceb0; meaning unknown. */
};
static_assert(offsetof(Object02d6ceb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6ceb0(const Object02d6ceb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6cf00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6cf20 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02d6cf20()
{
    return value_02d6cf20;
}

/**
 *
 * The part of the object that auto_return_field_02d6cff0 reads.
 *
 */
struct Object02d6cff0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6cff0; meaning unknown. */
};
static_assert(offsetof(Object02d6cff0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6cff0(const Object02d6cff0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6d000 reads.
 *
 */
struct Object02d6d000 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6d000; meaning unknown. */
};
static_assert(offsetof(Object02d6d000, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6d000(const Object02d6d000 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6d050()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6d070 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d6d070()
{
    return value_02d6d070;
}

/**
 *
 * The part of the object that auto_return_field_02d6d110 reads.
 *
 */
struct Object02d6d110 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02d6d110; meaning unknown. */
};
static_assert(offsetof(Object02d6d110, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02d6d110(const Object02d6d110 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6d140()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6d3e0 reads.
 *
 */
struct Object02d6d3e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6d3e0; meaning unknown. */
};
static_assert(offsetof(Object02d6d3e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6d3e0(const Object02d6d3e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6d3f0 reads.
 *
 */
struct Object02d6d3f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6d3f0; meaning unknown. */
};
static_assert(offsetof(Object02d6d3f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6d3f0(const Object02d6d3f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6d440()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6d460 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02d6d460()
{
    return value_02d6d460;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6d9f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6da00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6da10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6da20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6da30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6dc70()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6df00 reads.
 *
 */
struct Object02d6df00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6df00; meaning unknown. */
};
static_assert(offsetof(Object02d6df00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6df00(const Object02d6df00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6df10 reads.
 *
 */
struct Object02d6df10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6df10; meaning unknown. */
};
static_assert(offsetof(Object02d6df10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6df10(const Object02d6df10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6df60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6df80 = 0xa8;

extern "C" uint32_t bb_auto_return_constant_02d6df80()
{
    return value_02d6df80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d6e020()
{
}

/**
 *
 * The part of the object that auto_return_field_02d6e040 reads.
 *
 */
struct Object02d6e040 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d6e040; meaning unknown. */
};
static_assert(offsetof(Object02d6e040, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6e040(const Object02d6e040 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02d6e080 reads.
 *
 */
struct Object02d6e080 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d6e080; meaning unknown. */
};
static_assert(offsetof(Object02d6e080, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6e080(const Object02d6e080 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d6e090 reads.
 *
 */
struct Object02d6e090 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d6e090; meaning unknown. */
};
static_assert(offsetof(Object02d6e090, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d6e090(const Object02d6e090 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d6e0e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d6e100 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02d6e100()
{
    return value_02d6e100;
}
