// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_delete_object_thunk, in game/misc/delete_object_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_delete_object_thunk_0045c190: misc_delete_object_thunk with other addresses.
namespace twin_0045c190 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0045c190 (0x0045c190) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe6d8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe6d8, fn_02fbe6d8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0045c190(void *object)
{
    fn_02fbe6d8(object);
}

}  // namespace twin_0045c190

// auto_delete_object_thunk_0045c1a0: misc_delete_object_thunk with other addresses.
namespace twin_0045c1a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0045c1a0 (0x0045c1a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe6e8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe6e8, fn_02fbe6e8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0045c1a0(void *object)
{
    fn_02fbe6e8(object);
}

}  // namespace twin_0045c1a0

// auto_delete_object_thunk_0045e440: misc_delete_object_thunk with other addresses.
namespace twin_0045e440 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0045e440 (0x0045e440) is a single jump to the import stub of operator delete(void *)
// at 0x0045c190. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x0045c190, fn_0045c190, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0045e440(void *object)
{
    fn_0045c190(object);
}

}  // namespace twin_0045e440

// auto_delete_object_thunk_00465540: misc_delete_object_thunk with other addresses.
namespace twin_00465540 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_00465540 (0x00465540) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe5e8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe5e8, fn_02fbe5e8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_00465540(void *object)
{
    fn_02fbe5e8(object);
}

}  // namespace twin_00465540

// auto_delete_object_thunk_004667f0: misc_delete_object_thunk with other addresses.
namespace twin_004667f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_004667f0 (0x004667f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe7d8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe7d8, fn_02fbe7d8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_004667f0(void *object)
{
    fn_02fbe7d8(object);
}

}  // namespace twin_004667f0

// auto_delete_object_thunk_00838940: misc_delete_object_thunk with other addresses.
namespace twin_00838940 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_00838940 (0x00838940) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe7d8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe7d8, fn_02fbe7d8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_00838940(void *object)
{
    fn_02fbe7d8(object);
}

}  // namespace twin_00838940

// auto_delete_object_thunk_008462b0: misc_delete_object_thunk with other addresses.
namespace twin_008462b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_008462b0 (0x008462b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe568. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe568, fn_02fbe568, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_008462b0(void *object)
{
    fn_02fbe568(object);
}

}  // namespace twin_008462b0

// auto_delete_object_thunk_00846390: misc_delete_object_thunk with other addresses.
namespace twin_00846390 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_00846390 (0x00846390) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe708. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe708, fn_02fbe708, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_00846390(void *object)
{
    fn_02fbe708(object);
}

}  // namespace twin_00846390

// auto_delete_object_thunk_008463b0: misc_delete_object_thunk with other addresses.
namespace twin_008463b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_008463b0 (0x008463b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe608. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe608, fn_02fbe608, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_008463b0(void *object)
{
    fn_02fbe608(object);
}

}  // namespace twin_008463b0

// auto_delete_object_thunk_008463c0: misc_delete_object_thunk with other addresses.
namespace twin_008463c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_008463c0 (0x008463c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbec18. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbec18, fn_02fbec18, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_008463c0(void *object)
{
    fn_02fbec18(object);
}

}  // namespace twin_008463c0

// auto_delete_object_thunk_00846430: misc_delete_object_thunk with other addresses.
namespace twin_00846430 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_00846430 (0x00846430) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe628. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe628, fn_02fbe628, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_00846430(void *object)
{
    fn_02fbe628(object);
}

}  // namespace twin_00846430

// auto_delete_object_thunk_00846440: misc_delete_object_thunk with other addresses.
namespace twin_00846440 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_00846440 (0x00846440) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe918. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe918, fn_02fbe918, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_00846440(void *object)
{
    fn_02fbe918(object);
}

}  // namespace twin_00846440

// auto_delete_object_thunk_00846450: misc_delete_object_thunk with other addresses.
namespace twin_00846450 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_00846450 (0x00846450) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe5f8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe5f8, fn_02fbe5f8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_00846450(void *object)
{
    fn_02fbe5f8(object);
}

}  // namespace twin_00846450

// auto_delete_object_thunk_00aa1d60: misc_delete_object_thunk with other addresses.
namespace twin_00aa1d60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_00aa1d60 (0x00aa1d60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe698. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe698, fn_02fbe698, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_00aa1d60(void *object)
{
    fn_02fbe698(object);
}

}  // namespace twin_00aa1d60

// auto_delete_object_thunk_010c8280: misc_delete_object_thunk with other addresses.
namespace twin_010c8280 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_010c8280 (0x010c8280) is a single jump to the import stub of operator delete(void *)
// at 0x02fbfb58. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbfb58, fn_02fbfb58, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_010c8280(void *object)
{
    fn_02fbfb58(object);
}

}  // namespace twin_010c8280

// auto_delete_object_thunk_0111a610: misc_delete_object_thunk with other addresses.
namespace twin_0111a610 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0111a610 (0x0111a610) is a single jump to the import stub of operator delete(void *)
// at 0x02fbeaf8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbeaf8, fn_02fbeaf8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0111a610(void *object)
{
    fn_02fbeaf8(object);
}

}  // namespace twin_0111a610

// auto_delete_object_thunk_011ab570: misc_delete_object_thunk with other addresses.
namespace twin_011ab570 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_011ab570 (0x011ab570) is a single jump to the import stub of operator delete(void *)
// at 0x0111a610. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x0111a610, fn_0111a610, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_011ab570(void *object)
{
    fn_0111a610(object);
}

}  // namespace twin_011ab570

// auto_delete_object_thunk_014899f0: misc_delete_object_thunk with other addresses.
namespace twin_014899f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_014899f0 (0x014899f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc05c8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc05c8, fn_02fc05c8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_014899f0(void *object)
{
    fn_02fc05c8(object);
}

}  // namespace twin_014899f0

// auto_delete_object_thunk_01489a00: misc_delete_object_thunk with other addresses.
namespace twin_01489a00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489a00 (0x01489a00) is a single jump to the import stub of operator delete(void *)
// at 0x02fc05d8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc05d8, fn_02fc05d8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489a00(void *object)
{
    fn_02fc05d8(object);
}

}  // namespace twin_01489a00

// auto_delete_object_thunk_01489a20: misc_delete_object_thunk with other addresses.
namespace twin_01489a20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489a20 (0x01489a20) is a single jump to the import stub of operator delete(void *)
// at 0x02fc05f8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc05f8, fn_02fc05f8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489a20(void *object)
{
    fn_02fc05f8(object);
}

}  // namespace twin_01489a20

// auto_delete_object_thunk_01489a30: misc_delete_object_thunk with other addresses.
namespace twin_01489a30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489a30 (0x01489a30) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0608. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0608, fn_02fc0608, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489a30(void *object)
{
    fn_02fc0608(object);
}

}  // namespace twin_01489a30

// auto_delete_object_thunk_01489a40: misc_delete_object_thunk with other addresses.
namespace twin_01489a40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489a40 (0x01489a40) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0618. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0618, fn_02fc0618, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489a40(void *object)
{
    fn_02fc0618(object);
}

}  // namespace twin_01489a40

// auto_delete_object_thunk_01489a50: misc_delete_object_thunk with other addresses.
namespace twin_01489a50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489a50 (0x01489a50) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0628. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0628, fn_02fc0628, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489a50(void *object)
{
    fn_02fc0628(object);
}

}  // namespace twin_01489a50

// auto_delete_object_thunk_01489a70: misc_delete_object_thunk with other addresses.
namespace twin_01489a70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489a70 (0x01489a70) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0648. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0648, fn_02fc0648, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489a70(void *object)
{
    fn_02fc0648(object);
}

}  // namespace twin_01489a70

// auto_delete_object_thunk_01489b10: misc_delete_object_thunk with other addresses.
namespace twin_01489b10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489b10 (0x01489b10) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0678. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0678, fn_02fc0678, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489b10(void *object)
{
    fn_02fc0678(object);
}

}  // namespace twin_01489b10

// auto_delete_object_thunk_01489b20: misc_delete_object_thunk with other addresses.
namespace twin_01489b20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489b20 (0x01489b20) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0688. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0688, fn_02fc0688, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489b20(void *object)
{
    fn_02fc0688(object);
}

}  // namespace twin_01489b20

// auto_delete_object_thunk_01489b30: misc_delete_object_thunk with other addresses.
namespace twin_01489b30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489b30 (0x01489b30) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0698. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0698, fn_02fc0698, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489b30(void *object)
{
    fn_02fc0698(object);
}

}  // namespace twin_01489b30

// auto_delete_object_thunk_01489b40: misc_delete_object_thunk with other addresses.
namespace twin_01489b40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489b40 (0x01489b40) is a single jump to the import stub of operator delete(void *)
// at 0x02fc06a8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc06a8, fn_02fc06a8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489b40(void *object)
{
    fn_02fc06a8(object);
}

}  // namespace twin_01489b40

// auto_delete_object_thunk_01489b50: misc_delete_object_thunk with other addresses.
namespace twin_01489b50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489b50 (0x01489b50) is a single jump to the import stub of operator delete(void *)
// at 0x02fc06b8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc06b8, fn_02fc06b8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489b50(void *object)
{
    fn_02fc06b8(object);
}

}  // namespace twin_01489b50

// auto_delete_object_thunk_01489b70: misc_delete_object_thunk with other addresses.
namespace twin_01489b70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489b70 (0x01489b70) is a single jump to the import stub of operator delete(void *)
// at 0x02fc06d8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc06d8, fn_02fc06d8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489b70(void *object)
{
    fn_02fc06d8(object);
}

}  // namespace twin_01489b70

// auto_delete_object_thunk_01489b80: misc_delete_object_thunk with other addresses.
namespace twin_01489b80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489b80 (0x01489b80) is a single jump to the import stub of operator delete(void *)
// at 0x02fc06e8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc06e8, fn_02fc06e8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489b80(void *object)
{
    fn_02fc06e8(object);
}

}  // namespace twin_01489b80

// auto_delete_object_thunk_01489b90: misc_delete_object_thunk with other addresses.
namespace twin_01489b90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489b90 (0x01489b90) is a single jump to the import stub of operator delete(void *)
// at 0x02fc06f8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc06f8, fn_02fc06f8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489b90(void *object)
{
    fn_02fc06f8(object);
}

}  // namespace twin_01489b90

// auto_delete_object_thunk_01489ba0: misc_delete_object_thunk with other addresses.
namespace twin_01489ba0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489ba0 (0x01489ba0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0708. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0708, fn_02fc0708, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489ba0(void *object)
{
    fn_02fc0708(object);
}

}  // namespace twin_01489ba0

// auto_delete_object_thunk_01489bb0: misc_delete_object_thunk with other addresses.
namespace twin_01489bb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489bb0 (0x01489bb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0718. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0718, fn_02fc0718, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489bb0(void *object)
{
    fn_02fc0718(object);
}

}  // namespace twin_01489bb0

// auto_delete_object_thunk_01489bc0: misc_delete_object_thunk with other addresses.
namespace twin_01489bc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489bc0 (0x01489bc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0728. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0728, fn_02fc0728, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489bc0(void *object)
{
    fn_02fc0728(object);
}

}  // namespace twin_01489bc0

// auto_delete_object_thunk_01489bd0: misc_delete_object_thunk with other addresses.
namespace twin_01489bd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489bd0 (0x01489bd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0738. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0738, fn_02fc0738, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489bd0(void *object)
{
    fn_02fc0738(object);
}

}  // namespace twin_01489bd0

// auto_delete_object_thunk_01489be0: misc_delete_object_thunk with other addresses.
namespace twin_01489be0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489be0 (0x01489be0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0748. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0748, fn_02fc0748, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489be0(void *object)
{
    fn_02fc0748(object);
}

}  // namespace twin_01489be0

// auto_delete_object_thunk_01489bf0: misc_delete_object_thunk with other addresses.
namespace twin_01489bf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489bf0 (0x01489bf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0758. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0758, fn_02fc0758, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489bf0(void *object)
{
    fn_02fc0758(object);
}

}  // namespace twin_01489bf0

// auto_delete_object_thunk_01489c00: misc_delete_object_thunk with other addresses.
namespace twin_01489c00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489c00 (0x01489c00) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0768. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0768, fn_02fc0768, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489c00(void *object)
{
    fn_02fc0768(object);
}

}  // namespace twin_01489c00

// auto_delete_object_thunk_01489c10: misc_delete_object_thunk with other addresses.
namespace twin_01489c10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489c10 (0x01489c10) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0778. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0778, fn_02fc0778, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489c10(void *object)
{
    fn_02fc0778(object);
}

}  // namespace twin_01489c10

// auto_delete_object_thunk_01489c20: misc_delete_object_thunk with other addresses.
namespace twin_01489c20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01489c20 (0x01489c20) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0788. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0788, fn_02fc0788, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01489c20(void *object)
{
    fn_02fc0788(object);
}

}  // namespace twin_01489c20

// auto_delete_object_thunk_015d25e0: misc_delete_object_thunk with other addresses.
namespace twin_015d25e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_015d25e0 (0x015d25e0) is a single jump to the import stub of operator delete(void *)
// at 0x015cc110. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x015cc110, fn_015cc110, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_015d25e0(void *object)
{
    fn_015cc110(object);
}

}  // namespace twin_015d25e0

// auto_delete_object_thunk_01d5d0b0: misc_delete_object_thunk with other addresses.
namespace twin_01d5d0b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01d5d0b0 (0x01d5d0b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0998. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0998, fn_02fc0998, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01d5d0b0(void *object)
{
    fn_02fc0998(object);
}

}  // namespace twin_01d5d0b0

// auto_delete_object_thunk_02276a40: misc_delete_object_thunk with other addresses.
namespace twin_02276a40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02276a40 (0x02276a40) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0ae8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0ae8, fn_02fc0ae8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02276a40(void *object)
{
    fn_02fc0ae8(object);
}

}  // namespace twin_02276a40

// auto_delete_object_thunk_02276b20: misc_delete_object_thunk with other addresses.
namespace twin_02276b20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02276b20 (0x02276b20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbf898. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbf898, fn_02fbf898, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02276b20(void *object)
{
    fn_02fbf898(object);
}

}  // namespace twin_02276b20

// auto_delete_object_thunk_02436fc0: misc_delete_object_thunk with other addresses.
namespace twin_02436fc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02436fc0 (0x02436fc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0998. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0998, fn_02fc0998, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02436fc0(void *object)
{
    fn_02fc0998(object);
}

}  // namespace twin_02436fc0

// auto_delete_object_thunk_0247f960: misc_delete_object_thunk with other addresses.
namespace twin_0247f960 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0247f960 (0x0247f960) is a single jump to the import stub of operator delete(void *)
// at 0x02fbfe78. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbfe78, fn_02fbfe78, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0247f960(void *object)
{
    fn_02fbfe78(object);
}

}  // namespace twin_0247f960

// auto_delete_object_thunk_0248ba90: misc_delete_object_thunk with other addresses.
namespace twin_0248ba90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0248ba90 (0x0248ba90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbfe78. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbfe78, fn_02fbfe78, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0248ba90(void *object)
{
    fn_02fbfe78(object);
}

}  // namespace twin_0248ba90

// auto_delete_object_thunk_0248baa0: misc_delete_object_thunk with other addresses.
namespace twin_0248baa0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0248baa0 (0x0248baa0) is a single jump to the import stub of operator delete(void *)
// at 0x02a3b2d0. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02a3b2d0, fn_02a3b2d0, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0248baa0(void *object)
{
    fn_02a3b2d0(object);
}

}  // namespace twin_0248baa0

// auto_delete_object_thunk_0248bab0: misc_delete_object_thunk with other addresses.
namespace twin_0248bab0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0248bab0 (0x0248bab0) is a single jump to the import stub of operator delete(void *)
// at 0x02fc07c8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc07c8, fn_02fc07c8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0248bab0(void *object)
{
    fn_02fc07c8(object);
}

}  // namespace twin_0248bab0

// auto_delete_object_thunk_024b5470: misc_delete_object_thunk with other addresses.
namespace twin_024b5470 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_024b5470 (0x024b5470) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe648. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe648, fn_02fbe648, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_024b5470(void *object)
{
    fn_02fbe648(object);
}

}  // namespace twin_024b5470

// auto_delete_object_thunk_024b5480: misc_delete_object_thunk with other addresses.
namespace twin_024b5480 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_024b5480 (0x024b5480) is a single jump to the import stub of operator delete(void *)
// at 0x02fbf128. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbf128, fn_02fbf128, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_024b5480(void *object)
{
    fn_02fbf128(object);
}

}  // namespace twin_024b5480

// auto_delete_object_thunk_024b5490: misc_delete_object_thunk with other addresses.
namespace twin_024b5490 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_024b5490 (0x024b5490) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe698. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe698, fn_02fbe698, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_024b5490(void *object)
{
    fn_02fbe698(object);
}

}  // namespace twin_024b5490

// auto_delete_object_thunk_024b54c0: misc_delete_object_thunk with other addresses.
namespace twin_024b54c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_024b54c0 (0x024b54c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe948. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe948, fn_02fbe948, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_024b54c0(void *object)
{
    fn_02fbe948(object);
}

}  // namespace twin_024b54c0

// auto_delete_object_thunk_024b54f0: misc_delete_object_thunk with other addresses.
namespace twin_024b54f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_024b54f0 (0x024b54f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe668. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe668, fn_02fbe668, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_024b54f0(void *object)
{
    fn_02fbe668(object);
}

}  // namespace twin_024b54f0

// auto_delete_object_thunk_02b11ca0: misc_delete_object_thunk with other addresses.
namespace twin_02b11ca0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02b11ca0 (0x02b11ca0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe928. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe928, fn_02fbe928, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02b11ca0(void *object)
{
    fn_02fbe928(object);
}

}  // namespace twin_02b11ca0

// auto_delete_object_thunk_02df2f00: misc_delete_object_thunk with other addresses.
namespace twin_02df2f00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02df2f00 (0x02df2f00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe5e8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe5e8, fn_02fbe5e8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02df2f00(void *object)
{
    fn_02fbe5e8(object);
}

}  // namespace twin_02df2f00

// auto_delete_object_thunk_02e610f0: misc_delete_object_thunk with other addresses.
namespace twin_02e610f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02e610f0 (0x02e610f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbee58. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbee58, fn_02fbee58, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02e610f0(void *object)
{
    fn_02fbee58(object);
}

}  // namespace twin_02e610f0

// auto_delete_object_thunk_02e61100: misc_delete_object_thunk with other addresses.
namespace twin_02e61100 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02e61100 (0x02e61100) is a single jump to the import stub of operator delete(void *)
// at 0x02fbedf8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbedf8, fn_02fbedf8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02e61100(void *object)
{
    fn_02fbedf8(object);
}

}  // namespace twin_02e61100

// auto_delete_object_thunk_02e61110: misc_delete_object_thunk with other addresses.
namespace twin_02e61110 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02e61110 (0x02e61110) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0878. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0878, fn_02fc0878, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02e61110(void *object)
{
    fn_02fc0878(object);
}

}  // namespace twin_02e61110

// auto_delete_object_thunk_02e61120: misc_delete_object_thunk with other addresses.
namespace twin_02e61120 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02e61120 (0x02e61120) is a single jump to the import stub of operator delete(void *)
// at 0x02fc0868. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fc0868, fn_02fc0868, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02e61120(void *object)
{
    fn_02fc0868(object);
}

}  // namespace twin_02e61120

// auto_delete_object_thunk_02f97da0: misc_delete_object_thunk with other addresses.
namespace twin_02f97da0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02f97da0 (0x02f97da0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbeaf8. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbeaf8, fn_02fbeaf8, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02f97da0(void *object)
{
    fn_02fbeaf8(object);
}

}  // namespace twin_02f97da0
