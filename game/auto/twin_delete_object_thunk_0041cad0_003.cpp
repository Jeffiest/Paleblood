// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_delete_object_thunk, in game/misc/delete_object_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_delete_object_thunk_0168dd10: misc_delete_object_thunk with other addresses.
namespace twin_0168dd10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0168dd10 (0x0168dd10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0168dd10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0168dd10

// auto_delete_object_thunk_016991e0: misc_delete_object_thunk with other addresses.
namespace twin_016991e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016991e0 (0x016991e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016991e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016991e0

// auto_delete_object_thunk_01699210: misc_delete_object_thunk with other addresses.
namespace twin_01699210 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01699210 (0x01699210) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01699210(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01699210

// auto_delete_object_thunk_01699260: misc_delete_object_thunk with other addresses.
namespace twin_01699260 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01699260 (0x01699260) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01699260(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01699260

// auto_delete_object_thunk_016992c0: misc_delete_object_thunk with other addresses.
namespace twin_016992c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016992c0 (0x016992c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016992c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016992c0

// auto_delete_object_thunk_01699320: misc_delete_object_thunk with other addresses.
namespace twin_01699320 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01699320 (0x01699320) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01699320(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01699320

// auto_delete_object_thunk_0169b300: misc_delete_object_thunk with other addresses.
namespace twin_0169b300 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0169b300 (0x0169b300) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0169b300(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0169b300

// auto_delete_object_thunk_0169df40: misc_delete_object_thunk with other addresses.
namespace twin_0169df40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0169df40 (0x0169df40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0169df40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0169df40

// auto_delete_object_thunk_0169eb70: misc_delete_object_thunk with other addresses.
namespace twin_0169eb70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0169eb70 (0x0169eb70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0169eb70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0169eb70

// auto_delete_object_thunk_0169ebc0: misc_delete_object_thunk with other addresses.
namespace twin_0169ebc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0169ebc0 (0x0169ebc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0169ebc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0169ebc0

// auto_delete_object_thunk_0169ec20: misc_delete_object_thunk with other addresses.
namespace twin_0169ec20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0169ec20 (0x0169ec20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0169ec20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0169ec20

// auto_delete_object_thunk_016a2640: misc_delete_object_thunk with other addresses.
namespace twin_016a2640 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016a2640 (0x016a2640) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016a2640(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016a2640

// auto_delete_object_thunk_016a2660: misc_delete_object_thunk with other addresses.
namespace twin_016a2660 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016a2660 (0x016a2660) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016a2660(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016a2660

// auto_delete_object_thunk_016a2890: misc_delete_object_thunk with other addresses.
namespace twin_016a2890 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016a2890 (0x016a2890) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016a2890(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016a2890

// auto_delete_object_thunk_016a4b70: misc_delete_object_thunk with other addresses.
namespace twin_016a4b70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016a4b70 (0x016a4b70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016a4b70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016a4b70

// auto_delete_object_thunk_016a4bd0: misc_delete_object_thunk with other addresses.
namespace twin_016a4bd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016a4bd0 (0x016a4bd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016a4bd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016a4bd0

// auto_delete_object_thunk_016a4ca0: misc_delete_object_thunk with other addresses.
namespace twin_016a4ca0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016a4ca0 (0x016a4ca0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016a4ca0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016a4ca0

// auto_delete_object_thunk_016a4d00: misc_delete_object_thunk with other addresses.
namespace twin_016a4d00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016a4d00 (0x016a4d00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016a4d00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016a4d00

// auto_delete_object_thunk_016aa9a0: misc_delete_object_thunk with other addresses.
namespace twin_016aa9a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016aa9a0 (0x016aa9a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016aa9a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016aa9a0

// auto_delete_object_thunk_016aaa00: misc_delete_object_thunk with other addresses.
namespace twin_016aaa00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016aaa00 (0x016aaa00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016aaa00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016aaa00

// auto_delete_object_thunk_016af8f0: misc_delete_object_thunk with other addresses.
namespace twin_016af8f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016af8f0 (0x016af8f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016af8f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016af8f0

// auto_delete_object_thunk_016af950: misc_delete_object_thunk with other addresses.
namespace twin_016af950 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016af950 (0x016af950) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016af950(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016af950

// auto_delete_object_thunk_016b5d40: misc_delete_object_thunk with other addresses.
namespace twin_016b5d40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016b5d40 (0x016b5d40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016b5d40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016b5d40

// auto_delete_object_thunk_016b5da0: misc_delete_object_thunk with other addresses.
namespace twin_016b5da0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016b5da0 (0x016b5da0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016b5da0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016b5da0

// auto_delete_object_thunk_016baab0: misc_delete_object_thunk with other addresses.
namespace twin_016baab0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016baab0 (0x016baab0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016baab0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016baab0

// auto_delete_object_thunk_016bab10: misc_delete_object_thunk with other addresses.
namespace twin_016bab10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016bab10 (0x016bab10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016bab10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016bab10

// auto_delete_object_thunk_016bc030: misc_delete_object_thunk with other addresses.
namespace twin_016bc030 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016bc030 (0x016bc030) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016bc030(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016bc030

// auto_delete_object_thunk_016bc570: misc_delete_object_thunk with other addresses.
namespace twin_016bc570 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016bc570 (0x016bc570) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016bc570(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016bc570

// auto_delete_object_thunk_016c2340: misc_delete_object_thunk with other addresses.
namespace twin_016c2340 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c2340 (0x016c2340) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c2340(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c2340

// auto_delete_object_thunk_016c2940: misc_delete_object_thunk with other addresses.
namespace twin_016c2940 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c2940 (0x016c2940) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c2940(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c2940

// auto_delete_object_thunk_016c36d0: misc_delete_object_thunk with other addresses.
namespace twin_016c36d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c36d0 (0x016c36d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c36d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c36d0

// auto_delete_object_thunk_016c4320: misc_delete_object_thunk with other addresses.
namespace twin_016c4320 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c4320 (0x016c4320) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c4320(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c4320

// auto_delete_object_thunk_016c4e90: misc_delete_object_thunk with other addresses.
namespace twin_016c4e90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c4e90 (0x016c4e90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c4e90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c4e90

// auto_delete_object_thunk_016c5900: misc_delete_object_thunk with other addresses.
namespace twin_016c5900 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c5900 (0x016c5900) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c5900(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c5900

// auto_delete_object_thunk_016c6290: misc_delete_object_thunk with other addresses.
namespace twin_016c6290 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c6290 (0x016c6290) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c6290(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c6290

// auto_delete_object_thunk_016c6b40: misc_delete_object_thunk with other addresses.
namespace twin_016c6b40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c6b40 (0x016c6b40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c6b40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c6b40

// auto_delete_object_thunk_016c7300: misc_delete_object_thunk with other addresses.
namespace twin_016c7300 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c7300 (0x016c7300) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c7300(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c7300

// auto_delete_object_thunk_016c79d0: misc_delete_object_thunk with other addresses.
namespace twin_016c79d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c79d0 (0x016c79d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c79d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c79d0

// auto_delete_object_thunk_016c7fc0: misc_delete_object_thunk with other addresses.
namespace twin_016c7fc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c7fc0 (0x016c7fc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c7fc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c7fc0

// auto_delete_object_thunk_016c8e30: misc_delete_object_thunk with other addresses.
namespace twin_016c8e30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c8e30 (0x016c8e30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c8e30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c8e30

// auto_delete_object_thunk_016c9b70: misc_delete_object_thunk with other addresses.
namespace twin_016c9b70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016c9b70 (0x016c9b70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016c9b70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016c9b70

// auto_delete_object_thunk_016ca7c0: misc_delete_object_thunk with other addresses.
namespace twin_016ca7c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016ca7c0 (0x016ca7c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016ca7c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016ca7c0

// auto_delete_object_thunk_016cb330: misc_delete_object_thunk with other addresses.
namespace twin_016cb330 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016cb330 (0x016cb330) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016cb330(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016cb330

// auto_delete_object_thunk_016cbda0: misc_delete_object_thunk with other addresses.
namespace twin_016cbda0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016cbda0 (0x016cbda0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016cbda0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016cbda0

// auto_delete_object_thunk_016cc730: misc_delete_object_thunk with other addresses.
namespace twin_016cc730 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016cc730 (0x016cc730) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016cc730(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016cc730

// auto_delete_object_thunk_016ccfe0: misc_delete_object_thunk with other addresses.
namespace twin_016ccfe0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016ccfe0 (0x016ccfe0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016ccfe0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016ccfe0

// auto_delete_object_thunk_016cd7a0: misc_delete_object_thunk with other addresses.
namespace twin_016cd7a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016cd7a0 (0x016cd7a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016cd7a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016cd7a0

// auto_delete_object_thunk_016cde70: misc_delete_object_thunk with other addresses.
namespace twin_016cde70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016cde70 (0x016cde70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016cde70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016cde70

// auto_delete_object_thunk_016ce480: misc_delete_object_thunk with other addresses.
namespace twin_016ce480 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016ce480 (0x016ce480) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016ce480(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016ce480

// auto_delete_object_thunk_016ce9c0: misc_delete_object_thunk with other addresses.
namespace twin_016ce9c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016ce9c0 (0x016ce9c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016ce9c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016ce9c0

// auto_delete_object_thunk_016cfb90: misc_delete_object_thunk with other addresses.
namespace twin_016cfb90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016cfb90 (0x016cfb90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016cfb90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016cfb90

// auto_delete_object_thunk_016cfbf0: misc_delete_object_thunk with other addresses.
namespace twin_016cfbf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016cfbf0 (0x016cfbf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016cfbf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016cfbf0

// auto_delete_object_thunk_016d38d0: misc_delete_object_thunk with other addresses.
namespace twin_016d38d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016d38d0 (0x016d38d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016d38d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016d38d0

// auto_delete_object_thunk_016d3930: misc_delete_object_thunk with other addresses.
namespace twin_016d3930 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016d3930 (0x016d3930) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016d3930(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016d3930

// auto_delete_object_thunk_016d3990: misc_delete_object_thunk with other addresses.
namespace twin_016d3990 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016d3990 (0x016d3990) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016d3990(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016d3990

// auto_delete_object_thunk_016d54c0: misc_delete_object_thunk with other addresses.
namespace twin_016d54c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016d54c0 (0x016d54c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016d54c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016d54c0

// auto_delete_object_thunk_016d5520: misc_delete_object_thunk with other addresses.
namespace twin_016d5520 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016d5520 (0x016d5520) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016d5520(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016d5520

// auto_delete_object_thunk_016d91f0: misc_delete_object_thunk with other addresses.
namespace twin_016d91f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016d91f0 (0x016d91f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016d91f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016d91f0

// auto_delete_object_thunk_016d9250: misc_delete_object_thunk with other addresses.
namespace twin_016d9250 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016d9250 (0x016d9250) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016d9250(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016d9250

// auto_delete_object_thunk_016df9b0: misc_delete_object_thunk with other addresses.
namespace twin_016df9b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016df9b0 (0x016df9b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016df9b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016df9b0

// auto_delete_object_thunk_016dfa10: misc_delete_object_thunk with other addresses.
namespace twin_016dfa10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016dfa10 (0x016dfa10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016dfa10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016dfa10

// auto_delete_object_thunk_016e5d10: misc_delete_object_thunk with other addresses.
namespace twin_016e5d10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016e5d10 (0x016e5d10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016e5d10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016e5d10

// auto_delete_object_thunk_016e5d70: misc_delete_object_thunk with other addresses.
namespace twin_016e5d70 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016e5d70 (0x016e5d70) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016e5d70(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016e5d70

// auto_delete_object_thunk_016e7680: misc_delete_object_thunk with other addresses.
namespace twin_016e7680 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016e7680 (0x016e7680) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016e7680(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016e7680

// auto_delete_object_thunk_016edea0: misc_delete_object_thunk with other addresses.
namespace twin_016edea0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016edea0 (0x016edea0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016edea0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016edea0

// auto_delete_object_thunk_016edf00: misc_delete_object_thunk with other addresses.
namespace twin_016edf00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016edf00 (0x016edf00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016edf00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016edf00

// auto_delete_object_thunk_016edf60: misc_delete_object_thunk with other addresses.
namespace twin_016edf60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016edf60 (0x016edf60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016edf60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016edf60

// auto_delete_object_thunk_016f4970: misc_delete_object_thunk with other addresses.
namespace twin_016f4970 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016f4970 (0x016f4970) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016f4970(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016f4970

// auto_delete_object_thunk_016f9f60: misc_delete_object_thunk with other addresses.
namespace twin_016f9f60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016f9f60 (0x016f9f60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016f9f60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016f9f60

// auto_delete_object_thunk_016fa620: misc_delete_object_thunk with other addresses.
namespace twin_016fa620 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016fa620 (0x016fa620) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016fa620(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016fa620

// auto_delete_object_thunk_016fd1c0: misc_delete_object_thunk with other addresses.
namespace twin_016fd1c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016fd1c0 (0x016fd1c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016fd1c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016fd1c0

// auto_delete_object_thunk_016fd1e0: misc_delete_object_thunk with other addresses.
namespace twin_016fd1e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016fd1e0 (0x016fd1e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016fd1e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016fd1e0

// auto_delete_object_thunk_016fd240: misc_delete_object_thunk with other addresses.
namespace twin_016fd240 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016fd240 (0x016fd240) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016fd240(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016fd240

// auto_delete_object_thunk_016fd860: misc_delete_object_thunk with other addresses.
namespace twin_016fd860 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016fd860 (0x016fd860) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016fd860(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016fd860

// auto_delete_object_thunk_016fe110: misc_delete_object_thunk with other addresses.
namespace twin_016fe110 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016fe110 (0x016fe110) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016fe110(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016fe110

// auto_delete_object_thunk_016fe6a0: misc_delete_object_thunk with other addresses.
namespace twin_016fe6a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016fe6a0 (0x016fe6a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016fe6a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016fe6a0

// auto_delete_object_thunk_016ff8a0: misc_delete_object_thunk with other addresses.
namespace twin_016ff8a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_016ff8a0 (0x016ff8a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_016ff8a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_016ff8a0

// auto_delete_object_thunk_017001d0: misc_delete_object_thunk with other addresses.
namespace twin_017001d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017001d0 (0x017001d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017001d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017001d0

// auto_delete_object_thunk_01700900: misc_delete_object_thunk with other addresses.
namespace twin_01700900 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01700900 (0x01700900) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01700900(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01700900

// auto_delete_object_thunk_01704760: misc_delete_object_thunk with other addresses.
namespace twin_01704760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01704760 (0x01704760) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01704760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01704760

// auto_delete_object_thunk_01704f90: misc_delete_object_thunk with other addresses.
namespace twin_01704f90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01704f90 (0x01704f90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01704f90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01704f90

// auto_delete_object_thunk_01705550: misc_delete_object_thunk with other addresses.
namespace twin_01705550 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01705550 (0x01705550) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01705550(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01705550

// auto_delete_object_thunk_01705cc0: misc_delete_object_thunk with other addresses.
namespace twin_01705cc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01705cc0 (0x01705cc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01705cc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01705cc0

// auto_delete_object_thunk_01705d20: misc_delete_object_thunk with other addresses.
namespace twin_01705d20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01705d20 (0x01705d20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01705d20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01705d20

// auto_delete_object_thunk_01706d10: misc_delete_object_thunk with other addresses.
namespace twin_01706d10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01706d10 (0x01706d10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01706d10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01706d10

// auto_delete_object_thunk_01707420: misc_delete_object_thunk with other addresses.
namespace twin_01707420 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01707420 (0x01707420) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01707420(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01707420

// auto_delete_object_thunk_01707a40: misc_delete_object_thunk with other addresses.
namespace twin_01707a40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01707a40 (0x01707a40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01707a40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01707a40

// auto_delete_object_thunk_01707f80: misc_delete_object_thunk with other addresses.
namespace twin_01707f80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01707f80 (0x01707f80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01707f80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01707f80

// auto_delete_object_thunk_017083f0: misc_delete_object_thunk with other addresses.
namespace twin_017083f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017083f0 (0x017083f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017083f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017083f0

// auto_delete_object_thunk_01708910: misc_delete_object_thunk with other addresses.
namespace twin_01708910 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01708910 (0x01708910) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01708910(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01708910

// auto_delete_object_thunk_01709480: misc_delete_object_thunk with other addresses.
namespace twin_01709480 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01709480 (0x01709480) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01709480(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01709480

// auto_delete_object_thunk_01709a30: misc_delete_object_thunk with other addresses.
namespace twin_01709a30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01709a30 (0x01709a30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01709a30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01709a30

// auto_delete_object_thunk_01709d90: misc_delete_object_thunk with other addresses.
namespace twin_01709d90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01709d90 (0x01709d90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01709d90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01709d90

// auto_delete_object_thunk_0170a0f0: misc_delete_object_thunk with other addresses.
namespace twin_0170a0f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170a0f0 (0x0170a0f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170a0f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170a0f0

// auto_delete_object_thunk_0170a8a0: misc_delete_object_thunk with other addresses.
namespace twin_0170a8a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170a8a0 (0x0170a8a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170a8a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170a8a0

// auto_delete_object_thunk_0170b010: misc_delete_object_thunk with other addresses.
namespace twin_0170b010 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170b010 (0x0170b010) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170b010(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170b010

// auto_delete_object_thunk_0170b940: misc_delete_object_thunk with other addresses.
namespace twin_0170b940 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170b940 (0x0170b940) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170b940(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170b940

// auto_delete_object_thunk_0170bf90: misc_delete_object_thunk with other addresses.
namespace twin_0170bf90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170bf90 (0x0170bf90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170bf90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170bf90

// auto_delete_object_thunk_0170c570: misc_delete_object_thunk with other addresses.
namespace twin_0170c570 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170c570 (0x0170c570) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170c570(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170c570

// auto_delete_object_thunk_0170cdc0: misc_delete_object_thunk with other addresses.
namespace twin_0170cdc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170cdc0 (0x0170cdc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170cdc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170cdc0

// auto_delete_object_thunk_0170d200: misc_delete_object_thunk with other addresses.
namespace twin_0170d200 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170d200 (0x0170d200) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170d200(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170d200

// auto_delete_object_thunk_0170d610: misc_delete_object_thunk with other addresses.
namespace twin_0170d610 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170d610 (0x0170d610) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170d610(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170d610

// auto_delete_object_thunk_0170dbc0: misc_delete_object_thunk with other addresses.
namespace twin_0170dbc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170dbc0 (0x0170dbc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170dbc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170dbc0

// auto_delete_object_thunk_0170dfb0: misc_delete_object_thunk with other addresses.
namespace twin_0170dfb0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170dfb0 (0x0170dfb0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170dfb0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170dfb0

// auto_delete_object_thunk_0170f8c0: misc_delete_object_thunk with other addresses.
namespace twin_0170f8c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170f8c0 (0x0170f8c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170f8c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170f8c0

// auto_delete_object_thunk_0170f920: misc_delete_object_thunk with other addresses.
namespace twin_0170f920 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0170f920 (0x0170f920) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0170f920(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0170f920

// auto_delete_object_thunk_01745a10: misc_delete_object_thunk with other addresses.
namespace twin_01745a10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01745a10 (0x01745a10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01745a10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01745a10

// auto_delete_object_thunk_01745f30: misc_delete_object_thunk with other addresses.
namespace twin_01745f30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01745f30 (0x01745f30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01745f30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01745f30

// auto_delete_object_thunk_01746630: misc_delete_object_thunk with other addresses.
namespace twin_01746630 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01746630 (0x01746630) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01746630(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01746630

// auto_delete_object_thunk_01746e40: misc_delete_object_thunk with other addresses.
namespace twin_01746e40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01746e40 (0x01746e40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01746e40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01746e40

// auto_delete_object_thunk_01747430: misc_delete_object_thunk with other addresses.
namespace twin_01747430 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01747430 (0x01747430) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01747430(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01747430

// auto_delete_object_thunk_01747850: misc_delete_object_thunk with other addresses.
namespace twin_01747850 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01747850 (0x01747850) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01747850(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01747850

// auto_delete_object_thunk_01747d20: misc_delete_object_thunk with other addresses.
namespace twin_01747d20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01747d20 (0x01747d20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01747d20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01747d20

// auto_delete_object_thunk_01748100: misc_delete_object_thunk with other addresses.
namespace twin_01748100 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01748100 (0x01748100) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01748100(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01748100

// auto_delete_object_thunk_017488e0: misc_delete_object_thunk with other addresses.
namespace twin_017488e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017488e0 (0x017488e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017488e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017488e0

// auto_delete_object_thunk_01748ed0: misc_delete_object_thunk with other addresses.
namespace twin_01748ed0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01748ed0 (0x01748ed0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01748ed0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01748ed0

// auto_delete_object_thunk_01749690: misc_delete_object_thunk with other addresses.
namespace twin_01749690 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01749690 (0x01749690) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01749690(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01749690

// auto_delete_object_thunk_01749f30: misc_delete_object_thunk with other addresses.
namespace twin_01749f30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01749f30 (0x01749f30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01749f30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01749f30

// auto_delete_object_thunk_0174a340: misc_delete_object_thunk with other addresses.
namespace twin_0174a340 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174a340 (0x0174a340) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174a340(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174a340

// auto_delete_object_thunk_0174a780: misc_delete_object_thunk with other addresses.
namespace twin_0174a780 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174a780 (0x0174a780) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174a780(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174a780

// auto_delete_object_thunk_0174abc0: misc_delete_object_thunk with other addresses.
namespace twin_0174abc0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174abc0 (0x0174abc0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174abc0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174abc0

// auto_delete_object_thunk_0174b1c0: misc_delete_object_thunk with other addresses.
namespace twin_0174b1c0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174b1c0 (0x0174b1c0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174b1c0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174b1c0

// auto_delete_object_thunk_0174b6d0: misc_delete_object_thunk with other addresses.
namespace twin_0174b6d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174b6d0 (0x0174b6d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174b6d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174b6d0

// auto_delete_object_thunk_0174c0b0: misc_delete_object_thunk with other addresses.
namespace twin_0174c0b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174c0b0 (0x0174c0b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174c0b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174c0b0

// auto_delete_object_thunk_0174c5a0: misc_delete_object_thunk with other addresses.
namespace twin_0174c5a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174c5a0 (0x0174c5a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174c5a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174c5a0

// auto_delete_object_thunk_0174ccd0: misc_delete_object_thunk with other addresses.
namespace twin_0174ccd0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174ccd0 (0x0174ccd0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174ccd0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174ccd0

// auto_delete_object_thunk_0174d1d0: misc_delete_object_thunk with other addresses.
namespace twin_0174d1d0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174d1d0 (0x0174d1d0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174d1d0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174d1d0

// auto_delete_object_thunk_0174d8b0: misc_delete_object_thunk with other addresses.
namespace twin_0174d8b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174d8b0 (0x0174d8b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174d8b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174d8b0

// auto_delete_object_thunk_0174df80: misc_delete_object_thunk with other addresses.
namespace twin_0174df80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174df80 (0x0174df80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174df80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174df80

// auto_delete_object_thunk_0174e560: misc_delete_object_thunk with other addresses.
namespace twin_0174e560 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174e560 (0x0174e560) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174e560(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174e560

// auto_delete_object_thunk_0174ea30: misc_delete_object_thunk with other addresses.
namespace twin_0174ea30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174ea30 (0x0174ea30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174ea30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174ea30

// auto_delete_object_thunk_0174f020: misc_delete_object_thunk with other addresses.
namespace twin_0174f020 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174f020 (0x0174f020) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174f020(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174f020

// auto_delete_object_thunk_0174f720: misc_delete_object_thunk with other addresses.
namespace twin_0174f720 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0174f720 (0x0174f720) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0174f720(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0174f720

// auto_delete_object_thunk_01750760: misc_delete_object_thunk with other addresses.
namespace twin_01750760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01750760 (0x01750760) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01750760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01750760

// auto_delete_object_thunk_01750b00: misc_delete_object_thunk with other addresses.
namespace twin_01750b00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01750b00 (0x01750b00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01750b00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01750b00

// auto_delete_object_thunk_01751100: misc_delete_object_thunk with other addresses.
namespace twin_01751100 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01751100 (0x01751100) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01751100(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01751100

// auto_delete_object_thunk_017516b0: misc_delete_object_thunk with other addresses.
namespace twin_017516b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017516b0 (0x017516b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017516b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017516b0

// auto_delete_object_thunk_01752080: misc_delete_object_thunk with other addresses.
namespace twin_01752080 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01752080 (0x01752080) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01752080(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01752080

// auto_delete_object_thunk_01752960: misc_delete_object_thunk with other addresses.
namespace twin_01752960 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01752960 (0x01752960) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01752960(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01752960

// auto_delete_object_thunk_01753080: misc_delete_object_thunk with other addresses.
namespace twin_01753080 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01753080 (0x01753080) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01753080(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01753080

// auto_delete_object_thunk_01753790: misc_delete_object_thunk with other addresses.
namespace twin_01753790 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01753790 (0x01753790) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01753790(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01753790

// auto_delete_object_thunk_01753d80: misc_delete_object_thunk with other addresses.
namespace twin_01753d80 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01753d80 (0x01753d80) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01753d80(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01753d80

// auto_delete_object_thunk_01754360: misc_delete_object_thunk with other addresses.
namespace twin_01754360 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01754360 (0x01754360) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01754360(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01754360

// auto_delete_object_thunk_01754b50: misc_delete_object_thunk with other addresses.
namespace twin_01754b50 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01754b50 (0x01754b50) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01754b50(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01754b50

// auto_delete_object_thunk_017557f0: misc_delete_object_thunk with other addresses.
namespace twin_017557f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017557f0 (0x017557f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017557f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017557f0

// auto_delete_object_thunk_01756180: misc_delete_object_thunk with other addresses.
namespace twin_01756180 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01756180 (0x01756180) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01756180(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01756180

// auto_delete_object_thunk_01756d20: misc_delete_object_thunk with other addresses.
namespace twin_01756d20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01756d20 (0x01756d20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01756d20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01756d20

// auto_delete_object_thunk_017575e0: misc_delete_object_thunk with other addresses.
namespace twin_017575e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017575e0 (0x017575e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017575e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017575e0

// auto_delete_object_thunk_01757ca0: misc_delete_object_thunk with other addresses.
namespace twin_01757ca0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01757ca0 (0x01757ca0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01757ca0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01757ca0

// auto_delete_object_thunk_01758190: misc_delete_object_thunk with other addresses.
namespace twin_01758190 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01758190 (0x01758190) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01758190(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01758190

// auto_delete_object_thunk_017586b0: misc_delete_object_thunk with other addresses.
namespace twin_017586b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017586b0 (0x017586b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017586b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017586b0

// auto_delete_object_thunk_01759460: misc_delete_object_thunk with other addresses.
namespace twin_01759460 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01759460 (0x01759460) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01759460(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01759460

// auto_delete_object_thunk_01759840: misc_delete_object_thunk with other addresses.
namespace twin_01759840 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01759840 (0x01759840) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01759840(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01759840

// auto_delete_object_thunk_01759e60: misc_delete_object_thunk with other addresses.
namespace twin_01759e60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01759e60 (0x01759e60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01759e60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01759e60

// auto_delete_object_thunk_0175a320: misc_delete_object_thunk with other addresses.
namespace twin_0175a320 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175a320 (0x0175a320) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175a320(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175a320

// auto_delete_object_thunk_0175a820: misc_delete_object_thunk with other addresses.
namespace twin_0175a820 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175a820 (0x0175a820) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175a820(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175a820

// auto_delete_object_thunk_0175af40: misc_delete_object_thunk with other addresses.
namespace twin_0175af40 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175af40 (0x0175af40) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175af40(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175af40

// auto_delete_object_thunk_0175b760: misc_delete_object_thunk with other addresses.
namespace twin_0175b760 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175b760 (0x0175b760) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175b760(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175b760

// auto_delete_object_thunk_0175bc10: misc_delete_object_thunk with other addresses.
namespace twin_0175bc10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175bc10 (0x0175bc10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175bc10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175bc10

// auto_delete_object_thunk_0175c200: misc_delete_object_thunk with other addresses.
namespace twin_0175c200 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175c200 (0x0175c200) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175c200(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175c200

// auto_delete_object_thunk_0175c620: misc_delete_object_thunk with other addresses.
namespace twin_0175c620 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175c620 (0x0175c620) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175c620(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175c620

// auto_delete_object_thunk_0175d200: misc_delete_object_thunk with other addresses.
namespace twin_0175d200 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175d200 (0x0175d200) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175d200(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175d200

// auto_delete_object_thunk_0175dc90: misc_delete_object_thunk with other addresses.
namespace twin_0175dc90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175dc90 (0x0175dc90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175dc90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175dc90

// auto_delete_object_thunk_0175e840: misc_delete_object_thunk with other addresses.
namespace twin_0175e840 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175e840 (0x0175e840) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175e840(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175e840

// auto_delete_object_thunk_0175ee30: misc_delete_object_thunk with other addresses.
namespace twin_0175ee30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175ee30 (0x0175ee30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175ee30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175ee30

// auto_delete_object_thunk_0175f330: misc_delete_object_thunk with other addresses.
namespace twin_0175f330 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175f330 (0x0175f330) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175f330(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175f330

// auto_delete_object_thunk_0175f840: misc_delete_object_thunk with other addresses.
namespace twin_0175f840 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175f840 (0x0175f840) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175f840(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175f840

// auto_delete_object_thunk_0175fca0: misc_delete_object_thunk with other addresses.
namespace twin_0175fca0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0175fca0 (0x0175fca0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0175fca0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0175fca0

// auto_delete_object_thunk_017603e0: misc_delete_object_thunk with other addresses.
namespace twin_017603e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017603e0 (0x017603e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017603e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017603e0

// auto_delete_object_thunk_01760900: misc_delete_object_thunk with other addresses.
namespace twin_01760900 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01760900 (0x01760900) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01760900(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01760900

// auto_delete_object_thunk_01760f00: misc_delete_object_thunk with other addresses.
namespace twin_01760f00 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01760f00 (0x01760f00) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01760f00(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01760f00

// auto_delete_object_thunk_01761320: misc_delete_object_thunk with other addresses.
namespace twin_01761320 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01761320 (0x01761320) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01761320(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01761320

// auto_delete_object_thunk_01761a10: misc_delete_object_thunk with other addresses.
namespace twin_01761a10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01761a10 (0x01761a10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01761a10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01761a10

// auto_delete_object_thunk_01761e30: misc_delete_object_thunk with other addresses.
namespace twin_01761e30 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01761e30 (0x01761e30) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01761e30(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01761e30

// auto_delete_object_thunk_01762220: misc_delete_object_thunk with other addresses.
namespace twin_01762220 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01762220 (0x01762220) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01762220(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01762220

// auto_delete_object_thunk_01762960: misc_delete_object_thunk with other addresses.
namespace twin_01762960 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01762960 (0x01762960) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01762960(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01762960

// auto_delete_object_thunk_01763070: misc_delete_object_thunk with other addresses.
namespace twin_01763070 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01763070 (0x01763070) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01763070(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01763070

// auto_delete_object_thunk_01763570: misc_delete_object_thunk with other addresses.
namespace twin_01763570 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01763570 (0x01763570) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01763570(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01763570

// auto_delete_object_thunk_01763b60: misc_delete_object_thunk with other addresses.
namespace twin_01763b60 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01763b60 (0x01763b60) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01763b60(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01763b60

// auto_delete_object_thunk_01764050: misc_delete_object_thunk with other addresses.
namespace twin_01764050 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01764050 (0x01764050) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01764050(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01764050

// auto_delete_object_thunk_01764480: misc_delete_object_thunk with other addresses.
namespace twin_01764480 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01764480 (0x01764480) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01764480(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01764480

// auto_delete_object_thunk_01764c90: misc_delete_object_thunk with other addresses.
namespace twin_01764c90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01764c90 (0x01764c90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01764c90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01764c90

// auto_delete_object_thunk_01765140: misc_delete_object_thunk with other addresses.
namespace twin_01765140 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01765140 (0x01765140) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01765140(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01765140

// auto_delete_object_thunk_01765730: misc_delete_object_thunk with other addresses.
namespace twin_01765730 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01765730 (0x01765730) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01765730(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01765730

// auto_delete_object_thunk_01765c20: misc_delete_object_thunk with other addresses.
namespace twin_01765c20 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01765c20 (0x01765c20) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01765c20(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01765c20

// auto_delete_object_thunk_017660e0: misc_delete_object_thunk with other addresses.
namespace twin_017660e0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017660e0 (0x017660e0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017660e0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017660e0

// auto_delete_object_thunk_017665b0: misc_delete_object_thunk with other addresses.
namespace twin_017665b0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017665b0 (0x017665b0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017665b0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017665b0

// auto_delete_object_thunk_01766ac0: misc_delete_object_thunk with other addresses.
namespace twin_01766ac0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01766ac0 (0x01766ac0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01766ac0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01766ac0

// auto_delete_object_thunk_017671f0: misc_delete_object_thunk with other addresses.
namespace twin_017671f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017671f0 (0x017671f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017671f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017671f0

// auto_delete_object_thunk_01767910: misc_delete_object_thunk with other addresses.
namespace twin_01767910 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01767910 (0x01767910) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01767910(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01767910

// auto_delete_object_thunk_01767f10: misc_delete_object_thunk with other addresses.
namespace twin_01767f10 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01767f10 (0x01767f10) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01767f10(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01767f10

// auto_delete_object_thunk_01768500: misc_delete_object_thunk with other addresses.
namespace twin_01768500 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01768500 (0x01768500) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01768500(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01768500

// auto_delete_object_thunk_017689f0: misc_delete_object_thunk with other addresses.
namespace twin_017689f0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_017689f0 (0x017689f0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_017689f0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_017689f0

// auto_delete_object_thunk_01768ea0: misc_delete_object_thunk with other addresses.
namespace twin_01768ea0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01768ea0 (0x01768ea0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01768ea0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01768ea0

// auto_delete_object_thunk_01769590: misc_delete_object_thunk with other addresses.
namespace twin_01769590 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_01769590 (0x01769590) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_01769590(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_01769590

// auto_delete_object_thunk_0176a240: misc_delete_object_thunk with other addresses.
namespace twin_0176a240 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176a240 (0x0176a240) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176a240(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176a240

// auto_delete_object_thunk_0176aaf0: misc_delete_object_thunk with other addresses.
namespace twin_0176aaf0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176aaf0 (0x0176aaf0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176aaf0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176aaf0

// auto_delete_object_thunk_0176b5a0: misc_delete_object_thunk with other addresses.
namespace twin_0176b5a0 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176b5a0 (0x0176b5a0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176b5a0(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176b5a0

// auto_delete_object_thunk_0176b870: misc_delete_object_thunk with other addresses.
namespace twin_0176b870 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176b870 (0x0176b870) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176b870(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176b870

// auto_delete_object_thunk_0176bb90: misc_delete_object_thunk with other addresses.
namespace twin_0176bb90 {

// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// auto_delete_object_thunk_0176bb90 (0x0176bb90) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_auto_delete_object_thunk_0176bb90(void *object)
{
    fn_02fbe588(object);
}

}  // namespace twin_0176bb90
