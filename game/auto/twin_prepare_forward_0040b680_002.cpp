// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_prepare_forward, in game/misc/prepare_forward.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

namespace misc {}

// auto_prepare_forward_027f0600: misc_prepare_forward with other addresses.
namespace twin_027f0600 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f0600(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f0600

// auto_prepare_forward_027f0640: misc_prepare_forward with other addresses.
namespace twin_027f0640 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f0640(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f0640

// auto_prepare_forward_027f38d0: misc_prepare_forward with other addresses.
namespace twin_027f38d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f38d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f38d0

// auto_prepare_forward_027f3910: misc_prepare_forward with other addresses.
namespace twin_027f3910 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f3910(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f3910

// auto_prepare_forward_027f3950: misc_prepare_forward with other addresses.
namespace twin_027f3950 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f3950(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f3950

// auto_prepare_forward_027f3a60: misc_prepare_forward with other addresses.
namespace twin_027f3a60 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f3a60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f3a60

// auto_prepare_forward_027f3da0: misc_prepare_forward with other addresses.
namespace twin_027f3da0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f3da0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f3da0

// auto_prepare_forward_027f4050: misc_prepare_forward with other addresses.
namespace twin_027f4050 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4050(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4050

// auto_prepare_forward_027f4160: misc_prepare_forward with other addresses.
namespace twin_027f4160 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fbd50, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4160(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4160

// auto_prepare_forward_027f4270: misc_prepare_forward with other addresses.
namespace twin_027f4270 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4270(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4270

// auto_prepare_forward_027f4380: misc_prepare_forward with other addresses.
namespace twin_027f4380 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4380(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4380

// auto_prepare_forward_027f4490: misc_prepare_forward with other addresses.
namespace twin_027f4490 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fbd50, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4490(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4490

// auto_prepare_forward_027f45a0: misc_prepare_forward with other addresses.
namespace twin_027f45a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f45a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f45a0

// auto_prepare_forward_027f46b0: misc_prepare_forward with other addresses.
namespace twin_027f46b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f46b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f46b0

// auto_prepare_forward_027f46f0: misc_prepare_forward with other addresses.
namespace twin_027f46f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f46f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f46f0

// auto_prepare_forward_027f4730: misc_prepare_forward with other addresses.
namespace twin_027f4730 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4730(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4730

// auto_prepare_forward_027f4770: misc_prepare_forward with other addresses.
namespace twin_027f4770 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4770(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4770

// auto_prepare_forward_027f4d00: misc_prepare_forward with other addresses.
namespace twin_027f4d00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fbd50, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4d00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4d00

// auto_prepare_forward_027f4ee0: misc_prepare_forward with other addresses.
namespace twin_027f4ee0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4ee0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4ee0

// auto_prepare_forward_027f4ff0: misc_prepare_forward with other addresses.
namespace twin_027f4ff0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x027f53e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f4ff0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f4ff0

// auto_prepare_forward_027f5100: misc_prepare_forward with other addresses.
namespace twin_027f5100 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f5100(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f5100

// auto_prepare_forward_027f5210: misc_prepare_forward with other addresses.
namespace twin_027f5210 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f5210(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f5210

// auto_prepare_forward_027f5650: misc_prepare_forward with other addresses.
namespace twin_027f5650 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f5650(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f5650

// auto_prepare_forward_027f5690: misc_prepare_forward with other addresses.
namespace twin_027f5690 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f5690(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f5690

// auto_prepare_forward_027f57a0: misc_prepare_forward with other addresses.
namespace twin_027f57a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f57a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f57a0

// auto_prepare_forward_027f5ac0: misc_prepare_forward with other addresses.
namespace twin_027f5ac0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x0045a480, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f5ac0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f5ac0

// auto_prepare_forward_027f7750: misc_prepare_forward with other addresses.
namespace twin_027f7750 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x027f7650, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f7750(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f7750

// auto_prepare_forward_027f7ae0: misc_prepare_forward with other addresses.
namespace twin_027f7ae0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x027f7b10, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027f7ae0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027f7ae0

// auto_prepare_forward_02800920: misc_prepare_forward with other addresses.
namespace twin_02800920 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02821fd0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02800920(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02800920

// auto_prepare_forward_02800960: misc_prepare_forward with other addresses.
namespace twin_02800960 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02824b50, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02800960(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02800960

// auto_prepare_forward_02801420: misc_prepare_forward with other addresses.
namespace twin_02801420 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02801420(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02801420

// auto_prepare_forward_02801880: misc_prepare_forward with other addresses.
namespace twin_02801880 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02801880(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02801880

// auto_prepare_forward_02802090: misc_prepare_forward with other addresses.
namespace twin_02802090 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02802090(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02802090

// auto_prepare_forward_02802210: misc_prepare_forward with other addresses.
namespace twin_02802210 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02821ee0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02802210(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02802210

// auto_prepare_forward_02802be0: misc_prepare_forward with other addresses.
namespace twin_02802be0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02802be0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02802be0

// auto_prepare_forward_02802c70: misc_prepare_forward with other addresses.
namespace twin_02802c70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02802c70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02802c70

// auto_prepare_forward_02802d00: misc_prepare_forward with other addresses.
namespace twin_02802d00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02802d00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02802d00

// auto_prepare_forward_02802db0: misc_prepare_forward with other addresses.
namespace twin_02802db0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02802db0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02802db0

// auto_prepare_forward_02802e40: misc_prepare_forward with other addresses.
namespace twin_02802e40 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02802e40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02802e40

// auto_prepare_forward_02802ef0: misc_prepare_forward with other addresses.
namespace twin_02802ef0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02802ef0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02802ef0

// auto_prepare_forward_02802f80: misc_prepare_forward with other addresses.
namespace twin_02802f80 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x0280ebe0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02802f80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02802f80

// auto_prepare_forward_02803030: misc_prepare_forward with other addresses.
namespace twin_02803030 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02803030(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02803030

// auto_prepare_forward_028032b0: misc_prepare_forward with other addresses.
namespace twin_028032b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028032b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028032b0

// auto_prepare_forward_02803370: misc_prepare_forward with other addresses.
namespace twin_02803370 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02803370(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02803370

// auto_prepare_forward_028037b0: misc_prepare_forward with other addresses.
namespace twin_028037b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028037b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028037b0

// auto_prepare_forward_02803860: misc_prepare_forward with other addresses.
namespace twin_02803860 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02803860(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02803860

// auto_prepare_forward_02803920: misc_prepare_forward with other addresses.
namespace twin_02803920 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02803920(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02803920

// auto_prepare_forward_02804040: misc_prepare_forward with other addresses.
namespace twin_02804040 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804040(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804040

// auto_prepare_forward_028040d0: misc_prepare_forward with other addresses.
namespace twin_028040d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028040d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028040d0

// auto_prepare_forward_02804160: misc_prepare_forward with other addresses.
namespace twin_02804160 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804160(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804160

// auto_prepare_forward_028041f0: misc_prepare_forward with other addresses.
namespace twin_028041f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028041f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028041f0

// auto_prepare_forward_028043f0: misc_prepare_forward with other addresses.
namespace twin_028043f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028043f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028043f0

// auto_prepare_forward_02804480: misc_prepare_forward with other addresses.
namespace twin_02804480 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804480(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804480

// auto_prepare_forward_02804510: misc_prepare_forward with other addresses.
namespace twin_02804510 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804510(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804510

// auto_prepare_forward_028045a0: misc_prepare_forward with other addresses.
namespace twin_028045a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028045a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028045a0

// auto_prepare_forward_02804630: misc_prepare_forward with other addresses.
namespace twin_02804630 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804630(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804630

// auto_prepare_forward_028046f0: misc_prepare_forward with other addresses.
namespace twin_028046f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028046f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028046f0

// auto_prepare_forward_02804780: misc_prepare_forward with other addresses.
namespace twin_02804780 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804780(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804780

// auto_prepare_forward_02804810: misc_prepare_forward with other addresses.
namespace twin_02804810 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804810(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804810

// auto_prepare_forward_028048a0: misc_prepare_forward with other addresses.
namespace twin_028048a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028048a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028048a0

// auto_prepare_forward_02804b20: misc_prepare_forward with other addresses.
namespace twin_02804b20 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804b20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804b20

// auto_prepare_forward_02804bb0: misc_prepare_forward with other addresses.
namespace twin_02804bb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804bb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804bb0

// auto_prepare_forward_02804c40: misc_prepare_forward with other addresses.
namespace twin_02804c40 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02821e10, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804c40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804c40

// auto_prepare_forward_02804d30: misc_prepare_forward with other addresses.
namespace twin_02804d30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02804d30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02804d30

// auto_prepare_forward_02805040: misc_prepare_forward with other addresses.
namespace twin_02805040 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02805040(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02805040

// auto_prepare_forward_028050d0: misc_prepare_forward with other addresses.
namespace twin_028050d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028050d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028050d0

// auto_prepare_forward_02805160: misc_prepare_forward with other addresses.
namespace twin_02805160 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02805160(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02805160

// auto_prepare_forward_02805540: misc_prepare_forward with other addresses.
namespace twin_02805540 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02805540(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02805540

// auto_prepare_forward_028055d0: misc_prepare_forward with other addresses.
namespace twin_028055d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028055d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028055d0

// auto_prepare_forward_02805660: misc_prepare_forward with other addresses.
namespace twin_02805660 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02805660(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02805660

// auto_prepare_forward_028056f0: misc_prepare_forward with other addresses.
namespace twin_028056f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02821cb0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028056f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028056f0

// auto_prepare_forward_02805b00: misc_prepare_forward with other addresses.
namespace twin_02805b00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02805b00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02805b00

// auto_prepare_forward_028076e0: misc_prepare_forward with other addresses.
namespace twin_028076e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028076e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028076e0

// auto_prepare_forward_02807ba0: misc_prepare_forward with other addresses.
namespace twin_02807ba0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02807ba0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02807ba0

// auto_prepare_forward_02809710: misc_prepare_forward with other addresses.
namespace twin_02809710 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02809710(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02809710

// auto_prepare_forward_0280a8c0: misc_prepare_forward with other addresses.
namespace twin_0280a8c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0280a8c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0280a8c0

// auto_prepare_forward_0280ac80: misc_prepare_forward with other addresses.
namespace twin_0280ac80 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0280ac80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0280ac80

// auto_prepare_forward_0280ad20: misc_prepare_forward with other addresses.
namespace twin_0280ad20 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0280ad20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0280ad20

// auto_prepare_forward_0280b100: misc_prepare_forward with other addresses.
namespace twin_0280b100 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0280b100(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0280b100

// auto_prepare_forward_0280b5c0: misc_prepare_forward with other addresses.
namespace twin_0280b5c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02810920, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0280b5c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0280b5c0

// auto_prepare_forward_0280c640: misc_prepare_forward with other addresses.
namespace twin_0280c640 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0280c640(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0280c640

// auto_prepare_forward_0280cfe0: misc_prepare_forward with other addresses.
namespace twin_0280cfe0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0280cfe0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0280cfe0

// auto_prepare_forward_0280e5a0: misc_prepare_forward with other addresses.
namespace twin_0280e5a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0280e5a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0280e5a0

// auto_prepare_forward_0280e9d0: misc_prepare_forward with other addresses.
namespace twin_0280e9d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x0280ea00, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0280e9d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0280e9d0

// auto_prepare_forward_02819720: misc_prepare_forward with other addresses.
namespace twin_02819720 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02810920, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02819720(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02819720

// auto_prepare_forward_0281a740: misc_prepare_forward with other addresses.
namespace twin_0281a740 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0281a740(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0281a740

// auto_prepare_forward_02825350: misc_prepare_forward with other addresses.
namespace twin_02825350 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x028255c0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02825350(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02825350

// auto_prepare_forward_02825ed0: misc_prepare_forward with other addresses.
namespace twin_02825ed0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02825ed0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02825ed0

// auto_prepare_forward_02826750: misc_prepare_forward with other addresses.
namespace twin_02826750 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005a7270, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02826750(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02826750

// auto_prepare_forward_02826830: misc_prepare_forward with other addresses.
namespace twin_02826830 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005ec700, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02826830(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02826830

// auto_prepare_forward_028271f0: misc_prepare_forward with other addresses.
namespace twin_028271f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005a7270, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028271f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028271f0

// auto_prepare_forward_028273a0: misc_prepare_forward with other addresses.
namespace twin_028273a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02827600, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028273a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028273a0

// auto_prepare_forward_02827e70: misc_prepare_forward with other addresses.
namespace twin_02827e70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005696e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02827e70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02827e70

// auto_prepare_forward_02828230: misc_prepare_forward with other addresses.
namespace twin_02828230 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005a7270, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02828230(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02828230

// auto_prepare_forward_02829200: misc_prepare_forward with other addresses.
namespace twin_02829200 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02829200(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02829200

// auto_prepare_forward_02829240: misc_prepare_forward with other addresses.
namespace twin_02829240 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02829240(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02829240

// auto_prepare_forward_02829420: misc_prepare_forward with other addresses.
namespace twin_02829420 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02829420(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02829420

// auto_prepare_forward_02829530: misc_prepare_forward with other addresses.
namespace twin_02829530 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fbd50, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02829530(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02829530

// auto_prepare_forward_02833ea0: misc_prepare_forward with other addresses.
namespace twin_02833ea0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02833ea0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02833ea0

// auto_prepare_forward_02833ee0: misc_prepare_forward with other addresses.
namespace twin_02833ee0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02833ee0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02833ee0

// auto_prepare_forward_02833ff0: misc_prepare_forward with other addresses.
namespace twin_02833ff0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02833ff0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02833ff0

// auto_prepare_forward_02834030: misc_prepare_forward with other addresses.
namespace twin_02834030 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834030(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834030

// auto_prepare_forward_02834070: misc_prepare_forward with other addresses.
namespace twin_02834070 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x028383a0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834070(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834070

// auto_prepare_forward_028340b0: misc_prepare_forward with other addresses.
namespace twin_028340b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028340b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028340b0

// auto_prepare_forward_028340f0: misc_prepare_forward with other addresses.
namespace twin_028340f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028340f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028340f0

// auto_prepare_forward_02834130: misc_prepare_forward with other addresses.
namespace twin_02834130 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834130(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834130

// auto_prepare_forward_02834320: misc_prepare_forward with other addresses.
namespace twin_02834320 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x028382a0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834320(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834320

// auto_prepare_forward_028344a0: misc_prepare_forward with other addresses.
namespace twin_028344a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fbd50, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028344a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028344a0

// auto_prepare_forward_028344e0: misc_prepare_forward with other addresses.
namespace twin_028344e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02838220, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028344e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028344e0

// auto_prepare_forward_02834520: misc_prepare_forward with other addresses.
namespace twin_02834520 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834520(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834520

// auto_prepare_forward_02834560: misc_prepare_forward with other addresses.
namespace twin_02834560 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834560(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834560

// auto_prepare_forward_028345a0: misc_prepare_forward with other addresses.
namespace twin_028345a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028345a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028345a0

// auto_prepare_forward_028345e0: misc_prepare_forward with other addresses.
namespace twin_028345e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028345e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028345e0

// auto_prepare_forward_02834620: misc_prepare_forward with other addresses.
namespace twin_02834620 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834620(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834620

// auto_prepare_forward_02834660: misc_prepare_forward with other addresses.
namespace twin_02834660 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834660(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834660

// auto_prepare_forward_028346a0: misc_prepare_forward with other addresses.
namespace twin_028346a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028346a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028346a0

// auto_prepare_forward_028346e0: misc_prepare_forward with other addresses.
namespace twin_028346e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028346e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028346e0

// auto_prepare_forward_02834720: misc_prepare_forward with other addresses.
namespace twin_02834720 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834720(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834720

// auto_prepare_forward_02834760: misc_prepare_forward with other addresses.
namespace twin_02834760 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834760(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834760

// auto_prepare_forward_02834870: misc_prepare_forward with other addresses.
namespace twin_02834870 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834870(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834870

// auto_prepare_forward_028348b0: misc_prepare_forward with other addresses.
namespace twin_028348b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028348b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028348b0

// auto_prepare_forward_028348f0: misc_prepare_forward with other addresses.
namespace twin_028348f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028348f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028348f0

// auto_prepare_forward_02834930: misc_prepare_forward with other addresses.
namespace twin_02834930 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834930(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834930

// auto_prepare_forward_02834970: misc_prepare_forward with other addresses.
namespace twin_02834970 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x028380f0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834970(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834970

// auto_prepare_forward_028349b0: misc_prepare_forward with other addresses.
namespace twin_028349b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028349b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028349b0

// auto_prepare_forward_028349f0: misc_prepare_forward with other addresses.
namespace twin_028349f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028349f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028349f0

// auto_prepare_forward_02834a30: misc_prepare_forward with other addresses.
namespace twin_02834a30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834a30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834a30

// auto_prepare_forward_02834b40: misc_prepare_forward with other addresses.
namespace twin_02834b40 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005ffc60, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834b40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834b40

// auto_prepare_forward_02834df0: misc_prepare_forward with other addresses.
namespace twin_02834df0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834df0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834df0

// auto_prepare_forward_02834f00: misc_prepare_forward with other addresses.
namespace twin_02834f00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02834f00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02834f00

// auto_prepare_forward_02835010: misc_prepare_forward with other addresses.
namespace twin_02835010 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02835010(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02835010

// auto_prepare_forward_02835420: misc_prepare_forward with other addresses.
namespace twin_02835420 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02835420(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02835420

// auto_prepare_forward_02835a10: misc_prepare_forward with other addresses.
namespace twin_02835a10 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fbd50, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02835a10(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02835a10

// auto_prepare_forward_02835cc0: misc_prepare_forward with other addresses.
namespace twin_02835cc0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02835cc0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02835cc0

// auto_prepare_forward_02835dd0: misc_prepare_forward with other addresses.
namespace twin_02835dd0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02835dd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02835dd0

// auto_prepare_forward_02836150: misc_prepare_forward with other addresses.
namespace twin_02836150 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02836150(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02836150

// auto_prepare_forward_02836260: misc_prepare_forward with other addresses.
namespace twin_02836260 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02836260(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02836260

// auto_prepare_forward_02836370: misc_prepare_forward with other addresses.
namespace twin_02836370 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02836370(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02836370

// auto_prepare_forward_02836550: misc_prepare_forward with other addresses.
namespace twin_02836550 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02836550(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02836550

// auto_prepare_forward_02836660: misc_prepare_forward with other addresses.
namespace twin_02836660 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x005ffc60, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02836660(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02836660

// auto_prepare_forward_02836840: misc_prepare_forward with other addresses.
namespace twin_02836840 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02836840(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02836840

// auto_prepare_forward_02836c50: misc_prepare_forward with other addresses.
namespace twin_02836c50 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02836c50(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02836c50

// auto_prepare_forward_02836e30: misc_prepare_forward with other addresses.
namespace twin_02836e30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02836e30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02836e30

// auto_prepare_forward_02836f40: misc_prepare_forward with other addresses.
namespace twin_02836f40 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02836f40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02836f40

// auto_prepare_forward_02837050: misc_prepare_forward with other addresses.
namespace twin_02837050 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02837050(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02837050

// auto_prepare_forward_02837160: misc_prepare_forward with other addresses.
namespace twin_02837160 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02837160(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02837160

// auto_prepare_forward_02837270: misc_prepare_forward with other addresses.
namespace twin_02837270 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02837270(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02837270

// auto_prepare_forward_02837380: misc_prepare_forward with other addresses.
namespace twin_02837380 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02837380(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02837380

// auto_prepare_forward_02837700: misc_prepare_forward with other addresses.
namespace twin_02837700 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02837700(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02837700

// auto_prepare_forward_02837810: misc_prepare_forward with other addresses.
namespace twin_02837810 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02837810(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02837810

// auto_prepare_forward_028401f0: misc_prepare_forward with other addresses.
namespace twin_028401f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006172b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028401f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028401f0

// auto_prepare_forward_02840230: misc_prepare_forward with other addresses.
namespace twin_02840230 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840230(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840230

// auto_prepare_forward_02840270: misc_prepare_forward with other addresses.
namespace twin_02840270 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840270(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840270

// auto_prepare_forward_028403d0: misc_prepare_forward with other addresses.
namespace twin_028403d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028403d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028403d0

// auto_prepare_forward_02840410: misc_prepare_forward with other addresses.
namespace twin_02840410 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840410(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840410

// auto_prepare_forward_02840450: misc_prepare_forward with other addresses.
namespace twin_02840450 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840450(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840450

// auto_prepare_forward_02840630: misc_prepare_forward with other addresses.
namespace twin_02840630 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006172b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840630(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840630

// auto_prepare_forward_02840670: misc_prepare_forward with other addresses.
namespace twin_02840670 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006172b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840670(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840670

// auto_prepare_forward_028406b0: misc_prepare_forward with other addresses.
namespace twin_028406b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006172b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028406b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028406b0

// auto_prepare_forward_028406f0: misc_prepare_forward with other addresses.
namespace twin_028406f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006172b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028406f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028406f0

// auto_prepare_forward_02840730: misc_prepare_forward with other addresses.
namespace twin_02840730 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006172b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840730(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840730

// auto_prepare_forward_02840a60: misc_prepare_forward with other addresses.
namespace twin_02840a60 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006172b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840a60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840a60

// auto_prepare_forward_02840aa0: misc_prepare_forward with other addresses.
namespace twin_02840aa0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840aa0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840aa0

// auto_prepare_forward_02840ae0: misc_prepare_forward with other addresses.
namespace twin_02840ae0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840ae0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840ae0

// auto_prepare_forward_02840b20: misc_prepare_forward with other addresses.
namespace twin_02840b20 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840b20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840b20

// auto_prepare_forward_02840bf0: misc_prepare_forward with other addresses.
namespace twin_02840bf0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840bf0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840bf0

// auto_prepare_forward_02840c30: misc_prepare_forward with other addresses.
namespace twin_02840c30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840c30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840c30

// auto_prepare_forward_02840c70: misc_prepare_forward with other addresses.
namespace twin_02840c70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840c70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840c70

// auto_prepare_forward_02840cb0: misc_prepare_forward with other addresses.
namespace twin_02840cb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840cb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840cb0

// auto_prepare_forward_02840cf0: misc_prepare_forward with other addresses.
namespace twin_02840cf0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840cf0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840cf0

// auto_prepare_forward_02840d30: misc_prepare_forward with other addresses.
namespace twin_02840d30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840d30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840d30

// auto_prepare_forward_02840d70: misc_prepare_forward with other addresses.
namespace twin_02840d70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840d70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840d70

// auto_prepare_forward_02840db0: misc_prepare_forward with other addresses.
namespace twin_02840db0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006172b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840db0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840db0

// auto_prepare_forward_02840e00: misc_prepare_forward with other addresses.
namespace twin_02840e00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840e00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840e00

// auto_prepare_forward_02840e40: misc_prepare_forward with other addresses.
namespace twin_02840e40 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840e40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840e40

// auto_prepare_forward_02840e80: misc_prepare_forward with other addresses.
namespace twin_02840e80 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840e80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840e80

// auto_prepare_forward_02840ec0: misc_prepare_forward with other addresses.
namespace twin_02840ec0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840ec0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840ec0

// auto_prepare_forward_02840f00: misc_prepare_forward with other addresses.
namespace twin_02840f00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840f00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840f00

// auto_prepare_forward_02840ff0: misc_prepare_forward with other addresses.
namespace twin_02840ff0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02840ff0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02840ff0

// auto_prepare_forward_02841130: misc_prepare_forward with other addresses.
namespace twin_02841130 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fa840, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02841130(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02841130

// auto_prepare_forward_02841170: misc_prepare_forward with other addresses.
namespace twin_02841170 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02841170(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02841170

// auto_prepare_forward_02841280: misc_prepare_forward with other addresses.
namespace twin_02841280 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02841280(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02841280

// auto_prepare_forward_02841390: misc_prepare_forward with other addresses.
namespace twin_02841390 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02841390(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02841390

// auto_prepare_forward_028414a0: misc_prepare_forward with other addresses.
namespace twin_028414a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028414a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028414a0

// auto_prepare_forward_028415b0: misc_prepare_forward with other addresses.
namespace twin_028415b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028415b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028415b0

// auto_prepare_forward_028416c0: misc_prepare_forward with other addresses.
namespace twin_028416c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028416c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028416c0

// auto_prepare_forward_028417d0: misc_prepare_forward with other addresses.
namespace twin_028417d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028417d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028417d0

// auto_prepare_forward_028418e0: misc_prepare_forward with other addresses.
namespace twin_028418e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028418e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028418e0

// auto_prepare_forward_028419f0: misc_prepare_forward with other addresses.
namespace twin_028419f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028419f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028419f0

// auto_prepare_forward_02841b00: misc_prepare_forward with other addresses.
namespace twin_02841b00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02841b00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02841b00

// auto_prepare_forward_02841c10: misc_prepare_forward with other addresses.
namespace twin_02841c10 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02841c10(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02841c10

// auto_prepare_forward_02841d20: misc_prepare_forward with other addresses.
namespace twin_02841d20 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02841d20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02841d20

// auto_prepare_forward_02841e30: misc_prepare_forward with other addresses.
namespace twin_02841e30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02841e30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02841e30

// auto_prepare_forward_02842010: misc_prepare_forward with other addresses.
namespace twin_02842010 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02842010(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842010

// auto_prepare_forward_02842120: misc_prepare_forward with other addresses.
namespace twin_02842120 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02842120(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842120

// auto_prepare_forward_02842230: misc_prepare_forward with other addresses.
namespace twin_02842230 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02842230(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842230

// auto_prepare_forward_02842340: misc_prepare_forward with other addresses.
namespace twin_02842340 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02842340(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842340

// auto_prepare_forward_02842450: misc_prepare_forward with other addresses.
namespace twin_02842450 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02842450(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842450

// auto_prepare_forward_02842560: misc_prepare_forward with other addresses.
namespace twin_02842560 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02842560(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842560

// auto_prepare_forward_02842670: misc_prepare_forward with other addresses.
namespace twin_02842670 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x007164e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02842670(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842670
