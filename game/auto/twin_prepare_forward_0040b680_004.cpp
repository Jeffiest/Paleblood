// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_prepare_forward, in game/misc/prepare_forward.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

namespace misc {}

// auto_prepare_forward_028950d0: misc_prepare_forward with other addresses.
namespace twin_028950d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028950d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028950d0

// auto_prepare_forward_02895110: misc_prepare_forward with other addresses.
namespace twin_02895110 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895110(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895110

// auto_prepare_forward_02895150: misc_prepare_forward with other addresses.
namespace twin_02895150 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895150(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895150

// auto_prepare_forward_02895190: misc_prepare_forward with other addresses.
namespace twin_02895190 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895190(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895190

// auto_prepare_forward_02895300: misc_prepare_forward with other addresses.
namespace twin_02895300 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895300(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895300

// auto_prepare_forward_02895340: misc_prepare_forward with other addresses.
namespace twin_02895340 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x006fb970, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02895340(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895340

// auto_prepare_forward_028957c0: misc_prepare_forward with other addresses.
namespace twin_028957c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028957c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028957c0

// auto_prepare_forward_02895800: misc_prepare_forward with other addresses.
namespace twin_02895800 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895800(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895800

// auto_prepare_forward_02895840: misc_prepare_forward with other addresses.
namespace twin_02895840 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895840(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895840

// auto_prepare_forward_02895880: misc_prepare_forward with other addresses.
namespace twin_02895880 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895880(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895880

// auto_prepare_forward_02895a60: misc_prepare_forward with other addresses.
namespace twin_02895a60 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895a60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895a60

// auto_prepare_forward_02895b70: misc_prepare_forward with other addresses.
namespace twin_02895b70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895b70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895b70

// auto_prepare_forward_02895bb0: misc_prepare_forward with other addresses.
namespace twin_02895bb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895bb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895bb0

// auto_prepare_forward_02896d00: misc_prepare_forward with other addresses.
namespace twin_02896d00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02896d00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02896d00

// auto_prepare_forward_02896e10: misc_prepare_forward with other addresses.
namespace twin_02896e10 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x00737460, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02896e10(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02896e10

// auto_prepare_forward_028a1140: misc_prepare_forward with other addresses.
namespace twin_028a1140 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028a1140(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028a1140

// auto_prepare_forward_028a3370: misc_prepare_forward with other addresses.
namespace twin_028a3370 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028a3370(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028a3370

// auto_prepare_forward_028a33b0: misc_prepare_forward with other addresses.
namespace twin_028a33b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x028b66e0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028a33b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028a33b0

// auto_prepare_forward_028a36c0: misc_prepare_forward with other addresses.
namespace twin_028a36c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x028a3d40, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028a36c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028a36c0

// auto_prepare_forward_028a3700: misc_prepare_forward with other addresses.
namespace twin_028a3700 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028a3700(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028a3700

// auto_prepare_forward_028a3740: misc_prepare_forward with other addresses.
namespace twin_028a3740 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x028a3770, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028a3740(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028a3740

// auto_prepare_forward_028a46c0: misc_prepare_forward with other addresses.
namespace twin_028a46c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x028a3d40, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028a46c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028a46c0

// auto_prepare_forward_028b7e00: misc_prepare_forward with other addresses.
namespace twin_028b7e00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028b7e00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028b7e00

// auto_prepare_forward_028c3130: misc_prepare_forward with other addresses.
namespace twin_028c3130 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028c3130(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028c3130

// auto_prepare_forward_02df67e0: misc_prepare_forward with other addresses.
namespace twin_02df67e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02826fc0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02df67e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02df67e0

// auto_prepare_forward_02df7150: misc_prepare_forward with other addresses.
namespace twin_02df7150 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02df7180, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02df7150(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02df7150
