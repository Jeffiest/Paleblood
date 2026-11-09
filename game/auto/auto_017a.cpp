// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a76d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a7720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a77f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a7850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a78a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a7ef0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a7f20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a7f30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a87e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a8810()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a8820()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a8ec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a8ed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a8ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a8ef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a8f00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a8f20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a8f30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a8f40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a8f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a8f60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a8f70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a8f80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a8f90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_017a8fa0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_017a8fa0()
{
    return value_017a8fa0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_017a8fb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_017a8fb0()
{
    return value_017a8fb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a8fc0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017a8fd0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_017a8fd0()
{
    return value_017a8fd0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a9040()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017a9050 = 0x1;

extern "C" uint32_t bb_auto_return_constant_017a9050()
{
    return value_017a9050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_017a9060 = 0x1;

extern "C" uint8_t bb_auto_return_constant_017a9060()
{
    return value_017a9060;
}

/**
 *
 * The part of the object that auto_return_field_017a9080 reads.
 *
 */
struct Object017a9080 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_017a9080; meaning unknown. */
};
static_assert(offsetof(Object017a9080, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_017a9080(const Object017a9080 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_017a90f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_017a90f0()
{
    return value_017a90f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017a9100 = 0x2;

extern "C" uint32_t bb_auto_return_constant_017a9100()
{
    return value_017a9100;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a9110()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a9120()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017a9130()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_017a9140 = 0x1;

extern "C" uint8_t bb_auto_return_constant_017a9140()
{
    return value_017a9140;
}

/**
 *
 * The part of the object that auto_return_field_017a9160 reads.
 *
 */
struct Object017a9160 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_017a9160; meaning unknown. */
};
static_assert(offsetof(Object017a9160, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_017a9160(const Object017a9160 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a9170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a9240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a9340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017a9410()
{
}

/**
 *
 * The part of the object that auto_return_field_017aae40 reads.
 *
 */
struct Object017aae40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017aae40; meaning unknown. */
};
static_assert(offsetof(Object017aae40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017aae40(const Object017aae40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017aae50 reads.
 *
 */
struct Object017aae50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017aae50; meaning unknown. */
};
static_assert(offsetof(Object017aae50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017aae50(const Object017aae50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017aaea0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017ab120 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_017ab120()
{
    return value_017ab120;
}

/**
 *
 * The part of the object that auto_return_field_017ab160 reads.
 *
 */
struct Object017ab160 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017ab160; meaning unknown. */
};
static_assert(offsetof(Object017ab160, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ab160(const Object017ab160 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017ab170 reads.
 *
 */
struct Object017ab170 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017ab170; meaning unknown. */
};
static_assert(offsetof(Object017ab170, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ab170(const Object017ab170 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017ab1c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017ab440 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_017ab440()
{
    return value_017ab440;
}

/**
 *
 * The part of the object that auto_return_field_017ab480 reads.
 *
 */
struct Object017ab480 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017ab480; meaning unknown. */
};
static_assert(offsetof(Object017ab480, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ab480(const Object017ab480 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017ab490 reads.
 *
 */
struct Object017ab490 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017ab490; meaning unknown. */
};
static_assert(offsetof(Object017ab490, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ab490(const Object017ab490 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017ab4e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017ab760 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_017ab760()
{
    return value_017ab760;
}

/**
 *
 * The part of the object that auto_return_field_017ab7a0 reads.
 *
 */
struct Object017ab7a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017ab7a0; meaning unknown. */
};
static_assert(offsetof(Object017ab7a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ab7a0(const Object017ab7a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017ab7b0 reads.
 *
 */
struct Object017ab7b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017ab7b0; meaning unknown. */
};
static_assert(offsetof(Object017ab7b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ab7b0(const Object017ab7b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017ab800()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017aba80 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_017aba80()
{
    return value_017aba80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017ac180()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017ac1b0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_017ac1b0()
{
    return value_017ac1b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017ac430 = 0x1;

extern "C" uint32_t bb_auto_return_constant_017ac430()
{
    return value_017ac430;
}
