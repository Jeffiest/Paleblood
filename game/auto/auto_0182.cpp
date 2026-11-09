// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01820ce0 reads.
 *
 */
struct Object01820ce0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01820ce0; meaning unknown. */
};
static_assert(offsetof(Object01820ce0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01820ce0(const Object01820ce0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01820cf0 reads.
 *
 */
struct Object01820cf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01820cf0; meaning unknown. */
};
static_assert(offsetof(Object01820cf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01820cf0(const Object01820cf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01820d40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01820fc0 = 0xa8;

extern "C" uint32_t bb_auto_return_constant_01820fc0()
{
    return value_01820fc0;
}

/**
 *
 * The part of the object that auto_return_field_01826810 reads.
 *
 */
struct Object01826810 {
    uint8_t unknown_0x0000[0x78];
    uint64_t value_0x0078; /**< Read by auto_return_field_01826810; meaning unknown. */
};
static_assert(offsetof(Object01826810, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01826810(const Object01826810 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_field_01826dd0 reads.
 *
 */
struct Object01826dd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01826dd0; meaning unknown. */
};
static_assert(offsetof(Object01826dd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01826dd0(const Object01826dd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01826de0 reads.
 *
 */
struct Object01826de0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01826de0; meaning unknown. */
};
static_assert(offsetof(Object01826de0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01826de0(const Object01826de0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01826e30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018270b0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_018270b0()
{
    return value_018270b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01827e30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01828210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01828330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01829350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018294e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01829540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018295a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01829600()
{
}

/**
 *
 * The part of the object that auto_return_field_01829690 reads.
 *
 */
struct Object01829690 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01829690; meaning unknown. */
};
static_assert(offsetof(Object01829690, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01829690(const Object01829690 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018296a0 reads.
 *
 */
struct Object018296a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018296a0; meaning unknown. */
};
static_assert(offsetof(Object018296a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018296a0(const Object018296a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018296f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01829970 = 0x248;

extern "C" uint32_t bb_auto_return_constant_01829970()
{
    return value_01829970;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01829f80 = 0x1e00000;

extern "C" uint32_t bb_auto_return_constant_01829f80()
{
    return value_01829f80;
}

/**
 *
 * The part of the object that auto_return_field_0182a5a0 reads.
 *
 */
struct Object0182a5a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0182a5a0; meaning unknown. */
};
static_assert(offsetof(Object0182a5a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182a5a0(const Object0182a5a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0182a5b0 reads.
 *
 */
struct Object0182a5b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0182a5b0; meaning unknown. */
};
static_assert(offsetof(Object0182a5b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182a5b0(const Object0182a5b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0182a600()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0182a880 = 0x30;

extern "C" uint32_t bb_auto_return_constant_0182a880()
{
    return value_0182a880;
}

/**
 *
 * The part of the object that auto_return_field_0182b0c0 reads.
 *
 */
struct Object0182b0c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0182b0c0; meaning unknown. */
};
static_assert(offsetof(Object0182b0c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182b0c0(const Object0182b0c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0182b0d0 reads.
 *
 */
struct Object0182b0d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0182b0d0; meaning unknown. */
};
static_assert(offsetof(Object0182b0d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182b0d0(const Object0182b0d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0182b120()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0182b3a0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_0182b3a0()
{
    return value_0182b3a0;
}

/**
 *
 * The part of the object that auto_return_field_0182db90 reads.
 *
 */
struct Object0182db90 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0182db90; meaning unknown. */
};
static_assert(offsetof(Object0182db90, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0182db90(const Object0182db90 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182dc60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182dc70()
{
}

/**
 *
 * The part of the object that auto_return_field_0182df90 reads.
 *
 */
struct Object0182df90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0182df90; meaning unknown. */
};
static_assert(offsetof(Object0182df90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182df90(const Object0182df90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0182dfa0 reads.
 *
 */
struct Object0182dfa0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0182dfa0; meaning unknown. */
};
static_assert(offsetof(Object0182dfa0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182dfa0(const Object0182dfa0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0182dff0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0182e270 = 0x118;

extern "C" uint32_t bb_auto_return_constant_0182e270()
{
    return value_0182e270;
}

/**
 *
 * The part of the object that auto_return_field_0182e2b0 reads.
 *
 */
struct Object0182e2b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0182e2b0; meaning unknown. */
};
static_assert(offsetof(Object0182e2b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182e2b0(const Object0182e2b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0182e2c0 reads.
 *
 */
struct Object0182e2c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0182e2c0; meaning unknown. */
};
static_assert(offsetof(Object0182e2c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182e2c0(const Object0182e2c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0182e310()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0182e590 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0182e590()
{
    return value_0182e590;
}

/**
 *
 * The part of the object that auto_return_field_0182e5d0 reads.
 *
 */
struct Object0182e5d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0182e5d0; meaning unknown. */
};
static_assert(offsetof(Object0182e5d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182e5d0(const Object0182e5d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0182e5e0 reads.
 *
 */
struct Object0182e5e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0182e5e0; meaning unknown. */
};
static_assert(offsetof(Object0182e5e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182e5e0(const Object0182e5e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0182e630()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0182e8b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0182e8b0()
{
    return value_0182e8b0;
}

/**
 *
 * The part of the object that auto_return_field_0182e8f0 reads.
 *
 */
struct Object0182e8f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0182e8f0; meaning unknown. */
};
static_assert(offsetof(Object0182e8f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182e8f0(const Object0182e8f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0182e900 reads.
 *
 */
struct Object0182e900 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0182e900; meaning unknown. */
};
static_assert(offsetof(Object0182e900, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0182e900(const Object0182e900 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0182e950()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0182ebd0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0182ebd0()
{
    return value_0182ebd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182f370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182f740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182fc00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182fc60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182fcc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182fd20()
{
}
