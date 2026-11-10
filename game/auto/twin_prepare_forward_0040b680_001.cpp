// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_prepare_forward, in game/misc/prepare_forward.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

namespace misc {}

// auto_prepare_forward_00407200: misc_prepare_forward with other addresses.
namespace twin_00407200 {
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

RT_ORIGINAL(0x00407270, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00407200(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00407200

// auto_prepare_forward_00409540: misc_prepare_forward with other addresses.
namespace twin_00409540 {
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

RT_ORIGINAL(0x00409570, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00409540(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00409540

// auto_prepare_forward_0040cfd0: misc_prepare_forward with other addresses.
namespace twin_0040cfd0 {
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

RT_ORIGINAL(0x0040d000, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0040cfd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0040cfd0

// auto_prepare_forward_0040d820: misc_prepare_forward with other addresses.
namespace twin_0040d820 {
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

RT_ORIGINAL(0x0040d890, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0040d820(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0040d820

// auto_prepare_forward_00411680: misc_prepare_forward with other addresses.
namespace twin_00411680 {
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

RT_ORIGINAL(0x00411730, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00411680(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00411680

// auto_prepare_forward_00415af0: misc_prepare_forward with other addresses.
namespace twin_00415af0 {
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

RT_ORIGINAL(0x00415b20, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00415af0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00415af0

// auto_prepare_forward_00419190: misc_prepare_forward with other addresses.
namespace twin_00419190 {
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

RT_ORIGINAL(0x00419200, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00419190(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00419190

// auto_prepare_forward_00419700: misc_prepare_forward with other addresses.
namespace twin_00419700 {
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

RT_ORIGINAL(0x00419730, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00419700(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00419700

// auto_prepare_forward_0041a7d0: misc_prepare_forward with other addresses.
namespace twin_0041a7d0 {
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

RT_ORIGINAL(0x0041a800, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0041a7d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0041a7d0

// auto_prepare_forward_0041de70: misc_prepare_forward with other addresses.
namespace twin_0041de70 {
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

RT_ORIGINAL(0x0041dee0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0041de70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0041de70

// auto_prepare_forward_0042eac0: misc_prepare_forward with other addresses.
namespace twin_0042eac0 {
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

RT_ORIGINAL(0x0042eaf0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0042eac0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0042eac0

// auto_prepare_forward_0042ef90: misc_prepare_forward with other addresses.
namespace twin_0042ef90 {
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

RT_ORIGINAL(0x0042efc0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0042ef90(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0042ef90

// auto_prepare_forward_00432180: misc_prepare_forward with other addresses.
namespace twin_00432180 {
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

RT_ORIGINAL(0x004321b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00432180(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00432180

// auto_prepare_forward_004338d0: misc_prepare_forward with other addresses.
namespace twin_004338d0 {
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

RT_ORIGINAL(0x00433940, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004338d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004338d0

// auto_prepare_forward_004344f0: misc_prepare_forward with other addresses.
namespace twin_004344f0 {
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

RT_ORIGINAL(0x00434520, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004344f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004344f0

// auto_prepare_forward_00437920: misc_prepare_forward with other addresses.
namespace twin_00437920 {
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

RT_ORIGINAL(0x00437950, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00437920(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00437920

// auto_prepare_forward_0043c910: misc_prepare_forward with other addresses.
namespace twin_0043c910 {
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

RT_ORIGINAL(0x0043c980, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0043c910(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0043c910

// auto_prepare_forward_004462c0: misc_prepare_forward with other addresses.
namespace twin_004462c0 {
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

RT_ORIGINAL(0x00446330, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004462c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004462c0

// auto_prepare_forward_0044f430: misc_prepare_forward with other addresses.
namespace twin_0044f430 {
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

RT_ORIGINAL(0x0044f460, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0044f430(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0044f430

// auto_prepare_forward_004535d0: misc_prepare_forward with other addresses.
namespace twin_004535d0 {
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

RT_ORIGINAL(0x00453600, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004535d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004535d0

// auto_prepare_forward_00462130: misc_prepare_forward with other addresses.
namespace twin_00462130 {
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

RT_ORIGINAL(0x004621a0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00462130(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00462130

// auto_prepare_forward_00462530: misc_prepare_forward with other addresses.
namespace twin_00462530 {
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

RT_ORIGINAL(0x004625a0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00462530(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00462530

// auto_prepare_forward_00462d20: misc_prepare_forward with other addresses.
namespace twin_00462d20 {
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

RT_ORIGINAL(0x00462d90, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00462d20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00462d20

// auto_prepare_forward_0046d060: misc_prepare_forward with other addresses.
namespace twin_0046d060 {
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

RT_ORIGINAL(0x0046d090, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0046d060(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0046d060

// auto_prepare_forward_00483800: misc_prepare_forward with other addresses.
namespace twin_00483800 {
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

RT_ORIGINAL(0x00483830, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00483800(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00483800

// auto_prepare_forward_00484140: misc_prepare_forward with other addresses.
namespace twin_00484140 {
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
extern "C" uint64_t bb_auto_prepare_forward_00484140(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00484140

// auto_prepare_forward_00485df0: misc_prepare_forward with other addresses.
namespace twin_00485df0 {
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

RT_ORIGINAL(0x00485e20, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00485df0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00485df0

// auto_prepare_forward_004867c0: misc_prepare_forward with other addresses.
namespace twin_004867c0 {
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

RT_ORIGINAL(0x004867f0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004867c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004867c0

// auto_prepare_forward_0048bcf0: misc_prepare_forward with other addresses.
namespace twin_0048bcf0 {
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

RT_ORIGINAL(0x0048bd20, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0048bcf0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0048bcf0

// auto_prepare_forward_004917c0: misc_prepare_forward with other addresses.
namespace twin_004917c0 {
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
extern "C" uint64_t bb_auto_prepare_forward_004917c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004917c0

// auto_prepare_forward_00491c60: misc_prepare_forward with other addresses.
namespace twin_00491c60 {
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

RT_ORIGINAL(0x00491c90, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00491c60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00491c60

// auto_prepare_forward_004946d0: misc_prepare_forward with other addresses.
namespace twin_004946d0 {
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

RT_ORIGINAL(0x00494740, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004946d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004946d0

// auto_prepare_forward_0049ff30: misc_prepare_forward with other addresses.
namespace twin_0049ff30 {
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

RT_ORIGINAL(0x0049ff60, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0049ff30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0049ff30

// auto_prepare_forward_004a1140: misc_prepare_forward with other addresses.
namespace twin_004a1140 {
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

RT_ORIGINAL(0x004a11b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004a1140(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004a1140

// auto_prepare_forward_004a9160: misc_prepare_forward with other addresses.
namespace twin_004a9160 {
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

RT_ORIGINAL(0x004a91d0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004a9160(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004a9160

// auto_prepare_forward_004aa020: misc_prepare_forward with other addresses.
namespace twin_004aa020 {
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

RT_ORIGINAL(0x004aa090, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004aa020(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004aa020

// auto_prepare_forward_004aaac0: misc_prepare_forward with other addresses.
namespace twin_004aaac0 {
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

RT_ORIGINAL(0x004aab30, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004aaac0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004aaac0

// auto_prepare_forward_004ab8b0: misc_prepare_forward with other addresses.
namespace twin_004ab8b0 {
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

RT_ORIGINAL(0x004ab920, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004ab8b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004ab8b0

// auto_prepare_forward_004b5120: misc_prepare_forward with other addresses.
namespace twin_004b5120 {
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

RT_ORIGINAL(0x004b5190, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004b5120(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004b5120

// auto_prepare_forward_004c5ab0: misc_prepare_forward with other addresses.
namespace twin_004c5ab0 {
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

RT_ORIGINAL(0x004c5ae0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004c5ab0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004c5ab0

// auto_prepare_forward_004d9f80: misc_prepare_forward with other addresses.
namespace twin_004d9f80 {
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

RT_ORIGINAL(0x004d9fb0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004d9f80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004d9f80

// auto_prepare_forward_004dd050: misc_prepare_forward with other addresses.
namespace twin_004dd050 {
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

RT_ORIGINAL(0x004dd080, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004dd050(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004dd050

// auto_prepare_forward_004e6550: misc_prepare_forward with other addresses.
namespace twin_004e6550 {
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
extern "C" uint64_t bb_auto_prepare_forward_004e6550(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004e6550

// auto_prepare_forward_004ea320: misc_prepare_forward with other addresses.
namespace twin_004ea320 {
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

RT_ORIGINAL(0x004ea350, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004ea320(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004ea320

// auto_prepare_forward_004ee080: misc_prepare_forward with other addresses.
namespace twin_004ee080 {
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

RT_ORIGINAL(0x004ee0b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004ee080(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004ee080

// auto_prepare_forward_004ee790: misc_prepare_forward with other addresses.
namespace twin_004ee790 {
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

RT_ORIGINAL(0x004ee7c0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004ee790(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004ee790

// auto_prepare_forward_004f0660: misc_prepare_forward with other addresses.
namespace twin_004f0660 {
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

RT_ORIGINAL(0x004f0690, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004f0660(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004f0660

// auto_prepare_forward_004f3330: misc_prepare_forward with other addresses.
namespace twin_004f3330 {
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

RT_ORIGINAL(0x004f3360, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004f3330(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004f3330

// auto_prepare_forward_004f7130: misc_prepare_forward with other addresses.
namespace twin_004f7130 {
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

RT_ORIGINAL(0x004f71a0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004f7130(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004f7130

// auto_prepare_forward_004f9c80: misc_prepare_forward with other addresses.
namespace twin_004f9c80 {
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

RT_ORIGINAL(0x004f9cb0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004f9c80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004f9c80

// auto_prepare_forward_004fb970: misc_prepare_forward with other addresses.
namespace twin_004fb970 {
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

RT_ORIGINAL(0x004fb9a0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004fb970(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004fb970

// auto_prepare_forward_004ffc60: misc_prepare_forward with other addresses.
namespace twin_004ffc60 {
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

RT_ORIGINAL(0x004ffc90, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_004ffc60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_004ffc60

// auto_prepare_forward_005023c0: misc_prepare_forward with other addresses.
namespace twin_005023c0 {
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

RT_ORIGINAL(0x005023f0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_005023c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005023c0

// auto_prepare_forward_00507cd0: misc_prepare_forward with other addresses.
namespace twin_00507cd0 {
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

RT_ORIGINAL(0x00507d40, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00507cd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00507cd0

// auto_prepare_forward_0050b1d0: misc_prepare_forward with other addresses.
namespace twin_0050b1d0 {
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

RT_ORIGINAL(0x0050b200, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0050b1d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0050b1d0

// auto_prepare_forward_00512670: misc_prepare_forward with other addresses.
namespace twin_00512670 {
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

RT_ORIGINAL(0x00512720, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00512670(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00512670

// auto_prepare_forward_0051e590: misc_prepare_forward with other addresses.
namespace twin_0051e590 {
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

RT_ORIGINAL(0x0051e600, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0051e590(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0051e590

// auto_prepare_forward_0052c9f0: misc_prepare_forward with other addresses.
namespace twin_0052c9f0 {
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

RT_ORIGINAL(0x0052ca60, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0052c9f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0052c9f0

// auto_prepare_forward_00536af0: misc_prepare_forward with other addresses.
namespace twin_00536af0 {
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

RT_ORIGINAL(0x00536b20, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00536af0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00536af0

// auto_prepare_forward_005406f0: misc_prepare_forward with other addresses.
namespace twin_005406f0 {
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

RT_ORIGINAL(0x00540720, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_005406f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005406f0

// auto_prepare_forward_00551440: misc_prepare_forward with other addresses.
namespace twin_00551440 {
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

RT_ORIGINAL(0x00551470, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00551440(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00551440

// auto_prepare_forward_00552c00: misc_prepare_forward with other addresses.
namespace twin_00552c00 {
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

RT_ORIGINAL(0x00552c30, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00552c00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00552c00

// auto_prepare_forward_00569550: misc_prepare_forward with other addresses.
namespace twin_00569550 {
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

RT_ORIGINAL(0x005695c0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00569550(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00569550

// auto_prepare_forward_005a7200: misc_prepare_forward with other addresses.
namespace twin_005a7200 {
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
extern "C" uint64_t bb_auto_prepare_forward_005a7200(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005a7200

// auto_prepare_forward_005a74f0: misc_prepare_forward with other addresses.
namespace twin_005a74f0 {
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
extern "C" uint64_t bb_auto_prepare_forward_005a74f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005a74f0

// auto_prepare_forward_005bd5b0: misc_prepare_forward with other addresses.
namespace twin_005bd5b0 {
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

RT_ORIGINAL(0x005bd5e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_005bd5b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005bd5b0

// auto_prepare_forward_005c8400: misc_prepare_forward with other addresses.
namespace twin_005c8400 {
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
extern "C" uint64_t bb_auto_prepare_forward_005c8400(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005c8400

// auto_prepare_forward_005e2330: misc_prepare_forward with other addresses.
namespace twin_005e2330 {
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

RT_ORIGINAL(0x005e23a0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_005e2330(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005e2330

// auto_prepare_forward_005f2980: misc_prepare_forward with other addresses.
namespace twin_005f2980 {
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

RT_ORIGINAL(0x005f29b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_005f2980(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005f2980

// auto_prepare_forward_005fb920: misc_prepare_forward with other addresses.
namespace twin_005fb920 {
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

RT_ORIGINAL(0x005fb950, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_005fb920(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005fb920

// auto_prepare_forward_005ffc30: misc_prepare_forward with other addresses.
namespace twin_005ffc30 {
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
extern "C" uint64_t bb_auto_prepare_forward_005ffc30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_005ffc30

// auto_prepare_forward_0060a080: misc_prepare_forward with other addresses.
namespace twin_0060a080 {
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

RT_ORIGINAL(0x0060a0b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0060a080(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0060a080

// auto_prepare_forward_00610e60: misc_prepare_forward with other addresses.
namespace twin_00610e60 {
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

RT_ORIGINAL(0x00610e90, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00610e60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00610e60

// auto_prepare_forward_00617280: misc_prepare_forward with other addresses.
namespace twin_00617280 {
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
extern "C" uint64_t bb_auto_prepare_forward_00617280(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00617280

// auto_prepare_forward_006199e0: misc_prepare_forward with other addresses.
namespace twin_006199e0 {
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

RT_ORIGINAL(0x00619a10, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_006199e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006199e0

// auto_prepare_forward_0067c6b0: misc_prepare_forward with other addresses.
namespace twin_0067c6b0 {
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

RT_ORIGINAL(0x0067c6e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0067c6b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0067c6b0

// auto_prepare_forward_00696310: misc_prepare_forward with other addresses.
namespace twin_00696310 {
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

RT_ORIGINAL(0x00696340, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00696310(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00696310

// auto_prepare_forward_0069d260: misc_prepare_forward with other addresses.
namespace twin_0069d260 {
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

RT_ORIGINAL(0x0069d290, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0069d260(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0069d260

// auto_prepare_forward_006a6dd0: misc_prepare_forward with other addresses.
namespace twin_006a6dd0 {
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

RT_ORIGINAL(0x006a6e00, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_006a6dd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006a6dd0

// auto_prepare_forward_006ad270: misc_prepare_forward with other addresses.
namespace twin_006ad270 {
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
extern "C" uint64_t bb_auto_prepare_forward_006ad270(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006ad270

// auto_prepare_forward_006ad2f0: misc_prepare_forward with other addresses.
namespace twin_006ad2f0 {
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
extern "C" uint64_t bb_auto_prepare_forward_006ad2f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006ad2f0

// auto_prepare_forward_006ae0e0: misc_prepare_forward with other addresses.
namespace twin_006ae0e0 {
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

RT_ORIGINAL(0x006ae110, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_006ae0e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006ae0e0

// auto_prepare_forward_006ae720: misc_prepare_forward with other addresses.
namespace twin_006ae720 {
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
extern "C" uint64_t bb_auto_prepare_forward_006ae720(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006ae720

// auto_prepare_forward_006b2170: misc_prepare_forward with other addresses.
namespace twin_006b2170 {
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
extern "C" uint64_t bb_auto_prepare_forward_006b2170(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006b2170

// auto_prepare_forward_006b2460: misc_prepare_forward with other addresses.
namespace twin_006b2460 {
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
extern "C" uint64_t bb_auto_prepare_forward_006b2460(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006b2460

// auto_prepare_forward_006d0a80: misc_prepare_forward with other addresses.
namespace twin_006d0a80 {
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

RT_ORIGINAL(0x006d0b30, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_006d0a80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006d0a80

// auto_prepare_forward_006dc590: misc_prepare_forward with other addresses.
namespace twin_006dc590 {
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

RT_ORIGINAL(0x006dc640, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_006dc590(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006dc590

// auto_prepare_forward_006f0110: misc_prepare_forward with other addresses.
namespace twin_006f0110 {
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

RT_ORIGINAL(0x006f0140, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_006f0110(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006f0110

// auto_prepare_forward_006fa810: misc_prepare_forward with other addresses.
namespace twin_006fa810 {
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
extern "C" uint64_t bb_auto_prepare_forward_006fa810(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006fa810

// auto_prepare_forward_006feb90: misc_prepare_forward with other addresses.
namespace twin_006feb90 {
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

RT_ORIGINAL(0x006febc0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_006feb90(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006feb90

// auto_prepare_forward_006ff430: misc_prepare_forward with other addresses.
namespace twin_006ff430 {
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

RT_ORIGINAL(0x006ff520, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_006ff430(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_006ff430

// auto_prepare_forward_00709550: misc_prepare_forward with other addresses.
namespace twin_00709550 {
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

RT_ORIGINAL(0x00709580, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00709550(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00709550

// auto_prepare_forward_00712d00: misc_prepare_forward with other addresses.
namespace twin_00712d00 {
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

RT_ORIGINAL(0x006fbea0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00712d00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00712d00

// auto_prepare_forward_007164b0: misc_prepare_forward with other addresses.
namespace twin_007164b0 {
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
extern "C" uint64_t bb_auto_prepare_forward_007164b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_007164b0

// auto_prepare_forward_0071a000: misc_prepare_forward with other addresses.
namespace twin_0071a000 {
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

RT_ORIGINAL(0x0071a030, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0071a000(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0071a000

// auto_prepare_forward_0071f9e0: misc_prepare_forward with other addresses.
namespace twin_0071f9e0 {
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

RT_ORIGINAL(0x006f92f0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0071f9e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0071f9e0

// auto_prepare_forward_007282a0: misc_prepare_forward with other addresses.
namespace twin_007282a0 {
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

RT_ORIGINAL(0x007282d0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_007282a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_007282a0

// auto_prepare_forward_00728d40: misc_prepare_forward with other addresses.
namespace twin_00728d40 {
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

RT_ORIGINAL(0x00728d70, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00728d40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00728d40

// auto_prepare_forward_0072ad20: misc_prepare_forward with other addresses.
namespace twin_0072ad20 {
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

RT_ORIGINAL(0x006f0140, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0072ad20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0072ad20

// auto_prepare_forward_0072cb00: misc_prepare_forward with other addresses.
namespace twin_0072cb00 {
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

RT_ORIGINAL(0x0072cb30, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0072cb00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0072cb00

// auto_prepare_forward_0072d180: misc_prepare_forward with other addresses.
namespace twin_0072d180 {
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

RT_ORIGINAL(0x0072d1b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0072d180(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0072d180

// auto_prepare_forward_00732e10: misc_prepare_forward with other addresses.
namespace twin_00732e10 {
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

RT_ORIGINAL(0x00732e40, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_00732e10(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_00732e10

// auto_prepare_forward_0073a3d0: misc_prepare_forward with other addresses.
namespace twin_0073a3d0 {
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

RT_ORIGINAL(0x0073a440, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0073a3d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0073a3d0

// auto_prepare_forward_0073cdd0: misc_prepare_forward with other addresses.
namespace twin_0073cdd0 {
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

RT_ORIGINAL(0x0073ce40, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0073cdd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0073cdd0

// auto_prepare_forward_007a1be0: misc_prepare_forward with other addresses.
namespace twin_007a1be0 {
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

RT_ORIGINAL(0x007a1c10, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_007a1be0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_007a1be0

// auto_prepare_forward_007a27c0: misc_prepare_forward with other addresses.
namespace twin_007a27c0 {
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

RT_ORIGINAL(0x007a27f0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_007a27c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_007a27c0

// auto_prepare_forward_007a2f80: misc_prepare_forward with other addresses.
namespace twin_007a2f80 {
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

RT_ORIGINAL(0x007a2ff0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_007a2f80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_007a2f80

// auto_prepare_forward_014aaff0: misc_prepare_forward with other addresses.
namespace twin_014aaff0 {
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

RT_ORIGINAL(0x014ab020, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_014aaff0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_014aaff0

// auto_prepare_forward_014ae450: misc_prepare_forward with other addresses.
namespace twin_014ae450 {
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

RT_ORIGINAL(0x014ae4c0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_014ae450(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_014ae450

// auto_prepare_forward_014b0e60: misc_prepare_forward with other addresses.
namespace twin_014b0e60 {
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

RT_ORIGINAL(0x014b0e90, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_014b0e60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_014b0e60

// auto_prepare_forward_0233fb60: misc_prepare_forward with other addresses.
namespace twin_0233fb60 {
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
extern "C" uint64_t bb_auto_prepare_forward_0233fb60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0233fb60

// auto_prepare_forward_02340a10: misc_prepare_forward with other addresses.
namespace twin_02340a10 {
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

RT_ORIGINAL(0x00454100, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02340a10(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02340a10

// auto_prepare_forward_02359b10: misc_prepare_forward with other addresses.
namespace twin_02359b10 {
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
extern "C" uint64_t bb_auto_prepare_forward_02359b10(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02359b10

// auto_prepare_forward_02788af0: misc_prepare_forward with other addresses.
namespace twin_02788af0 {
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

RT_ORIGINAL(0x02788a00, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02788af0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02788af0

// auto_prepare_forward_02788c00: misc_prepare_forward with other addresses.
namespace twin_02788c00 {
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
extern "C" uint64_t bb_auto_prepare_forward_02788c00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02788c00

// auto_prepare_forward_02789f70: misc_prepare_forward with other addresses.
namespace twin_02789f70 {
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

RT_ORIGINAL(0x02789fa0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02789f70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02789f70

// auto_prepare_forward_0278ad00: misc_prepare_forward with other addresses.
namespace twin_0278ad00 {
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
extern "C" uint64_t bb_auto_prepare_forward_0278ad00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0278ad00

// auto_prepare_forward_0278bdf0: misc_prepare_forward with other addresses.
namespace twin_0278bdf0 {
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
extern "C" uint64_t bb_auto_prepare_forward_0278bdf0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0278bdf0

// auto_prepare_forward_0278c090: misc_prepare_forward with other addresses.
namespace twin_0278c090 {
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
extern "C" uint64_t bb_auto_prepare_forward_0278c090(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0278c090

// auto_prepare_forward_0278c470: misc_prepare_forward with other addresses.
namespace twin_0278c470 {
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
extern "C" uint64_t bb_auto_prepare_forward_0278c470(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0278c470

// auto_prepare_forward_0278d2b0: misc_prepare_forward with other addresses.
namespace twin_0278d2b0 {
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

RT_ORIGINAL(0x0278d6b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0278d2b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0278d2b0

// auto_prepare_forward_0278d970: misc_prepare_forward with other addresses.
namespace twin_0278d970 {
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
extern "C" uint64_t bb_auto_prepare_forward_0278d970(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0278d970

// auto_prepare_forward_02798710: misc_prepare_forward with other addresses.
namespace twin_02798710 {
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

RT_ORIGINAL(0x02798620, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02798710(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02798710

// auto_prepare_forward_0279b720: misc_prepare_forward with other addresses.
namespace twin_0279b720 {
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
extern "C" uint64_t bb_auto_prepare_forward_0279b720(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0279b720

// auto_prepare_forward_0279b7c0: misc_prepare_forward with other addresses.
namespace twin_0279b7c0 {
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
extern "C" uint64_t bb_auto_prepare_forward_0279b7c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0279b7c0

// auto_prepare_forward_027a0220: misc_prepare_forward with other addresses.
namespace twin_027a0220 {
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

RT_ORIGINAL(0x0045a4a0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027a0220(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027a0220

// auto_prepare_forward_027a2010: misc_prepare_forward with other addresses.
namespace twin_027a2010 {
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

RT_ORIGINAL(0x027a2040, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027a2010(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027a2010

// auto_prepare_forward_027a2120: misc_prepare_forward with other addresses.
namespace twin_027a2120 {
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
extern "C" uint64_t bb_auto_prepare_forward_027a2120(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027a2120

// auto_prepare_forward_027a3100: misc_prepare_forward with other addresses.
namespace twin_027a3100 {
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
extern "C" uint64_t bb_auto_prepare_forward_027a3100(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027a3100

// auto_prepare_forward_027a3f20: misc_prepare_forward with other addresses.
namespace twin_027a3f20 {
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

RT_ORIGINAL(0x004692c0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027a3f20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027a3f20

// auto_prepare_forward_027a5cb0: misc_prepare_forward with other addresses.
namespace twin_027a5cb0 {
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

RT_ORIGINAL(0x004692c0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027a5cb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027a5cb0

// auto_prepare_forward_027a79d0: misc_prepare_forward with other addresses.
namespace twin_027a79d0 {
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

RT_ORIGINAL(0x027a83d0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027a79d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027a79d0

// auto_prepare_forward_027af6c0: misc_prepare_forward with other addresses.
namespace twin_027af6c0 {
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

RT_ORIGINAL(0x027a83d0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027af6c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027af6c0

// auto_prepare_forward_027b2b00: misc_prepare_forward with other addresses.
namespace twin_027b2b00 {
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
extern "C" uint64_t bb_auto_prepare_forward_027b2b00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027b2b00

// auto_prepare_forward_027b97a0: misc_prepare_forward with other addresses.
namespace twin_027b97a0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027b97a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027b97a0

// auto_prepare_forward_027bb600: misc_prepare_forward with other addresses.
namespace twin_027bb600 {
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
extern "C" uint64_t bb_auto_prepare_forward_027bb600(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027bb600

// auto_prepare_forward_027bb750: misc_prepare_forward with other addresses.
namespace twin_027bb750 {
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

RT_ORIGINAL(0x027bb690, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027bb750(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027bb750

// auto_prepare_forward_027bbc40: misc_prepare_forward with other addresses.
namespace twin_027bbc40 {
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
extern "C" uint64_t bb_auto_prepare_forward_027bbc40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027bbc40

// auto_prepare_forward_027bf1d0: misc_prepare_forward with other addresses.
namespace twin_027bf1d0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027bf1d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027bf1d0

// auto_prepare_forward_027bf910: misc_prepare_forward with other addresses.
namespace twin_027bf910 {
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
extern "C" uint64_t bb_auto_prepare_forward_027bf910(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027bf910

// auto_prepare_forward_027bf9f0: misc_prepare_forward with other addresses.
namespace twin_027bf9f0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027bf9f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027bf9f0

// auto_prepare_forward_027c0450: misc_prepare_forward with other addresses.
namespace twin_027c0450 {
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

RT_ORIGINAL(0x004ab920, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027c0450(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027c0450

// auto_prepare_forward_027c04e0: misc_prepare_forward with other addresses.
namespace twin_027c04e0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027c04e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027c04e0

// auto_prepare_forward_027c0570: misc_prepare_forward with other addresses.
namespace twin_027c0570 {
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
extern "C" uint64_t bb_auto_prepare_forward_027c0570(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027c0570

// auto_prepare_forward_027c2050: misc_prepare_forward with other addresses.
namespace twin_027c2050 {
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
extern "C" uint64_t bb_auto_prepare_forward_027c2050(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027c2050

// auto_prepare_forward_027c3fb0: misc_prepare_forward with other addresses.
namespace twin_027c3fb0 {
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

RT_ORIGINAL(0x027c3ed0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027c3fb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027c3fb0

// auto_prepare_forward_027cc070: misc_prepare_forward with other addresses.
namespace twin_027cc070 {
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
extern "C" uint64_t bb_auto_prepare_forward_027cc070(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027cc070

// auto_prepare_forward_027cc0b0: misc_prepare_forward with other addresses.
namespace twin_027cc0b0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027cc0b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027cc0b0

// auto_prepare_forward_027cc0f0: misc_prepare_forward with other addresses.
namespace twin_027cc0f0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027cc0f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027cc0f0

// auto_prepare_forward_027cc130: misc_prepare_forward with other addresses.
namespace twin_027cc130 {
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
extern "C" uint64_t bb_auto_prepare_forward_027cc130(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027cc130

// auto_prepare_forward_027cc460: misc_prepare_forward with other addresses.
namespace twin_027cc460 {
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
extern "C" uint64_t bb_auto_prepare_forward_027cc460(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027cc460

// auto_prepare_forward_027ccc90: misc_prepare_forward with other addresses.
namespace twin_027ccc90 {
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

RT_ORIGINAL(0x027cfd00, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027ccc90(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ccc90

// auto_prepare_forward_027d17b0: misc_prepare_forward with other addresses.
namespace twin_027d17b0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027d17b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027d17b0

// auto_prepare_forward_027d3a60: misc_prepare_forward with other addresses.
namespace twin_027d3a60 {
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
extern "C" uint64_t bb_auto_prepare_forward_027d3a60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027d3a60

// auto_prepare_forward_027ddaa0: misc_prepare_forward with other addresses.
namespace twin_027ddaa0 {
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

RT_ORIGINAL(0x027de0e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027ddaa0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ddaa0

// auto_prepare_forward_027ddb00: misc_prepare_forward with other addresses.
namespace twin_027ddb00 {
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

RT_ORIGINAL(0x027de010, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027ddb00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ddb00

// auto_prepare_forward_027ddb70: misc_prepare_forward with other addresses.
namespace twin_027ddb70 {
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

RT_ORIGINAL(0x027ddf40, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027ddb70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ddb70

// auto_prepare_forward_027ddbd0: misc_prepare_forward with other addresses.
namespace twin_027ddbd0 {
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

RT_ORIGINAL(0x027ddea0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027ddbd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ddbd0

// auto_prepare_forward_027ddc30: misc_prepare_forward with other addresses.
namespace twin_027ddc30 {
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

RT_ORIGINAL(0x027dde00, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027ddc30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ddc30

// auto_prepare_forward_027ddc90: misc_prepare_forward with other addresses.
namespace twin_027ddc90 {
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

RT_ORIGINAL(0x027ddd60, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027ddc90(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ddc90

// auto_prepare_forward_027deb30: misc_prepare_forward with other addresses.
namespace twin_027deb30 {
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

RT_ORIGINAL(0x0049ed40, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027deb30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027deb30

// auto_prepare_forward_027e0850: misc_prepare_forward with other addresses.
namespace twin_027e0850 {
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

RT_ORIGINAL(0x027e0760, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027e0850(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027e0850

// auto_prepare_forward_027e7a00: misc_prepare_forward with other addresses.
namespace twin_027e7a00 {
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

RT_ORIGINAL(0x027e7c90, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027e7a00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027e7a00

// auto_prepare_forward_027e7a40: misc_prepare_forward with other addresses.
namespace twin_027e7a40 {
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

RT_ORIGINAL(0x027e7bd0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027e7a40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027e7a40

// auto_prepare_forward_027e7a80: misc_prepare_forward with other addresses.
namespace twin_027e7a80 {
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

RT_ORIGINAL(0x027e7ab0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027e7a80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027e7a80

// auto_prepare_forward_027e9f70: misc_prepare_forward with other addresses.
namespace twin_027e9f70 {
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

RT_ORIGINAL(0x027e9fa0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027e9f70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027e9f70

// auto_prepare_forward_027ecc30: misc_prepare_forward with other addresses.
namespace twin_027ecc30 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ecc30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ecc30

// auto_prepare_forward_027ed480: misc_prepare_forward with other addresses.
namespace twin_027ed480 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ed480(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ed480

// auto_prepare_forward_027ed4e0: misc_prepare_forward with other addresses.
namespace twin_027ed4e0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ed4e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ed4e0

// auto_prepare_forward_027ed520: misc_prepare_forward with other addresses.
namespace twin_027ed520 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ed520(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ed520

// auto_prepare_forward_027ed560: misc_prepare_forward with other addresses.
namespace twin_027ed560 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ed560(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ed560

// auto_prepare_forward_027ed670: misc_prepare_forward with other addresses.
namespace twin_027ed670 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ed670(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ed670

// auto_prepare_forward_027ed780: misc_prepare_forward with other addresses.
namespace twin_027ed780 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ed780(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ed780

// auto_prepare_forward_027edbd0: misc_prepare_forward with other addresses.
namespace twin_027edbd0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027edbd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027edbd0

// auto_prepare_forward_027edce0: misc_prepare_forward with other addresses.
namespace twin_027edce0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027edce0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027edce0

// auto_prepare_forward_027eddf0: misc_prepare_forward with other addresses.
namespace twin_027eddf0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027eddf0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027eddf0

// auto_prepare_forward_027edf00: misc_prepare_forward with other addresses.
namespace twin_027edf00 {
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
extern "C" uint64_t bb_auto_prepare_forward_027edf00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027edf00

// auto_prepare_forward_027ee010: misc_prepare_forward with other addresses.
namespace twin_027ee010 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ee010(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ee010

// auto_prepare_forward_027ee340: misc_prepare_forward with other addresses.
namespace twin_027ee340 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ee340(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ee340

// auto_prepare_forward_027ee6c0: misc_prepare_forward with other addresses.
namespace twin_027ee6c0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ee6c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ee6c0

// auto_prepare_forward_027ee8a0: misc_prepare_forward with other addresses.
namespace twin_027ee8a0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ee8a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ee8a0

// auto_prepare_forward_027ee9b0: misc_prepare_forward with other addresses.
namespace twin_027ee9b0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ee9b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ee9b0

// auto_prepare_forward_027eeac0: misc_prepare_forward with other addresses.
namespace twin_027eeac0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027eeac0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027eeac0

// auto_prepare_forward_027eebd0: misc_prepare_forward with other addresses.
namespace twin_027eebd0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027eebd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027eebd0

// auto_prepare_forward_027ef030: misc_prepare_forward with other addresses.
namespace twin_027ef030 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef030(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef030

// auto_prepare_forward_027ef070: misc_prepare_forward with other addresses.
namespace twin_027ef070 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef070(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef070

// auto_prepare_forward_027ef0b0: misc_prepare_forward with other addresses.
namespace twin_027ef0b0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef0b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef0b0

// auto_prepare_forward_027ef0f0: misc_prepare_forward with other addresses.
namespace twin_027ef0f0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef0f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef0f0

// auto_prepare_forward_027ef140: misc_prepare_forward with other addresses.
namespace twin_027ef140 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef140(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef140

// auto_prepare_forward_027ef180: misc_prepare_forward with other addresses.
namespace twin_027ef180 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef180(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef180

// auto_prepare_forward_027ef290: misc_prepare_forward with other addresses.
namespace twin_027ef290 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef290(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef290

// auto_prepare_forward_027ef3a0: misc_prepare_forward with other addresses.
namespace twin_027ef3a0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef3a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef3a0

// auto_prepare_forward_027ef4b0: misc_prepare_forward with other addresses.
namespace twin_027ef4b0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef4b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef4b0

// auto_prepare_forward_027ef690: misc_prepare_forward with other addresses.
namespace twin_027ef690 {
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
extern "C" uint64_t bb_auto_prepare_forward_027ef690(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027ef690

// auto_prepare_forward_027efa30: misc_prepare_forward with other addresses.
namespace twin_027efa30 {
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
extern "C" uint64_t bb_auto_prepare_forward_027efa30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027efa30

// auto_prepare_forward_027efb40: misc_prepare_forward with other addresses.
namespace twin_027efb40 {
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

RT_ORIGINAL(0x027f0080, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_027efb40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027efb40

// auto_prepare_forward_027efb80: misc_prepare_forward with other addresses.
namespace twin_027efb80 {
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
extern "C" uint64_t bb_auto_prepare_forward_027efb80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027efb80

// auto_prepare_forward_027efc90: misc_prepare_forward with other addresses.
namespace twin_027efc90 {
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
extern "C" uint64_t bb_auto_prepare_forward_027efc90(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027efc90

// auto_prepare_forward_027efda0: misc_prepare_forward with other addresses.
namespace twin_027efda0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027efda0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027efda0

// auto_prepare_forward_027efeb0: misc_prepare_forward with other addresses.
namespace twin_027efeb0 {
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
extern "C" uint64_t bb_auto_prepare_forward_027efeb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_027efeb0
