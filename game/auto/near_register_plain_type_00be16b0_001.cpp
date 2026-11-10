// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_register_plain_type, in game/misc/register_plain_type.cpp, each using other addresses and constants.
// Every block below is that function's source with the addresses and constants exchanged: the
// names and comments in a block were written for that function and are carried over.
#include <cstdint>
#include "runtime/original.h"

// auto_register_plain_type_0084fe70: misc_register_plain_type with other addresses and constants.
namespace near_0084fe70 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05803250, plain_type_object, uint8_t);
RT_GLOBAL(0x04b5fa2b, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0xe0;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_0084fe70(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_0084fe70

// auto_register_plain_type_009b68e0: misc_register_plain_type with other addresses and constants.
namespace near_009b68e0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05824c30, plain_type_object, uint8_t);
RT_GLOBAL(0x04b9838e, plain_type_name, const char);
RT_GLOBAL(0x058243c8, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x18;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_009b68e0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_009b68e0

// auto_register_plain_type_00a04e10: misc_register_plain_type with other addresses and constants.
namespace near_00a04e10 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x0582c020, plain_type_object, uint8_t);
RT_GLOBAL(0x04b9f190, plain_type_name, const char);
RT_GLOBAL(0x058292d8, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x18;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00a04e10(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_00a04e10

// auto_register_plain_type_00a305b0: misc_register_plain_type with other addresses and constants.
namespace near_00a305b0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x0582dad0, plain_type_object, uint8_t);
RT_GLOBAL(0x04ba1510, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0xe8;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00a305b0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_00a305b0

// auto_register_plain_type_00a3d3f0: misc_register_plain_type with other addresses and constants.
namespace near_00a3d3f0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x0582db20, plain_type_object, uint8_t);
RT_GLOBAL(0x04ba1ab0, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0xb8;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00a3d3f0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_00a3d3f0

// auto_register_plain_type_00a6d700: misc_register_plain_type with other addresses and constants.
namespace near_00a6d700 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x0582e188, plain_type_object, uint8_t);
RT_GLOBAL(0x04ba2ef0, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x18;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00a6d700(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_00a6d700

// auto_register_plain_type_00aab5e0: misc_register_plain_type with other addresses and constants.
namespace near_00aab5e0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x0583cde0, plain_type_object, uint8_t);
RT_GLOBAL(0x04ba7ac1, plain_type_name, const char);
RT_GLOBAL(0x0583ceb0, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x50;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00aab5e0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_00aab5e0

// auto_register_plain_type_00f71060: misc_register_plain_type with other addresses and constants.
namespace near_00f71060 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x058648c0, plain_type_object, uint8_t);
RT_GLOBAL(0x04bf93ef, plain_type_name, const char);
RT_GLOBAL(0x05801af0, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x8;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00f71060(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_00f71060

// auto_register_plain_type_014c6320: misc_register_plain_type with other addresses and constants.
namespace near_014c6320 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x058b98e0, plain_type_object, uint8_t);
RT_GLOBAL(0x04cd2ec0, plain_type_name, const char);
RT_GLOBAL(0x058b9a20, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x28;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_014c6320(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_014c6320

// auto_register_plain_type_014c8bc0: misc_register_plain_type with other addresses and constants.
namespace near_014c8bc0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x058b99d0, plain_type_object, uint8_t);
RT_GLOBAL(0x04cd3055, plain_type_name, const char);
RT_GLOBAL(0x058b9a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x20;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_014c8bc0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_014c8bc0

// auto_register_plain_type_0160db30: misc_register_plain_type with other addresses and constants.
namespace near_0160db30 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x0593b000, plain_type_object, uint8_t);
RT_GLOBAL(0x04ce694e, plain_type_name, const char);
RT_GLOBAL(0x058243c8, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x18;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_0160db30(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace near_0160db30
