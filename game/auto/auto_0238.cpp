// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02380a80 reads.
 *
 */
struct Object02380a80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02380a80; meaning unknown. */
};
static_assert(offsetof(Object02380a80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02380a80(const Object02380a80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02380a90 reads.
 *
 */
struct Object02380a90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02380a90; meaning unknown. */
};
static_assert(offsetof(Object02380a90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02380a90(const Object02380a90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02380ae0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02380d60 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02380d60()
{
    return value_02380d60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023814c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02381890 reads.
 *
 */
struct Object02381890 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02381890; meaning unknown. */
};
static_assert(offsetof(Object02381890, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02381890(const Object02381890 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023818a0 reads.
 *
 */
struct Object023818a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023818a0; meaning unknown. */
};
static_assert(offsetof(Object023818a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023818a0(const Object023818a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023818f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02381b70 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02381b70()
{
    return value_02381b70;
}

/**
 *
 * The part of the object that auto_return_field_023822b0 reads.
 *
 */
struct Object023822b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023822b0; meaning unknown. */
};
static_assert(offsetof(Object023822b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023822b0(const Object023822b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023822c0 reads.
 *
 */
struct Object023822c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023822c0; meaning unknown. */
};
static_assert(offsetof(Object023822c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023822c0(const Object023822c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02382310()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02382590 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02382590()
{
    return value_02382590;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023828b0()
{
}

/**
 *
 * The part of the object that auto_return_field_02382d20 reads.
 *
 */
struct Object02382d20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02382d20; meaning unknown. */
};
static_assert(offsetof(Object02382d20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02382d20(const Object02382d20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02382d30 reads.
 *
 */
struct Object02382d30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02382d30; meaning unknown. */
};
static_assert(offsetof(Object02382d30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02382d30(const Object02382d30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02382d80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02383000 = 0x290;

extern "C" uint32_t bb_auto_return_constant_02383000()
{
    return value_02383000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02384440()
{
}

/**
 *
 * The part of the object that auto_return_field_023844d0 reads.
 *
 */
struct Object023844d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023844d0; meaning unknown. */
};
static_assert(offsetof(Object023844d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023844d0(const Object023844d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023844e0 reads.
 *
 */
struct Object023844e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023844e0; meaning unknown. */
};
static_assert(offsetof(Object023844e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023844e0(const Object023844e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02384530()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023847b0 = 0x328;

extern "C" uint32_t bb_auto_return_constant_023847b0()
{
    return value_023847b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023857e0()
{
}

/**
 *
 * The part of the object that auto_return_field_023858a0 reads.
 *
 */
struct Object023858a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023858a0; meaning unknown. */
};
static_assert(offsetof(Object023858a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023858a0(const Object023858a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023858b0 reads.
 *
 */
struct Object023858b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023858b0; meaning unknown. */
};
static_assert(offsetof(Object023858b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023858b0(const Object023858b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02385900()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02385b80 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02385b80()
{
    return value_02385b80;
}

/**
 *
 * The part of the object that auto_return_field_02386ba0 reads.
 *
 */
struct Object02386ba0 {
    uint8_t unknown_0x0000[0x15b];
    uint8_t value_0x015b; /**< Read by auto_return_field_02386ba0; meaning unknown. */
};
static_assert(offsetof(Object02386ba0, value_0x015b) == 0x15b);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02386ba0(const Object02386ba0 *self)
{
    return self->value_0x015b;
}

/**
 *
 * The part of the object that auto_return_field_02386bb0 reads.
 *
 */
struct Object02386bb0 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_02386bb0; meaning unknown. */
};
static_assert(offsetof(Object02386bb0, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02386bb0(const Object02386bb0 *self)
{
    return self->value_0x0170;
}

/**
 *
 * The part of the object that auto_return_field_02386bc0 reads.
 *
 */
struct Object02386bc0 {
    uint8_t unknown_0x0000[0x180];
    uint64_t value_0x0180; /**< Read by auto_return_field_02386bc0; meaning unknown. */
};
static_assert(offsetof(Object02386bc0, value_0x0180) == 0x180);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02386bc0(const Object02386bc0 *self)
{
    return self->value_0x0180;
}

/**
 *
 * The part of the object that auto_return_field_02386bd0 reads.
 *
 */
struct Object02386bd0 {
    uint8_t unknown_0x0000[0x190];
    uint64_t value_0x0190; /**< Read by auto_return_field_02386bd0; meaning unknown. */
};
static_assert(offsetof(Object02386bd0, value_0x0190) == 0x190);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02386bd0(const Object02386bd0 *self)
{
    return self->value_0x0190;
}

/**
 *
 * The part of the object that auto_return_field_02386be0 reads.
 *
 */
struct Object02386be0 {
    uint8_t unknown_0x0000[0x160];
    uint32_t value_0x0160; /**< Read by auto_return_field_02386be0; meaning unknown. */
};
static_assert(offsetof(Object02386be0, value_0x0160) == 0x160);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02386be0(const Object02386be0 *self)
{
    return self->value_0x0160;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023879a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02389270 reads.
 *
 */
struct Object02389270 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02389270; meaning unknown. */
};
static_assert(offsetof(Object02389270, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02389270(const Object02389270 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02389340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02389350()
{
}

/**
 *
 * The part of the object that auto_return_field_023895c0 reads.
 *
 */
struct Object023895c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023895c0; meaning unknown. */
};
static_assert(offsetof(Object023895c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023895c0(const Object023895c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023895d0 reads.
 *
 */
struct Object023895d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023895d0; meaning unknown. */
};
static_assert(offsetof(Object023895d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023895d0(const Object023895d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02389620()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023898a0 = 0x1a0;

extern "C" uint32_t bb_auto_return_constant_023898a0()
{
    return value_023898a0;
}

/**
 *
 * The part of the object that auto_return_field_023898e0 reads.
 *
 */
struct Object023898e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023898e0; meaning unknown. */
};
static_assert(offsetof(Object023898e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023898e0(const Object023898e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023898f0 reads.
 *
 */
struct Object023898f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023898f0; meaning unknown. */
};
static_assert(offsetof(Object023898f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023898f0(const Object023898f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02389940()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02389bc0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02389bc0()
{
    return value_02389bc0;
}

/**
 *
 * The part of the object that auto_return_field_02389c00 reads.
 *
 */
struct Object02389c00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02389c00; meaning unknown. */
};
static_assert(offsetof(Object02389c00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02389c00(const Object02389c00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02389c10 reads.
 *
 */
struct Object02389c10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02389c10; meaning unknown. */
};
static_assert(offsetof(Object02389c10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02389c10(const Object02389c10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02389c60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02389ee0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02389ee0()
{
    return value_02389ee0;
}

/**
 *
 * The part of the object that auto_return_field_02389f20 reads.
 *
 */
struct Object02389f20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02389f20; meaning unknown. */
};
static_assert(offsetof(Object02389f20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02389f20(const Object02389f20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02389f30 reads.
 *
 */
struct Object02389f30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02389f30; meaning unknown. */
};
static_assert(offsetof(Object02389f30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02389f30(const Object02389f30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02389f80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0238a200 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0238a200()
{
    return value_0238a200;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238a3e0()
{
}

/**
 *
 * The part of the object that auto_return_field_0238acb0 reads.
 *
 */
struct Object0238acb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0238acb0; meaning unknown. */
};
static_assert(offsetof(Object0238acb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0238acb0(const Object0238acb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0238acc0 reads.
 *
 */
struct Object0238acc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0238acc0; meaning unknown. */
};
static_assert(offsetof(Object0238acc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0238acc0(const Object0238acc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0238ad10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0238af90 = 0x10;

extern "C" uint32_t bb_auto_return_constant_0238af90()
{
    return value_0238af90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238b690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238b7b0()
{
}

/**
 *
 * The part of the object that auto_return_field_0238b850 reads.
 *
 */
struct Object0238b850 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_0238b850; meaning unknown. */
};
static_assert(offsetof(Object0238b850, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0238b850(const Object0238b850 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_0238bc30 reads.
 *
 */
struct Object0238bc30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0238bc30; meaning unknown. */
};
static_assert(offsetof(Object0238bc30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0238bc30(const Object0238bc30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0238bc40 reads.
 *
 */
struct Object0238bc40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0238bc40; meaning unknown. */
};
static_assert(offsetof(Object0238bc40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0238bc40(const Object0238bc40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0238bc90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0238bf10 = 0x18;

extern "C" uint32_t bb_auto_return_constant_0238bf10()
{
    return value_0238bf10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238c3d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238c3e0()
{
}

/**
 *
 * The part of the object that auto_return_field_0238c7b0 reads.
 *
 */
struct Object0238c7b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0238c7b0; meaning unknown. */
};
static_assert(offsetof(Object0238c7b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0238c7b0(const Object0238c7b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0238c7c0 reads.
 *
 */
struct Object0238c7c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0238c7c0; meaning unknown. */
};
static_assert(offsetof(Object0238c7c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0238c7c0(const Object0238c7c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0238c810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0238ca90 = 0x28;

extern "C" uint32_t bb_auto_return_constant_0238ca90()
{
    return value_0238ca90;
}

/**
 *
 * The part of the object that auto_return_field_0238fb60 reads.
 *
 */
struct Object0238fb60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0238fb60; meaning unknown. */
};
static_assert(offsetof(Object0238fb60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0238fb60(const Object0238fb60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238ff10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238ff70()
{
}
