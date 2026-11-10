// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: frees the object it is given with the library's operator delete, and does nothing else.
//
// misc_delete_object_thunk (0x0041cad0) is a single jump to the import stub of operator delete(void *)
// at 0x02fbe588. It sits in a table of member functions: the deleting entry of a type that has nothing
// of its own to destroy.
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, void(void *object));

}  // namespace

/**
 *
 * Frees the object with the library's operator delete, as a tail call. Nothing is returned.
 *
 * The object is passed on as it came, a null pointer included.
 */
extern "C" void bb_misc_delete_object_thunk(void *object)
{
    fn_02fbe588(object);
}
