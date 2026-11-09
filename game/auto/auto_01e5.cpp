// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e50040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e500a0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e50130 reads.
 *
 */
struct Object01e50130 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e50130; meaning unknown. */
};
static_assert(offsetof(Object01e50130, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e50130(const Object01e50130 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e50140 reads.
 *
 */
struct Object01e50140 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e50140; meaning unknown. */
};
static_assert(offsetof(Object01e50140, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e50140(const Object01e50140 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e50190()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e50410 = 0x3d0;

extern "C" uint32_t bb_auto_return_constant_01e50410()
{
    return value_01e50410;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e50a20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e53190()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01e531d0 reads.
 *
 */
struct Object01e531d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e531d0; meaning unknown. */
};
static_assert(offsetof(Object01e531d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e531d0(const Object01e531d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e531e0 reads.
 *
 */
struct Object01e531e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e531e0; meaning unknown. */
};
static_assert(offsetof(Object01e531e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e531e0(const Object01e531e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e53230()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e532d0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01e532d0()
{
    return value_01e532d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e534f0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e53b40 reads.
 *
 */
struct Object01e53b40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e53b40; meaning unknown. */
};
static_assert(offsetof(Object01e53b40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e53b40(const Object01e53b40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e53b50 reads.
 *
 */
struct Object01e53b50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e53b50; meaning unknown. */
};
static_assert(offsetof(Object01e53b50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e53b50(const Object01e53b50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e53ba0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e53e20 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01e53e20()
{
    return value_01e53e20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e54040()
{
}

/**
 *
 * The part of the object that auto_return_field_01e54660 reads.
 *
 */
struct Object01e54660 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e54660; meaning unknown. */
};
static_assert(offsetof(Object01e54660, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e54660(const Object01e54660 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e54670 reads.
 *
 */
struct Object01e54670 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e54670; meaning unknown. */
};
static_assert(offsetof(Object01e54670, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e54670(const Object01e54670 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e546c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e54940 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01e54940()
{
    return value_01e54940;
}

/**
 *
 * The part of the object that auto_return_field_01e55be0 reads.
 *
 */
struct Object01e55be0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e55be0; meaning unknown. */
};
static_assert(offsetof(Object01e55be0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e55be0(const Object01e55be0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e55bf0 reads.
 *
 */
struct Object01e55bf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e55bf0; meaning unknown. */
};
static_assert(offsetof(Object01e55bf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e55bf0(const Object01e55bf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e55c40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e55ec0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01e55ec0()
{
    return value_01e55ec0;
}

/**
 *
 * The part of the object that auto_return_float_field_01e57770 reads.
 *
 */
struct Object01e57770 {
    uint8_t unknown_0x0000[0x148];
    float value_0x0148; /**< Read by auto_return_float_field_01e57770; meaning unknown. */
};
static_assert(offsetof(Object01e57770, value_0x0148) == 0x148);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e57770(const Object01e57770 *self)
{
    return self->value_0x0148;
}

/**
 *
 * The part of the object that auto_return_field_01e58830 reads.
 *
 */
struct Object01e58830 {
    uint8_t unknown_0x0000[0x130];
    uint32_t value_0x0130; /**< Read by auto_return_field_01e58830; meaning unknown. */
};
static_assert(offsetof(Object01e58830, value_0x0130) == 0x130);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e58830(const Object01e58830 *self)
{
    return self->value_0x0130;
}

/**
 *
 * The part of the object that auto_return_field_01e58840 reads.
 *
 */
struct Object01e58840 {
    uint8_t unknown_0x0000[0x13c];
    uint32_t value_0x013c; /**< Read by auto_return_field_01e58840; meaning unknown. */
};
static_assert(offsetof(Object01e58840, value_0x013c) == 0x13c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e58840(const Object01e58840 *self)
{
    return self->value_0x013c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e58850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e588b0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e58940 reads.
 *
 */
struct Object01e58940 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e58940; meaning unknown. */
};
static_assert(offsetof(Object01e58940, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e58940(const Object01e58940 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e58950 reads.
 *
 */
struct Object01e58950 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e58950; meaning unknown. */
};
static_assert(offsetof(Object01e58950, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e58950(const Object01e58950 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e589a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e58c20 = 0x208;

extern "C" uint32_t bb_auto_return_constant_01e58c20()
{
    return value_01e58c20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e59240()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01e59c60 reads.
 *
 */
struct Object01e59c60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e59c60; meaning unknown. */
};
static_assert(offsetof(Object01e59c60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e59c60(const Object01e59c60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e59c70 reads.
 *
 */
struct Object01e59c70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e59c70; meaning unknown. */
};
static_assert(offsetof(Object01e59c70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e59c70(const Object01e59c70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e59cc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e59f40 = 0x30;

extern "C" uint32_t bb_auto_return_constant_01e59f40()
{
    return value_01e59f40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5a330()
{
}

/**
 *
 * The part of the object that auto_return_field_01e5a760 reads.
 *
 */
struct Object01e5a760 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e5a760; meaning unknown. */
};
static_assert(offsetof(Object01e5a760, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5a760(const Object01e5a760 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e5a770 reads.
 *
 */
struct Object01e5a770 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e5a770; meaning unknown. */
};
static_assert(offsetof(Object01e5a770, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5a770(const Object01e5a770 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e5a7c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e5a860 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01e5a860()
{
    return value_01e5a860;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5a890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5d090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5d0f0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e5d180 reads.
 *
 */
struct Object01e5d180 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e5d180; meaning unknown. */
};
static_assert(offsetof(Object01e5d180, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5d180(const Object01e5d180 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e5d190 reads.
 *
 */
struct Object01e5d190 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e5d190; meaning unknown. */
};
static_assert(offsetof(Object01e5d190, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5d190(const Object01e5d190 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e5d1e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e5d460 = 0x58;

extern "C" uint32_t bb_auto_return_constant_01e5d460()
{
    return value_01e5d460;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5d8a0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e5e090 reads.
 *
 */
struct Object01e5e090 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e5e090; meaning unknown. */
};
static_assert(offsetof(Object01e5e090, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5e090(const Object01e5e090 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e5e0a0 reads.
 *
 */
struct Object01e5e0a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e5e0a0; meaning unknown. */
};
static_assert(offsetof(Object01e5e0a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5e0a0(const Object01e5e0a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e5e0f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e5e370 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01e5e370()
{
    return value_01e5e370;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5e590()
{
}

/**
 *
 * The part of the object that auto_return_field_01e5ed40 reads.
 *
 */
struct Object01e5ed40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e5ed40; meaning unknown. */
};
static_assert(offsetof(Object01e5ed40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5ed40(const Object01e5ed40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e5ed50 reads.
 *
 */
struct Object01e5ed50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e5ed50; meaning unknown. */
};
static_assert(offsetof(Object01e5ed50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5ed50(const Object01e5ed50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e5eda0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e5f020 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e5f020()
{
    return value_01e5f020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5f230()
{
}

/**
 *
 * The part of the object that auto_return_field_01e5f850 reads.
 *
 */
struct Object01e5f850 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e5f850; meaning unknown. */
};
static_assert(offsetof(Object01e5f850, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5f850(const Object01e5f850 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e5f860 reads.
 *
 */
struct Object01e5f860 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e5f860; meaning unknown. */
};
static_assert(offsetof(Object01e5f860, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5f860(const Object01e5f860 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e5f8b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e5fb30 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01e5fb30()
{
    return value_01e5fb30;
}

/**
 *
 * The part of the object that auto_return_field_01e5fea0 reads.
 *
 */
struct Object01e5fea0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_01e5fea0; meaning unknown. */
};
static_assert(offsetof(Object01e5fea0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e5fea0(const Object01e5fea0 *self)
{
    return self->value_0x0028;
}
