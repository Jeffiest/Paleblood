// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_delete_object_thunk, in game/misc/delete_object_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_delete_object_thunk_01fa7f50: misc_delete_object_thunk with other addresses.
namespace twin_01fa7f50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fa7f50 (0x01fa7f50) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fa7f50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fa7f50

// auto_delete_object_thunk_01fa8050: misc_delete_object_thunk with other addresses.
namespace twin_01fa8050 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fa8050 (0x01fa8050) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fa8050(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fa8050

// auto_delete_object_thunk_01fa9960: misc_delete_object_thunk with other addresses.
namespace twin_01fa9960 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fa9960 (0x01fa9960) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fa9960(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fa9960

// auto_delete_object_thunk_01fa9a60: misc_delete_object_thunk with other addresses.
namespace twin_01fa9a60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fa9a60 (0x01fa9a60) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fa9a60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fa9a60

// auto_delete_object_thunk_01fa9b70: misc_delete_object_thunk with other addresses.
namespace twin_01fa9b70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fa9b70 (0x01fa9b70) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fa9b70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fa9b70

// auto_delete_object_thunk_01fa9e90: misc_delete_object_thunk with other addresses.
namespace twin_01fa9e90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fa9e90 (0x01fa9e90) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fa9e90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fa9e90

// auto_delete_object_thunk_01faa150: misc_delete_object_thunk with other addresses.
namespace twin_01faa150 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01faa150 (0x01faa150) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01faa150(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01faa150

// auto_delete_object_thunk_01faa2b0: misc_delete_object_thunk with other addresses.
namespace twin_01faa2b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01faa2b0 (0x01faa2b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01faa2b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01faa2b0

// auto_delete_object_thunk_01faa3d0: misc_delete_object_thunk with other addresses.
namespace twin_01faa3d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01faa3d0 (0x01faa3d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01faa3d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01faa3d0

// auto_delete_object_thunk_01faa4f0: misc_delete_object_thunk with other addresses.
namespace twin_01faa4f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01faa4f0 (0x01faa4f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01faa4f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01faa4f0

// auto_delete_object_thunk_01faa730: misc_delete_object_thunk with other addresses.
namespace twin_01faa730 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01faa730 (0x01faa730) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01faa730(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01faa730

// auto_delete_object_thunk_01faa970: misc_delete_object_thunk with other addresses.
namespace twin_01faa970 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01faa970 (0x01faa970) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01faa970(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01faa970

// auto_delete_object_thunk_01faac80: misc_delete_object_thunk with other addresses.
namespace twin_01faac80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01faac80 (0x01faac80) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01faac80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01faac80

// auto_delete_object_thunk_01fac9c0: misc_delete_object_thunk with other addresses.
namespace twin_01fac9c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fac9c0 (0x01fac9c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fac9c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fac9c0

// auto_delete_object_thunk_01facc40: misc_delete_object_thunk with other addresses.
namespace twin_01facc40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01facc40 (0x01facc40) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01facc40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01facc40

// auto_delete_object_thunk_01fad370: misc_delete_object_thunk with other addresses.
namespace twin_01fad370 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fad370 (0x01fad370) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fad370(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fad370

// auto_delete_object_thunk_01fad7e0: misc_delete_object_thunk with other addresses.
namespace twin_01fad7e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fad7e0 (0x01fad7e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fad7e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fad7e0

// auto_delete_object_thunk_01fad8e0: misc_delete_object_thunk with other addresses.
namespace twin_01fad8e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fad8e0 (0x01fad8e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fad8e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fad8e0

// auto_delete_object_thunk_01fada30: misc_delete_object_thunk with other addresses.
namespace twin_01fada30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fada30 (0x01fada30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fada30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fada30

// auto_delete_object_thunk_01fadcb0: misc_delete_object_thunk with other addresses.
namespace twin_01fadcb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fadcb0 (0x01fadcb0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fadcb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fadcb0

// auto_delete_object_thunk_01faddc0: misc_delete_object_thunk with other addresses.
namespace twin_01faddc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01faddc0 (0x01faddc0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01faddc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01faddc0

// auto_delete_object_thunk_01fae0c0: misc_delete_object_thunk with other addresses.
namespace twin_01fae0c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fae0c0 (0x01fae0c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fae0c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fae0c0

// auto_delete_object_thunk_01fae230: misc_delete_object_thunk with other addresses.
namespace twin_01fae230 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fae230 (0x01fae230) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fae230(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fae230

// auto_delete_object_thunk_01faea30: misc_delete_object_thunk with other addresses.
namespace twin_01faea30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01faea30 (0x01faea30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01faea30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01faea30

// auto_delete_object_thunk_01fb3550: misc_delete_object_thunk with other addresses.
namespace twin_01fb3550 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fb3550 (0x01fb3550) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fb3550(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fb3550

// auto_delete_object_thunk_01fc37b0: misc_delete_object_thunk with other addresses.
namespace twin_01fc37b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc37b0 (0x01fc37b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc37b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc37b0

// auto_delete_object_thunk_01fc39d0: misc_delete_object_thunk with other addresses.
namespace twin_01fc39d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc39d0 (0x01fc39d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc39d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc39d0

// auto_delete_object_thunk_01fc3d80: misc_delete_object_thunk with other addresses.
namespace twin_01fc3d80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc3d80 (0x01fc3d80) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc3d80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc3d80

// auto_delete_object_thunk_01fc4930: misc_delete_object_thunk with other addresses.
namespace twin_01fc4930 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc4930 (0x01fc4930) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc4930(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc4930

// auto_delete_object_thunk_01fc4e30: misc_delete_object_thunk with other addresses.
namespace twin_01fc4e30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc4e30 (0x01fc4e30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc4e30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc4e30

// auto_delete_object_thunk_01fc5c90: misc_delete_object_thunk with other addresses.
namespace twin_01fc5c90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc5c90 (0x01fc5c90) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc5c90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc5c90

// auto_delete_object_thunk_01fc5e70: misc_delete_object_thunk with other addresses.
namespace twin_01fc5e70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc5e70 (0x01fc5e70) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc5e70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc5e70

// auto_delete_object_thunk_01fc5f90: misc_delete_object_thunk with other addresses.
namespace twin_01fc5f90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc5f90 (0x01fc5f90) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc5f90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc5f90

// auto_delete_object_thunk_01fc6820: misc_delete_object_thunk with other addresses.
namespace twin_01fc6820 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc6820 (0x01fc6820) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc6820(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc6820

// auto_delete_object_thunk_01fc6920: misc_delete_object_thunk with other addresses.
namespace twin_01fc6920 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc6920 (0x01fc6920) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc6920(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc6920

// auto_delete_object_thunk_01fc6a30: misc_delete_object_thunk with other addresses.
namespace twin_01fc6a30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc6a30 (0x01fc6a30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc6a30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc6a30

// auto_delete_object_thunk_01fc6b40: misc_delete_object_thunk with other addresses.
namespace twin_01fc6b40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc6b40 (0x01fc6b40) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc6b40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc6b40

// auto_delete_object_thunk_01fc6c50: misc_delete_object_thunk with other addresses.
namespace twin_01fc6c50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc6c50 (0x01fc6c50) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc6c50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc6c50

// auto_delete_object_thunk_01fc6fb0: misc_delete_object_thunk with other addresses.
namespace twin_01fc6fb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc6fb0 (0x01fc6fb0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc6fb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc6fb0

// auto_delete_object_thunk_01fc70b0: misc_delete_object_thunk with other addresses.
namespace twin_01fc70b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc70b0 (0x01fc70b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc70b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc70b0

// auto_delete_object_thunk_01fc89a0: misc_delete_object_thunk with other addresses.
namespace twin_01fc89a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc89a0 (0x01fc89a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc89a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc89a0

// auto_delete_object_thunk_01fc9480: misc_delete_object_thunk with other addresses.
namespace twin_01fc9480 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc9480 (0x01fc9480) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc9480(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc9480

// auto_delete_object_thunk_01fc9600: misc_delete_object_thunk with other addresses.
namespace twin_01fc9600 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc9600 (0x01fc9600) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc9600(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc9600

// auto_delete_object_thunk_01fc97e0: misc_delete_object_thunk with other addresses.
namespace twin_01fc97e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc97e0 (0x01fc97e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc97e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc97e0

// auto_delete_object_thunk_01fc9c50: misc_delete_object_thunk with other addresses.
namespace twin_01fc9c50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fc9c50 (0x01fc9c50) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fc9c50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fc9c50

// auto_delete_object_thunk_01fca240: misc_delete_object_thunk with other addresses.
namespace twin_01fca240 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fca240 (0x01fca240) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fca240(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fca240

// auto_delete_object_thunk_01fca400: misc_delete_object_thunk with other addresses.
namespace twin_01fca400 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fca400 (0x01fca400) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fca400(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fca400

// auto_delete_object_thunk_01fca990: misc_delete_object_thunk with other addresses.
namespace twin_01fca990 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fca990 (0x01fca990) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fca990(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fca990

// auto_delete_object_thunk_01fcab00: misc_delete_object_thunk with other addresses.
namespace twin_01fcab00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcab00 (0x01fcab00) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcab00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcab00

// auto_delete_object_thunk_01fcadf0: misc_delete_object_thunk with other addresses.
namespace twin_01fcadf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcadf0 (0x01fcadf0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcadf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcadf0

// auto_delete_object_thunk_01fcaf60: misc_delete_object_thunk with other addresses.
namespace twin_01fcaf60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcaf60 (0x01fcaf60) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcaf60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcaf60

// auto_delete_object_thunk_01fcb100: misc_delete_object_thunk with other addresses.
namespace twin_01fcb100 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcb100 (0x01fcb100) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcb100(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcb100

// auto_delete_object_thunk_01fcb210: misc_delete_object_thunk with other addresses.
namespace twin_01fcb210 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcb210 (0x01fcb210) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcb210(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcb210

// auto_delete_object_thunk_01fcb3b0: misc_delete_object_thunk with other addresses.
namespace twin_01fcb3b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcb3b0 (0x01fcb3b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcb3b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcb3b0

// auto_delete_object_thunk_01fcb4c0: misc_delete_object_thunk with other addresses.
namespace twin_01fcb4c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcb4c0 (0x01fcb4c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcb4c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcb4c0

// auto_delete_object_thunk_01fcb630: misc_delete_object_thunk with other addresses.
namespace twin_01fcb630 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcb630 (0x01fcb630) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcb630(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcb630

// auto_delete_object_thunk_01fcb7a0: misc_delete_object_thunk with other addresses.
namespace twin_01fcb7a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcb7a0 (0x01fcb7a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcb7a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcb7a0

// auto_delete_object_thunk_01fcb910: misc_delete_object_thunk with other addresses.
namespace twin_01fcb910 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcb910 (0x01fcb910) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcb910(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcb910

// auto_delete_object_thunk_01fcba80: misc_delete_object_thunk with other addresses.
namespace twin_01fcba80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcba80 (0x01fcba80) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcba80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcba80

// auto_delete_object_thunk_01fcbbf0: misc_delete_object_thunk with other addresses.
namespace twin_01fcbbf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcbbf0 (0x01fcbbf0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcbbf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcbbf0

// auto_delete_object_thunk_01fcbd00: misc_delete_object_thunk with other addresses.
namespace twin_01fcbd00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcbd00 (0x01fcbd00) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcbd00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcbd00

// auto_delete_object_thunk_01fcbe70: misc_delete_object_thunk with other addresses.
namespace twin_01fcbe70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcbe70 (0x01fcbe70) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcbe70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcbe70

// auto_delete_object_thunk_01fcbf80: misc_delete_object_thunk with other addresses.
namespace twin_01fcbf80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcbf80 (0x01fcbf80) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcbf80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcbf80

// auto_delete_object_thunk_01fcc0f0: misc_delete_object_thunk with other addresses.
namespace twin_01fcc0f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcc0f0 (0x01fcc0f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcc0f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcc0f0

// auto_delete_object_thunk_01fcc200: misc_delete_object_thunk with other addresses.
namespace twin_01fcc200 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcc200 (0x01fcc200) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcc200(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcc200

// auto_delete_object_thunk_01fcc320: misc_delete_object_thunk with other addresses.
namespace twin_01fcc320 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcc320 (0x01fcc320) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcc320(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcc320

// auto_delete_object_thunk_01fcc440: misc_delete_object_thunk with other addresses.
namespace twin_01fcc440 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcc440 (0x01fcc440) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcc440(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcc440

// auto_delete_object_thunk_01fcc600: misc_delete_object_thunk with other addresses.
namespace twin_01fcc600 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcc600 (0x01fcc600) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcc600(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcc600

// auto_delete_object_thunk_01fcc700: misc_delete_object_thunk with other addresses.
namespace twin_01fcc700 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcc700 (0x01fcc700) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcc700(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcc700

// auto_delete_object_thunk_01fcc810: misc_delete_object_thunk with other addresses.
namespace twin_01fcc810 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcc810 (0x01fcc810) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcc810(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcc810

// auto_delete_object_thunk_01fcc9e0: misc_delete_object_thunk with other addresses.
namespace twin_01fcc9e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcc9e0 (0x01fcc9e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcc9e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcc9e0

// auto_delete_object_thunk_01fccaf0: misc_delete_object_thunk with other addresses.
namespace twin_01fccaf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fccaf0 (0x01fccaf0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fccaf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fccaf0

// auto_delete_object_thunk_01fccf80: misc_delete_object_thunk with other addresses.
namespace twin_01fccf80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fccf80 (0x01fccf80) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fccf80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fccf80

// auto_delete_object_thunk_01fcd090: misc_delete_object_thunk with other addresses.
namespace twin_01fcd090 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcd090 (0x01fcd090) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcd090(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcd090

// auto_delete_object_thunk_01fcd2e0: misc_delete_object_thunk with other addresses.
namespace twin_01fcd2e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcd2e0 (0x01fcd2e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcd2e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcd2e0

// auto_delete_object_thunk_01fcd3f0: misc_delete_object_thunk with other addresses.
namespace twin_01fcd3f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcd3f0 (0x01fcd3f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcd3f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcd3f0

// auto_delete_object_thunk_01fcd500: misc_delete_object_thunk with other addresses.
namespace twin_01fcd500 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcd500 (0x01fcd500) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcd500(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcd500

// auto_delete_object_thunk_01fcd6b0: misc_delete_object_thunk with other addresses.
namespace twin_01fcd6b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcd6b0 (0x01fcd6b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcd6b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcd6b0

// auto_delete_object_thunk_01fcd860: misc_delete_object_thunk with other addresses.
namespace twin_01fcd860 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcd860 (0x01fcd860) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcd860(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcd860

// auto_delete_object_thunk_01fcdbe0: misc_delete_object_thunk with other addresses.
namespace twin_01fcdbe0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcdbe0 (0x01fcdbe0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcdbe0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcdbe0

// auto_delete_object_thunk_01fcdf80: misc_delete_object_thunk with other addresses.
namespace twin_01fcdf80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcdf80 (0x01fcdf80) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcdf80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcdf80

// auto_delete_object_thunk_01fce080: misc_delete_object_thunk with other addresses.
namespace twin_01fce080 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fce080 (0x01fce080) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fce080(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fce080

// auto_delete_object_thunk_01fce5a0: misc_delete_object_thunk with other addresses.
namespace twin_01fce5a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fce5a0 (0x01fce5a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fce5a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fce5a0

// auto_delete_object_thunk_01fce850: misc_delete_object_thunk with other addresses.
namespace twin_01fce850 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fce850 (0x01fce850) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fce850(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fce850

// auto_delete_object_thunk_01fced20: misc_delete_object_thunk with other addresses.
namespace twin_01fced20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fced20 (0x01fced20) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fced20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fced20

// auto_delete_object_thunk_01fcf1d0: misc_delete_object_thunk with other addresses.
namespace twin_01fcf1d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcf1d0 (0x01fcf1d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcf1d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcf1d0

// auto_delete_object_thunk_01fcf3a0: misc_delete_object_thunk with other addresses.
namespace twin_01fcf3a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcf3a0 (0x01fcf3a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcf3a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcf3a0

// auto_delete_object_thunk_01fcf4b0: misc_delete_object_thunk with other addresses.
namespace twin_01fcf4b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcf4b0 (0x01fcf4b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcf4b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcf4b0

// auto_delete_object_thunk_01fcf660: misc_delete_object_thunk with other addresses.
namespace twin_01fcf660 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcf660 (0x01fcf660) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcf660(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcf660

// auto_delete_object_thunk_01fcf810: misc_delete_object_thunk with other addresses.
namespace twin_01fcf810 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcf810 (0x01fcf810) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcf810(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcf810

// auto_delete_object_thunk_01fcf990: misc_delete_object_thunk with other addresses.
namespace twin_01fcf990 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcf990 (0x01fcf990) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcf990(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcf990

// auto_delete_object_thunk_01fcfb10: misc_delete_object_thunk with other addresses.
namespace twin_01fcfb10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcfb10 (0x01fcfb10) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcfb10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcfb10

// auto_delete_object_thunk_01fcfc90: misc_delete_object_thunk with other addresses.
namespace twin_01fcfc90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcfc90 (0x01fcfc90) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcfc90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcfc90

// auto_delete_object_thunk_01fcfe40: misc_delete_object_thunk with other addresses.
namespace twin_01fcfe40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fcfe40 (0x01fcfe40) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fcfe40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fcfe40

// auto_delete_object_thunk_01fd0870: misc_delete_object_thunk with other addresses.
namespace twin_01fd0870 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd0870 (0x01fd0870) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd0870(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd0870

// auto_delete_object_thunk_01fd09f0: misc_delete_object_thunk with other addresses.
namespace twin_01fd09f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd09f0 (0x01fd09f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd09f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd09f0

// auto_delete_object_thunk_01fd0b30: misc_delete_object_thunk with other addresses.
namespace twin_01fd0b30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd0b30 (0x01fd0b30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd0b30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd0b30

// auto_delete_object_thunk_01fd11a0: misc_delete_object_thunk with other addresses.
namespace twin_01fd11a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd11a0 (0x01fd11a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd11a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd11a0

// auto_delete_object_thunk_01fd12a0: misc_delete_object_thunk with other addresses.
namespace twin_01fd12a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd12a0 (0x01fd12a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd12a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd12a0

// auto_delete_object_thunk_01fd1410: misc_delete_object_thunk with other addresses.
namespace twin_01fd1410 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd1410 (0x01fd1410) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd1410(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd1410

// auto_delete_object_thunk_01fd15f0: misc_delete_object_thunk with other addresses.
namespace twin_01fd15f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd15f0 (0x01fd15f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd15f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd15f0

// auto_delete_object_thunk_01fd16f0: misc_delete_object_thunk with other addresses.
namespace twin_01fd16f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd16f0 (0x01fd16f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd16f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd16f0

// auto_delete_object_thunk_01fd1bb0: misc_delete_object_thunk with other addresses.
namespace twin_01fd1bb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd1bb0 (0x01fd1bb0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd1bb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd1bb0

// auto_delete_object_thunk_01fd1d20: misc_delete_object_thunk with other addresses.
namespace twin_01fd1d20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd1d20 (0x01fd1d20) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd1d20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd1d20

// auto_delete_object_thunk_01fd1fa0: misc_delete_object_thunk with other addresses.
namespace twin_01fd1fa0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd1fa0 (0x01fd1fa0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd1fa0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd1fa0

// auto_delete_object_thunk_01fd2120: misc_delete_object_thunk with other addresses.
namespace twin_01fd2120 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd2120 (0x01fd2120) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd2120(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd2120

// auto_delete_object_thunk_01fd2600: misc_delete_object_thunk with other addresses.
namespace twin_01fd2600 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd2600 (0x01fd2600) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd2600(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd2600

// auto_delete_object_thunk_01fd2f30: misc_delete_object_thunk with other addresses.
namespace twin_01fd2f30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd2f30 (0x01fd2f30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd2f30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd2f30

// auto_delete_object_thunk_01fd35f0: misc_delete_object_thunk with other addresses.
namespace twin_01fd35f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd35f0 (0x01fd35f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd35f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd35f0

// auto_delete_object_thunk_01fd3760: misc_delete_object_thunk with other addresses.
namespace twin_01fd3760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd3760 (0x01fd3760) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd3760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd3760

// auto_delete_object_thunk_01fd39e0: misc_delete_object_thunk with other addresses.
namespace twin_01fd39e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd39e0 (0x01fd39e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd39e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd39e0

// auto_delete_object_thunk_01fd3af0: misc_delete_object_thunk with other addresses.
namespace twin_01fd3af0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd3af0 (0x01fd3af0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd3af0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd3af0

// auto_delete_object_thunk_01fd4280: misc_delete_object_thunk with other addresses.
namespace twin_01fd4280 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd4280 (0x01fd4280) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd4280(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd4280

// auto_delete_object_thunk_01fd4cf0: misc_delete_object_thunk with other addresses.
namespace twin_01fd4cf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd4cf0 (0x01fd4cf0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd4cf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd4cf0

// auto_delete_object_thunk_01fd53c0: misc_delete_object_thunk with other addresses.
namespace twin_01fd53c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd53c0 (0x01fd53c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd53c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd53c0

// auto_delete_object_thunk_01fd54d0: misc_delete_object_thunk with other addresses.
namespace twin_01fd54d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd54d0 (0x01fd54d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd54d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd54d0

// auto_delete_object_thunk_01fd59e0: misc_delete_object_thunk with other addresses.
namespace twin_01fd59e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd59e0 (0x01fd59e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd59e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd59e0

// auto_delete_object_thunk_01fd6120: misc_delete_object_thunk with other addresses.
namespace twin_01fd6120 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd6120 (0x01fd6120) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd6120(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd6120

// auto_delete_object_thunk_01fd7bc0: misc_delete_object_thunk with other addresses.
namespace twin_01fd7bc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd7bc0 (0x01fd7bc0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd7bc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd7bc0

// auto_delete_object_thunk_01fd7cb0: misc_delete_object_thunk with other addresses.
namespace twin_01fd7cb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd7cb0 (0x01fd7cb0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd7cb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd7cb0

// auto_delete_object_thunk_01fd7e30: misc_delete_object_thunk with other addresses.
namespace twin_01fd7e30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd7e30 (0x01fd7e30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd7e30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd7e30

// auto_delete_object_thunk_01fd80b0: misc_delete_object_thunk with other addresses.
namespace twin_01fd80b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd80b0 (0x01fd80b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd80b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd80b0

// auto_delete_object_thunk_01fd8290: misc_delete_object_thunk with other addresses.
namespace twin_01fd8290 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd8290 (0x01fd8290) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd8290(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd8290

// auto_delete_object_thunk_01fd84b0: misc_delete_object_thunk with other addresses.
namespace twin_01fd84b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd84b0 (0x01fd84b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd84b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd84b0

// auto_delete_object_thunk_01fd8a10: misc_delete_object_thunk with other addresses.
namespace twin_01fd8a10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd8a10 (0x01fd8a10) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd8a10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd8a10

// auto_delete_object_thunk_01fd8f70: misc_delete_object_thunk with other addresses.
namespace twin_01fd8f70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd8f70 (0x01fd8f70) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd8f70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd8f70

// auto_delete_object_thunk_01fd9150: misc_delete_object_thunk with other addresses.
namespace twin_01fd9150 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd9150 (0x01fd9150) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd9150(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd9150

// auto_delete_object_thunk_01fd92c0: misc_delete_object_thunk with other addresses.
namespace twin_01fd92c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd92c0 (0x01fd92c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd92c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd92c0

// auto_delete_object_thunk_01fd9440: misc_delete_object_thunk with other addresses.
namespace twin_01fd9440 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd9440 (0x01fd9440) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd9440(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd9440

// auto_delete_object_thunk_01fd98a0: misc_delete_object_thunk with other addresses.
namespace twin_01fd98a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd98a0 (0x01fd98a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd98a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd98a0

// auto_delete_object_thunk_01fd9d30: misc_delete_object_thunk with other addresses.
namespace twin_01fd9d30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd9d30 (0x01fd9d30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd9d30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd9d30

// auto_delete_object_thunk_01fd9ef0: misc_delete_object_thunk with other addresses.
namespace twin_01fd9ef0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fd9ef0 (0x01fd9ef0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fd9ef0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fd9ef0

// auto_delete_object_thunk_01fda0b0: misc_delete_object_thunk with other addresses.
namespace twin_01fda0b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fda0b0 (0x01fda0b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fda0b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fda0b0

// auto_delete_object_thunk_01fda270: misc_delete_object_thunk with other addresses.
namespace twin_01fda270 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fda270 (0x01fda270) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fda270(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fda270

// auto_delete_object_thunk_01fda380: misc_delete_object_thunk with other addresses.
namespace twin_01fda380 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fda380 (0x01fda380) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fda380(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fda380

// auto_delete_object_thunk_01fda490: misc_delete_object_thunk with other addresses.
namespace twin_01fda490 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fda490 (0x01fda490) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fda490(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fda490

// auto_delete_object_thunk_01fda640: misc_delete_object_thunk with other addresses.
namespace twin_01fda640 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fda640 (0x01fda640) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fda640(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fda640

// auto_delete_object_thunk_01fda9f0: misc_delete_object_thunk with other addresses.
namespace twin_01fda9f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fda9f0 (0x01fda9f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fda9f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fda9f0

// auto_delete_object_thunk_01fdae30: misc_delete_object_thunk with other addresses.
namespace twin_01fdae30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fdae30 (0x01fdae30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fdae30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fdae30

// auto_delete_object_thunk_01fdb000: misc_delete_object_thunk with other addresses.
namespace twin_01fdb000 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fdb000 (0x01fdb000) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fdb000(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fdb000

// auto_delete_object_thunk_01fdb1d0: misc_delete_object_thunk with other addresses.
namespace twin_01fdb1d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fdb1d0 (0x01fdb1d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fdb1d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fdb1d0

// auto_delete_object_thunk_01fdb2d0: misc_delete_object_thunk with other addresses.
namespace twin_01fdb2d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fdb2d0 (0x01fdb2d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fdb2d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fdb2d0

// auto_delete_object_thunk_01fdb3e0: misc_delete_object_thunk with other addresses.
namespace twin_01fdb3e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fdb3e0 (0x01fdb3e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fdb3e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fdb3e0

// auto_delete_object_thunk_01fdb4e0: misc_delete_object_thunk with other addresses.
namespace twin_01fdb4e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fdb4e0 (0x01fdb4e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fdb4e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fdb4e0

// auto_delete_object_thunk_01fdb5e0: misc_delete_object_thunk with other addresses.
namespace twin_01fdb5e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fdb5e0 (0x01fdb5e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fdb5e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fdb5e0

// auto_delete_object_thunk_01fe0b60: misc_delete_object_thunk with other addresses.
namespace twin_01fe0b60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe0b60 (0x01fe0b60) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe0b60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe0b60

// auto_delete_object_thunk_01fe0fb0: misc_delete_object_thunk with other addresses.
namespace twin_01fe0fb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe0fb0 (0x01fe0fb0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe0fb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe0fb0

// auto_delete_object_thunk_01fe10d0: misc_delete_object_thunk with other addresses.
namespace twin_01fe10d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe10d0 (0x01fe10d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe10d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe10d0

// auto_delete_object_thunk_01fe14d0: misc_delete_object_thunk with other addresses.
namespace twin_01fe14d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe14d0 (0x01fe14d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe14d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe14d0

// auto_delete_object_thunk_01fe1a30: misc_delete_object_thunk with other addresses.
namespace twin_01fe1a30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe1a30 (0x01fe1a30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe1a30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe1a30

// auto_delete_object_thunk_01fe1b40: misc_delete_object_thunk with other addresses.
namespace twin_01fe1b40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe1b40 (0x01fe1b40) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe1b40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe1b40

// auto_delete_object_thunk_01fe1c80: misc_delete_object_thunk with other addresses.
namespace twin_01fe1c80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe1c80 (0x01fe1c80) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe1c80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe1c80

// auto_delete_object_thunk_01fe1ef0: misc_delete_object_thunk with other addresses.
namespace twin_01fe1ef0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe1ef0 (0x01fe1ef0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe1ef0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe1ef0

// auto_delete_object_thunk_01fe2230: misc_delete_object_thunk with other addresses.
namespace twin_01fe2230 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe2230 (0x01fe2230) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe2230(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe2230

// auto_delete_object_thunk_01fe24a0: misc_delete_object_thunk with other addresses.
namespace twin_01fe24a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe24a0 (0x01fe24a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe24a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe24a0

// auto_delete_object_thunk_01fe27e0: misc_delete_object_thunk with other addresses.
namespace twin_01fe27e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe27e0 (0x01fe27e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe27e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe27e0

// auto_delete_object_thunk_01fe29a0: misc_delete_object_thunk with other addresses.
namespace twin_01fe29a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe29a0 (0x01fe29a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe29a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe29a0

// auto_delete_object_thunk_01fe3f90: misc_delete_object_thunk with other addresses.
namespace twin_01fe3f90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe3f90 (0x01fe3f90) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe3f90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe3f90

// auto_delete_object_thunk_01fe4090: misc_delete_object_thunk with other addresses.
namespace twin_01fe4090 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe4090 (0x01fe4090) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe4090(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe4090

// auto_delete_object_thunk_01fe4280: misc_delete_object_thunk with other addresses.
namespace twin_01fe4280 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe4280 (0x01fe4280) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe4280(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe4280

// auto_delete_object_thunk_01fe4390: misc_delete_object_thunk with other addresses.
namespace twin_01fe4390 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe4390 (0x01fe4390) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe4390(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe4390

// auto_delete_object_thunk_01fe44a0: misc_delete_object_thunk with other addresses.
namespace twin_01fe44a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe44a0 (0x01fe44a0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe44a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe44a0

// auto_delete_object_thunk_01fe45b0: misc_delete_object_thunk with other addresses.
namespace twin_01fe45b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe45b0 (0x01fe45b0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe45b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe45b0

// auto_delete_object_thunk_01fe46c0: misc_delete_object_thunk with other addresses.
namespace twin_01fe46c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe46c0 (0x01fe46c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe46c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe46c0

// auto_delete_object_thunk_01fe47d0: misc_delete_object_thunk with other addresses.
namespace twin_01fe47d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe47d0 (0x01fe47d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe47d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe47d0

// auto_delete_object_thunk_01fe60d0: misc_delete_object_thunk with other addresses.
namespace twin_01fe60d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe60d0 (0x01fe60d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe60d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe60d0

// auto_delete_object_thunk_01fe61e0: misc_delete_object_thunk with other addresses.
namespace twin_01fe61e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe61e0 (0x01fe61e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe61e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe61e0

// auto_delete_object_thunk_01fe62f0: misc_delete_object_thunk with other addresses.
namespace twin_01fe62f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe62f0 (0x01fe62f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe62f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe62f0

// auto_delete_object_thunk_01fe6530: misc_delete_object_thunk with other addresses.
namespace twin_01fe6530 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe6530 (0x01fe6530) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe6530(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe6530

// auto_delete_object_thunk_01fe6e30: misc_delete_object_thunk with other addresses.
namespace twin_01fe6e30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe6e30 (0x01fe6e30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe6e30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe6e30

// auto_delete_object_thunk_01fe6f30: misc_delete_object_thunk with other addresses.
namespace twin_01fe6f30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe6f30 (0x01fe6f30) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe6f30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe6f30

// auto_delete_object_thunk_01fe7500: misc_delete_object_thunk with other addresses.
namespace twin_01fe7500 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe7500 (0x01fe7500) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe7500(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe7500

// auto_delete_object_thunk_01fe76c0: misc_delete_object_thunk with other addresses.
namespace twin_01fe76c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe76c0 (0x01fe76c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe76c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe76c0

// auto_delete_object_thunk_01fe77c0: misc_delete_object_thunk with other addresses.
namespace twin_01fe77c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe77c0 (0x01fe77c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe77c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe77c0

// auto_delete_object_thunk_01fe78c0: misc_delete_object_thunk with other addresses.
namespace twin_01fe78c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe78c0 (0x01fe78c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe78c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe78c0

// auto_delete_object_thunk_01fe7a00: misc_delete_object_thunk with other addresses.
namespace twin_01fe7a00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fe7a00 (0x01fe7a00) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fe7a00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fe7a00

// auto_delete_object_thunk_01febec0: misc_delete_object_thunk with other addresses.
namespace twin_01febec0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01febec0 (0x01febec0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01febec0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01febec0

// auto_delete_object_thunk_01febfc0: misc_delete_object_thunk with other addresses.
namespace twin_01febfc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01febfc0 (0x01febfc0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01febfc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01febfc0

// auto_delete_object_thunk_01fec0c0: misc_delete_object_thunk with other addresses.
namespace twin_01fec0c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fec0c0 (0x01fec0c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fec0c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fec0c0

// auto_delete_object_thunk_01fec1c0: misc_delete_object_thunk with other addresses.
namespace twin_01fec1c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fec1c0 (0x01fec1c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fec1c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fec1c0

// auto_delete_object_thunk_01fec930: misc_delete_object_thunk with other addresses.
namespace twin_01fec930 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fec930 (0x01fec930) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fec930(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fec930

// auto_delete_object_thunk_01feca50: misc_delete_object_thunk with other addresses.
namespace twin_01feca50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01feca50 (0x01feca50) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01feca50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01feca50

// auto_delete_object_thunk_01fecb90: misc_delete_object_thunk with other addresses.
namespace twin_01fecb90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fecb90 (0x01fecb90) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fecb90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fecb90

// auto_delete_object_thunk_01feccd0: misc_delete_object_thunk with other addresses.
namespace twin_01feccd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01feccd0 (0x01feccd0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01feccd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01feccd0

// auto_delete_object_thunk_01fece10: misc_delete_object_thunk with other addresses.
namespace twin_01fece10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fece10 (0x01fece10) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fece10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fece10

// auto_delete_object_thunk_01fecf20: misc_delete_object_thunk with other addresses.
namespace twin_01fecf20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01fecf20 (0x01fecf20) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01fecf20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01fecf20

// auto_delete_object_thunk_01ff0270: misc_delete_object_thunk with other addresses.
namespace twin_01ff0270 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ff0270 (0x01ff0270) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01ff0270(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ff0270

// auto_delete_object_thunk_01ff02d0: misc_delete_object_thunk with other addresses.
namespace twin_01ff02d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01ff02d0 (0x01ff02d0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_01ff02d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01ff02d0

// auto_delete_object_thunk_02001a40: misc_delete_object_thunk with other addresses.
namespace twin_02001a40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02001a40 (0x02001a40) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_02001a40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02001a40

// auto_delete_object_thunk_02001fa0: misc_delete_object_thunk with other addresses.
namespace twin_02001fa0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02001fa0 (0x02001fa0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_02001fa0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02001fa0

// auto_delete_object_thunk_020021f0: misc_delete_object_thunk with other addresses.
namespace twin_020021f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020021f0 (0x020021f0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_020021f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020021f0

// auto_delete_object_thunk_020027c0: misc_delete_object_thunk with other addresses.
namespace twin_020027c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020027c0 (0x020027c0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_020027c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020027c0

// auto_delete_object_thunk_0200cfb0: misc_delete_object_thunk with other addresses.
namespace twin_0200cfb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200cfb0 (0x0200cfb0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_0200cfb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200cfb0

// auto_delete_object_thunk_0200d120: misc_delete_object_thunk with other addresses.
namespace twin_0200d120 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200d120 (0x0200d120) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_0200d120(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200d120

// auto_delete_object_thunk_0200d310: misc_delete_object_thunk with other addresses.
namespace twin_0200d310 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200d310 (0x0200d310) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_0200d310(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200d310

// auto_delete_object_thunk_0200d500: misc_delete_object_thunk with other addresses.
namespace twin_0200d500 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200d500 (0x0200d500) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_0200d500(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200d500

// auto_delete_object_thunk_0200d7e0: misc_delete_object_thunk with other addresses.
namespace twin_0200d7e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200d7e0 (0x0200d7e0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_0200d7e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200d7e0

// auto_delete_object_thunk_0200d980: misc_delete_object_thunk with other addresses.
namespace twin_0200d980 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200d980 (0x0200d980) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_0200d980(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200d980

// auto_delete_object_thunk_0200dab0: misc_delete_object_thunk with other addresses.
namespace twin_0200dab0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200dab0 (0x0200dab0) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_0200dab0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200dab0

// auto_delete_object_thunk_0200e060: misc_delete_object_thunk with other addresses.
namespace twin_0200e060 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200e060 (0x0200e060) is a single jump to the import stub of operator delete(void *)
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
extern "C" void bb_auto_delete_object_thunk_0200e060(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200e060
