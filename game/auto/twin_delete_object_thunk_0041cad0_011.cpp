// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_delete_object_thunk, in game/misc/delete_object_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_delete_object_thunk_0200e1d0: misc_delete_object_thunk with other addresses.
namespace twin_0200e1d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200e1d0 (0x0200e1d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0200e1d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200e1d0

// auto_delete_object_thunk_0200e360: misc_delete_object_thunk with other addresses.
namespace twin_0200e360 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200e360 (0x0200e360) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0200e360(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200e360

// auto_delete_object_thunk_0200f8d0: misc_delete_object_thunk with other addresses.
namespace twin_0200f8d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200f8d0 (0x0200f8d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0200f8d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200f8d0

// auto_delete_object_thunk_0200faf0: misc_delete_object_thunk with other addresses.
namespace twin_0200faf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200faf0 (0x0200faf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0200faf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200faf0

// auto_delete_object_thunk_0200fcc0: misc_delete_object_thunk with other addresses.
namespace twin_0200fcc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0200fcc0 (0x0200fcc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0200fcc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0200fcc0

// auto_delete_object_thunk_02010140: misc_delete_object_thunk with other addresses.
namespace twin_02010140 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02010140 (0x02010140) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02010140(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02010140

// auto_delete_object_thunk_020102a0: misc_delete_object_thunk with other addresses.
namespace twin_020102a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020102a0 (0x020102a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020102a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020102a0

// auto_delete_object_thunk_02011850: misc_delete_object_thunk with other addresses.
namespace twin_02011850 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02011850 (0x02011850) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02011850(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02011850

// auto_delete_object_thunk_02011a70: misc_delete_object_thunk with other addresses.
namespace twin_02011a70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02011a70 (0x02011a70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02011a70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02011a70

// auto_delete_object_thunk_02011c30: misc_delete_object_thunk with other addresses.
namespace twin_02011c30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02011c30 (0x02011c30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02011c30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02011c30

// auto_delete_object_thunk_020120d0: misc_delete_object_thunk with other addresses.
namespace twin_020120d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020120d0 (0x020120d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020120d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020120d0

// auto_delete_object_thunk_02012570: misc_delete_object_thunk with other addresses.
namespace twin_02012570 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02012570 (0x02012570) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02012570(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02012570

// auto_delete_object_thunk_020126e0: misc_delete_object_thunk with other addresses.
namespace twin_020126e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020126e0 (0x020126e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020126e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020126e0

// auto_delete_object_thunk_02012850: misc_delete_object_thunk with other addresses.
namespace twin_02012850 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02012850 (0x02012850) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02012850(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02012850

// auto_delete_object_thunk_020129c0: misc_delete_object_thunk with other addresses.
namespace twin_020129c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020129c0 (0x020129c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020129c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020129c0

// auto_delete_object_thunk_02012b50: misc_delete_object_thunk with other addresses.
namespace twin_02012b50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02012b50 (0x02012b50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02012b50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02012b50

// auto_delete_object_thunk_02012cc0: misc_delete_object_thunk with other addresses.
namespace twin_02012cc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02012cc0 (0x02012cc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02012cc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02012cc0

// auto_delete_object_thunk_02012e10: misc_delete_object_thunk with other addresses.
namespace twin_02012e10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02012e10 (0x02012e10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02012e10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02012e10

// auto_delete_object_thunk_02012f30: misc_delete_object_thunk with other addresses.
namespace twin_02012f30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02012f30 (0x02012f30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02012f30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02012f30

// auto_delete_object_thunk_02013030: misc_delete_object_thunk with other addresses.
namespace twin_02013030 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02013030 (0x02013030) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02013030(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02013030

// auto_delete_object_thunk_02013130: misc_delete_object_thunk with other addresses.
namespace twin_02013130 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02013130 (0x02013130) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02013130(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02013130

// auto_delete_object_thunk_020132b0: misc_delete_object_thunk with other addresses.
namespace twin_020132b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020132b0 (0x020132b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020132b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020132b0

// auto_delete_object_thunk_02013400: misc_delete_object_thunk with other addresses.
namespace twin_02013400 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02013400 (0x02013400) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02013400(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02013400

// auto_delete_object_thunk_02013a50: misc_delete_object_thunk with other addresses.
namespace twin_02013a50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02013a50 (0x02013a50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02013a50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02013a50

// auto_delete_object_thunk_02013c20: misc_delete_object_thunk with other addresses.
namespace twin_02013c20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02013c20 (0x02013c20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02013c20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02013c20

// auto_delete_object_thunk_020143c0: misc_delete_object_thunk with other addresses.
namespace twin_020143c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020143c0 (0x020143c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020143c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020143c0

// auto_delete_object_thunk_020157e0: misc_delete_object_thunk with other addresses.
namespace twin_020157e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020157e0 (0x020157e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020157e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020157e0

// auto_delete_object_thunk_02015a60: misc_delete_object_thunk with other addresses.
namespace twin_02015a60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02015a60 (0x02015a60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02015a60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02015a60

// auto_delete_object_thunk_02018e40: misc_delete_object_thunk with other addresses.
namespace twin_02018e40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02018e40 (0x02018e40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02018e40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02018e40

// auto_delete_object_thunk_02019d80: misc_delete_object_thunk with other addresses.
namespace twin_02019d80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02019d80 (0x02019d80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02019d80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02019d80

// auto_delete_object_thunk_02019db0: misc_delete_object_thunk with other addresses.
namespace twin_02019db0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02019db0 (0x02019db0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02019db0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02019db0

// auto_delete_object_thunk_02019e00: misc_delete_object_thunk with other addresses.
namespace twin_02019e00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02019e00 (0x02019e00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02019e00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02019e00

// auto_delete_object_thunk_0201c710: misc_delete_object_thunk with other addresses.
namespace twin_0201c710 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0201c710 (0x0201c710) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0201c710(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0201c710

// auto_delete_object_thunk_0201e590: misc_delete_object_thunk with other addresses.
namespace twin_0201e590 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0201e590 (0x0201e590) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0201e590(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0201e590

// auto_delete_object_thunk_0201e750: misc_delete_object_thunk with other addresses.
namespace twin_0201e750 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0201e750 (0x0201e750) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0201e750(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0201e750

// auto_delete_object_thunk_02023cc0: misc_delete_object_thunk with other addresses.
namespace twin_02023cc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02023cc0 (0x02023cc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02023cc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02023cc0

// auto_delete_object_thunk_02023de0: misc_delete_object_thunk with other addresses.
namespace twin_02023de0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02023de0 (0x02023de0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02023de0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02023de0

// auto_delete_object_thunk_02023f10: misc_delete_object_thunk with other addresses.
namespace twin_02023f10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02023f10 (0x02023f10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02023f10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02023f10

// auto_delete_object_thunk_02024030: misc_delete_object_thunk with other addresses.
namespace twin_02024030 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02024030 (0x02024030) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02024030(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02024030

// auto_delete_object_thunk_02024720: misc_delete_object_thunk with other addresses.
namespace twin_02024720 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02024720 (0x02024720) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02024720(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02024720

// auto_delete_object_thunk_02024870: misc_delete_object_thunk with other addresses.
namespace twin_02024870 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02024870 (0x02024870) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02024870(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02024870

// auto_delete_object_thunk_02025280: misc_delete_object_thunk with other addresses.
namespace twin_02025280 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02025280 (0x02025280) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02025280(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02025280

// auto_delete_object_thunk_02025380: misc_delete_object_thunk with other addresses.
namespace twin_02025380 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02025380 (0x02025380) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02025380(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02025380

// auto_delete_object_thunk_02025680: misc_delete_object_thunk with other addresses.
namespace twin_02025680 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02025680 (0x02025680) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02025680(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02025680

// auto_delete_object_thunk_020257e0: misc_delete_object_thunk with other addresses.
namespace twin_020257e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020257e0 (0x020257e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020257e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020257e0

// auto_delete_object_thunk_02025900: misc_delete_object_thunk with other addresses.
namespace twin_02025900 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02025900 (0x02025900) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02025900(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02025900

// auto_delete_object_thunk_02025d10: misc_delete_object_thunk with other addresses.
namespace twin_02025d10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02025d10 (0x02025d10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02025d10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02025d10

// auto_delete_object_thunk_02027570: misc_delete_object_thunk with other addresses.
namespace twin_02027570 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02027570 (0x02027570) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02027570(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02027570

// auto_delete_object_thunk_02027880: misc_delete_object_thunk with other addresses.
namespace twin_02027880 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02027880 (0x02027880) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02027880(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02027880

// auto_delete_object_thunk_020278b0: misc_delete_object_thunk with other addresses.
namespace twin_020278b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020278b0 (0x020278b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020278b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020278b0

// auto_delete_object_thunk_020283a0: misc_delete_object_thunk with other addresses.
namespace twin_020283a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020283a0 (0x020283a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020283a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020283a0

// auto_delete_object_thunk_020284b0: misc_delete_object_thunk with other addresses.
namespace twin_020284b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020284b0 (0x020284b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020284b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020284b0

// auto_delete_object_thunk_0202d4a0: misc_delete_object_thunk with other addresses.
namespace twin_0202d4a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202d4a0 (0x0202d4a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202d4a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202d4a0

// auto_delete_object_thunk_0202d5a0: misc_delete_object_thunk with other addresses.
namespace twin_0202d5a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202d5a0 (0x0202d5a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202d5a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202d5a0

// auto_delete_object_thunk_0202d720: misc_delete_object_thunk with other addresses.
namespace twin_0202d720 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202d720 (0x0202d720) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202d720(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202d720

// auto_delete_object_thunk_0202dcf0: misc_delete_object_thunk with other addresses.
namespace twin_0202dcf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202dcf0 (0x0202dcf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202dcf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202dcf0

// auto_delete_object_thunk_0202e0b0: misc_delete_object_thunk with other addresses.
namespace twin_0202e0b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202e0b0 (0x0202e0b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202e0b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202e0b0

// auto_delete_object_thunk_0202e990: misc_delete_object_thunk with other addresses.
namespace twin_0202e990 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202e990 (0x0202e990) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202e990(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202e990

// auto_delete_object_thunk_0202ed50: misc_delete_object_thunk with other addresses.
namespace twin_0202ed50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202ed50 (0x0202ed50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202ed50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202ed50

// auto_delete_object_thunk_0202f010: misc_delete_object_thunk with other addresses.
namespace twin_0202f010 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202f010 (0x0202f010) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202f010(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202f010

// auto_delete_object_thunk_0202fed0: misc_delete_object_thunk with other addresses.
namespace twin_0202fed0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202fed0 (0x0202fed0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202fed0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202fed0

// auto_delete_object_thunk_0202ffd0: misc_delete_object_thunk with other addresses.
namespace twin_0202ffd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0202ffd0 (0x0202ffd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0202ffd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0202ffd0

// auto_delete_object_thunk_020300d0: misc_delete_object_thunk with other addresses.
namespace twin_020300d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020300d0 (0x020300d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020300d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020300d0

// auto_delete_object_thunk_020301f0: misc_delete_object_thunk with other addresses.
namespace twin_020301f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020301f0 (0x020301f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020301f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020301f0

// auto_delete_object_thunk_02030700: misc_delete_object_thunk with other addresses.
namespace twin_02030700 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02030700 (0x02030700) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02030700(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02030700

// auto_delete_object_thunk_020308e0: misc_delete_object_thunk with other addresses.
namespace twin_020308e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020308e0 (0x020308e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020308e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020308e0

// auto_delete_object_thunk_02031090: misc_delete_object_thunk with other addresses.
namespace twin_02031090 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02031090 (0x02031090) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02031090(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02031090

// auto_delete_object_thunk_02031ac0: misc_delete_object_thunk with other addresses.
namespace twin_02031ac0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02031ac0 (0x02031ac0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02031ac0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02031ac0

// auto_delete_object_thunk_02031c10: misc_delete_object_thunk with other addresses.
namespace twin_02031c10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02031c10 (0x02031c10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02031c10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02031c10

// auto_delete_object_thunk_02031d90: misc_delete_object_thunk with other addresses.
namespace twin_02031d90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02031d90 (0x02031d90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02031d90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02031d90

// auto_delete_object_thunk_02032810: misc_delete_object_thunk with other addresses.
namespace twin_02032810 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02032810 (0x02032810) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02032810(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02032810

// auto_delete_object_thunk_02032b60: misc_delete_object_thunk with other addresses.
namespace twin_02032b60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02032b60 (0x02032b60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02032b60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02032b60

// auto_delete_object_thunk_02034bd0: misc_delete_object_thunk with other addresses.
namespace twin_02034bd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02034bd0 (0x02034bd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02034bd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02034bd0

// auto_delete_object_thunk_02034d60: misc_delete_object_thunk with other addresses.
namespace twin_02034d60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02034d60 (0x02034d60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02034d60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02034d60

// auto_delete_object_thunk_02034ea0: misc_delete_object_thunk with other addresses.
namespace twin_02034ea0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02034ea0 (0x02034ea0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02034ea0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02034ea0

// auto_delete_object_thunk_02034fb0: misc_delete_object_thunk with other addresses.
namespace twin_02034fb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02034fb0 (0x02034fb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02034fb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02034fb0

// auto_delete_object_thunk_020350b0: misc_delete_object_thunk with other addresses.
namespace twin_020350b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020350b0 (0x020350b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020350b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020350b0

// auto_delete_object_thunk_0203d9b0: misc_delete_object_thunk with other addresses.
namespace twin_0203d9b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203d9b0 (0x0203d9b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203d9b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203d9b0

// auto_delete_object_thunk_0203e360: misc_delete_object_thunk with other addresses.
namespace twin_0203e360 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203e360 (0x0203e360) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203e360(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203e360

// auto_delete_object_thunk_0203e8f0: misc_delete_object_thunk with other addresses.
namespace twin_0203e8f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203e8f0 (0x0203e8f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203e8f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203e8f0

// auto_delete_object_thunk_0203eae0: misc_delete_object_thunk with other addresses.
namespace twin_0203eae0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203eae0 (0x0203eae0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203eae0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203eae0

// auto_delete_object_thunk_0203eca0: misc_delete_object_thunk with other addresses.
namespace twin_0203eca0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203eca0 (0x0203eca0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203eca0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203eca0

// auto_delete_object_thunk_0203edc0: misc_delete_object_thunk with other addresses.
namespace twin_0203edc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203edc0 (0x0203edc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203edc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203edc0

// auto_delete_object_thunk_0203f130: misc_delete_object_thunk with other addresses.
namespace twin_0203f130 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203f130 (0x0203f130) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203f130(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203f130

// auto_delete_object_thunk_0203f270: misc_delete_object_thunk with other addresses.
namespace twin_0203f270 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203f270 (0x0203f270) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203f270(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203f270

// auto_delete_object_thunk_0203f890: misc_delete_object_thunk with other addresses.
namespace twin_0203f890 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203f890 (0x0203f890) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203f890(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203f890

// auto_delete_object_thunk_0203f9d0: misc_delete_object_thunk with other addresses.
namespace twin_0203f9d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203f9d0 (0x0203f9d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203f9d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203f9d0

// auto_delete_object_thunk_0203fb20: misc_delete_object_thunk with other addresses.
namespace twin_0203fb20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203fb20 (0x0203fb20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203fb20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203fb20

// auto_delete_object_thunk_0203fdf0: misc_delete_object_thunk with other addresses.
namespace twin_0203fdf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203fdf0 (0x0203fdf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203fdf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203fdf0

// auto_delete_object_thunk_0203ff90: misc_delete_object_thunk with other addresses.
namespace twin_0203ff90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0203ff90 (0x0203ff90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0203ff90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0203ff90

// auto_delete_object_thunk_020400a0: misc_delete_object_thunk with other addresses.
namespace twin_020400a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020400a0 (0x020400a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020400a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020400a0

// auto_delete_object_thunk_020401a0: misc_delete_object_thunk with other addresses.
namespace twin_020401a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020401a0 (0x020401a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020401a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020401a0

// auto_delete_object_thunk_020402b0: misc_delete_object_thunk with other addresses.
namespace twin_020402b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020402b0 (0x020402b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020402b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020402b0

// auto_delete_object_thunk_020404a0: misc_delete_object_thunk with other addresses.
namespace twin_020404a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020404a0 (0x020404a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020404a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020404a0

// auto_delete_object_thunk_020405d0: misc_delete_object_thunk with other addresses.
namespace twin_020405d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020405d0 (0x020405d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020405d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020405d0

// auto_delete_object_thunk_02040710: misc_delete_object_thunk with other addresses.
namespace twin_02040710 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02040710 (0x02040710) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02040710(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02040710

// auto_delete_object_thunk_020409d0: misc_delete_object_thunk with other addresses.
namespace twin_020409d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020409d0 (0x020409d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020409d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020409d0

// auto_delete_object_thunk_02040b10: misc_delete_object_thunk with other addresses.
namespace twin_02040b10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02040b10 (0x02040b10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02040b10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02040b10

// auto_delete_object_thunk_02040c50: misc_delete_object_thunk with other addresses.
namespace twin_02040c50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02040c50 (0x02040c50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02040c50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02040c50

// auto_delete_object_thunk_02040d70: misc_delete_object_thunk with other addresses.
namespace twin_02040d70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02040d70 (0x02040d70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02040d70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02040d70

// auto_delete_object_thunk_02040eb0: misc_delete_object_thunk with other addresses.
namespace twin_02040eb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02040eb0 (0x02040eb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02040eb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02040eb0

// auto_delete_object_thunk_020411b0: misc_delete_object_thunk with other addresses.
namespace twin_020411b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020411b0 (0x020411b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020411b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020411b0

// auto_delete_object_thunk_02041320: misc_delete_object_thunk with other addresses.
namespace twin_02041320 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02041320 (0x02041320) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02041320(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02041320

// auto_delete_object_thunk_02041470: misc_delete_object_thunk with other addresses.
namespace twin_02041470 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02041470 (0x02041470) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02041470(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02041470

// auto_delete_object_thunk_02041610: misc_delete_object_thunk with other addresses.
namespace twin_02041610 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02041610 (0x02041610) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02041610(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02041610

// auto_delete_object_thunk_02041730: misc_delete_object_thunk with other addresses.
namespace twin_02041730 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02041730 (0x02041730) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02041730(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02041730

// auto_delete_object_thunk_02041aa0: misc_delete_object_thunk with other addresses.
namespace twin_02041aa0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02041aa0 (0x02041aa0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02041aa0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02041aa0

// auto_delete_object_thunk_02041cc0: misc_delete_object_thunk with other addresses.
namespace twin_02041cc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02041cc0 (0x02041cc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02041cc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02041cc0

// auto_delete_object_thunk_02041ee0: misc_delete_object_thunk with other addresses.
namespace twin_02041ee0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02041ee0 (0x02041ee0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02041ee0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02041ee0

// auto_delete_object_thunk_020420a0: misc_delete_object_thunk with other addresses.
namespace twin_020420a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020420a0 (0x020420a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020420a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020420a0

// auto_delete_object_thunk_02042260: misc_delete_object_thunk with other addresses.
namespace twin_02042260 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02042260 (0x02042260) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02042260(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02042260

// auto_delete_object_thunk_02042420: misc_delete_object_thunk with other addresses.
namespace twin_02042420 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02042420 (0x02042420) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02042420(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02042420

// auto_delete_object_thunk_02042520: misc_delete_object_thunk with other addresses.
namespace twin_02042520 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02042520 (0x02042520) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02042520(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02042520

// auto_delete_object_thunk_02042660: misc_delete_object_thunk with other addresses.
namespace twin_02042660 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02042660 (0x02042660) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02042660(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02042660

// auto_delete_object_thunk_02042bf0: misc_delete_object_thunk with other addresses.
namespace twin_02042bf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02042bf0 (0x02042bf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02042bf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02042bf0

// auto_delete_object_thunk_02042f90: misc_delete_object_thunk with other addresses.
namespace twin_02042f90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02042f90 (0x02042f90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02042f90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02042f90

// auto_delete_object_thunk_020430d0: misc_delete_object_thunk with other addresses.
namespace twin_020430d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020430d0 (0x020430d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020430d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020430d0

// auto_delete_object_thunk_02043210: misc_delete_object_thunk with other addresses.
namespace twin_02043210 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02043210 (0x02043210) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02043210(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02043210

// auto_delete_object_thunk_02043600: misc_delete_object_thunk with other addresses.
namespace twin_02043600 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02043600 (0x02043600) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02043600(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02043600

// auto_delete_object_thunk_020438a0: misc_delete_object_thunk with other addresses.
namespace twin_020438a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020438a0 (0x020438a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020438a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020438a0

// auto_delete_object_thunk_02043a10: misc_delete_object_thunk with other addresses.
namespace twin_02043a10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02043a10 (0x02043a10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02043a10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02043a10

// auto_delete_object_thunk_02043d40: misc_delete_object_thunk with other addresses.
namespace twin_02043d40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02043d40 (0x02043d40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02043d40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02043d40

// auto_delete_object_thunk_02043ea0: misc_delete_object_thunk with other addresses.
namespace twin_02043ea0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02043ea0 (0x02043ea0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02043ea0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02043ea0

// auto_delete_object_thunk_02043ed0: misc_delete_object_thunk with other addresses.
namespace twin_02043ed0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02043ed0 (0x02043ed0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02043ed0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02043ed0

// auto_delete_object_thunk_020441b0: misc_delete_object_thunk with other addresses.
namespace twin_020441b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020441b0 (0x020441b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020441b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020441b0

// auto_delete_object_thunk_02044800: misc_delete_object_thunk with other addresses.
namespace twin_02044800 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02044800 (0x02044800) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02044800(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02044800

// auto_delete_object_thunk_02044b30: misc_delete_object_thunk with other addresses.
namespace twin_02044b30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02044b30 (0x02044b30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02044b30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02044b30

// auto_delete_object_thunk_02044d50: misc_delete_object_thunk with other addresses.
namespace twin_02044d50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02044d50 (0x02044d50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02044d50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02044d50

// auto_delete_object_thunk_02045380: misc_delete_object_thunk with other addresses.
namespace twin_02045380 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02045380 (0x02045380) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02045380(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02045380

// auto_delete_object_thunk_020455a0: misc_delete_object_thunk with other addresses.
namespace twin_020455a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020455a0 (0x020455a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020455a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020455a0

// auto_delete_object_thunk_02045750: misc_delete_object_thunk with other addresses.
namespace twin_02045750 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02045750 (0x02045750) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02045750(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02045750

// auto_delete_object_thunk_02045870: misc_delete_object_thunk with other addresses.
namespace twin_02045870 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02045870 (0x02045870) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02045870(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02045870

// auto_delete_object_thunk_02045990: misc_delete_object_thunk with other addresses.
namespace twin_02045990 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02045990 (0x02045990) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02045990(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02045990

// auto_delete_object_thunk_02045b50: misc_delete_object_thunk with other addresses.
namespace twin_02045b50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02045b50 (0x02045b50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02045b50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02045b50

// auto_delete_object_thunk_02045dd0: misc_delete_object_thunk with other addresses.
namespace twin_02045dd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02045dd0 (0x02045dd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02045dd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02045dd0

// auto_delete_object_thunk_02046110: misc_delete_object_thunk with other addresses.
namespace twin_02046110 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02046110 (0x02046110) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02046110(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02046110

// auto_delete_object_thunk_02046520: misc_delete_object_thunk with other addresses.
namespace twin_02046520 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02046520 (0x02046520) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02046520(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02046520

// auto_delete_object_thunk_020466e0: misc_delete_object_thunk with other addresses.
namespace twin_020466e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020466e0 (0x020466e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020466e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020466e0

// auto_delete_object_thunk_02046890: misc_delete_object_thunk with other addresses.
namespace twin_02046890 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02046890 (0x02046890) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02046890(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02046890

// auto_delete_object_thunk_02046ab0: misc_delete_object_thunk with other addresses.
namespace twin_02046ab0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02046ab0 (0x02046ab0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02046ab0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02046ab0

// auto_delete_object_thunk_02046cd0: misc_delete_object_thunk with other addresses.
namespace twin_02046cd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02046cd0 (0x02046cd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02046cd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02046cd0

// auto_delete_object_thunk_02046e90: misc_delete_object_thunk with other addresses.
namespace twin_02046e90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02046e90 (0x02046e90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02046e90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02046e90

// auto_delete_object_thunk_02047050: misc_delete_object_thunk with other addresses.
namespace twin_02047050 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02047050 (0x02047050) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02047050(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02047050

// auto_delete_object_thunk_02047210: misc_delete_object_thunk with other addresses.
namespace twin_02047210 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02047210 (0x02047210) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02047210(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02047210

// auto_delete_object_thunk_02047310: misc_delete_object_thunk with other addresses.
namespace twin_02047310 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02047310 (0x02047310) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02047310(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02047310

// auto_delete_object_thunk_02047450: misc_delete_object_thunk with other addresses.
namespace twin_02047450 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02047450 (0x02047450) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02047450(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02047450

// auto_delete_object_thunk_02047750: misc_delete_object_thunk with other addresses.
namespace twin_02047750 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02047750 (0x02047750) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02047750(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02047750

// auto_delete_object_thunk_020478a0: misc_delete_object_thunk with other addresses.
namespace twin_020478a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020478a0 (0x020478a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020478a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020478a0

// auto_delete_object_thunk_020479b0: misc_delete_object_thunk with other addresses.
namespace twin_020479b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020479b0 (0x020479b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020479b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020479b0

// auto_delete_object_thunk_020485c0: misc_delete_object_thunk with other addresses.
namespace twin_020485c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020485c0 (0x020485c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020485c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020485c0

// auto_delete_object_thunk_02048a60: misc_delete_object_thunk with other addresses.
namespace twin_02048a60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02048a60 (0x02048a60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02048a60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02048a60

// auto_delete_object_thunk_02048a90: misc_delete_object_thunk with other addresses.
namespace twin_02048a90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02048a90 (0x02048a90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02048a90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02048a90

// auto_delete_object_thunk_02048f40: misc_delete_object_thunk with other addresses.
namespace twin_02048f40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02048f40 (0x02048f40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02048f40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02048f40

// auto_delete_object_thunk_02048f70: misc_delete_object_thunk with other addresses.
namespace twin_02048f70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02048f70 (0x02048f70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02048f70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02048f70

// auto_delete_object_thunk_02049280: misc_delete_object_thunk with other addresses.
namespace twin_02049280 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02049280 (0x02049280) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02049280(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02049280

// auto_delete_object_thunk_020492b0: misc_delete_object_thunk with other addresses.
namespace twin_020492b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020492b0 (0x020492b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020492b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020492b0

// auto_delete_object_thunk_020494c0: misc_delete_object_thunk with other addresses.
namespace twin_020494c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020494c0 (0x020494c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020494c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020494c0

// auto_delete_object_thunk_020494f0: misc_delete_object_thunk with other addresses.
namespace twin_020494f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020494f0 (0x020494f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020494f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020494f0

// auto_delete_object_thunk_0204a510: misc_delete_object_thunk with other addresses.
namespace twin_0204a510 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204a510 (0x0204a510) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204a510(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204a510

// auto_delete_object_thunk_0204c5b0: misc_delete_object_thunk with other addresses.
namespace twin_0204c5b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204c5b0 (0x0204c5b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204c5b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204c5b0

// auto_delete_object_thunk_0204c920: misc_delete_object_thunk with other addresses.
namespace twin_0204c920 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204c920 (0x0204c920) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204c920(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204c920

// auto_delete_object_thunk_0204ca40: misc_delete_object_thunk with other addresses.
namespace twin_0204ca40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204ca40 (0x0204ca40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204ca40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204ca40

// auto_delete_object_thunk_0204cb60: misc_delete_object_thunk with other addresses.
namespace twin_0204cb60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204cb60 (0x0204cb60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204cb60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204cb60

// auto_delete_object_thunk_0204cc70: misc_delete_object_thunk with other addresses.
namespace twin_0204cc70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204cc70 (0x0204cc70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204cc70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204cc70

// auto_delete_object_thunk_0204ce90: misc_delete_object_thunk with other addresses.
namespace twin_0204ce90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204ce90 (0x0204ce90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204ce90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204ce90

// auto_delete_object_thunk_0204d020: misc_delete_object_thunk with other addresses.
namespace twin_0204d020 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204d020 (0x0204d020) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204d020(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204d020

// auto_delete_object_thunk_0204d1b0: misc_delete_object_thunk with other addresses.
namespace twin_0204d1b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204d1b0 (0x0204d1b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204d1b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204d1b0

// auto_delete_object_thunk_0204d2c0: misc_delete_object_thunk with other addresses.
namespace twin_0204d2c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204d2c0 (0x0204d2c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204d2c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204d2c0

// auto_delete_object_thunk_0204d410: misc_delete_object_thunk with other addresses.
namespace twin_0204d410 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204d410 (0x0204d410) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204d410(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204d410

// auto_delete_object_thunk_0204d540: misc_delete_object_thunk with other addresses.
namespace twin_0204d540 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204d540 (0x0204d540) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204d540(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204d540

// auto_delete_object_thunk_0204d6a0: misc_delete_object_thunk with other addresses.
namespace twin_0204d6a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204d6a0 (0x0204d6a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204d6a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204d6a0

// auto_delete_object_thunk_0204d7c0: misc_delete_object_thunk with other addresses.
namespace twin_0204d7c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204d7c0 (0x0204d7c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204d7c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204d7c0

// auto_delete_object_thunk_0204d8d0: misc_delete_object_thunk with other addresses.
namespace twin_0204d8d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204d8d0 (0x0204d8d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204d8d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204d8d0

// auto_delete_object_thunk_0204e420: misc_delete_object_thunk with other addresses.
namespace twin_0204e420 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0204e420 (0x0204e420) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0204e420(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0204e420

// auto_delete_object_thunk_02053bd0: misc_delete_object_thunk with other addresses.
namespace twin_02053bd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02053bd0 (0x02053bd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02053bd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02053bd0

// auto_delete_object_thunk_0205ae70: misc_delete_object_thunk with other addresses.
namespace twin_0205ae70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0205ae70 (0x0205ae70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0205ae70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0205ae70

// auto_delete_object_thunk_0205b050: misc_delete_object_thunk with other addresses.
namespace twin_0205b050 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0205b050 (0x0205b050) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0205b050(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0205b050

// auto_delete_object_thunk_02062350: misc_delete_object_thunk with other addresses.
namespace twin_02062350 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02062350 (0x02062350) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02062350(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02062350

// auto_delete_object_thunk_02062680: misc_delete_object_thunk with other addresses.
namespace twin_02062680 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02062680 (0x02062680) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02062680(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02062680

// auto_delete_object_thunk_020626f0: misc_delete_object_thunk with other addresses.
namespace twin_020626f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020626f0 (0x020626f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020626f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020626f0

// auto_delete_object_thunk_0206c1a0: misc_delete_object_thunk with other addresses.
namespace twin_0206c1a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206c1a0 (0x0206c1a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206c1a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206c1a0

// auto_delete_object_thunk_0206d0c0: misc_delete_object_thunk with other addresses.
namespace twin_0206d0c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206d0c0 (0x0206d0c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206d0c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206d0c0

// auto_delete_object_thunk_0206d4d0: misc_delete_object_thunk with other addresses.
namespace twin_0206d4d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206d4d0 (0x0206d4d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206d4d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206d4d0

// auto_delete_object_thunk_0206d5d0: misc_delete_object_thunk with other addresses.
namespace twin_0206d5d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206d5d0 (0x0206d5d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206d5d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206d5d0

// auto_delete_object_thunk_0206d6d0: misc_delete_object_thunk with other addresses.
namespace twin_0206d6d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206d6d0 (0x0206d6d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206d6d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206d6d0

// auto_delete_object_thunk_0206d7d0: misc_delete_object_thunk with other addresses.
namespace twin_0206d7d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206d7d0 (0x0206d7d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206d7d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206d7d0

// auto_delete_object_thunk_0206d8d0: misc_delete_object_thunk with other addresses.
namespace twin_0206d8d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206d8d0 (0x0206d8d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206d8d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206d8d0

// auto_delete_object_thunk_0206d9d0: misc_delete_object_thunk with other addresses.
namespace twin_0206d9d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206d9d0 (0x0206d9d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206d9d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206d9d0

// auto_delete_object_thunk_0206dad0: misc_delete_object_thunk with other addresses.
namespace twin_0206dad0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206dad0 (0x0206dad0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206dad0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206dad0

// auto_delete_object_thunk_0206dbd0: misc_delete_object_thunk with other addresses.
namespace twin_0206dbd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0206dbd0 (0x0206dbd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0206dbd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0206dbd0

// auto_delete_object_thunk_020774d0: misc_delete_object_thunk with other addresses.
namespace twin_020774d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020774d0 (0x020774d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020774d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020774d0

// auto_delete_object_thunk_02077740: misc_delete_object_thunk with other addresses.
namespace twin_02077740 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02077740 (0x02077740) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02077740(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02077740

// auto_delete_object_thunk_020779b0: misc_delete_object_thunk with other addresses.
namespace twin_020779b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_020779b0 (0x020779b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_020779b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_020779b0

// auto_delete_object_thunk_02077fe0: misc_delete_object_thunk with other addresses.
namespace twin_02077fe0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02077fe0 (0x02077fe0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02077fe0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02077fe0

// auto_delete_object_thunk_02078880: misc_delete_object_thunk with other addresses.
namespace twin_02078880 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02078880 (0x02078880) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02078880(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02078880

// auto_delete_object_thunk_02078bd0: misc_delete_object_thunk with other addresses.
namespace twin_02078bd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02078bd0 (0x02078bd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02078bd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02078bd0

// auto_delete_object_thunk_02079900: misc_delete_object_thunk with other addresses.
namespace twin_02079900 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_02079900 (0x02079900) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_02079900(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_02079900

// auto_delete_object_thunk_0207a570: misc_delete_object_thunk with other addresses.
namespace twin_0207a570 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0207a570 (0x0207a570) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0207a570(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0207a570

// auto_delete_object_thunk_0207b1e0: misc_delete_object_thunk with other addresses.
namespace twin_0207b1e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0207b1e0 (0x0207b1e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0207b1e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0207b1e0

// auto_delete_object_thunk_0207b590: misc_delete_object_thunk with other addresses.
namespace twin_0207b590 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0207b590 (0x0207b590) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0207b590(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0207b590
