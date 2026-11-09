// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: dispatches a call to a wrapper's target through its method table, or reports a label to a sink
// when the wrapper has no target. The unrestricted flag bit leaves the default value out of the call.
#include "misc.h"

#include "runtime/original.h"

namespace misc {

struct Target;

/**
 *
 * Method called through a target's method table: the target, the first argument, the value, the mode and the permissions.
 *
 */
using Dispatch = uint64_t (*)(const Target *target, uint64_t first, uint64_t value, uint64_t mode, uint64_t permissions);

/**
 *
 * Method table of a target, whose dispatch slot is at +0x20.
 *
 */
struct TargetVtable {
    uint8_t unknown_0x0000[0x20];
    Dispatch dispatch; /**< Method that the owner calls with the value, mode and permissions. */
};
static_assert(offsetof(TargetVtable, dispatch) == 0x20);

/**
 *
 * An object that the owner dispatches to.
 *
 */
struct Target {
    const TargetVtable *vtable; /**< Method table of the target. */
};

}  // namespace misc

namespace {

/**
 *
 * Bit of the flags argument that skips the default value and the label.
 *
 */
constexpr uint64_t unrestricted_flag = 0x200000;

/**
 *
 * Mode and permissions passed to the target's dispatch method.
 *
 */
constexpr uint64_t dispatch_mode = 0x21;
constexpr uint64_t dispatch_permissions = 0x1b6;

/**
 *
 * Holder of the target pointer.
 *
 */
struct Wrapper {
    uint8_t unknown_0x0000[0x10];
    misc::Target *target; /**< Target that calls are dispatched to; may be null. */
};
static_assert(offsetof(Wrapper, target) == 0x10);

/**
 *
 * Size of the context's label sink.
 *
 */
constexpr size_t sink_size = 0x08;

/**
 *
 * Context that holds a sink for labels and a default value.
 *
 */
struct Context {
    uint8_t unknown_0x0000[0x10];
    uint8_t sink[sink_size]; /**< Sink passed to the label writer. */
    uint64_t default_value; /**< Value used for the dispatch when non-zero. */
};
static_assert(offsetof(Context, sink) == 0x10);
static_assert(offsetof(Context, default_value) == 0x18);

/**
 *
 * The owner: its wrapper at +0x10 and its context at +0x18.
 *
 */
struct Owner {
    uint8_t unknown_0x0000[0x10];
    const Wrapper *wrapper; /**< Wrapper that holds the target. */
    Context *context; /**< Context with the sink and the default value; may be null. */
};
static_assert(offsetof(Owner, wrapper) == 0x10);
static_assert(offsetof(Owner, context) == 0x18);

RT_ORIGINAL(0x00454320, default_value_source, uint64_t());
RT_ORIGINAL(0x0278ad30, write_label, void(void *sink, const void *label, uint64_t value));
RT_GLOBAL(0x04b3b8d0, default_label, uint8_t);

}  // namespace

/**
 *
 * Dispatches a call through the owner's target, or reports the default label to the context sink when there is no target.
 *
 * The unrestricted flag skips the default value and the label. The dispatch value is the context's default
 * value, or the default value source when that is zero.
 *
 */
extern "C" uint64_t bb_misc_owner_dispatch(const Owner *owner, uint64_t first, uint64_t flags)
{
    misc::Target *target = owner->wrapper->target;
    if (target == nullptr) {
        if (owner->context != nullptr && (flags & unrestricted_flag) == 0) {
            write_label(owner->context->sink, default_label.address(), first);
        }
        return 0;
    }
    const misc::Dispatch dispatch = target->vtable->dispatch;
    uint64_t value = 0;
    if ((flags & unrestricted_flag) == 0) {
        value = owner->context->default_value;
        if (value == 0) value = default_value_source();
    }
    return dispatch(target, first, value, dispatch_mode, dispatch_permissions);
}
