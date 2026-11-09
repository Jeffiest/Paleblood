// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: passes an owner's child, a second argument and a record of three words to a library call.
//
// misc_call_child_with_record (0x0139bc30) calls the library function at 0x01441230 when the owner holds a
// child. The call gets the child, the second argument unchanged, and the address of a record of four qwords:
// the third argument, the fifth, the fourth, and zero. Without a child nothing is called. The function
// returns the stack guard word, which the original leaves in RAX.
#include <cstddef>
#include <cstdint>

#include "child_slot_owner.h"
#include "runtime/original.h"

namespace {

// Qwords in the record handed to the library call.
constexpr std::size_t call_record_words = 4;

RT_ORIGINAL(0x01441230, fn_01441230, void(void *child, uint64_t second, uint64_t *record));

RT_GLOBAL(0x057e3be0, stack_guard, uint64_t *);

}  // namespace

/**
 *
 * Calls the library function on the owner's child with the second argument and a record of the other
 * arguments, when the owner holds a child.
 *
 * The record holds the third argument, the fifth, the fourth and zero, in that order.
 */
extern "C" uint64_t bb_misc_call_child_with_record(misc::ChildSlotOwner *owner, uint64_t second, uint64_t third,
                                                  uint64_t fourth, uint64_t fifth)
{
    void *const child = owner->child_0x08;
    if (child != nullptr) {
        uint64_t record[call_record_words] = {third, fifth, fourth, 0};
        fn_01441230(child, second, record);
    }
    return *stack_guard.get();
}
