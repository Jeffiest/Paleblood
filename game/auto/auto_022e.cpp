// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022e01b0 = 0x560;

extern "C" uint32_t bb_auto_return_constant_022e01b0()
{
    return value_022e01b0;
}

/**
 *
 * The part of the object that auto_return_field_022e1130 reads.
 *
 */
struct Object022e1130 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_022e1130; meaning unknown. */
};
static_assert(offsetof(Object022e1130, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e1130(const Object022e1130 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022e16c0()
{
}

/**
 *
 * The part of the object that auto_return_field_022e1900 reads.
 *
 */
struct Object022e1900 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022e1900; meaning unknown. */
};
static_assert(offsetof(Object022e1900, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e1900(const Object022e1900 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022e1910 reads.
 *
 */
struct Object022e1910 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022e1910; meaning unknown. */
};
static_assert(offsetof(Object022e1910, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e1910(const Object022e1910 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022e1960()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022e1be0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_022e1be0()
{
    return value_022e1be0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022e4600()
{
}

/**
 *
 * The part of the object that auto_return_field_022e4840 reads.
 *
 */
struct Object022e4840 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022e4840; meaning unknown. */
};
static_assert(offsetof(Object022e4840, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e4840(const Object022e4840 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022e4850 reads.
 *
 */
struct Object022e4850 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022e4850; meaning unknown. */
};
static_assert(offsetof(Object022e4850, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e4850(const Object022e4850 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022e48a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022e4b20 = 0x128;

extern "C" uint32_t bb_auto_return_constant_022e4b20()
{
    return value_022e4b20;
}

/**
 *
 * The part of the object that auto_return_field_022e57a0 reads.
 *
 */
struct Object022e57a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022e57a0; meaning unknown. */
};
static_assert(offsetof(Object022e57a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e57a0(const Object022e57a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022e57b0 reads.
 *
 */
struct Object022e57b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022e57b0; meaning unknown. */
};
static_assert(offsetof(Object022e57b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e57b0(const Object022e57b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022e5800()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022e5a80 = 0x90;

extern "C" uint32_t bb_auto_return_constant_022e5a80()
{
    return value_022e5a80;
}

/**
 *
 * The part of the object that auto_return_field_022e5fc0 reads.
 *
 */
struct Object022e5fc0 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_022e5fc0; meaning unknown. */
};
static_assert(offsetof(Object022e5fc0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e5fc0(const Object022e5fc0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_022e6570 reads.
 *
 */
struct Object022e6570 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022e6570; meaning unknown. */
};
static_assert(offsetof(Object022e6570, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e6570(const Object022e6570 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022e6580 reads.
 *
 */
struct Object022e6580 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022e6580; meaning unknown. */
};
static_assert(offsetof(Object022e6580, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e6580(const Object022e6580 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022e65d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022e6850 = 0x98;

extern "C" uint32_t bb_auto_return_constant_022e6850()
{
    return value_022e6850;
}

/**
 *
 * The part of the object that auto_return_field_022e7ef0 reads.
 *
 */
struct Object022e7ef0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022e7ef0; meaning unknown. */
};
static_assert(offsetof(Object022e7ef0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e7ef0(const Object022e7ef0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022e7f00 reads.
 *
 */
struct Object022e7f00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022e7f00; meaning unknown. */
};
static_assert(offsetof(Object022e7f00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e7f00(const Object022e7f00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022e7f50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022e81d0 = 0x70;

extern "C" uint32_t bb_auto_return_constant_022e81d0()
{
    return value_022e81d0;
}

/**
 *
 * The part of the object that auto_return_field_022e9620 reads.
 *
 */
struct Object022e9620 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022e9620; meaning unknown. */
};
static_assert(offsetof(Object022e9620, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e9620(const Object022e9620 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022e9630 reads.
 *
 */
struct Object022e9630 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022e9630; meaning unknown. */
};
static_assert(offsetof(Object022e9630, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e9630(const Object022e9630 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022e9680()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022e9900 = 0x70;

extern "C" uint32_t bb_auto_return_constant_022e9900()
{
    return value_022e9900;
}

/**
 *
 * The part of the object that auto_return_field_022ea680 reads.
 *
 */
struct Object022ea680 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_022ea680; meaning unknown. */
};
static_assert(offsetof(Object022ea680, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022ea680(const Object022ea680 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_022ebb20 reads.
 *
 */
struct Object022ebb20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022ebb20; meaning unknown. */
};
static_assert(offsetof(Object022ebb20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022ebb20(const Object022ebb20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022ebb30 reads.
 *
 */
struct Object022ebb30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022ebb30; meaning unknown. */
};
static_assert(offsetof(Object022ebb30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022ebb30(const Object022ebb30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022ebb80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022ebe00 = 0x98;

extern "C" uint32_t bb_auto_return_constant_022ebe00()
{
    return value_022ebe00;
}

/**
 *
 * The part of the object that auto_return_field_022edfe0 reads.
 *
 */
struct Object022edfe0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022edfe0; meaning unknown. */
};
static_assert(offsetof(Object022edfe0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022edfe0(const Object022edfe0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022edff0 reads.
 *
 */
struct Object022edff0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022edff0; meaning unknown. */
};
static_assert(offsetof(Object022edff0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022edff0(const Object022edff0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022ee040()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022ee2c0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_022ee2c0()
{
    return value_022ee2c0;
}

/**
 *
 * The part of the object that auto_return_field_022eec70 reads.
 *
 */
struct Object022eec70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022eec70; meaning unknown. */
};
static_assert(offsetof(Object022eec70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022eec70(const Object022eec70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022eec80 reads.
 *
 */
struct Object022eec80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022eec80; meaning unknown. */
};
static_assert(offsetof(Object022eec80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022eec80(const Object022eec80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022eecd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022eef50 = 0x70;

extern "C" uint32_t bb_auto_return_constant_022eef50()
{
    return value_022eef50;
}

/**
 *
 * The part of the object that auto_return_field_022ef210 reads.
 *
 */
struct Object022ef210 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_022ef210; meaning unknown. */
};
static_assert(offsetof(Object022ef210, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022ef210(const Object022ef210 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_022ef880 reads.
 *
 */
struct Object022ef880 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022ef880; meaning unknown. */
};
static_assert(offsetof(Object022ef880, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022ef880(const Object022ef880 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022ef890 reads.
 *
 */
struct Object022ef890 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022ef890; meaning unknown. */
};
static_assert(offsetof(Object022ef890, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022ef890(const Object022ef890 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022ef8e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022efb60 = 0x70;

extern "C" uint32_t bb_auto_return_constant_022efb60()
{
    return value_022efb60;
}
