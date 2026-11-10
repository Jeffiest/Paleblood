// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_prepare_forward, in game/misc/prepare_forward.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

namespace misc {}

// auto_prepare_forward_02842780: misc_prepare_forward with other addresses.
namespace twin_02842780 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02842780(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842780

// auto_prepare_forward_02842890: misc_prepare_forward with other addresses.
namespace twin_02842890 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02842890(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842890

// auto_prepare_forward_028429a0: misc_prepare_forward with other addresses.
namespace twin_028429a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028429a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028429a0

// auto_prepare_forward_02842ab0: misc_prepare_forward with other addresses.
namespace twin_02842ab0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02842ab0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842ab0

// auto_prepare_forward_02842bc0: misc_prepare_forward with other addresses.
namespace twin_02842bc0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02842bc0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842bc0

// auto_prepare_forward_02842cd0: misc_prepare_forward with other addresses.
namespace twin_02842cd0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02842cd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842cd0

// auto_prepare_forward_02842de0: misc_prepare_forward with other addresses.
namespace twin_02842de0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02842de0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842de0

// auto_prepare_forward_02842ef0: misc_prepare_forward with other addresses.
namespace twin_02842ef0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02842ef0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02842ef0

// auto_prepare_forward_02843000: misc_prepare_forward with other addresses.
namespace twin_02843000 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02843000(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02843000

// auto_prepare_forward_02843110: misc_prepare_forward with other addresses.
namespace twin_02843110 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02843110(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02843110

// auto_prepare_forward_02843220: misc_prepare_forward with other addresses.
namespace twin_02843220 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02843220(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02843220

// auto_prepare_forward_02843330: misc_prepare_forward with other addresses.
namespace twin_02843330 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02843330(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02843330

// auto_prepare_forward_028441c0: misc_prepare_forward with other addresses.
namespace twin_028441c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028441c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028441c0

// auto_prepare_forward_02848990: misc_prepare_forward with other addresses.
namespace twin_02848990 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02848990(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848990

// auto_prepare_forward_028489d0: misc_prepare_forward with other addresses.
namespace twin_028489d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028489d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028489d0

// auto_prepare_forward_02848aa0: misc_prepare_forward with other addresses.
namespace twin_02848aa0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02848aa0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848aa0

// auto_prepare_forward_02848b70: misc_prepare_forward with other addresses.
namespace twin_02848b70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02848b70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848b70

// auto_prepare_forward_02848cb0: misc_prepare_forward with other addresses.
namespace twin_02848cb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02848cb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848cb0

// auto_prepare_forward_02848d80: misc_prepare_forward with other addresses.
namespace twin_02848d80 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02848d80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848d80

// auto_prepare_forward_02848e50: misc_prepare_forward with other addresses.
namespace twin_02848e50 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02848e50(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848e50

// auto_prepare_forward_02848e90: misc_prepare_forward with other addresses.
namespace twin_02848e90 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02849d20, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02848e90(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848e90

// auto_prepare_forward_02848ed0: misc_prepare_forward with other addresses.
namespace twin_02848ed0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02848ed0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848ed0

// auto_prepare_forward_02848f10: misc_prepare_forward with other addresses.
namespace twin_02848f10 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02849c30, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02848f10(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848f10

// auto_prepare_forward_02848f50: misc_prepare_forward with other addresses.
namespace twin_02848f50 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02848f50(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02848f50

// auto_prepare_forward_028491c0: misc_prepare_forward with other addresses.
namespace twin_028491c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028491c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028491c0

// auto_prepare_forward_028492d0: misc_prepare_forward with other addresses.
namespace twin_028492d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028492d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028492d0

// auto_prepare_forward_02849720: misc_prepare_forward with other addresses.
namespace twin_02849720 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02849720(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02849720

// auto_prepare_forward_02850d20: misc_prepare_forward with other addresses.
namespace twin_02850d20 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850d20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850d20

// auto_prepare_forward_02850d60: misc_prepare_forward with other addresses.
namespace twin_02850d60 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850d60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850d60

// auto_prepare_forward_02850da0: misc_prepare_forward with other addresses.
namespace twin_02850da0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850da0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850da0

// auto_prepare_forward_02850de0: misc_prepare_forward with other addresses.
namespace twin_02850de0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850de0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850de0

// auto_prepare_forward_02850e20: misc_prepare_forward with other addresses.
namespace twin_02850e20 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850e20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850e20

// auto_prepare_forward_02850e60: misc_prepare_forward with other addresses.
namespace twin_02850e60 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850e60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850e60

// auto_prepare_forward_02850ea0: misc_prepare_forward with other addresses.
namespace twin_02850ea0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850ea0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850ea0

// auto_prepare_forward_02850ee0: misc_prepare_forward with other addresses.
namespace twin_02850ee0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850ee0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850ee0

// auto_prepare_forward_02850f20: misc_prepare_forward with other addresses.
namespace twin_02850f20 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850f20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850f20

// auto_prepare_forward_02850f60: misc_prepare_forward with other addresses.
namespace twin_02850f60 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850f60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850f60

// auto_prepare_forward_02850fa0: misc_prepare_forward with other addresses.
namespace twin_02850fa0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850fa0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850fa0

// auto_prepare_forward_02850fe0: misc_prepare_forward with other addresses.
namespace twin_02850fe0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02850fe0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02850fe0

// auto_prepare_forward_02851020: misc_prepare_forward with other addresses.
namespace twin_02851020 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02851020(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02851020

// auto_prepare_forward_02851060: misc_prepare_forward with other addresses.
namespace twin_02851060 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02851060(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02851060

// auto_prepare_forward_028510a0: misc_prepare_forward with other addresses.
namespace twin_028510a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028510a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028510a0

// auto_prepare_forward_028510e0: misc_prepare_forward with other addresses.
namespace twin_028510e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028510e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028510e0

// auto_prepare_forward_028511f0: misc_prepare_forward with other addresses.
namespace twin_028511f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02851920, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028511f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028511f0

// auto_prepare_forward_02851570: misc_prepare_forward with other addresses.
namespace twin_02851570 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02851570(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02851570

// auto_prepare_forward_02851820: misc_prepare_forward with other addresses.
namespace twin_02851820 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02851820(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02851820

// auto_prepare_forward_02857d20: misc_prepare_forward with other addresses.
namespace twin_02857d20 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02857d20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02857d20

// auto_prepare_forward_02857e30: misc_prepare_forward with other addresses.
namespace twin_02857e30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02857e30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02857e30

// auto_prepare_forward_02857e70: misc_prepare_forward with other addresses.
namespace twin_02857e70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02857e70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02857e70

// auto_prepare_forward_02857eb0: misc_prepare_forward with other addresses.
namespace twin_02857eb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02857eb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02857eb0

// auto_prepare_forward_02857ef0: misc_prepare_forward with other addresses.
namespace twin_02857ef0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02857ef0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02857ef0

// auto_prepare_forward_02857f30: misc_prepare_forward with other addresses.
namespace twin_02857f30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02857f30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02857f30

// auto_prepare_forward_02858040: misc_prepare_forward with other addresses.
namespace twin_02858040 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02858040(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02858040

// auto_prepare_forward_02858110: misc_prepare_forward with other addresses.
namespace twin_02858110 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02858110(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02858110

// auto_prepare_forward_02858150: misc_prepare_forward with other addresses.
namespace twin_02858150 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02858150(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02858150

// auto_prepare_forward_02858190: misc_prepare_forward with other addresses.
namespace twin_02858190 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02858190(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02858190

// auto_prepare_forward_028581d0: misc_prepare_forward with other addresses.
namespace twin_028581d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028581d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028581d0

// auto_prepare_forward_028582e0: misc_prepare_forward with other addresses.
namespace twin_028582e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028582e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028582e0

// auto_prepare_forward_028583f0: misc_prepare_forward with other addresses.
namespace twin_028583f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028583f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028583f0

// auto_prepare_forward_02858590: misc_prepare_forward with other addresses.
namespace twin_02858590 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02858590(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02858590

// auto_prepare_forward_028586a0: misc_prepare_forward with other addresses.
namespace twin_028586a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028586a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028586a0

// auto_prepare_forward_028587b0: misc_prepare_forward with other addresses.
namespace twin_028587b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028587b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028587b0

// auto_prepare_forward_028588c0: misc_prepare_forward with other addresses.
namespace twin_028588c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028588c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028588c0

// auto_prepare_forward_028589d0: misc_prepare_forward with other addresses.
namespace twin_028589d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028589d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028589d0

// auto_prepare_forward_02858bb0: misc_prepare_forward with other addresses.
namespace twin_02858bb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02859360, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02858bb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02858bb0

// auto_prepare_forward_02858cc0: misc_prepare_forward with other addresses.
namespace twin_02858cc0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02858cc0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02858cc0

// auto_prepare_forward_02858ea0: misc_prepare_forward with other addresses.
namespace twin_02858ea0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02858ea0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02858ea0

// auto_prepare_forward_02859040: misc_prepare_forward with other addresses.
namespace twin_02859040 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02859040(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02859040

// auto_prepare_forward_02859150: misc_prepare_forward with other addresses.
namespace twin_02859150 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02859150(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02859150

// auto_prepare_forward_02859260: misc_prepare_forward with other addresses.
namespace twin_02859260 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02859260(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02859260

// auto_prepare_forward_0285a490: misc_prepare_forward with other addresses.
namespace twin_0285a490 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285a490(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285a490

// auto_prepare_forward_0285a4d0: misc_prepare_forward with other addresses.
namespace twin_0285a4d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285a4d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285a4d0

// auto_prepare_forward_0285a680: misc_prepare_forward with other addresses.
namespace twin_0285a680 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285a680(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285a680

// auto_prepare_forward_0285a6c0: misc_prepare_forward with other addresses.
namespace twin_0285a6c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285a6c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285a6c0

// auto_prepare_forward_0285a700: misc_prepare_forward with other addresses.
namespace twin_0285a700 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285a700(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285a700

// auto_prepare_forward_0285a740: misc_prepare_forward with other addresses.
namespace twin_0285a740 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285a740(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285a740

// auto_prepare_forward_0285a780: misc_prepare_forward with other addresses.
namespace twin_0285a780 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285a780(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285a780

// auto_prepare_forward_0285a890: misc_prepare_forward with other addresses.
namespace twin_0285a890 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x0285afc0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0285a890(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285a890

// auto_prepare_forward_0285a9a0: misc_prepare_forward with other addresses.
namespace twin_0285a9a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285a9a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285a9a0

// auto_prepare_forward_0285ace0: misc_prepare_forward with other addresses.
namespace twin_0285ace0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285ace0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285ace0

// auto_prepare_forward_0285adf0: misc_prepare_forward with other addresses.
namespace twin_0285adf0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285adf0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285adf0

// auto_prepare_forward_0285ecb0: misc_prepare_forward with other addresses.
namespace twin_0285ecb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02860dc0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0285ecb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285ecb0

// auto_prepare_forward_0285ecf0: misc_prepare_forward with other addresses.
namespace twin_0285ecf0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285ecf0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285ecf0

// auto_prepare_forward_0285ed30: misc_prepare_forward with other addresses.
namespace twin_0285ed30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285ed30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285ed30

// auto_prepare_forward_0285ee80: misc_prepare_forward with other addresses.
namespace twin_0285ee80 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285ee80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285ee80

// auto_prepare_forward_0285efd0: misc_prepare_forward with other addresses.
namespace twin_0285efd0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285efd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285efd0

// auto_prepare_forward_0285f0f0: misc_prepare_forward with other addresses.
namespace twin_0285f0f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285f0f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285f0f0

// auto_prepare_forward_0285f130: misc_prepare_forward with other addresses.
namespace twin_0285f130 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285f130(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285f130

// auto_prepare_forward_0285f170: misc_prepare_forward with other addresses.
namespace twin_0285f170 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285f170(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285f170

// auto_prepare_forward_0285f260: misc_prepare_forward with other addresses.
namespace twin_0285f260 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285f260(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285f260

// auto_prepare_forward_0285f2a0: misc_prepare_forward with other addresses.
namespace twin_0285f2a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285f2a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285f2a0

// auto_prepare_forward_0285f7c0: misc_prepare_forward with other addresses.
namespace twin_0285f7c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285f7c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285f7c0

// auto_prepare_forward_0285f8d0: misc_prepare_forward with other addresses.
namespace twin_0285f8d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285f8d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285f8d0

// auto_prepare_forward_0285fb80: misc_prepare_forward with other addresses.
namespace twin_0285fb80 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285fb80(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285fb80

// auto_prepare_forward_0285fe30: misc_prepare_forward with other addresses.
namespace twin_0285fe30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0285fe30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0285fe30

// auto_prepare_forward_028600e0: misc_prepare_forward with other addresses.
namespace twin_028600e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028600e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028600e0

// auto_prepare_forward_02861010: misc_prepare_forward with other addresses.
namespace twin_02861010 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02861010(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02861010

// auto_prepare_forward_02861050: misc_prepare_forward with other addresses.
namespace twin_02861050 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02861050(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02861050

// auto_prepare_forward_02862e00: misc_prepare_forward with other addresses.
namespace twin_02862e00 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02862e00(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02862e00

// auto_prepare_forward_02862f60: misc_prepare_forward with other addresses.
namespace twin_02862f60 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02862f60(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02862f60

// auto_prepare_forward_02862fa0: misc_prepare_forward with other addresses.
namespace twin_02862fa0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02862fa0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02862fa0

// auto_prepare_forward_02862fe0: misc_prepare_forward with other addresses.
namespace twin_02862fe0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02862fe0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02862fe0

// auto_prepare_forward_028630f0: misc_prepare_forward with other addresses.
namespace twin_028630f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028630f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028630f0

// auto_prepare_forward_02863200: misc_prepare_forward with other addresses.
namespace twin_02863200 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02863200(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02863200

// auto_prepare_forward_02863310: misc_prepare_forward with other addresses.
namespace twin_02863310 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02863310(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02863310

// auto_prepare_forward_028634f0: misc_prepare_forward with other addresses.
namespace twin_028634f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028634f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028634f0

// auto_prepare_forward_02863600: misc_prepare_forward with other addresses.
namespace twin_02863600 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02863600(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02863600

// auto_prepare_forward_02863640: misc_prepare_forward with other addresses.
namespace twin_02863640 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02863640(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02863640

// auto_prepare_forward_02863750: misc_prepare_forward with other addresses.
namespace twin_02863750 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02863750(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02863750

// auto_prepare_forward_02863860: misc_prepare_forward with other addresses.
namespace twin_02863860 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02863860(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02863860

// auto_prepare_forward_02868550: misc_prepare_forward with other addresses.
namespace twin_02868550 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868550(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868550

// auto_prepare_forward_02868590: misc_prepare_forward with other addresses.
namespace twin_02868590 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868590(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868590

// auto_prepare_forward_028686b0: misc_prepare_forward with other addresses.
namespace twin_028686b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028686b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028686b0

// auto_prepare_forward_028686f0: misc_prepare_forward with other addresses.
namespace twin_028686f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028686f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028686f0

// auto_prepare_forward_02868730: misc_prepare_forward with other addresses.
namespace twin_02868730 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02869cd0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02868730(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868730

// auto_prepare_forward_02868770: misc_prepare_forward with other addresses.
namespace twin_02868770 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868770(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868770

// auto_prepare_forward_028687b0: misc_prepare_forward with other addresses.
namespace twin_028687b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x00601a40, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028687b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028687b0

// auto_prepare_forward_028687f0: misc_prepare_forward with other addresses.
namespace twin_028687f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028687f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028687f0

// auto_prepare_forward_02868830: misc_prepare_forward with other addresses.
namespace twin_02868830 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868830(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868830

// auto_prepare_forward_02868870: misc_prepare_forward with other addresses.
namespace twin_02868870 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868870(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868870

// auto_prepare_forward_028688b0: misc_prepare_forward with other addresses.
namespace twin_028688b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028688b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028688b0

// auto_prepare_forward_028688f0: misc_prepare_forward with other addresses.
namespace twin_028688f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028688f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028688f0

// auto_prepare_forward_02868930: misc_prepare_forward with other addresses.
namespace twin_02868930 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868930(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868930

// auto_prepare_forward_02868b10: misc_prepare_forward with other addresses.
namespace twin_02868b10 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868b10(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868b10

// auto_prepare_forward_02868c20: misc_prepare_forward with other addresses.
namespace twin_02868c20 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868c20(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868c20

// auto_prepare_forward_02868d30: misc_prepare_forward with other addresses.
namespace twin_02868d30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868d30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868d30

// auto_prepare_forward_02868e40: misc_prepare_forward with other addresses.
namespace twin_02868e40 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868e40(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868e40

// auto_prepare_forward_02868f50: misc_prepare_forward with other addresses.
namespace twin_02868f50 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02868f50(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02868f50

// auto_prepare_forward_028691b0: misc_prepare_forward with other addresses.
namespace twin_028691b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028691b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028691b0

// auto_prepare_forward_028692c0: misc_prepare_forward with other addresses.
namespace twin_028692c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028692c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028692c0

// auto_prepare_forward_028693d0: misc_prepare_forward with other addresses.
namespace twin_028693d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028693d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028693d0

// auto_prepare_forward_028694e0: misc_prepare_forward with other addresses.
namespace twin_028694e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028694e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028694e0

// auto_prepare_forward_028695f0: misc_prepare_forward with other addresses.
namespace twin_028695f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028695f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028695f0

// auto_prepare_forward_028697d0: misc_prepare_forward with other addresses.
namespace twin_028697d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028697d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028697d0

// auto_prepare_forward_028699b0: misc_prepare_forward with other addresses.
namespace twin_028699b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028699b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028699b0

// auto_prepare_forward_0286c560: misc_prepare_forward with other addresses.
namespace twin_0286c560 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286c560(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286c560

// auto_prepare_forward_0286c5a0: misc_prepare_forward with other addresses.
namespace twin_0286c5a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286c5a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286c5a0

// auto_prepare_forward_0286c5e0: misc_prepare_forward with other addresses.
namespace twin_0286c5e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286c5e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286c5e0

// auto_prepare_forward_0286c620: misc_prepare_forward with other addresses.
namespace twin_0286c620 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286c620(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286c620

// auto_prepare_forward_0286c730: misc_prepare_forward with other addresses.
namespace twin_0286c730 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286c730(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286c730

// auto_prepare_forward_0286c910: misc_prepare_forward with other addresses.
namespace twin_0286c910 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286c910(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286c910

// auto_prepare_forward_0286cbc0: misc_prepare_forward with other addresses.
namespace twin_0286cbc0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286cbc0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286cbc0

// auto_prepare_forward_0286ccd0: misc_prepare_forward with other addresses.
namespace twin_0286ccd0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286ccd0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286ccd0

// auto_prepare_forward_0286cde0: misc_prepare_forward with other addresses.
namespace twin_0286cde0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286cde0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286cde0

// auto_prepare_forward_0286cef0: misc_prepare_forward with other addresses.
namespace twin_0286cef0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286cef0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286cef0

// auto_prepare_forward_0286d000: misc_prepare_forward with other addresses.
namespace twin_0286d000 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286d000(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286d000

// auto_prepare_forward_0286fe70: misc_prepare_forward with other addresses.
namespace twin_0286fe70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02871b40, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_0286fe70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286fe70

// auto_prepare_forward_0286feb0: misc_prepare_forward with other addresses.
namespace twin_0286feb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286feb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286feb0

// auto_prepare_forward_0286fef0: misc_prepare_forward with other addresses.
namespace twin_0286fef0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286fef0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286fef0

// auto_prepare_forward_0286ff30: misc_prepare_forward with other addresses.
namespace twin_0286ff30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286ff30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286ff30

// auto_prepare_forward_0286ff70: misc_prepare_forward with other addresses.
namespace twin_0286ff70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_0286ff70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_0286ff70

// auto_prepare_forward_02870040: misc_prepare_forward with other addresses.
namespace twin_02870040 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02870040(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02870040

// auto_prepare_forward_02870080: misc_prepare_forward with other addresses.
namespace twin_02870080 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02870080(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02870080

// auto_prepare_forward_02870260: misc_prepare_forward with other addresses.
namespace twin_02870260 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02870260(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02870260

// auto_prepare_forward_028831d0: misc_prepare_forward with other addresses.
namespace twin_028831d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028831d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028831d0

// auto_prepare_forward_02883360: misc_prepare_forward with other addresses.
namespace twin_02883360 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02883360(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02883360

// auto_prepare_forward_028833a0: misc_prepare_forward with other addresses.
namespace twin_028833a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028833a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028833a0

// auto_prepare_forward_028833e0: misc_prepare_forward with other addresses.
namespace twin_028833e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028833e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028833e0

// auto_prepare_forward_02883420: misc_prepare_forward with other addresses.
namespace twin_02883420 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02883420(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02883420

// auto_prepare_forward_02883460: misc_prepare_forward with other addresses.
namespace twin_02883460 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02883460(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02883460

// auto_prepare_forward_028834a0: misc_prepare_forward with other addresses.
namespace twin_028834a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028834a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028834a0

// auto_prepare_forward_028834e0: misc_prepare_forward with other addresses.
namespace twin_028834e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028834e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028834e0

// auto_prepare_forward_02883520: misc_prepare_forward with other addresses.
namespace twin_02883520 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02883520(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02883520

// auto_prepare_forward_02883560: misc_prepare_forward with other addresses.
namespace twin_02883560 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02883560(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02883560

// auto_prepare_forward_028835a0: misc_prepare_forward with other addresses.
namespace twin_028835a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028835a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028835a0

// auto_prepare_forward_02889080: misc_prepare_forward with other addresses.
namespace twin_02889080 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02889080(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02889080

// auto_prepare_forward_028890c0: misc_prepare_forward with other addresses.
namespace twin_028890c0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028890c0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028890c0

// auto_prepare_forward_02889100: misc_prepare_forward with other addresses.
namespace twin_02889100 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02889540, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02889100(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02889100

// auto_prepare_forward_02889210: misc_prepare_forward with other addresses.
namespace twin_02889210 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x02889420, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_02889210(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02889210

// auto_prepare_forward_02889320: misc_prepare_forward with other addresses.
namespace twin_02889320 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02889320(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02889320

// auto_prepare_forward_02893e10: misc_prepare_forward with other addresses.
namespace twin_02893e10 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02893e10(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02893e10

// auto_prepare_forward_02893f90: misc_prepare_forward with other addresses.
namespace twin_02893f90 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02893f90(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02893f90

// auto_prepare_forward_028940a0: misc_prepare_forward with other addresses.
namespace twin_028940a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x0289bb90, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_auto_prepare_forward_028940a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028940a0

// auto_prepare_forward_02894190: misc_prepare_forward with other addresses.
namespace twin_02894190 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894190(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894190

// auto_prepare_forward_028941d0: misc_prepare_forward with other addresses.
namespace twin_028941d0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028941d0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028941d0

// auto_prepare_forward_02894210: misc_prepare_forward with other addresses.
namespace twin_02894210 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894210(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894210

// auto_prepare_forward_02894250: misc_prepare_forward with other addresses.
namespace twin_02894250 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894250(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894250

// auto_prepare_forward_02894370: misc_prepare_forward with other addresses.
namespace twin_02894370 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894370(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894370

// auto_prepare_forward_028943b0: misc_prepare_forward with other addresses.
namespace twin_028943b0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028943b0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028943b0

// auto_prepare_forward_028943f0: misc_prepare_forward with other addresses.
namespace twin_028943f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028943f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028943f0

// auto_prepare_forward_02894500: misc_prepare_forward with other addresses.
namespace twin_02894500 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894500(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894500

// auto_prepare_forward_02894540: misc_prepare_forward with other addresses.
namespace twin_02894540 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894540(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894540

// auto_prepare_forward_02894650: misc_prepare_forward with other addresses.
namespace twin_02894650 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894650(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894650

// auto_prepare_forward_02894690: misc_prepare_forward with other addresses.
namespace twin_02894690 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894690(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894690

// auto_prepare_forward_028947a0: misc_prepare_forward with other addresses.
namespace twin_028947a0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028947a0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028947a0

// auto_prepare_forward_028947e0: misc_prepare_forward with other addresses.
namespace twin_028947e0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028947e0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028947e0

// auto_prepare_forward_028948f0: misc_prepare_forward with other addresses.
namespace twin_028948f0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_028948f0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_028948f0

// auto_prepare_forward_02894930: misc_prepare_forward with other addresses.
namespace twin_02894930 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894930(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894930

// auto_prepare_forward_02894af0: misc_prepare_forward with other addresses.
namespace twin_02894af0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894af0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894af0

// auto_prepare_forward_02894b30: misc_prepare_forward with other addresses.
namespace twin_02894b30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894b30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894b30

// auto_prepare_forward_02894b70: misc_prepare_forward with other addresses.
namespace twin_02894b70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894b70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894b70

// auto_prepare_forward_02894bb0: misc_prepare_forward with other addresses.
namespace twin_02894bb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894bb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894bb0

// auto_prepare_forward_02894bf0: misc_prepare_forward with other addresses.
namespace twin_02894bf0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894bf0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894bf0

// auto_prepare_forward_02894c30: misc_prepare_forward with other addresses.
namespace twin_02894c30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894c30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894c30

// auto_prepare_forward_02894c70: misc_prepare_forward with other addresses.
namespace twin_02894c70 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894c70(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894c70

// auto_prepare_forward_02894cb0: misc_prepare_forward with other addresses.
namespace twin_02894cb0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894cb0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894cb0

// auto_prepare_forward_02894cf0: misc_prepare_forward with other addresses.
namespace twin_02894cf0 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894cf0(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894cf0

// auto_prepare_forward_02894d30: misc_prepare_forward with other addresses.
namespace twin_02894d30 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02894d30(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02894d30

// auto_prepare_forward_02895050: misc_prepare_forward with other addresses.
namespace twin_02895050 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895050(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895050

// auto_prepare_forward_02895090: misc_prepare_forward with other addresses.
namespace twin_02895090 {
namespace misc { using namespace ::misc; }

// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.


namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
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
extern "C" uint64_t bb_auto_prepare_forward_02895090(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}

}  // namespace twin_02895090
