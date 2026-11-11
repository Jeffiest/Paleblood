// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01702dc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01704470()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01704f80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017052d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01705540()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01705690()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01706d00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01706f80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01707410()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01707570()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01707d00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01707f70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017081b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01708b10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01709e50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170a0e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170a630()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170c310()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170cb40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170cdb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170cf80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170d710()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170dcd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170dfa0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0170e0c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01704d40()
{
}

/**
 *
 * The part of the object that auto_return_field_017059c0 reads.
 *
 */
struct Object017059c0 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_017059c0; meaning unknown. */
};
static_assert(offsetof(Object017059c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_017059c0(const Object017059c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_017059e0 reads.
 *
 */
struct Object017059e0 {
    uint8_t unknown_0x0000[0x1a];
    uint8_t value_0x001a; /**< Read by auto_return_field_017059e0; meaning unknown. */
};
static_assert(offsetof(Object017059e0, value_0x001a) == 0x1a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_017059e0(const Object017059e0 *self)
{
    return self->value_0x001a;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01705cb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017071a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01707790()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_017097d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_017097d0()
{
    return value_017097d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0170d930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0170f8b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0170f910()
{
}
