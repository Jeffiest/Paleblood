// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls a pointer to a member function on its adjusted subobject, passing the other arguments on.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The low bit of a member function pointer's function field: the function is a vtable slot. */
constexpr uint64_t virtual_flag = 1;

/** A pointer to a member function: the subobject, the function or vtable offset, and the byte offset to add. */
struct MemberFunctionPointer {
    uint8_t unknown_0x0000[0x08];
    uintptr_t subobject;     /**< The object the member pointer was taken on, before the adjustment. */
    uint64_t function;       /**< A function address, or a vtable offset plus the virtual flag. */
    uintptr_t adjustment;    /**< The byte offset added to the subobject address for the call. */
};
static_assert(offsetof(MemberFunctionPointer, subobject) == 0x08);
static_assert(offsetof(MemberFunctionPointer, function) == 0x10);
static_assert(offsetof(MemberFunctionPointer, adjustment) == 0x18);

/** The callee's arguments: the adjusted this, then the caller's arguments; the fourth is the callee address itself. */
using MemberFunction = uint64_t (*)(void *this_pointer, uint64_t arg1, uint64_t arg2, uint64_t target,
                                    uint64_t arg4, uint64_t arg5);

}  // namespace

/**
 *
 * Calls the member function on the adjusted subobject and returns its result, or returns the pointer when there is nothing to call.
 *
 * The fourth argument register is overwritten by the callee address, so the caller's value there is not used.
 */
extern "C" uint64_t bb_misc_invoke_member_pointer(MemberFunctionPointer *pointer, uint64_t arg1, uint64_t arg2,
                                                  uint64_t /* overwritten by the callee address */, uint64_t arg4,
                                                  uint64_t arg5)
{
    if (pointer->function == 0 || pointer->subobject == 0) {
        return reinterpret_cast<uint64_t>(pointer);
    }
    uintptr_t this_address = pointer->subobject + pointer->adjustment;
    uint64_t target = pointer->function;
    if ((target & virtual_flag) != 0) {
        uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(this_address);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_flag));
    }
    MemberFunction function = reinterpret_cast<MemberFunction>(target);
    return function(reinterpret_cast<void *>(this_address), arg1, arg2, target, arg4, arg5);
}
