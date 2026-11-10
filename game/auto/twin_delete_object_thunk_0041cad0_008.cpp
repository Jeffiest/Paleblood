// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_delete_object_thunk, in game/misc/delete_object_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_delete_object_thunk_01eee270: misc_delete_object_thunk with other addresses.
namespace twin_01eee270 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eee270 (0x01eee270) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eee270(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eee270

// auto_delete_object_thunk_01eee370: misc_delete_object_thunk with other addresses.
namespace twin_01eee370 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eee370 (0x01eee370) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eee370(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eee370

// auto_delete_object_thunk_01eee470: misc_delete_object_thunk with other addresses.
namespace twin_01eee470 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eee470 (0x01eee470) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eee470(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eee470

// auto_delete_object_thunk_01eee570: misc_delete_object_thunk with other addresses.
namespace twin_01eee570 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eee570 (0x01eee570) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eee570(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eee570

// auto_delete_object_thunk_01eee680: misc_delete_object_thunk with other addresses.
namespace twin_01eee680 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eee680 (0x01eee680) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eee680(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eee680

// auto_delete_object_thunk_01eee8a0: misc_delete_object_thunk with other addresses.
namespace twin_01eee8a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eee8a0 (0x01eee8a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eee8a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eee8a0

// auto_delete_object_thunk_01eeedb0: misc_delete_object_thunk with other addresses.
namespace twin_01eeedb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eeedb0 (0x01eeedb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eeedb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eeedb0

// auto_delete_object_thunk_01eeeeb0: misc_delete_object_thunk with other addresses.
namespace twin_01eeeeb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eeeeb0 (0x01eeeeb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eeeeb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eeeeb0

// auto_delete_object_thunk_01eeefb0: misc_delete_object_thunk with other addresses.
namespace twin_01eeefb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eeefb0 (0x01eeefb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eeefb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eeefb0

// auto_delete_object_thunk_01eef0b0: misc_delete_object_thunk with other addresses.
namespace twin_01eef0b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eef0b0 (0x01eef0b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eef0b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eef0b0

// auto_delete_object_thunk_01eef1b0: misc_delete_object_thunk with other addresses.
namespace twin_01eef1b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eef1b0 (0x01eef1b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eef1b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eef1b0

// auto_delete_object_thunk_01eef2c0: misc_delete_object_thunk with other addresses.
namespace twin_01eef2c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eef2c0 (0x01eef2c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eef2c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eef2c0

// auto_delete_object_thunk_01eef3d0: misc_delete_object_thunk with other addresses.
namespace twin_01eef3d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eef3d0 (0x01eef3d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eef3d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eef3d0

// auto_delete_object_thunk_01eef700: misc_delete_object_thunk with other addresses.
namespace twin_01eef700 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01eef700 (0x01eef700) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01eef700(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01eef700

// auto_delete_object_thunk_01ef57d0: misc_delete_object_thunk with other addresses.
namespace twin_01ef57d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef57d0 (0x01ef57d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef57d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef57d0

// auto_delete_object_thunk_01ef58e0: misc_delete_object_thunk with other addresses.
namespace twin_01ef58e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef58e0 (0x01ef58e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef58e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef58e0

// auto_delete_object_thunk_01ef5a60: misc_delete_object_thunk with other addresses.
namespace twin_01ef5a60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef5a60 (0x01ef5a60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef5a60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef5a60

// auto_delete_object_thunk_01ef63c0: misc_delete_object_thunk with other addresses.
namespace twin_01ef63c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef63c0 (0x01ef63c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef63c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef63c0

// auto_delete_object_thunk_01ef6430: misc_delete_object_thunk with other addresses.
namespace twin_01ef6430 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef6430 (0x01ef6430) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef6430(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef6430

// auto_delete_object_thunk_01ef65e0: misc_delete_object_thunk with other addresses.
namespace twin_01ef65e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef65e0 (0x01ef65e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef65e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef65e0

// auto_delete_object_thunk_01ef7180: misc_delete_object_thunk with other addresses.
namespace twin_01ef7180 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef7180 (0x01ef7180) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef7180(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef7180

// auto_delete_object_thunk_01ef72e0: misc_delete_object_thunk with other addresses.
namespace twin_01ef72e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef72e0 (0x01ef72e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef72e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef72e0

// auto_delete_object_thunk_01ef7400: misc_delete_object_thunk with other addresses.
namespace twin_01ef7400 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef7400 (0x01ef7400) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef7400(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef7400

// auto_delete_object_thunk_01ef7e90: misc_delete_object_thunk with other addresses.
namespace twin_01ef7e90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef7e90 (0x01ef7e90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef7e90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef7e90

// auto_delete_object_thunk_01ef7f90: misc_delete_object_thunk with other addresses.
namespace twin_01ef7f90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef7f90 (0x01ef7f90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef7f90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef7f90

// auto_delete_object_thunk_01ef81e0: misc_delete_object_thunk with other addresses.
namespace twin_01ef81e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef81e0 (0x01ef81e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef81e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef81e0

// auto_delete_object_thunk_01ef8300: misc_delete_object_thunk with other addresses.
namespace twin_01ef8300 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef8300 (0x01ef8300) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef8300(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef8300

// auto_delete_object_thunk_01ef8780: misc_delete_object_thunk with other addresses.
namespace twin_01ef8780 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef8780 (0x01ef8780) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef8780(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef8780

// auto_delete_object_thunk_01ef8880: misc_delete_object_thunk with other addresses.
namespace twin_01ef8880 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef8880 (0x01ef8880) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef8880(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef8880

// auto_delete_object_thunk_01ef8980: misc_delete_object_thunk with other addresses.
namespace twin_01ef8980 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef8980 (0x01ef8980) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef8980(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef8980

// auto_delete_object_thunk_01ef8a90: misc_delete_object_thunk with other addresses.
namespace twin_01ef8a90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef8a90 (0x01ef8a90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef8a90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef8a90

// auto_delete_object_thunk_01ef8ba0: misc_delete_object_thunk with other addresses.
namespace twin_01ef8ba0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef8ba0 (0x01ef8ba0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef8ba0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef8ba0

// auto_delete_object_thunk_01ef8ca0: misc_delete_object_thunk with other addresses.
namespace twin_01ef8ca0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef8ca0 (0x01ef8ca0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef8ca0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef8ca0

// auto_delete_object_thunk_01ef8db0: misc_delete_object_thunk with other addresses.
namespace twin_01ef8db0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef8db0 (0x01ef8db0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef8db0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef8db0

// auto_delete_object_thunk_01ef8eb0: misc_delete_object_thunk with other addresses.
namespace twin_01ef8eb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef8eb0 (0x01ef8eb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef8eb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef8eb0

// auto_delete_object_thunk_01ef9170: misc_delete_object_thunk with other addresses.
namespace twin_01ef9170 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef9170 (0x01ef9170) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef9170(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef9170

// auto_delete_object_thunk_01ef9400: misc_delete_object_thunk with other addresses.
namespace twin_01ef9400 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef9400 (0x01ef9400) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef9400(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef9400

// auto_delete_object_thunk_01ef9500: misc_delete_object_thunk with other addresses.
namespace twin_01ef9500 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef9500 (0x01ef9500) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef9500(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef9500

// auto_delete_object_thunk_01ef9600: misc_delete_object_thunk with other addresses.
namespace twin_01ef9600 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef9600 (0x01ef9600) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef9600(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef9600

// auto_delete_object_thunk_01ef9700: misc_delete_object_thunk with other addresses.
namespace twin_01ef9700 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef9700 (0x01ef9700) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef9700(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef9700

// auto_delete_object_thunk_01ef9800: misc_delete_object_thunk with other addresses.
namespace twin_01ef9800 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef9800 (0x01ef9800) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef9800(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef9800

// auto_delete_object_thunk_01ef9ff0: misc_delete_object_thunk with other addresses.
namespace twin_01ef9ff0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ef9ff0 (0x01ef9ff0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01ef9ff0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ef9ff0

// auto_delete_object_thunk_01efa200: misc_delete_object_thunk with other addresses.
namespace twin_01efa200 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efa200 (0x01efa200) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efa200(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efa200

// auto_delete_object_thunk_01efa330: misc_delete_object_thunk with other addresses.
namespace twin_01efa330 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efa330 (0x01efa330) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efa330(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efa330

// auto_delete_object_thunk_01efa430: misc_delete_object_thunk with other addresses.
namespace twin_01efa430 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efa430 (0x01efa430) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efa430(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efa430

// auto_delete_object_thunk_01efa530: misc_delete_object_thunk with other addresses.
namespace twin_01efa530 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efa530 (0x01efa530) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efa530(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efa530

// auto_delete_object_thunk_01efa630: misc_delete_object_thunk with other addresses.
namespace twin_01efa630 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efa630 (0x01efa630) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efa630(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efa630

// auto_delete_object_thunk_01efa760: misc_delete_object_thunk with other addresses.
namespace twin_01efa760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efa760 (0x01efa760) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efa760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efa760

// auto_delete_object_thunk_01efa860: misc_delete_object_thunk with other addresses.
namespace twin_01efa860 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efa860 (0x01efa860) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efa860(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efa860

// auto_delete_object_thunk_01efa960: misc_delete_object_thunk with other addresses.
namespace twin_01efa960 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efa960 (0x01efa960) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efa960(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efa960

// auto_delete_object_thunk_01efaa60: misc_delete_object_thunk with other addresses.
namespace twin_01efaa60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efaa60 (0x01efaa60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efaa60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efaa60

// auto_delete_object_thunk_01efb2b0: misc_delete_object_thunk with other addresses.
namespace twin_01efb2b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efb2b0 (0x01efb2b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efb2b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efb2b0

// auto_delete_object_thunk_01efb880: misc_delete_object_thunk with other addresses.
namespace twin_01efb880 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efb880 (0x01efb880) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efb880(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efb880

// auto_delete_object_thunk_01efbcb0: misc_delete_object_thunk with other addresses.
namespace twin_01efbcb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efbcb0 (0x01efbcb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efbcb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efbcb0

// auto_delete_object_thunk_01efbe80: misc_delete_object_thunk with other addresses.
namespace twin_01efbe80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efbe80 (0x01efbe80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efbe80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efbe80

// auto_delete_object_thunk_01efc2d0: misc_delete_object_thunk with other addresses.
namespace twin_01efc2d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efc2d0 (0x01efc2d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efc2d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efc2d0

// auto_delete_object_thunk_01efc4d0: misc_delete_object_thunk with other addresses.
namespace twin_01efc4d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efc4d0 (0x01efc4d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efc4d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efc4d0

// auto_delete_object_thunk_01efc630: misc_delete_object_thunk with other addresses.
namespace twin_01efc630 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efc630 (0x01efc630) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efc630(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efc630

// auto_delete_object_thunk_01efc800: misc_delete_object_thunk with other addresses.
namespace twin_01efc800 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efc800 (0x01efc800) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efc800(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efc800

// auto_delete_object_thunk_01efd560: misc_delete_object_thunk with other addresses.
namespace twin_01efd560 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efd560 (0x01efd560) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efd560(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efd560

// auto_delete_object_thunk_01efd660: misc_delete_object_thunk with other addresses.
namespace twin_01efd660 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efd660 (0x01efd660) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efd660(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efd660

// auto_delete_object_thunk_01efd760: misc_delete_object_thunk with other addresses.
namespace twin_01efd760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efd760 (0x01efd760) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efd760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efd760

// auto_delete_object_thunk_01efda80: misc_delete_object_thunk with other addresses.
namespace twin_01efda80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efda80 (0x01efda80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efda80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efda80

// auto_delete_object_thunk_01efdb90: misc_delete_object_thunk with other addresses.
namespace twin_01efdb90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efdb90 (0x01efdb90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efdb90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efdb90

// auto_delete_object_thunk_01efdc90: misc_delete_object_thunk with other addresses.
namespace twin_01efdc90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01efdc90 (0x01efdc90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01efdc90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01efdc90

// auto_delete_object_thunk_01f03040: misc_delete_object_thunk with other addresses.
namespace twin_01f03040 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f03040 (0x01f03040) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f03040(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f03040

// auto_delete_object_thunk_01f03170: misc_delete_object_thunk with other addresses.
namespace twin_01f03170 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f03170 (0x01f03170) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f03170(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f03170

// auto_delete_object_thunk_01f033b0: misc_delete_object_thunk with other addresses.
namespace twin_01f033b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f033b0 (0x01f033b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f033b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f033b0

// auto_delete_object_thunk_01f035e0: misc_delete_object_thunk with other addresses.
namespace twin_01f035e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f035e0 (0x01f035e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f035e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f035e0

// auto_delete_object_thunk_01f03810: misc_delete_object_thunk with other addresses.
namespace twin_01f03810 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f03810 (0x01f03810) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f03810(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f03810

// auto_delete_object_thunk_01f039f0: misc_delete_object_thunk with other addresses.
namespace twin_01f039f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f039f0 (0x01f039f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f039f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f039f0

// auto_delete_object_thunk_01f03af0: misc_delete_object_thunk with other addresses.
namespace twin_01f03af0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f03af0 (0x01f03af0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f03af0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f03af0

// auto_delete_object_thunk_01f03eb0: misc_delete_object_thunk with other addresses.
namespace twin_01f03eb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f03eb0 (0x01f03eb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f03eb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f03eb0

// auto_delete_object_thunk_01f03fc0: misc_delete_object_thunk with other addresses.
namespace twin_01f03fc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f03fc0 (0x01f03fc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f03fc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f03fc0

// auto_delete_object_thunk_01f05150: misc_delete_object_thunk with other addresses.
namespace twin_01f05150 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f05150 (0x01f05150) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f05150(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f05150

// auto_delete_object_thunk_01f05250: misc_delete_object_thunk with other addresses.
namespace twin_01f05250 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f05250 (0x01f05250) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f05250(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f05250

// auto_delete_object_thunk_01f053a0: misc_delete_object_thunk with other addresses.
namespace twin_01f053a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f053a0 (0x01f053a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f053a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f053a0

// auto_delete_object_thunk_01f054a0: misc_delete_object_thunk with other addresses.
namespace twin_01f054a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f054a0 (0x01f054a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f054a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f054a0

// auto_delete_object_thunk_01f055f0: misc_delete_object_thunk with other addresses.
namespace twin_01f055f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f055f0 (0x01f055f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f055f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f055f0

// auto_delete_object_thunk_01f05aa0: misc_delete_object_thunk with other addresses.
namespace twin_01f05aa0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f05aa0 (0x01f05aa0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f05aa0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f05aa0

// auto_delete_object_thunk_01f12420: misc_delete_object_thunk with other addresses.
namespace twin_01f12420 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f12420 (0x01f12420) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f12420(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f12420

// auto_delete_object_thunk_01f12850: misc_delete_object_thunk with other addresses.
namespace twin_01f12850 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f12850 (0x01f12850) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f12850(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f12850

// auto_delete_object_thunk_01f12960: misc_delete_object_thunk with other addresses.
namespace twin_01f12960 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f12960 (0x01f12960) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f12960(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f12960

// auto_delete_object_thunk_01f169a0: misc_delete_object_thunk with other addresses.
namespace twin_01f169a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f169a0 (0x01f169a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f169a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f169a0

// auto_delete_object_thunk_01f16cf0: misc_delete_object_thunk with other addresses.
namespace twin_01f16cf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f16cf0 (0x01f16cf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f16cf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f16cf0

// auto_delete_object_thunk_01f1e1b0: misc_delete_object_thunk with other addresses.
namespace twin_01f1e1b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1e1b0 (0x01f1e1b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1e1b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1e1b0

// auto_delete_object_thunk_01f1e2d0: misc_delete_object_thunk with other addresses.
namespace twin_01f1e2d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1e2d0 (0x01f1e2d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1e2d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1e2d0

// auto_delete_object_thunk_01f1e3e0: misc_delete_object_thunk with other addresses.
namespace twin_01f1e3e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1e3e0 (0x01f1e3e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1e3e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1e3e0

// auto_delete_object_thunk_01f1e500: misc_delete_object_thunk with other addresses.
namespace twin_01f1e500 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1e500 (0x01f1e500) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1e500(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1e500

// auto_delete_object_thunk_01f1e620: misc_delete_object_thunk with other addresses.
namespace twin_01f1e620 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1e620 (0x01f1e620) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1e620(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1e620

// auto_delete_object_thunk_01f1e740: misc_delete_object_thunk with other addresses.
namespace twin_01f1e740 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1e740 (0x01f1e740) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1e740(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1e740

// auto_delete_object_thunk_01f1e860: misc_delete_object_thunk with other addresses.
namespace twin_01f1e860 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1e860 (0x01f1e860) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1e860(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1e860

// auto_delete_object_thunk_01f1eed0: misc_delete_object_thunk with other addresses.
namespace twin_01f1eed0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1eed0 (0x01f1eed0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1eed0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1eed0

// auto_delete_object_thunk_01f1f200: misc_delete_object_thunk with other addresses.
namespace twin_01f1f200 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1f200 (0x01f1f200) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1f200(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1f200

// auto_delete_object_thunk_01f1f350: misc_delete_object_thunk with other addresses.
namespace twin_01f1f350 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1f350 (0x01f1f350) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1f350(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1f350

// auto_delete_object_thunk_01f1f6e0: misc_delete_object_thunk with other addresses.
namespace twin_01f1f6e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1f6e0 (0x01f1f6e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1f6e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1f6e0

// auto_delete_object_thunk_01f1fbd0: misc_delete_object_thunk with other addresses.
namespace twin_01f1fbd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f1fbd0 (0x01f1fbd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f1fbd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f1fbd0

// auto_delete_object_thunk_01f24400: misc_delete_object_thunk with other addresses.
namespace twin_01f24400 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f24400 (0x01f24400) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f24400(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f24400

// auto_delete_object_thunk_01f24680: misc_delete_object_thunk with other addresses.
namespace twin_01f24680 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f24680 (0x01f24680) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f24680(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f24680

// auto_delete_object_thunk_01f24790: misc_delete_object_thunk with other addresses.
namespace twin_01f24790 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f24790 (0x01f24790) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f24790(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f24790

// auto_delete_object_thunk_01f24b70: misc_delete_object_thunk with other addresses.
namespace twin_01f24b70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f24b70 (0x01f24b70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f24b70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f24b70

// auto_delete_object_thunk_01f24c90: misc_delete_object_thunk with other addresses.
namespace twin_01f24c90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f24c90 (0x01f24c90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f24c90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f24c90

// auto_delete_object_thunk_01f24eb0: misc_delete_object_thunk with other addresses.
namespace twin_01f24eb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f24eb0 (0x01f24eb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f24eb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f24eb0

// auto_delete_object_thunk_01f24fb0: misc_delete_object_thunk with other addresses.
namespace twin_01f24fb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f24fb0 (0x01f24fb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f24fb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f24fb0

// auto_delete_object_thunk_01f25580: misc_delete_object_thunk with other addresses.
namespace twin_01f25580 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f25580 (0x01f25580) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f25580(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f25580

// auto_delete_object_thunk_01f259d0: misc_delete_object_thunk with other addresses.
namespace twin_01f259d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f259d0 (0x01f259d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f259d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f259d0

// auto_delete_object_thunk_01f25ad0: misc_delete_object_thunk with other addresses.
namespace twin_01f25ad0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f25ad0 (0x01f25ad0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f25ad0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f25ad0

// auto_delete_object_thunk_01f25d30: misc_delete_object_thunk with other addresses.
namespace twin_01f25d30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f25d30 (0x01f25d30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f25d30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f25d30

// auto_delete_object_thunk_01f25e30: misc_delete_object_thunk with other addresses.
namespace twin_01f25e30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f25e30 (0x01f25e30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f25e30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f25e30

// auto_delete_object_thunk_01f26310: misc_delete_object_thunk with other addresses.
namespace twin_01f26310 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f26310 (0x01f26310) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f26310(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f26310

// auto_delete_object_thunk_01f26760: misc_delete_object_thunk with other addresses.
namespace twin_01f26760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f26760 (0x01f26760) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f26760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f26760

// auto_delete_object_thunk_01f26860: misc_delete_object_thunk with other addresses.
namespace twin_01f26860 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f26860 (0x01f26860) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f26860(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f26860

// auto_delete_object_thunk_01f27240: misc_delete_object_thunk with other addresses.
namespace twin_01f27240 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f27240 (0x01f27240) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f27240(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f27240

// auto_delete_object_thunk_01f27690: misc_delete_object_thunk with other addresses.
namespace twin_01f27690 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f27690 (0x01f27690) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f27690(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f27690

// auto_delete_object_thunk_01f27e80: misc_delete_object_thunk with other addresses.
namespace twin_01f27e80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f27e80 (0x01f27e80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f27e80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f27e80

// auto_delete_object_thunk_01f28760: misc_delete_object_thunk with other addresses.
namespace twin_01f28760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f28760 (0x01f28760) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f28760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f28760

// auto_delete_object_thunk_01f28930: misc_delete_object_thunk with other addresses.
namespace twin_01f28930 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f28930 (0x01f28930) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f28930(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f28930

// auto_delete_object_thunk_01f28a30: misc_delete_object_thunk with other addresses.
namespace twin_01f28a30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f28a30 (0x01f28a30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f28a30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f28a30

// auto_delete_object_thunk_01f2f420: misc_delete_object_thunk with other addresses.
namespace twin_01f2f420 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f2f420 (0x01f2f420) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f2f420(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f2f420

// auto_delete_object_thunk_01f2f520: misc_delete_object_thunk with other addresses.
namespace twin_01f2f520 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f2f520 (0x01f2f520) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f2f520(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f2f520

// auto_delete_object_thunk_01f2f760: misc_delete_object_thunk with other addresses.
namespace twin_01f2f760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f2f760 (0x01f2f760) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f2f760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f2f760

// auto_delete_object_thunk_01f2fb10: misc_delete_object_thunk with other addresses.
namespace twin_01f2fb10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f2fb10 (0x01f2fb10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f2fb10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f2fb10

// auto_delete_object_thunk_01f2fc20: misc_delete_object_thunk with other addresses.
namespace twin_01f2fc20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f2fc20 (0x01f2fc20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f2fc20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f2fc20

// auto_delete_object_thunk_01f2ff50: misc_delete_object_thunk with other addresses.
namespace twin_01f2ff50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f2ff50 (0x01f2ff50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f2ff50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f2ff50

// auto_delete_object_thunk_01f30060: misc_delete_object_thunk with other addresses.
namespace twin_01f30060 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f30060 (0x01f30060) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f30060(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f30060

// auto_delete_object_thunk_01f305c0: misc_delete_object_thunk with other addresses.
namespace twin_01f305c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f305c0 (0x01f305c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f305c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f305c0

// auto_delete_object_thunk_01f306d0: misc_delete_object_thunk with other addresses.
namespace twin_01f306d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f306d0 (0x01f306d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f306d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f306d0

// auto_delete_object_thunk_01f307d0: misc_delete_object_thunk with other addresses.
namespace twin_01f307d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f307d0 (0x01f307d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f307d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f307d0

// auto_delete_object_thunk_01f30940: misc_delete_object_thunk with other addresses.
namespace twin_01f30940 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f30940 (0x01f30940) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f30940(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f30940

// auto_delete_object_thunk_01f30a40: misc_delete_object_thunk with other addresses.
namespace twin_01f30a40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f30a40 (0x01f30a40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f30a40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f30a40

// auto_delete_object_thunk_01f33230: misc_delete_object_thunk with other addresses.
namespace twin_01f33230 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f33230 (0x01f33230) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f33230(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f33230

// auto_delete_object_thunk_01f33350: misc_delete_object_thunk with other addresses.
namespace twin_01f33350 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f33350 (0x01f33350) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f33350(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f33350

// auto_delete_object_thunk_01f33460: misc_delete_object_thunk with other addresses.
namespace twin_01f33460 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f33460 (0x01f33460) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f33460(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f33460

// auto_delete_object_thunk_01f33580: misc_delete_object_thunk with other addresses.
namespace twin_01f33580 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f33580 (0x01f33580) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f33580(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f33580

// auto_delete_object_thunk_01f336a0: misc_delete_object_thunk with other addresses.
namespace twin_01f336a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f336a0 (0x01f336a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f336a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f336a0

// auto_delete_object_thunk_01f337c0: misc_delete_object_thunk with other addresses.
namespace twin_01f337c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f337c0 (0x01f337c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f337c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f337c0

// auto_delete_object_thunk_01f338e0: misc_delete_object_thunk with other addresses.
namespace twin_01f338e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f338e0 (0x01f338e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f338e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f338e0

// auto_delete_object_thunk_01f33f50: misc_delete_object_thunk with other addresses.
namespace twin_01f33f50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f33f50 (0x01f33f50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f33f50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f33f50

// auto_delete_object_thunk_01f34280: misc_delete_object_thunk with other addresses.
namespace twin_01f34280 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f34280 (0x01f34280) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f34280(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f34280

// auto_delete_object_thunk_01f343d0: misc_delete_object_thunk with other addresses.
namespace twin_01f343d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f343d0 (0x01f343d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f343d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f343d0

// auto_delete_object_thunk_01f34760: misc_delete_object_thunk with other addresses.
namespace twin_01f34760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f34760 (0x01f34760) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f34760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f34760

// auto_delete_object_thunk_01f34c50: misc_delete_object_thunk with other addresses.
namespace twin_01f34c50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f34c50 (0x01f34c50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f34c50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f34c50

// auto_delete_object_thunk_01f38180: misc_delete_object_thunk with other addresses.
namespace twin_01f38180 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f38180 (0x01f38180) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f38180(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f38180

// auto_delete_object_thunk_01f382a0: misc_delete_object_thunk with other addresses.
namespace twin_01f382a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f382a0 (0x01f382a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f382a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f382a0

// auto_delete_object_thunk_01f383c0: misc_delete_object_thunk with other addresses.
namespace twin_01f383c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f383c0 (0x01f383c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f383c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f383c0

// auto_delete_object_thunk_01f384d0: misc_delete_object_thunk with other addresses.
namespace twin_01f384d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f384d0 (0x01f384d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f384d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f384d0

// auto_delete_object_thunk_01f3c5c0: misc_delete_object_thunk with other addresses.
namespace twin_01f3c5c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3c5c0 (0x01f3c5c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3c5c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3c5c0

// auto_delete_object_thunk_01f3c6d0: misc_delete_object_thunk with other addresses.
namespace twin_01f3c6d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3c6d0 (0x01f3c6d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3c6d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3c6d0

// auto_delete_object_thunk_01f3c820: misc_delete_object_thunk with other addresses.
namespace twin_01f3c820 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3c820 (0x01f3c820) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3c820(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3c820

// auto_delete_object_thunk_01f3c9a0: misc_delete_object_thunk with other addresses.
namespace twin_01f3c9a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3c9a0 (0x01f3c9a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3c9a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3c9a0

// auto_delete_object_thunk_01f3cab0: misc_delete_object_thunk with other addresses.
namespace twin_01f3cab0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3cab0 (0x01f3cab0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3cab0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3cab0

// auto_delete_object_thunk_01f3cbc0: misc_delete_object_thunk with other addresses.
namespace twin_01f3cbc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3cbc0 (0x01f3cbc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3cbc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3cbc0

// auto_delete_object_thunk_01f3cde0: misc_delete_object_thunk with other addresses.
namespace twin_01f3cde0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3cde0 (0x01f3cde0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3cde0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3cde0

// auto_delete_object_thunk_01f3cfa0: misc_delete_object_thunk with other addresses.
namespace twin_01f3cfa0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3cfa0 (0x01f3cfa0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3cfa0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3cfa0

// auto_delete_object_thunk_01f3d0a0: misc_delete_object_thunk with other addresses.
namespace twin_01f3d0a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3d0a0 (0x01f3d0a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3d0a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3d0a0

// auto_delete_object_thunk_01f3d1d0: misc_delete_object_thunk with other addresses.
namespace twin_01f3d1d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3d1d0 (0x01f3d1d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3d1d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3d1d0

// auto_delete_object_thunk_01f3d850: misc_delete_object_thunk with other addresses.
namespace twin_01f3d850 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3d850 (0x01f3d850) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3d850(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3d850

// auto_delete_object_thunk_01f3d950: misc_delete_object_thunk with other addresses.
namespace twin_01f3d950 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3d950 (0x01f3d950) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3d950(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3d950

// auto_delete_object_thunk_01f3da50: misc_delete_object_thunk with other addresses.
namespace twin_01f3da50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3da50 (0x01f3da50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3da50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3da50

// auto_delete_object_thunk_01f3dc70: misc_delete_object_thunk with other addresses.
namespace twin_01f3dc70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3dc70 (0x01f3dc70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3dc70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3dc70

// auto_delete_object_thunk_01f3dd80: misc_delete_object_thunk with other addresses.
namespace twin_01f3dd80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3dd80 (0x01f3dd80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3dd80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3dd80

// auto_delete_object_thunk_01f3de90: misc_delete_object_thunk with other addresses.
namespace twin_01f3de90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3de90 (0x01f3de90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3de90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3de90

// auto_delete_object_thunk_01f3dfb0: misc_delete_object_thunk with other addresses.
namespace twin_01f3dfb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3dfb0 (0x01f3dfb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3dfb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3dfb0

// auto_delete_object_thunk_01f3e270: misc_delete_object_thunk with other addresses.
namespace twin_01f3e270 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3e270 (0x01f3e270) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3e270(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3e270

// auto_delete_object_thunk_01f3e400: misc_delete_object_thunk with other addresses.
namespace twin_01f3e400 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3e400 (0x01f3e400) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3e400(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3e400

// auto_delete_object_thunk_01f3e540: misc_delete_object_thunk with other addresses.
namespace twin_01f3e540 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3e540 (0x01f3e540) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3e540(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3e540

// auto_delete_object_thunk_01f3e740: misc_delete_object_thunk with other addresses.
namespace twin_01f3e740 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3e740 (0x01f3e740) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3e740(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3e740

// auto_delete_object_thunk_01f3e880: misc_delete_object_thunk with other addresses.
namespace twin_01f3e880 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3e880 (0x01f3e880) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3e880(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3e880

// auto_delete_object_thunk_01f3e990: misc_delete_object_thunk with other addresses.
namespace twin_01f3e990 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3e990 (0x01f3e990) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3e990(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3e990

// auto_delete_object_thunk_01f3eab0: misc_delete_object_thunk with other addresses.
namespace twin_01f3eab0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3eab0 (0x01f3eab0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3eab0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3eab0

// auto_delete_object_thunk_01f3f100: misc_delete_object_thunk with other addresses.
namespace twin_01f3f100 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3f100 (0x01f3f100) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3f100(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3f100

// auto_delete_object_thunk_01f3f230: misc_delete_object_thunk with other addresses.
namespace twin_01f3f230 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3f230 (0x01f3f230) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3f230(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3f230

// auto_delete_object_thunk_01f3f340: misc_delete_object_thunk with other addresses.
namespace twin_01f3f340 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3f340 (0x01f3f340) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3f340(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3f340

// auto_delete_object_thunk_01f3f440: misc_delete_object_thunk with other addresses.
namespace twin_01f3f440 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3f440 (0x01f3f440) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3f440(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3f440

// auto_delete_object_thunk_01f3f550: misc_delete_object_thunk with other addresses.
namespace twin_01f3f550 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3f550 (0x01f3f550) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3f550(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3f550

// auto_delete_object_thunk_01f3f670: misc_delete_object_thunk with other addresses.
namespace twin_01f3f670 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3f670 (0x01f3f670) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3f670(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3f670

// auto_delete_object_thunk_01f3f930: misc_delete_object_thunk with other addresses.
namespace twin_01f3f930 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f3f930 (0x01f3f930) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f3f930(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f3f930

// auto_delete_object_thunk_01f40190: misc_delete_object_thunk with other addresses.
namespace twin_01f40190 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f40190 (0x01f40190) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f40190(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f40190

// auto_delete_object_thunk_01f439f0: misc_delete_object_thunk with other addresses.
namespace twin_01f439f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f439f0 (0x01f439f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f439f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f439f0

// auto_delete_object_thunk_01f44620: misc_delete_object_thunk with other addresses.
namespace twin_01f44620 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f44620 (0x01f44620) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f44620(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f44620

// auto_delete_object_thunk_01f44950: misc_delete_object_thunk with other addresses.
namespace twin_01f44950 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f44950 (0x01f44950) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f44950(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f44950

// auto_delete_object_thunk_01f44a70: misc_delete_object_thunk with other addresses.
namespace twin_01f44a70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f44a70 (0x01f44a70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f44a70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f44a70

// auto_delete_object_thunk_01f45190: misc_delete_object_thunk with other addresses.
namespace twin_01f45190 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f45190 (0x01f45190) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f45190(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f45190

// auto_delete_object_thunk_01f45290: misc_delete_object_thunk with other addresses.
namespace twin_01f45290 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f45290 (0x01f45290) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f45290(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f45290

// auto_delete_object_thunk_01f453a0: misc_delete_object_thunk with other addresses.
namespace twin_01f453a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f453a0 (0x01f453a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f453a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f453a0

// auto_delete_object_thunk_01f45d40: misc_delete_object_thunk with other addresses.
namespace twin_01f45d40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f45d40 (0x01f45d40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f45d40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f45d40

// auto_delete_object_thunk_01f45e70: misc_delete_object_thunk with other addresses.
namespace twin_01f45e70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f45e70 (0x01f45e70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f45e70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f45e70

// auto_delete_object_thunk_01f45f90: misc_delete_object_thunk with other addresses.
namespace twin_01f45f90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f45f90 (0x01f45f90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f45f90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f45f90

// auto_delete_object_thunk_01f46150: misc_delete_object_thunk with other addresses.
namespace twin_01f46150 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f46150 (0x01f46150) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f46150(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f46150

// auto_delete_object_thunk_01f46280: misc_delete_object_thunk with other addresses.
namespace twin_01f46280 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f46280 (0x01f46280) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f46280(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f46280

// auto_delete_object_thunk_01f46410: misc_delete_object_thunk with other addresses.
namespace twin_01f46410 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f46410 (0x01f46410) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f46410(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f46410

// auto_delete_object_thunk_01f46580: misc_delete_object_thunk with other addresses.
namespace twin_01f46580 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f46580 (0x01f46580) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f46580(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f46580

// auto_delete_object_thunk_01f466b0: misc_delete_object_thunk with other addresses.
namespace twin_01f466b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f466b0 (0x01f466b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f466b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f466b0

// auto_delete_object_thunk_01f46c50: misc_delete_object_thunk with other addresses.
namespace twin_01f46c50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f46c50 (0x01f46c50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f46c50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f46c50

// auto_delete_object_thunk_01f46d50: misc_delete_object_thunk with other addresses.
namespace twin_01f46d50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f46d50 (0x01f46d50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f46d50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f46d50

// auto_delete_object_thunk_01f477c0: misc_delete_object_thunk with other addresses.
namespace twin_01f477c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f477c0 (0x01f477c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f477c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f477c0

// auto_delete_object_thunk_01f47950: misc_delete_object_thunk with other addresses.
namespace twin_01f47950 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f47950 (0x01f47950) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f47950(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f47950

// auto_delete_object_thunk_01f48130: misc_delete_object_thunk with other addresses.
namespace twin_01f48130 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f48130 (0x01f48130) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f48130(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f48130

// auto_delete_object_thunk_01f48af0: misc_delete_object_thunk with other addresses.
namespace twin_01f48af0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f48af0 (0x01f48af0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f48af0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f48af0

// auto_delete_object_thunk_01f48c80: misc_delete_object_thunk with other addresses.
namespace twin_01f48c80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01f48c80 (0x01f48c80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01f48c80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01f48c80
