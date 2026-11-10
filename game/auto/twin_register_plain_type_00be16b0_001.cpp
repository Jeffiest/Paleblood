// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_register_plain_type, in game/misc/register_plain_type.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "runtime/original.h"

// auto_register_plain_type_009e1290: misc_register_plain_type with other addresses.
namespace twin_009e1290 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05828998, plain_type_object, uint8_t);
RT_GLOBAL(0x04b9ac90, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_009e1290(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_009e1290

// auto_register_plain_type_00b068a0: misc_register_plain_type with other addresses.
namespace twin_00b068a0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x0583f9d0, plain_type_object, uint8_t);
RT_GLOBAL(0x04bad9f3, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00b068a0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00b068a0

// auto_register_plain_type_00bda540: misc_register_plain_type with other addresses.
namespace twin_00bda540 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05843a40, plain_type_object, uint8_t);
RT_GLOBAL(0x04bb3b8b, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00bda540(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00bda540

// auto_register_plain_type_00bde8f0: misc_register_plain_type with other addresses.
namespace twin_00bde8f0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05844cc0, plain_type_object, uint8_t);
RT_GLOBAL(0x04bb541a, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00bde8f0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00bde8f0

// auto_register_plain_type_00bde980: misc_register_plain_type with other addresses.
namespace twin_00bde980 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05844d10, plain_type_object, uint8_t);
RT_GLOBAL(0x04bb542f, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00bde980(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00bde980

// auto_register_plain_type_00c9a130: misc_register_plain_type with other addresses.
namespace twin_00c9a130 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05848108, plain_type_object, uint8_t);
RT_GLOBAL(0x04bbf280, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00c9a130(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00c9a130

// auto_register_plain_type_00cb15a0: misc_register_plain_type with other addresses.
namespace twin_00cb15a0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05849d20, plain_type_object, uint8_t);
RT_GLOBAL(0x04bc0a18, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00cb15a0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00cb15a0

// auto_register_plain_type_00cd3ed0: misc_register_plain_type with other addresses.
namespace twin_00cd3ed0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x0584b708, plain_type_object, uint8_t);
RT_GLOBAL(0x04bc2ab0, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00cd3ed0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00cd3ed0

// auto_register_plain_type_00d5ab70: misc_register_plain_type with other addresses.
namespace twin_00d5ab70 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05850308, plain_type_object, uint8_t);
RT_GLOBAL(0x04bcc078, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00d5ab70(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00d5ab70

// auto_register_plain_type_00d85570: misc_register_plain_type with other addresses.
namespace twin_00d85570 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05856098, plain_type_object, uint8_t);
RT_GLOBAL(0x04bd83db, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00d85570(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00d85570

// auto_register_plain_type_00d85600: misc_register_plain_type with other addresses.
namespace twin_00d85600 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x058560e8, plain_type_object, uint8_t);
RT_GLOBAL(0x04bd83ef, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00d85600(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00d85600

// auto_register_plain_type_00ead000: misc_register_plain_type with other addresses.
namespace twin_00ead000 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x0585d068, plain_type_object, uint8_t);
RT_GLOBAL(0x04bee883, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00ead000(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00ead000

// auto_register_plain_type_00f2b6e0: misc_register_plain_type with other addresses.
namespace twin_00f2b6e0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05861bd0, plain_type_object, uint8_t);
RT_GLOBAL(0x04bf4d76, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00f2b6e0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00f2b6e0

// auto_register_plain_type_00f40b50: misc_register_plain_type with other addresses.
namespace twin_00f40b50 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x058627b0, plain_type_object, uint8_t);
RT_GLOBAL(0x04bf5860, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00f40b50(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00f40b50

// auto_register_plain_type_00f40be0: misc_register_plain_type with other addresses.
namespace twin_00f40be0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05862800, plain_type_object, uint8_t);
RT_GLOBAL(0x04bf5878, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00f40be0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00f40be0

// auto_register_plain_type_00f6f6f0: misc_register_plain_type with other addresses.
namespace twin_00f6f6f0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x058647a0, plain_type_object, uint8_t);
RT_GLOBAL(0x04bf9220, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00f6f6f0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00f6f6f0

// auto_register_plain_type_00f797b0: misc_register_plain_type with other addresses.
namespace twin_00f797b0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x05865350, plain_type_object, uint8_t);
RT_GLOBAL(0x04bf9ec2, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00f797b0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00f797b0

// auto_register_plain_type_00f7e220: misc_register_plain_type with other addresses.
namespace twin_00f7e220 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x058655a0, plain_type_object, uint8_t);
RT_GLOBAL(0x04bfa1bf, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_00f7e220(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_00f7e220

// auto_register_plain_type_014cb860: misc_register_plain_type with other addresses.
namespace twin_014cb860 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x058b9a20, plain_type_object, uint8_t);
RT_GLOBAL(0x04cd3203, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_014cb860(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_014cb860

// auto_register_plain_type_014cb8e0: misc_register_plain_type with other addresses.
namespace twin_014cb8e0 {

namespace {

// The plain type's static object (the registry it is added to), its name and its source.
RT_GLOBAL(0x058b9a70, plain_type_object, uint8_t);
RT_GLOBAL(0x04cd3210, plain_type_name, const char);
RT_GLOBAL(0x05801a70, plain_type_source, const uint8_t);

// Adds a type to a registry: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            void(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                 const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the plain type.
constexpr uint32_t plain_type_size = 0x10;

}  // namespace

/**
 *
 * Registers the plain type with its registry, with no table and no flags.
 *
 */
extern "C" void bb_auto_register_plain_type_014cb8e0(void)
{
    fn_0081e9b0(plain_type_object.address(), plain_type_name.address(), plain_type_source.address(),
                plain_type_size, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
}

}  // namespace twin_014cb8e0
