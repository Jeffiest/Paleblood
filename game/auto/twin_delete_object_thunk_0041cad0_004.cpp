// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_delete_object_thunk, in game/misc/delete_object_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_delete_object_thunk_0176bf60: misc_delete_object_thunk with other addresses.
namespace twin_0176bf60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176bf60 (0x0176bf60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176bf60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176bf60

// auto_delete_object_thunk_0176c780: misc_delete_object_thunk with other addresses.
namespace twin_0176c780 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176c780 (0x0176c780) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176c780(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176c780

// auto_delete_object_thunk_0176cf70: misc_delete_object_thunk with other addresses.
namespace twin_0176cf70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176cf70 (0x0176cf70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176cf70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176cf70

// auto_delete_object_thunk_0176d690: misc_delete_object_thunk with other addresses.
namespace twin_0176d690 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176d690 (0x0176d690) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176d690(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176d690

// auto_delete_object_thunk_0176df90: misc_delete_object_thunk with other addresses.
namespace twin_0176df90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176df90 (0x0176df90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176df90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176df90

// auto_delete_object_thunk_0176e790: misc_delete_object_thunk with other addresses.
namespace twin_0176e790 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176e790 (0x0176e790) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176e790(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176e790

// auto_delete_object_thunk_0176ec90: misc_delete_object_thunk with other addresses.
namespace twin_0176ec90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176ec90 (0x0176ec90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176ec90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176ec90

// auto_delete_object_thunk_0176f2b0: misc_delete_object_thunk with other addresses.
namespace twin_0176f2b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176f2b0 (0x0176f2b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176f2b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176f2b0

// auto_delete_object_thunk_0176fd70: misc_delete_object_thunk with other addresses.
namespace twin_0176fd70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176fd70 (0x0176fd70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176fd70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176fd70

// auto_delete_object_thunk_01770650: misc_delete_object_thunk with other addresses.
namespace twin_01770650 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01770650 (0x01770650) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01770650(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01770650

// auto_delete_object_thunk_01770d70: misc_delete_object_thunk with other addresses.
namespace twin_01770d70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01770d70 (0x01770d70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01770d70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01770d70

// auto_delete_object_thunk_01771560: misc_delete_object_thunk with other addresses.
namespace twin_01771560 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01771560 (0x01771560) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01771560(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01771560

// auto_delete_object_thunk_01771880: misc_delete_object_thunk with other addresses.
namespace twin_01771880 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01771880 (0x01771880) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01771880(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01771880

// auto_delete_object_thunk_01771ca0: misc_delete_object_thunk with other addresses.
namespace twin_01771ca0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01771ca0 (0x01771ca0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01771ca0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01771ca0

// auto_delete_object_thunk_017720e0: misc_delete_object_thunk with other addresses.
namespace twin_017720e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017720e0 (0x017720e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017720e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017720e0

// auto_delete_object_thunk_017729f0: misc_delete_object_thunk with other addresses.
namespace twin_017729f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017729f0 (0x017729f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017729f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017729f0

// auto_delete_object_thunk_017732e0: misc_delete_object_thunk with other addresses.
namespace twin_017732e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017732e0 (0x017732e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017732e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017732e0

// auto_delete_object_thunk_01773ae0: misc_delete_object_thunk with other addresses.
namespace twin_01773ae0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01773ae0 (0x01773ae0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01773ae0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01773ae0

// auto_delete_object_thunk_017742f0: misc_delete_object_thunk with other addresses.
namespace twin_017742f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017742f0 (0x017742f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017742f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017742f0

// auto_delete_object_thunk_01774a20: misc_delete_object_thunk with other addresses.
namespace twin_01774a20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01774a20 (0x01774a20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01774a20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01774a20

// auto_delete_object_thunk_01775310: misc_delete_object_thunk with other addresses.
namespace twin_01775310 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01775310 (0x01775310) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01775310(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01775310

// auto_delete_object_thunk_01775ed0: misc_delete_object_thunk with other addresses.
namespace twin_01775ed0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01775ed0 (0x01775ed0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01775ed0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01775ed0

// auto_delete_object_thunk_01776e20: misc_delete_object_thunk with other addresses.
namespace twin_01776e20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01776e20 (0x01776e20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01776e20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01776e20

// auto_delete_object_thunk_01777c60: misc_delete_object_thunk with other addresses.
namespace twin_01777c60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01777c60 (0x01777c60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01777c60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01777c60

// auto_delete_object_thunk_017788d0: misc_delete_object_thunk with other addresses.
namespace twin_017788d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017788d0 (0x017788d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017788d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017788d0

// auto_delete_object_thunk_01779480: misc_delete_object_thunk with other addresses.
namespace twin_01779480 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01779480 (0x01779480) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01779480(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01779480

// auto_delete_object_thunk_01779e50: misc_delete_object_thunk with other addresses.
namespace twin_01779e50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01779e50 (0x01779e50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01779e50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01779e50

// auto_delete_object_thunk_0177a730: misc_delete_object_thunk with other addresses.
namespace twin_0177a730 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0177a730 (0x0177a730) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0177a730(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0177a730

// auto_delete_object_thunk_0177b110: misc_delete_object_thunk with other addresses.
namespace twin_0177b110 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0177b110 (0x0177b110) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0177b110(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0177b110

// auto_delete_object_thunk_0177ba00: misc_delete_object_thunk with other addresses.
namespace twin_0177ba00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0177ba00 (0x0177ba00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0177ba00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0177ba00

// auto_delete_object_thunk_0177c2f0: misc_delete_object_thunk with other addresses.
namespace twin_0177c2f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0177c2f0 (0x0177c2f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0177c2f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0177c2f0

// auto_delete_object_thunk_0177caf0: misc_delete_object_thunk with other addresses.
namespace twin_0177caf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0177caf0 (0x0177caf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0177caf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0177caf0

// auto_delete_object_thunk_0177d2e0: misc_delete_object_thunk with other addresses.
namespace twin_0177d2e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0177d2e0 (0x0177d2e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0177d2e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0177d2e0

// auto_delete_object_thunk_0178d3e0: misc_delete_object_thunk with other addresses.
namespace twin_0178d3e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0178d3e0 (0x0178d3e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0178d3e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0178d3e0

// auto_delete_object_thunk_017919e0: misc_delete_object_thunk with other addresses.
namespace twin_017919e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017919e0 (0x017919e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017919e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017919e0

// auto_delete_object_thunk_01792090: misc_delete_object_thunk with other addresses.
namespace twin_01792090 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01792090 (0x01792090) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01792090(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01792090

// auto_delete_object_thunk_01792540: misc_delete_object_thunk with other addresses.
namespace twin_01792540 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01792540 (0x01792540) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01792540(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01792540

// auto_delete_object_thunk_01792b40: misc_delete_object_thunk with other addresses.
namespace twin_01792b40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01792b40 (0x01792b40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01792b40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01792b40

// auto_delete_object_thunk_01793050: misc_delete_object_thunk with other addresses.
namespace twin_01793050 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01793050 (0x01793050) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01793050(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01793050

// auto_delete_object_thunk_01793520: misc_delete_object_thunk with other addresses.
namespace twin_01793520 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01793520 (0x01793520) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01793520(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01793520

// auto_delete_object_thunk_01793920: misc_delete_object_thunk with other addresses.
namespace twin_01793920 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01793920 (0x01793920) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01793920(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01793920

// auto_delete_object_thunk_01793b70: misc_delete_object_thunk with other addresses.
namespace twin_01793b70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01793b70 (0x01793b70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01793b70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01793b70

// auto_delete_object_thunk_0179d430: misc_delete_object_thunk with other addresses.
namespace twin_0179d430 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0179d430 (0x0179d430) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0179d430(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0179d430

// auto_delete_object_thunk_0179d500: misc_delete_object_thunk with other addresses.
namespace twin_0179d500 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0179d500 (0x0179d500) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0179d500(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0179d500

// auto_delete_object_thunk_0179ea30: misc_delete_object_thunk with other addresses.
namespace twin_0179ea30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0179ea30 (0x0179ea30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0179ea30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0179ea30

// auto_delete_object_thunk_0179eb00: misc_delete_object_thunk with other addresses.
namespace twin_0179eb00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0179eb00 (0x0179eb00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0179eb00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0179eb00

// auto_delete_object_thunk_0179eb60: misc_delete_object_thunk with other addresses.
namespace twin_0179eb60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0179eb60 (0x0179eb60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0179eb60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0179eb60

// auto_delete_object_thunk_017a76e0: misc_delete_object_thunk with other addresses.
namespace twin_017a76e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a76e0 (0x017a76e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a76e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a76e0

// auto_delete_object_thunk_017a7730: misc_delete_object_thunk with other addresses.
namespace twin_017a7730 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a7730 (0x017a7730) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a7730(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a7730

// auto_delete_object_thunk_017a7800: misc_delete_object_thunk with other addresses.
namespace twin_017a7800 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a7800 (0x017a7800) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a7800(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a7800

// auto_delete_object_thunk_017a7860: misc_delete_object_thunk with other addresses.
namespace twin_017a7860 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a7860 (0x017a7860) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a7860(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a7860

// auto_delete_object_thunk_017a78b0: misc_delete_object_thunk with other addresses.
namespace twin_017a78b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a78b0 (0x017a78b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a78b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a78b0

// auto_delete_object_thunk_017a8f10: misc_delete_object_thunk with other addresses.
namespace twin_017a8f10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a8f10 (0x017a8f10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a8f10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a8f10

// auto_delete_object_thunk_017a9180: misc_delete_object_thunk with other addresses.
namespace twin_017a9180 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a9180 (0x017a9180) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a9180(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a9180

// auto_delete_object_thunk_017a9250: misc_delete_object_thunk with other addresses.
namespace twin_017a9250 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a9250 (0x017a9250) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a9250(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a9250

// auto_delete_object_thunk_017a9350: misc_delete_object_thunk with other addresses.
namespace twin_017a9350 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a9350 (0x017a9350) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a9350(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a9350

// auto_delete_object_thunk_017a9420: misc_delete_object_thunk with other addresses.
namespace twin_017a9420 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017a9420 (0x017a9420) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017a9420(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017a9420

// auto_delete_object_thunk_017ac190: misc_delete_object_thunk with other addresses.
namespace twin_017ac190 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017ac190 (0x017ac190) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017ac190(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017ac190

// auto_delete_object_thunk_017b1440: misc_delete_object_thunk with other addresses.
namespace twin_017b1440 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017b1440 (0x017b1440) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017b1440(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017b1440

// auto_delete_object_thunk_017b3d80: misc_delete_object_thunk with other addresses.
namespace twin_017b3d80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017b3d80 (0x017b3d80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017b3d80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017b3d80

// auto_delete_object_thunk_017b3e50: misc_delete_object_thunk with other addresses.
namespace twin_017b3e50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017b3e50 (0x017b3e50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017b3e50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017b3e50

// auto_delete_object_thunk_017b3eb0: misc_delete_object_thunk with other addresses.
namespace twin_017b3eb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017b3eb0 (0x017b3eb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017b3eb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017b3eb0

// auto_delete_object_thunk_017b4ab0: misc_delete_object_thunk with other addresses.
namespace twin_017b4ab0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017b4ab0 (0x017b4ab0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017b4ab0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017b4ab0

// auto_delete_object_thunk_017c3a00: misc_delete_object_thunk with other addresses.
namespace twin_017c3a00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017c3a00 (0x017c3a00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017c3a00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017c3a00

// auto_delete_object_thunk_017c3a60: misc_delete_object_thunk with other addresses.
namespace twin_017c3a60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017c3a60 (0x017c3a60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017c3a60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017c3a60

// auto_delete_object_thunk_017cf0d0: misc_delete_object_thunk with other addresses.
namespace twin_017cf0d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017cf0d0 (0x017cf0d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017cf0d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017cf0d0

// auto_delete_object_thunk_017d1640: misc_delete_object_thunk with other addresses.
namespace twin_017d1640 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017d1640 (0x017d1640) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017d1640(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017d1640

// auto_delete_object_thunk_017d16a0: misc_delete_object_thunk with other addresses.
namespace twin_017d16a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017d16a0 (0x017d16a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017d16a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017d16a0

// auto_delete_object_thunk_017d28c0: misc_delete_object_thunk with other addresses.
namespace twin_017d28c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017d28c0 (0x017d28c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017d28c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017d28c0

// auto_delete_object_thunk_017d6670: misc_delete_object_thunk with other addresses.
namespace twin_017d6670 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017d6670 (0x017d6670) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017d6670(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017d6670

// auto_delete_object_thunk_017d6890: misc_delete_object_thunk with other addresses.
namespace twin_017d6890 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017d6890 (0x017d6890) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017d6890(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017d6890

// auto_delete_object_thunk_017d7f70: misc_delete_object_thunk with other addresses.
namespace twin_017d7f70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017d7f70 (0x017d7f70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017d7f70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017d7f70

// auto_delete_object_thunk_017dddc0: misc_delete_object_thunk with other addresses.
namespace twin_017dddc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017dddc0 (0x017dddc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017dddc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017dddc0

// auto_delete_object_thunk_017e0520: misc_delete_object_thunk with other addresses.
namespace twin_017e0520 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017e0520 (0x017e0520) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017e0520(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017e0520

// auto_delete_object_thunk_01829360: misc_delete_object_thunk with other addresses.
namespace twin_01829360 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01829360 (0x01829360) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01829360(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01829360

// auto_delete_object_thunk_018294f0: misc_delete_object_thunk with other addresses.
namespace twin_018294f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018294f0 (0x018294f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018294f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018294f0

// auto_delete_object_thunk_01829550: misc_delete_object_thunk with other addresses.
namespace twin_01829550 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01829550 (0x01829550) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01829550(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01829550

// auto_delete_object_thunk_018295b0: misc_delete_object_thunk with other addresses.
namespace twin_018295b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018295b0 (0x018295b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018295b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018295b0

// auto_delete_object_thunk_01829610: misc_delete_object_thunk with other addresses.
namespace twin_01829610 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01829610 (0x01829610) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01829610(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01829610

// auto_delete_object_thunk_0182fc10: misc_delete_object_thunk with other addresses.
namespace twin_0182fc10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0182fc10 (0x0182fc10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0182fc10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0182fc10

// auto_delete_object_thunk_0182fc70: misc_delete_object_thunk with other addresses.
namespace twin_0182fc70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0182fc70 (0x0182fc70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0182fc70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0182fc70

// auto_delete_object_thunk_0182fcd0: misc_delete_object_thunk with other addresses.
namespace twin_0182fcd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0182fcd0 (0x0182fcd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0182fcd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0182fcd0

// auto_delete_object_thunk_0182fd30: misc_delete_object_thunk with other addresses.
namespace twin_0182fd30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0182fd30 (0x0182fd30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0182fd30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0182fd30

// auto_delete_object_thunk_01830bb0: misc_delete_object_thunk with other addresses.
namespace twin_01830bb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01830bb0 (0x01830bb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01830bb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01830bb0

// auto_delete_object_thunk_01830c10: misc_delete_object_thunk with other addresses.
namespace twin_01830c10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01830c10 (0x01830c10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01830c10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01830c10

// auto_delete_object_thunk_018429b0: misc_delete_object_thunk with other addresses.
namespace twin_018429b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018429b0 (0x018429b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018429b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018429b0

// auto_delete_object_thunk_01842a10: misc_delete_object_thunk with other addresses.
namespace twin_01842a10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01842a10 (0x01842a10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01842a10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01842a10

// auto_delete_object_thunk_01844530: misc_delete_object_thunk with other addresses.
namespace twin_01844530 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01844530 (0x01844530) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01844530(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01844530

// auto_delete_object_thunk_0184f090: misc_delete_object_thunk with other addresses.
namespace twin_0184f090 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0184f090 (0x0184f090) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0184f090(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0184f090

// auto_delete_object_thunk_018501a0: misc_delete_object_thunk with other addresses.
namespace twin_018501a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018501a0 (0x018501a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018501a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018501a0

// auto_delete_object_thunk_01850200: misc_delete_object_thunk with other addresses.
namespace twin_01850200 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01850200 (0x01850200) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01850200(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01850200

// auto_delete_object_thunk_018517c0: misc_delete_object_thunk with other addresses.
namespace twin_018517c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018517c0 (0x018517c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018517c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018517c0

// auto_delete_object_thunk_01852370: misc_delete_object_thunk with other addresses.
namespace twin_01852370 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01852370 (0x01852370) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01852370(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01852370

// auto_delete_object_thunk_01852e70: misc_delete_object_thunk with other addresses.
namespace twin_01852e70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01852e70 (0x01852e70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01852e70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01852e70

// auto_delete_object_thunk_01853a70: misc_delete_object_thunk with other addresses.
namespace twin_01853a70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01853a70 (0x01853a70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01853a70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01853a70

// auto_delete_object_thunk_01854500: misc_delete_object_thunk with other addresses.
namespace twin_01854500 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01854500 (0x01854500) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01854500(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01854500

// auto_delete_object_thunk_01855100: misc_delete_object_thunk with other addresses.
namespace twin_01855100 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01855100 (0x01855100) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01855100(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01855100

// auto_delete_object_thunk_018566a0: misc_delete_object_thunk with other addresses.
namespace twin_018566a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018566a0 (0x018566a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018566a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018566a0

// auto_delete_object_thunk_01856770: misc_delete_object_thunk with other addresses.
namespace twin_01856770 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01856770 (0x01856770) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01856770(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01856770

// auto_delete_object_thunk_01860110: misc_delete_object_thunk with other addresses.
namespace twin_01860110 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01860110 (0x01860110) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01860110(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01860110

// auto_delete_object_thunk_01860140: misc_delete_object_thunk with other addresses.
namespace twin_01860140 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01860140 (0x01860140) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01860140(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01860140

// auto_delete_object_thunk_01860210: misc_delete_object_thunk with other addresses.
namespace twin_01860210 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01860210 (0x01860210) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01860210(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01860210

// auto_delete_object_thunk_01860600: misc_delete_object_thunk with other addresses.
namespace twin_01860600 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01860600 (0x01860600) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01860600(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01860600

// auto_delete_object_thunk_018606d0: misc_delete_object_thunk with other addresses.
namespace twin_018606d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018606d0 (0x018606d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018606d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018606d0

// auto_delete_object_thunk_01860910: misc_delete_object_thunk with other addresses.
namespace twin_01860910 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01860910 (0x01860910) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01860910(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01860910

// auto_delete_object_thunk_01860c30: misc_delete_object_thunk with other addresses.
namespace twin_01860c30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01860c30 (0x01860c30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01860c30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01860c30

// auto_delete_object_thunk_01860ce0: misc_delete_object_thunk with other addresses.
namespace twin_01860ce0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01860ce0 (0x01860ce0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01860ce0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01860ce0

// auto_delete_object_thunk_01860d00: misc_delete_object_thunk with other addresses.
namespace twin_01860d00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01860d00 (0x01860d00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01860d00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01860d00

// auto_delete_object_thunk_01860db0: misc_delete_object_thunk with other addresses.
namespace twin_01860db0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01860db0 (0x01860db0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01860db0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01860db0

// auto_delete_object_thunk_01863610: misc_delete_object_thunk with other addresses.
namespace twin_01863610 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01863610 (0x01863610) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01863610(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01863610

// auto_delete_object_thunk_018636e0: misc_delete_object_thunk with other addresses.
namespace twin_018636e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018636e0 (0x018636e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018636e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018636e0

// auto_delete_object_thunk_01863740: misc_delete_object_thunk with other addresses.
namespace twin_01863740 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01863740 (0x01863740) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01863740(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01863740

// auto_delete_object_thunk_018685c0: misc_delete_object_thunk with other addresses.
namespace twin_018685c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018685c0 (0x018685c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018685c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018685c0

// auto_delete_object_thunk_01868620: misc_delete_object_thunk with other addresses.
namespace twin_01868620 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01868620 (0x01868620) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01868620(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01868620

// auto_delete_object_thunk_018687d0: misc_delete_object_thunk with other addresses.
namespace twin_018687d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018687d0 (0x018687d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018687d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018687d0

// auto_delete_object_thunk_01868800: misc_delete_object_thunk with other addresses.
namespace twin_01868800 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01868800 (0x01868800) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01868800(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01868800

// auto_delete_object_thunk_018688d0: misc_delete_object_thunk with other addresses.
namespace twin_018688d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018688d0 (0x018688d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018688d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018688d0

// auto_delete_object_thunk_01868af0: misc_delete_object_thunk with other addresses.
namespace twin_01868af0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01868af0 (0x01868af0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01868af0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01868af0

// auto_delete_object_thunk_0186b0b0: misc_delete_object_thunk with other addresses.
namespace twin_0186b0b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0186b0b0 (0x0186b0b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0186b0b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0186b0b0

// auto_delete_object_thunk_0186b180: misc_delete_object_thunk with other addresses.
namespace twin_0186b180 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0186b180 (0x0186b180) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0186b180(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0186b180

// auto_delete_object_thunk_0186b1e0: misc_delete_object_thunk with other addresses.
namespace twin_0186b1e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0186b1e0 (0x0186b1e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0186b1e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0186b1e0

// auto_delete_object_thunk_0186f2b0: misc_delete_object_thunk with other addresses.
namespace twin_0186f2b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0186f2b0 (0x0186f2b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0186f2b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0186f2b0

// auto_delete_object_thunk_0186f380: misc_delete_object_thunk with other addresses.
namespace twin_0186f380 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0186f380 (0x0186f380) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0186f380(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0186f380

// auto_delete_object_thunk_0186f5e0: misc_delete_object_thunk with other addresses.
namespace twin_0186f5e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0186f5e0 (0x0186f5e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0186f5e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0186f5e0

// auto_delete_object_thunk_01872920: misc_delete_object_thunk with other addresses.
namespace twin_01872920 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01872920 (0x01872920) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01872920(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01872920

// auto_delete_object_thunk_01877080: misc_delete_object_thunk with other addresses.
namespace twin_01877080 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01877080 (0x01877080) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01877080(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01877080

// auto_delete_object_thunk_01878710: misc_delete_object_thunk with other addresses.
namespace twin_01878710 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01878710 (0x01878710) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01878710(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01878710

// auto_delete_object_thunk_01879830: misc_delete_object_thunk with other addresses.
namespace twin_01879830 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01879830 (0x01879830) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01879830(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01879830

// auto_delete_object_thunk_0187f830: misc_delete_object_thunk with other addresses.
namespace twin_0187f830 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0187f830 (0x0187f830) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0187f830(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0187f830

// auto_delete_object_thunk_0187f900: misc_delete_object_thunk with other addresses.
namespace twin_0187f900 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0187f900 (0x0187f900) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0187f900(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0187f900

// auto_delete_object_thunk_0187f960: misc_delete_object_thunk with other addresses.
namespace twin_0187f960 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0187f960 (0x0187f960) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0187f960(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0187f960

// auto_delete_object_thunk_01886730: misc_delete_object_thunk with other addresses.
namespace twin_01886730 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01886730 (0x01886730) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01886730(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01886730

// auto_delete_object_thunk_01887df0: misc_delete_object_thunk with other addresses.
namespace twin_01887df0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01887df0 (0x01887df0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01887df0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01887df0

// auto_delete_object_thunk_01887ec0: misc_delete_object_thunk with other addresses.
namespace twin_01887ec0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01887ec0 (0x01887ec0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01887ec0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01887ec0

// auto_delete_object_thunk_01888b20: misc_delete_object_thunk with other addresses.
namespace twin_01888b20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01888b20 (0x01888b20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01888b20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01888b20

// auto_delete_object_thunk_0188e1d0: misc_delete_object_thunk with other addresses.
namespace twin_0188e1d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0188e1d0 (0x0188e1d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0188e1d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0188e1d0

// auto_delete_object_thunk_0188e200: misc_delete_object_thunk with other addresses.
namespace twin_0188e200 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0188e200 (0x0188e200) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0188e200(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0188e200

// auto_delete_object_thunk_0188e250: misc_delete_object_thunk with other addresses.
namespace twin_0188e250 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0188e250 (0x0188e250) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0188e250(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0188e250

// auto_delete_object_thunk_0188e2b0: misc_delete_object_thunk with other addresses.
namespace twin_0188e2b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0188e2b0 (0x0188e2b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0188e2b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0188e2b0

// auto_delete_object_thunk_0188e310: misc_delete_object_thunk with other addresses.
namespace twin_0188e310 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0188e310 (0x0188e310) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0188e310(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0188e310

// auto_delete_object_thunk_0188e3e0: misc_delete_object_thunk with other addresses.
namespace twin_0188e3e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0188e3e0 (0x0188e3e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0188e3e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0188e3e0

// auto_delete_object_thunk_0189e2e0: misc_delete_object_thunk with other addresses.
namespace twin_0189e2e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0189e2e0 (0x0189e2e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0189e2e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0189e2e0

// auto_delete_object_thunk_0189e3b0: misc_delete_object_thunk with other addresses.
namespace twin_0189e3b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0189e3b0 (0x0189e3b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0189e3b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0189e3b0

// auto_delete_object_thunk_018a00f0: misc_delete_object_thunk with other addresses.
namespace twin_018a00f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018a00f0 (0x018a00f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018a00f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018a00f0

// auto_delete_object_thunk_018a01c0: misc_delete_object_thunk with other addresses.
namespace twin_018a01c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018a01c0 (0x018a01c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018a01c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018a01c0

// auto_delete_object_thunk_018a0220: misc_delete_object_thunk with other addresses.
namespace twin_018a0220 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018a0220 (0x018a0220) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018a0220(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018a0220

// auto_delete_object_thunk_018a3fd0: misc_delete_object_thunk with other addresses.
namespace twin_018a3fd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018a3fd0 (0x018a3fd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018a3fd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018a3fd0

// auto_delete_object_thunk_018aa4c0: misc_delete_object_thunk with other addresses.
namespace twin_018aa4c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018aa4c0 (0x018aa4c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018aa4c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018aa4c0

// auto_delete_object_thunk_018ad4a0: misc_delete_object_thunk with other addresses.
namespace twin_018ad4a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ad4a0 (0x018ad4a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ad4a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ad4a0

// auto_delete_object_thunk_018ad570: misc_delete_object_thunk with other addresses.
namespace twin_018ad570 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ad570 (0x018ad570) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ad570(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ad570

// auto_delete_object_thunk_018afd00: misc_delete_object_thunk with other addresses.
namespace twin_018afd00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018afd00 (0x018afd00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018afd00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018afd00

// auto_delete_object_thunk_018afdd0: misc_delete_object_thunk with other addresses.
namespace twin_018afdd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018afdd0 (0x018afdd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018afdd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018afdd0

// auto_delete_object_thunk_018b2320: misc_delete_object_thunk with other addresses.
namespace twin_018b2320 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018b2320 (0x018b2320) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018b2320(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018b2320

// auto_delete_object_thunk_018bdb90: misc_delete_object_thunk with other addresses.
namespace twin_018bdb90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018bdb90 (0x018bdb90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018bdb90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018bdb90

// auto_delete_object_thunk_018bdc60: misc_delete_object_thunk with other addresses.
namespace twin_018bdc60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018bdc60 (0x018bdc60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018bdc60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018bdc60

// auto_delete_object_thunk_018bdeb0: misc_delete_object_thunk with other addresses.
namespace twin_018bdeb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018bdeb0 (0x018bdeb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018bdeb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018bdeb0

// auto_delete_object_thunk_018bdfe0: misc_delete_object_thunk with other addresses.
namespace twin_018bdfe0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018bdfe0 (0x018bdfe0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018bdfe0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018bdfe0

// auto_delete_object_thunk_018be0f0: misc_delete_object_thunk with other addresses.
namespace twin_018be0f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018be0f0 (0x018be0f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018be0f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018be0f0

// auto_delete_object_thunk_018c10a0: misc_delete_object_thunk with other addresses.
namespace twin_018c10a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c10a0 (0x018c10a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c10a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c10a0

// auto_delete_object_thunk_018c1170: misc_delete_object_thunk with other addresses.
namespace twin_018c1170 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c1170 (0x018c1170) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c1170(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c1170

// auto_delete_object_thunk_018c11d0: misc_delete_object_thunk with other addresses.
namespace twin_018c11d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c11d0 (0x018c11d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c11d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c11d0

// auto_delete_object_thunk_018c64e0: misc_delete_object_thunk with other addresses.
namespace twin_018c64e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c64e0 (0x018c64e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c64e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c64e0

// auto_delete_object_thunk_018c65b0: misc_delete_object_thunk with other addresses.
namespace twin_018c65b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c65b0 (0x018c65b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c65b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c65b0

// auto_delete_object_thunk_018c66b0: misc_delete_object_thunk with other addresses.
namespace twin_018c66b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c66b0 (0x018c66b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c66b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c66b0

// auto_delete_object_thunk_018c6780: misc_delete_object_thunk with other addresses.
namespace twin_018c6780 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c6780 (0x018c6780) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c6780(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c6780

// auto_delete_object_thunk_018c8100: misc_delete_object_thunk with other addresses.
namespace twin_018c8100 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c8100 (0x018c8100) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c8100(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c8100

// auto_delete_object_thunk_018c81d0: misc_delete_object_thunk with other addresses.
namespace twin_018c81d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c81d0 (0x018c81d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c81d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c81d0

// auto_delete_object_thunk_018c8230: misc_delete_object_thunk with other addresses.
namespace twin_018c8230 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018c8230 (0x018c8230) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018c8230(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018c8230

// auto_delete_object_thunk_018ca6d0: misc_delete_object_thunk with other addresses.
namespace twin_018ca6d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ca6d0 (0x018ca6d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ca6d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ca6d0

// auto_delete_object_thunk_018cc150: misc_delete_object_thunk with other addresses.
namespace twin_018cc150 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018cc150 (0x018cc150) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018cc150(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018cc150

// auto_delete_object_thunk_018cc1b0: misc_delete_object_thunk with other addresses.
namespace twin_018cc1b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018cc1b0 (0x018cc1b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018cc1b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018cc1b0

// auto_delete_object_thunk_018d7010: misc_delete_object_thunk with other addresses.
namespace twin_018d7010 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018d7010 (0x018d7010) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018d7010(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018d7010

// auto_delete_object_thunk_018d7070: misc_delete_object_thunk with other addresses.
namespace twin_018d7070 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018d7070 (0x018d7070) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018d7070(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018d7070

// auto_delete_object_thunk_018d7ba0: misc_delete_object_thunk with other addresses.
namespace twin_018d7ba0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018d7ba0 (0x018d7ba0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018d7ba0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018d7ba0

// auto_delete_object_thunk_018d7bf0: misc_delete_object_thunk with other addresses.
namespace twin_018d7bf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018d7bf0 (0x018d7bf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018d7bf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018d7bf0

// auto_delete_object_thunk_018d7cc0: misc_delete_object_thunk with other addresses.
namespace twin_018d7cc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018d7cc0 (0x018d7cc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018d7cc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018d7cc0

// auto_delete_object_thunk_018dd440: misc_delete_object_thunk with other addresses.
namespace twin_018dd440 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018dd440 (0x018dd440) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018dd440(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018dd440

// auto_delete_object_thunk_018dd490: misc_delete_object_thunk with other addresses.
namespace twin_018dd490 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018dd490 (0x018dd490) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018dd490(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018dd490

// auto_delete_object_thunk_018dd560: misc_delete_object_thunk with other addresses.
namespace twin_018dd560 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018dd560 (0x018dd560) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018dd560(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018dd560

// auto_delete_object_thunk_018dee30: misc_delete_object_thunk with other addresses.
namespace twin_018dee30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018dee30 (0x018dee30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018dee30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018dee30

// auto_delete_object_thunk_018dfb00: misc_delete_object_thunk with other addresses.
namespace twin_018dfb00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018dfb00 (0x018dfb00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018dfb00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018dfb00

// auto_delete_object_thunk_018dfbd0: misc_delete_object_thunk with other addresses.
namespace twin_018dfbd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018dfbd0 (0x018dfbd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018dfbd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018dfbd0

// auto_delete_object_thunk_018e19f0: misc_delete_object_thunk with other addresses.
namespace twin_018e19f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018e19f0 (0x018e19f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018e19f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018e19f0

// auto_delete_object_thunk_018e1ac0: misc_delete_object_thunk with other addresses.
namespace twin_018e1ac0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018e1ac0 (0x018e1ac0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018e1ac0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018e1ac0

// auto_delete_object_thunk_018e24f0: misc_delete_object_thunk with other addresses.
namespace twin_018e24f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018e24f0 (0x018e24f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018e24f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018e24f0

// auto_delete_object_thunk_018e4bc0: misc_delete_object_thunk with other addresses.
namespace twin_018e4bc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018e4bc0 (0x018e4bc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018e4bc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018e4bc0

// auto_delete_object_thunk_018e4c20: misc_delete_object_thunk with other addresses.
namespace twin_018e4c20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018e4c20 (0x018e4c20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018e4c20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018e4c20

// auto_delete_object_thunk_018ec610: misc_delete_object_thunk with other addresses.
namespace twin_018ec610 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ec610 (0x018ec610) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ec610(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ec610

// auto_delete_object_thunk_018ec660: misc_delete_object_thunk with other addresses.
namespace twin_018ec660 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ec660 (0x018ec660) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ec660(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ec660

// auto_delete_object_thunk_018ec730: misc_delete_object_thunk with other addresses.
namespace twin_018ec730 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ec730 (0x018ec730) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ec730(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ec730

// auto_delete_object_thunk_018ecf40: misc_delete_object_thunk with other addresses.
namespace twin_018ecf40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ecf40 (0x018ecf40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ecf40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ecf40

// auto_delete_object_thunk_018ed7d0: misc_delete_object_thunk with other addresses.
namespace twin_018ed7d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ed7d0 (0x018ed7d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ed7d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ed7d0

// auto_delete_object_thunk_018ed8a0: misc_delete_object_thunk with other addresses.
namespace twin_018ed8a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ed8a0 (0x018ed8a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ed8a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ed8a0

// auto_delete_object_thunk_018ee700: misc_delete_object_thunk with other addresses.
namespace twin_018ee700 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ee700 (0x018ee700) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ee700(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ee700

// auto_delete_object_thunk_018ee7d0: misc_delete_object_thunk with other addresses.
namespace twin_018ee7d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018ee7d0 (0x018ee7d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018ee7d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018ee7d0

// auto_delete_object_thunk_018efeb0: misc_delete_object_thunk with other addresses.
namespace twin_018efeb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018efeb0 (0x018efeb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018efeb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018efeb0

// auto_delete_object_thunk_018f0b20: misc_delete_object_thunk with other addresses.
namespace twin_018f0b20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018f0b20 (0x018f0b20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018f0b20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018f0b20

// auto_delete_object_thunk_018f0bf0: misc_delete_object_thunk with other addresses.
namespace twin_018f0bf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018f0bf0 (0x018f0bf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018f0bf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018f0bf0

// auto_delete_object_thunk_018f5ea0: misc_delete_object_thunk with other addresses.
namespace twin_018f5ea0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018f5ea0 (0x018f5ea0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018f5ea0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018f5ea0

// auto_delete_object_thunk_018f5f50: misc_delete_object_thunk with other addresses.
namespace twin_018f5f50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_018f5f50 (0x018f5f50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_018f5f50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_018f5f50
