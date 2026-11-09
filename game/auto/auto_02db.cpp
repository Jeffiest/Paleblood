// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02db0770()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02db0a70 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02db0a70()
{
    return value_02db0a70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02db3490()
{
}

/**
 *
 * The part of the object that auto_return_field_02db5100 reads.
 *
 */
struct Object02db5100 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02db5100; meaning unknown. */
};
static_assert(offsetof(Object02db5100, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db5100(const Object02db5100 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02db5120 reads.
 *
 */
struct Object02db5120 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02db5120; meaning unknown. */
};
static_assert(offsetof(Object02db5120, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db5120(const Object02db5120 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02db5130 reads.
 *
 */
struct Object02db5130 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02db5130; meaning unknown. */
};
static_assert(offsetof(Object02db5130, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db5130(const Object02db5130 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02db5270 reads.
 *
 */
struct Object02db5270 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02db5270; meaning unknown. */
};
static_assert(offsetof(Object02db5270, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db5270(const Object02db5270 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02db5280 reads.
 *
 */
struct Object02db5280 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02db5280; meaning unknown. */
};
static_assert(offsetof(Object02db5280, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db5280(const Object02db5280 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02db52d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02db52f0 = 0x88;

extern "C" uint32_t bb_auto_return_constant_02db52f0()
{
    return value_02db52f0;
}

/**
 *
 * The part of the object that auto_return_field_02db53c0 reads.
 *
 */
struct Object02db53c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02db53c0; meaning unknown. */
};
static_assert(offsetof(Object02db53c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db53c0(const Object02db53c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02db53d0 reads.
 *
 */
struct Object02db53d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02db53d0; meaning unknown. */
};
static_assert(offsetof(Object02db53d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db53d0(const Object02db53d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02db5420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02db5440 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02db5440()
{
    return value_02db5440;
}

/**
 *
 * The part of the object that auto_return_field_02db5510 reads.
 *
 */
struct Object02db5510 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02db5510; meaning unknown. */
};
static_assert(offsetof(Object02db5510, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db5510(const Object02db5510 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02db5520 reads.
 *
 */
struct Object02db5520 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02db5520; meaning unknown. */
};
static_assert(offsetof(Object02db5520, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db5520(const Object02db5520 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02db5570()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02db5590 = 0x70;

extern "C" uint32_t bb_auto_return_constant_02db5590()
{
    return value_02db5590;
}

/**
 *
 * The part of the object that auto_return_field_02db5660 reads.
 *
 */
struct Object02db5660 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02db5660; meaning unknown. */
};
static_assert(offsetof(Object02db5660, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db5660(const Object02db5660 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02db5670 reads.
 *
 */
struct Object02db5670 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02db5670; meaning unknown. */
};
static_assert(offsetof(Object02db5670, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db5670(const Object02db5670 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02db56c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02db56e0 = 0x68;

extern "C" uint32_t bb_auto_return_constant_02db56e0()
{
    return value_02db56e0;
}

/**
 *
 * The part of the object that auto_return_field_02db57b0 reads.
 *
 */
struct Object02db57b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02db57b0; meaning unknown. */
};
static_assert(offsetof(Object02db57b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db57b0(const Object02db57b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02db57c0 reads.
 *
 */
struct Object02db57c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02db57c0; meaning unknown. */
};
static_assert(offsetof(Object02db57c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02db57c0(const Object02db57c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02db5810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02db5830 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02db5830()
{
    return value_02db5830;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02db7f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02db7f60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02db8170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02db81d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02db8b90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02db8be0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02db8c40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dbac30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dbac40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dbac50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dbac60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dbb950()
{
}

/**
 *
 * The part of the object that auto_return_field_02dbbd60 reads.
 *
 */
struct Object02dbbd60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dbbd60; meaning unknown. */
};
static_assert(offsetof(Object02dbbd60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbbd60(const Object02dbbd60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dbbd70 reads.
 *
 */
struct Object02dbbd70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dbbd70; meaning unknown. */
};
static_assert(offsetof(Object02dbbd70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbbd70(const Object02dbbd70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dbbdc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dbbde0 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_02dbbde0()
{
    return value_02dbbde0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dbc0e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dbc5c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dbc620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dbc680()
{
}

/**
 *
 * The part of the object that auto_return_field_02dbcae0 reads.
 *
 */
struct Object02dbcae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dbcae0; meaning unknown. */
};
static_assert(offsetof(Object02dbcae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbcae0(const Object02dbcae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dbcaf0 reads.
 *
 */
struct Object02dbcaf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dbcaf0; meaning unknown. */
};
static_assert(offsetof(Object02dbcaf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbcaf0(const Object02dbcaf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dbcb40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dbcb60 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_02dbcb60()
{
    return value_02dbcb60;
}

/**
 *
 * The part of the object that auto_return_field_02dbe0f0 reads.
 *
 */
struct Object02dbe0f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dbe0f0; meaning unknown. */
};
static_assert(offsetof(Object02dbe0f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbe0f0(const Object02dbe0f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dbe100 reads.
 *
 */
struct Object02dbe100 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dbe100; meaning unknown. */
};
static_assert(offsetof(Object02dbe100, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbe100(const Object02dbe100 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dbe150()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dbe170 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02dbe170()
{
    return value_02dbe170;
}

/**
 *
 * The part of the object that auto_return_field_02dbf250 reads.
 *
 */
struct Object02dbf250 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dbf250; meaning unknown. */
};
static_assert(offsetof(Object02dbf250, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbf250(const Object02dbf250 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dbf260 reads.
 *
 */
struct Object02dbf260 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dbf260; meaning unknown. */
};
static_assert(offsetof(Object02dbf260, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbf260(const Object02dbf260 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dbf2b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dbf2d0 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_02dbf2d0()
{
    return value_02dbf2d0;
}

/**
 *
 * The part of the object that auto_return_field_02dbf770 reads.
 *
 */
struct Object02dbf770 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dbf770; meaning unknown. */
};
static_assert(offsetof(Object02dbf770, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbf770(const Object02dbf770 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dbf780 reads.
 *
 */
struct Object02dbf780 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dbf780; meaning unknown. */
};
static_assert(offsetof(Object02dbf780, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dbf780(const Object02dbf780 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dbf7d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dbf7f0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02dbf7f0()
{
    return value_02dbf7f0;
}
