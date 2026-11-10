// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_base_delete_02242990, in game/misc/base_delete_02242990.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../loading/fios.h"
#include "../misc/base_object.h"

// auto_base_delete_00f6f510: misc_base_delete_02242990 with other addresses.
namespace twin_00f6f510 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_00f6f510(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_00f6f510

// auto_base_delete_00f70d90: misc_base_delete_02242990 with other addresses.
namespace twin_00f70d90 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_00f70d90(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_00f70d90

// auto_base_delete_00f70e40: misc_base_delete_02242990 with other addresses.
namespace twin_00f70e40 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_00f70e40(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_00f70e40

// auto_base_delete_00f70ef0: misc_base_delete_02242990 with other addresses.
namespace twin_00f70ef0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_00f70ef0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_00f70ef0

// auto_base_delete_00f70fa0: misc_base_delete_02242990 with other addresses.
namespace twin_00f70fa0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_00f70fa0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_00f70fa0

// auto_base_delete_021dbbc0: misc_base_delete_02242990 with other addresses.
namespace twin_021dbbc0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_021dbbc0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_021dbbc0

// auto_base_delete_021dbc80: misc_base_delete_02242990 with other addresses.
namespace twin_021dbc80 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_021dbc80(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_021dbc80

// auto_base_delete_02987a50: misc_base_delete_02242990 with other addresses.
namespace twin_02987a50 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02987a50(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02987a50

// auto_base_delete_02987b60: misc_base_delete_02242990 with other addresses.
namespace twin_02987b60 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02987b60(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02987b60

// auto_base_delete_02987c20: misc_base_delete_02242990 with other addresses.
namespace twin_02987c20 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02987c20(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02987c20

// auto_base_delete_029dab80: misc_base_delete_02242990 with other addresses.
namespace twin_029dab80 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_029dab80(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_029dab80

// auto_base_delete_029dac30: misc_base_delete_02242990 with other addresses.
namespace twin_029dac30 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_029dac30(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_029dac30

// auto_base_delete_029dace0: misc_base_delete_02242990 with other addresses.
namespace twin_029dace0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_029dace0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_029dace0

// auto_base_delete_02a03d80: misc_base_delete_02242990 with other addresses.
namespace twin_02a03d80 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a03d80(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a03d80

// auto_base_delete_02a04ae0: misc_base_delete_02242990 with other addresses.
namespace twin_02a04ae0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a04ae0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a04ae0

// auto_base_delete_02a04d80: misc_base_delete_02242990 with other addresses.
namespace twin_02a04d80 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a04d80(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a04d80

// auto_base_delete_02a04e30: misc_base_delete_02242990 with other addresses.
namespace twin_02a04e30 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a04e30(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a04e30

// auto_base_delete_02a06170: misc_base_delete_02242990 with other addresses.
namespace twin_02a06170 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a06170(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a06170

// auto_base_delete_02a06a00: misc_base_delete_02242990 with other addresses.
namespace twin_02a06a00 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a06a00(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a06a00

// auto_base_delete_02a06ac0: misc_base_delete_02242990 with other addresses.
namespace twin_02a06ac0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a06ac0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a06ac0

// auto_base_delete_02a06b70: misc_base_delete_02242990 with other addresses.
namespace twin_02a06b70 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a06b70(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a06b70

// auto_base_delete_02a072c0: misc_base_delete_02242990 with other addresses.
namespace twin_02a072c0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a072c0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a072c0

// auto_base_delete_02a07520: misc_base_delete_02242990 with other addresses.
namespace twin_02a07520 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a07520(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a07520

// auto_base_delete_02a075d0: misc_base_delete_02242990 with other addresses.
namespace twin_02a075d0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a075d0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a075d0

// auto_base_delete_02a07690: misc_base_delete_02242990 with other addresses.
namespace twin_02a07690 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a07690(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a07690

// auto_base_delete_02a094f0: misc_base_delete_02242990 with other addresses.
namespace twin_02a094f0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a094f0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a094f0

// auto_base_delete_02a0b990: misc_base_delete_02242990 with other addresses.
namespace twin_02a0b990 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0b990(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0b990

// auto_base_delete_02a0c0c0: misc_base_delete_02242990 with other addresses.
namespace twin_02a0c0c0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0c0c0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0c0c0

// auto_base_delete_02a0c170: misc_base_delete_02242990 with other addresses.
namespace twin_02a0c170 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0c170(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0c170

// auto_base_delete_02a0c220: misc_base_delete_02242990 with other addresses.
namespace twin_02a0c220 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0c220(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0c220

// auto_base_delete_02a0c2d0: misc_base_delete_02242990 with other addresses.
namespace twin_02a0c2d0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0c2d0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0c2d0

// auto_base_delete_02a0d190: misc_base_delete_02242990 with other addresses.
namespace twin_02a0d190 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0d190(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0d190

// auto_base_delete_02a0db40: misc_base_delete_02242990 with other addresses.
namespace twin_02a0db40 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0db40(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0db40

// auto_base_delete_02a0dbf0: misc_base_delete_02242990 with other addresses.
namespace twin_02a0dbf0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0dbf0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0dbf0

// auto_base_delete_02a0dd70: misc_base_delete_02242990 with other addresses.
namespace twin_02a0dd70 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0dd70(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0dd70

// auto_base_delete_02a0e370: misc_base_delete_02242990 with other addresses.
namespace twin_02a0e370 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02a0e370(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02a0e370

// auto_base_delete_02e17230: misc_base_delete_02242990 with other addresses.
namespace twin_02e17230 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02e17230(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02e17230

// auto_base_delete_02e172e0: misc_base_delete_02242990 with other addresses.
namespace twin_02e172e0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02e172e0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02e172e0

// auto_base_delete_02e173a0: misc_base_delete_02242990 with other addresses.
namespace twin_02e173a0 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02e173a0(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02e173a0

// auto_base_delete_02e17550: misc_base_delete_02242990 with other addresses.
namespace twin_02e17550 {

namespace {

/** The thread allocator's sized free slot at 0x18. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    void (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/** The size of a base object, which the sized free is given. */
constexpr uint32_t base_object_size = 0x28;

}  // namespace

/**
 *
 * Deleting destructor of a base object: stores the base class's vtable address point, then frees the
 * object through the thread's allocator with its size, as a tail call. Nothing is returned.
 *
 * A null object is not freed.
 *
 */
extern "C" void bb_auto_base_delete_02e17550(misc::BaseObject *self)
{
    misc::base_init(self);
    if (self == nullptr) return;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, self, base_object_size);
}

}  // namespace twin_02e17550
