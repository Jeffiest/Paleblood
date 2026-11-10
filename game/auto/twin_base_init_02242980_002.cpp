// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_base_init_02242980, in game/misc/base_init_02242980.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/engine.h"
#include "runtime/original.h"

namespace misc {}

// auto_base_init_00e80ee0: misc_base_init_02242980 with other addresses.
namespace twin_00e80ee0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05698600, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00e80ee0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00e80ee0

// auto_base_init_00e81ce0: misc_base_init_02242980 with other addresses.
namespace twin_00e81ce0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056991e0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00e81ce0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00e81ce0

// auto_base_init_00e9e8e0: misc_base_init_02242980 with other addresses.
namespace twin_00e9e8e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a10f0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00e9e8e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00e9e8e0

// auto_base_init_00eb0730: misc_base_init_02242980 with other addresses.
namespace twin_00eb0730 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a2660, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb0730(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb0730

// auto_base_init_00eb6860: misc_base_init_02242980 with other addresses.
namespace twin_00eb6860 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a4880, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6860(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6860

// auto_base_init_00eb6890: misc_base_init_02242980 with other addresses.
namespace twin_00eb6890 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a4840, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6890(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6890

// auto_base_init_00eb6900: misc_base_init_02242980 with other addresses.
namespace twin_00eb6900 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a1ad0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6900(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6900

// auto_base_init_00eb6930: misc_base_init_02242980 with other addresses.
namespace twin_00eb6930 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a19d0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6930(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6930

// auto_base_init_00eb69c0: misc_base_init_02242980 with other addresses.
namespace twin_00eb69c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a1b10, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb69c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb69c0

// auto_base_init_00eb69f0: misc_base_init_02242980 with other addresses.
namespace twin_00eb69f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a4800, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb69f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb69f0

// auto_base_init_00eb6aa0: misc_base_init_02242980 with other addresses.
namespace twin_00eb6aa0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a47c0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6aa0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6aa0

// auto_base_init_00eb6ad0: misc_base_init_02242980 with other addresses.
namespace twin_00eb6ad0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a1b90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6ad0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6ad0

// auto_base_init_00eb6b00: misc_base_init_02242980 with other addresses.
namespace twin_00eb6b00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a1950, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6b00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6b00

// auto_base_init_00eb6b30: misc_base_init_02242980 with other addresses.
namespace twin_00eb6b30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a1de0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6b30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6b30

// auto_base_init_00eb6b60: misc_base_init_02242980 with other addresses.
namespace twin_00eb6b60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a1a10, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6b60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6b60

// auto_base_init_00eb6bd0: misc_base_init_02242980 with other addresses.
namespace twin_00eb6bd0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a1bd0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6bd0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6bd0

// auto_base_init_00eb6c00: misc_base_init_02242980 with other addresses.
namespace twin_00eb6c00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a4780, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6c00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6c00

// auto_base_init_00eb6c30: misc_base_init_02242980 with other addresses.
namespace twin_00eb6c30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a4740, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6c30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6c30

// auto_base_init_00eb6c60: misc_base_init_02242980 with other addresses.
namespace twin_00eb6c60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a4700, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6c60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6c60

// auto_base_init_00eb6c90: misc_base_init_02242980 with other addresses.
namespace twin_00eb6c90 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a46c0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6c90(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6c90

// auto_base_init_00eb6d20: misc_base_init_02242980 with other addresses.
namespace twin_00eb6d20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a4640, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6d20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6d20

// auto_base_init_00eb6d90: misc_base_init_02242980 with other addresses.
namespace twin_00eb6d90 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a45c0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6d90(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6d90

// auto_base_init_00eb6dc0: misc_base_init_02242980 with other addresses.
namespace twin_00eb6dc0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a1a90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb6dc0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb6dc0

// auto_base_init_00eb8960: misc_base_init_02242980 with other addresses.
namespace twin_00eb8960 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a49e0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eb8960(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eb8960

// auto_base_init_00ed1ea0: misc_base_init_02242980 with other addresses.
namespace twin_00ed1ea0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a6910, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00ed1ea0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ed1ea0

// auto_base_init_00ee6f30: misc_base_init_02242980 with other addresses.
namespace twin_00ee6f30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a82d0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00ee6f30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ee6f30

// auto_base_init_00eeeb90: misc_base_init_02242980 with other addresses.
namespace twin_00eeeb90 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a8320, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eeeb90(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eeeb90

// auto_base_init_00eeebc0: misc_base_init_02242980 with other addresses.
namespace twin_00eeebc0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a8520, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eeebc0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eeebc0

// auto_base_init_00eeec50: misc_base_init_02242980 with other addresses.
namespace twin_00eeec50 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a8370, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00eeec50(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00eeec50

// auto_base_init_00efeea0: misc_base_init_02242980 with other addresses.
namespace twin_00efeea0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a8840, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00efeea0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00efeea0

// auto_base_init_00f211c0: misc_base_init_02242980 with other addresses.
namespace twin_00f211c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056aa960, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f211c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f211c0

// auto_base_init_00f24f10: misc_base_init_02242980 with other addresses.
namespace twin_00f24f10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a9040, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f24f10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f24f10

// auto_base_init_00f25000: misc_base_init_02242980 with other addresses.
namespace twin_00f25000 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b1d80, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f25000(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f25000

// auto_base_init_00f25030: misc_base_init_02242980 with other addresses.
namespace twin_00f25030 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b1de0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f25030(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f25030

// auto_base_init_00f251d0: misc_base_init_02242980 with other addresses.
namespace twin_00f251d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056af890, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f251d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f251d0

// auto_base_init_00f25990: misc_base_init_02242980 with other addresses.
namespace twin_00f25990 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a9400, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f25990(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f25990

// auto_base_init_00f259a0: misc_base_init_02242980 with other addresses.
namespace twin_00f259a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056a9400, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f259a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f259a0

// auto_base_init_00f259e0: misc_base_init_02242980 with other addresses.
namespace twin_00f259e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056ab4a0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f259e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f259e0

// auto_base_init_00f30480: misc_base_init_02242980 with other addresses.
namespace twin_00f30480 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056aadd0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f30480(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f30480

// auto_base_init_00f32680: misc_base_init_02242980 with other addresses.
namespace twin_00f32680 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056af2f0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f32680(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f32680

// auto_base_init_00f41480: misc_base_init_02242980 with other addresses.
namespace twin_00f41480 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b2790, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f41480(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f41480

// auto_base_init_00f43160: misc_base_init_02242980 with other addresses.
namespace twin_00f43160 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056ad120, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f43160(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f43160

// auto_base_init_00f43270: misc_base_init_02242980 with other addresses.
namespace twin_00f43270 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b1cc0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f43270(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f43270

// auto_base_init_00f44350: misc_base_init_02242980 with other addresses.
namespace twin_00f44350 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056ac4d0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f44350(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f44350

// auto_base_init_00f46300: misc_base_init_02242980 with other addresses.
namespace twin_00f46300 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05697580, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f46300(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f46300

// auto_base_init_00f4d420: misc_base_init_02242980 with other addresses.
namespace twin_00f4d420 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056ad6d0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f4d420(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f4d420

// auto_base_init_00f4eb10: misc_base_init_02242980 with other addresses.
namespace twin_00f4eb10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b2870, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f4eb10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f4eb10

// auto_base_init_00f4f9f0: misc_base_init_02242980 with other addresses.
namespace twin_00f4f9f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056afe90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f4f9f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f4f9f0

// auto_base_init_00f4fa20: misc_base_init_02242980 with other addresses.
namespace twin_00f4fa20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056adcb0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f4fa20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f4fa20

// auto_base_init_00f63980: misc_base_init_02242980 with other addresses.
namespace twin_00f63980 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056aa690, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f63980(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f63980

// auto_base_init_00f64310: misc_base_init_02242980 with other addresses.
namespace twin_00f64310 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05697500, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f64310(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f64310

// auto_base_init_00f6f5b0: misc_base_init_02242980 with other addresses.
namespace twin_00f6f5b0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f6f5b0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f6f5b0

// auto_base_init_00f70e30: misc_base_init_02242980 with other addresses.
namespace twin_00f70e30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f70e30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f70e30

// auto_base_init_00f70ee0: misc_base_init_02242980 with other addresses.
namespace twin_00f70ee0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f70ee0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f70ee0

// auto_base_init_00f70f90: misc_base_init_02242980 with other addresses.
namespace twin_00f70f90 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f70f90(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f70f90

// auto_base_init_00f71040: misc_base_init_02242980 with other addresses.
namespace twin_00f71040 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f71040(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f71040

// auto_base_init_00f78f10: misc_base_init_02242980 with other addresses.
namespace twin_00f78f10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056975c0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f78f10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f78f10

// auto_base_init_00f78f30: misc_base_init_02242980 with other addresses.
namespace twin_00f78f30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b0450, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f78f30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f78f30

// auto_base_init_00f841f0: misc_base_init_02242980 with other addresses.
namespace twin_00f841f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05697540, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f841f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f841f0

// auto_base_init_00f84200: misc_base_init_02242980 with other addresses.
namespace twin_00f84200 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b0f60, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f84200(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f84200

// auto_base_init_00f8cbe0: misc_base_init_02242980 with other addresses.
namespace twin_00f8cbe0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b2fa0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f8cbe0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f8cbe0

// auto_base_init_00f91b10: misc_base_init_02242980 with other addresses.
namespace twin_00f91b10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b1eb0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f91b10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f91b10

// auto_base_init_00f91b20: misc_base_init_02242980 with other addresses.
namespace twin_00f91b20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b1f00, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f91b20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f91b20

// auto_base_init_00f97ee0: misc_base_init_02242980 with other addresses.
namespace twin_00f97ee0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b2690, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00f97ee0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00f97ee0

// auto_base_init_00fa3e50: misc_base_init_02242980 with other addresses.
namespace twin_00fa3e50 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b2e50, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00fa3e50(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00fa3e50

// auto_base_init_00facb00: misc_base_init_02242980 with other addresses.
namespace twin_00facb00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b3210, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00facb00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00facb00

// auto_base_init_00fb6f10: misc_base_init_02242980 with other addresses.
namespace twin_00fb6f10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b3620, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_00fb6f10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00fb6f10

// auto_base_init_0108bff0: misc_base_init_02242980 with other addresses.
namespace twin_0108bff0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c5510, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_0108bff0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0108bff0

// auto_base_init_0108fac0: misc_base_init_02242980 with other addresses.
namespace twin_0108fac0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c5570, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_0108fac0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0108fac0

// auto_base_init_010a4a70: misc_base_init_02242980 with other addresses.
namespace twin_010a4a70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c5ec0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010a4a70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010a4a70

// auto_base_init_010a5a00: misc_base_init_02242980 with other addresses.
namespace twin_010a5a00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c5ef0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010a5a00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010a5a00

// auto_base_init_010a5a20: misc_base_init_02242980 with other addresses.
namespace twin_010a5a20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c5ef0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010a5a20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010a5a20

// auto_base_init_010b1180: misc_base_init_02242980 with other addresses.
namespace twin_010b1180 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c61a0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010b1180(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010b1180

// auto_base_init_010c7c90: misc_base_init_02242980 with other addresses.
namespace twin_010c7c90 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c69a0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010c7c90(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010c7c90

// auto_base_init_010ccb20: misc_base_init_02242980 with other addresses.
namespace twin_010ccb20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c6b00, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010ccb20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010ccb20

// auto_base_init_010ccb40: misc_base_init_02242980 with other addresses.
namespace twin_010ccb40 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c6b00, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010ccb40(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010ccb40

// auto_base_init_010d4cc0: misc_base_init_02242980 with other addresses.
namespace twin_010d4cc0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c6da0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010d4cc0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010d4cc0

// auto_base_init_010d4ce0: misc_base_init_02242980 with other addresses.
namespace twin_010d4ce0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c6da0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010d4ce0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010d4ce0

// auto_base_init_010dd120: misc_base_init_02242980 with other addresses.
namespace twin_010dd120 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056caff0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_010dd120(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_010dd120

// auto_base_init_0137e770: misc_base_init_02242980 with other addresses.
namespace twin_0137e770 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056f03b0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_0137e770(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0137e770

// auto_base_init_013a6570: misc_base_init_02242980 with other addresses.
namespace twin_013a6570 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056f3130, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_013a6570(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_013a6570

// auto_base_init_01d43f00: misc_base_init_02242980 with other addresses.
namespace twin_01d43f00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x057304d0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_01d43f00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_01d43f00

// auto_base_init_021dbbb0: misc_base_init_02242980 with other addresses.
namespace twin_021dbbb0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_021dbbb0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_021dbbb0

// auto_base_init_021dbc70: misc_base_init_02242980 with other addresses.
namespace twin_021dbc70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_021dbc70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_021dbc70

// auto_base_init_026f9d20: misc_base_init_02242980 with other addresses.
namespace twin_026f9d20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x057623d0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_026f9d20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_026f9d20

// auto_base_init_027a2d00: misc_base_init_02242980 with other addresses.
namespace twin_027a2d00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0553f7c0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_027a2d00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_027a2d00

// auto_base_init_0280eaf0: misc_base_init_02242980 with other addresses.
namespace twin_0280eaf0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x055661a0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_0280eaf0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0280eaf0

// auto_base_init_02810760: misc_base_init_02242980 with other addresses.
namespace twin_02810760 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x055661a0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02810760(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02810760

// auto_base_init_028f1040: misc_base_init_02242980 with other addresses.
namespace twin_028f1040 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05642db0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_028f1040(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_028f1040

// auto_base_init_028f1bf0: misc_base_init_02242980 with other addresses.
namespace twin_028f1bf0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05642db0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_028f1bf0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_028f1bf0

// auto_base_init_028f2c70: misc_base_init_02242980 with other addresses.
namespace twin_028f2c70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05642db0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_028f2c70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_028f2c70

// auto_base_init_028f4eb0: misc_base_init_02242980 with other addresses.
namespace twin_028f4eb0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05642db0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_028f4eb0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_028f4eb0

// auto_base_init_028f7d00: misc_base_init_02242980 with other addresses.
namespace twin_028f7d00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05642db0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_028f7d00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_028f7d00

// auto_base_init_028f8600: misc_base_init_02242980 with other addresses.
namespace twin_028f8600 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05642db0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_028f8600(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_028f8600

// auto_base_init_02987a40: misc_base_init_02242980 with other addresses.
namespace twin_02987a40 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02987a40(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02987a40

// auto_base_init_02987af0: misc_base_init_02242980 with other addresses.
namespace twin_02987af0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02987af0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02987af0

// auto_base_init_02987b50: misc_base_init_02242980 with other addresses.
namespace twin_02987b50 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02987b50(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02987b50

// auto_base_init_02987c10: misc_base_init_02242980 with other addresses.
namespace twin_02987c10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02987c10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02987c10

// auto_base_init_029d9700: misc_base_init_02242980 with other addresses.
namespace twin_029d9700 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05696f50, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_029d9700(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_029d9700

// auto_base_init_029d9770: misc_base_init_02242980 with other addresses.
namespace twin_029d9770 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05696f50, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_029d9770(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_029d9770

// auto_base_init_029d9790: misc_base_init_02242980 with other addresses.
namespace twin_029d9790 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05696f50, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_029d9790(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_029d9790

// auto_base_init_029dab70: misc_base_init_02242980 with other addresses.
namespace twin_029dab70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_029dab70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_029dab70

// auto_base_init_029dac20: misc_base_init_02242980 with other addresses.
namespace twin_029dac20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_029dac20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_029dac20

// auto_base_init_029dacd0: misc_base_init_02242980 with other addresses.
namespace twin_029dacd0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_029dacd0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_029dacd0

// auto_base_init_02a03d70: misc_base_init_02242980 with other addresses.
namespace twin_02a03d70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a03d70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a03d70

// auto_base_init_02a04ad0: misc_base_init_02242980 with other addresses.
namespace twin_02a04ad0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a04ad0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a04ad0

// auto_base_init_02a04d70: misc_base_init_02242980 with other addresses.
namespace twin_02a04d70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a04d70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a04d70

// auto_base_init_02a04e20: misc_base_init_02242980 with other addresses.
namespace twin_02a04e20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a04e20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a04e20

// auto_base_init_02a06160: misc_base_init_02242980 with other addresses.
namespace twin_02a06160 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a06160(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a06160

// auto_base_init_02a069f0: misc_base_init_02242980 with other addresses.
namespace twin_02a069f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a069f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a069f0

// auto_base_init_02a06ab0: misc_base_init_02242980 with other addresses.
namespace twin_02a06ab0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a06ab0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a06ab0

// auto_base_init_02a06b60: misc_base_init_02242980 with other addresses.
namespace twin_02a06b60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a06b60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a06b60

// auto_base_init_02a072b0: misc_base_init_02242980 with other addresses.
namespace twin_02a072b0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a072b0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a072b0

// auto_base_init_02a07510: misc_base_init_02242980 with other addresses.
namespace twin_02a07510 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a07510(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a07510

// auto_base_init_02a075c0: misc_base_init_02242980 with other addresses.
namespace twin_02a075c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a075c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a075c0

// auto_base_init_02a07680: misc_base_init_02242980 with other addresses.
namespace twin_02a07680 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a07680(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a07680

// auto_base_init_02a094e0: misc_base_init_02242980 with other addresses.
namespace twin_02a094e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a094e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a094e0

// auto_base_init_02a0b980: misc_base_init_02242980 with other addresses.
namespace twin_02a0b980 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0b980(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0b980

// auto_base_init_02a0c0b0: misc_base_init_02242980 with other addresses.
namespace twin_02a0c0b0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0c0b0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0c0b0

// auto_base_init_02a0c160: misc_base_init_02242980 with other addresses.
namespace twin_02a0c160 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0c160(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0c160

// auto_base_init_02a0c210: misc_base_init_02242980 with other addresses.
namespace twin_02a0c210 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0c210(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0c210

// auto_base_init_02a0c2c0: misc_base_init_02242980 with other addresses.
namespace twin_02a0c2c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0c2c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0c2c0

// auto_base_init_02a0d180: misc_base_init_02242980 with other addresses.
namespace twin_02a0d180 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0d180(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0d180

// auto_base_init_02a0db30: misc_base_init_02242980 with other addresses.
namespace twin_02a0db30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0db30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0db30

// auto_base_init_02a0dbe0: misc_base_init_02242980 with other addresses.
namespace twin_02a0dbe0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0dbe0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0dbe0

// auto_base_init_02a0dd60: misc_base_init_02242980 with other addresses.
namespace twin_02a0dd60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0dd60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0dd60

// auto_base_init_02a0e360: misc_base_init_02242980 with other addresses.
namespace twin_02a0e360 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a0e360(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a0e360

// auto_base_init_02a1bae0: misc_base_init_02242980 with other addresses.
namespace twin_02a1bae0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b4a00, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a1bae0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a1bae0

// auto_base_init_02a78960: misc_base_init_02242980 with other addresses.
namespace twin_02a78960 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b74b0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a78960(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a78960

// auto_base_init_02a99db0: misc_base_init_02242980 with other addresses.
namespace twin_02a99db0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b8fd0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a99db0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a99db0

// auto_base_init_02a9d310: misc_base_init_02242980 with other addresses.
namespace twin_02a9d310 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056b9190, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02a9d310(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02a9d310

// auto_base_init_02b12f40: misc_base_init_02242980 with other addresses.
namespace twin_02b12f40 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c4bd0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02b12f40(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02b12f40

// auto_base_init_02b12f70: misc_base_init_02242980 with other addresses.
namespace twin_02b12f70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c4c10, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02b12f70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02b12f70

// auto_base_init_02b14fd0: misc_base_init_02242980 with other addresses.
namespace twin_02b14fd0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c4ef0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02b14fd0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02b14fd0

// auto_base_init_02b1a070: misc_base_init_02242980 with other addresses.
namespace twin_02b1a070 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c52d0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02b1a070(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02b1a070

// auto_base_init_02ba86b0: misc_base_init_02242980 with other addresses.
namespace twin_02ba86b0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056c97c0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02ba86b0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02ba86b0

// auto_base_init_02bc09f0: misc_base_init_02242980 with other addresses.
namespace twin_02bc09f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056cafd0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02bc09f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02bc09f0

// auto_base_init_02c1c300: misc_base_init_02242980 with other addresses.
namespace twin_02c1c300 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056d16f0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c1c300(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c1c300

// auto_base_init_02c46380: misc_base_init_02242980 with other addresses.
namespace twin_02c46380 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dbc90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c46380(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c46380

// auto_base_init_02c5ab30: misc_base_init_02242980 with other addresses.
namespace twin_02c5ab30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dbea0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c5ab30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c5ab30

// auto_base_init_02c5c060: misc_base_init_02242980 with other addresses.
namespace twin_02c5c060 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dbef0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c5c060(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c5c060

// auto_base_init_02c5d360: misc_base_init_02242980 with other addresses.
namespace twin_02c5d360 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dbf40, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c5d360(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c5d360

// auto_base_init_02c5ddc0: misc_base_init_02242980 with other addresses.
namespace twin_02c5ddc0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dbf90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c5ddc0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c5ddc0

// auto_base_init_02c5f870: misc_base_init_02242980 with other addresses.
namespace twin_02c5f870 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dbfe0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c5f870(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c5f870

// auto_base_init_02c610e0: misc_base_init_02242980 with other addresses.
namespace twin_02c610e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dc030, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c610e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c610e0

// auto_base_init_02c62120: misc_base_init_02242980 with other addresses.
namespace twin_02c62120 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dc080, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c62120(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c62120

// auto_base_init_02c63d70: misc_base_init_02242980 with other addresses.
namespace twin_02c63d70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dc0d0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c63d70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c63d70

// auto_base_init_02c82940: misc_base_init_02242980 with other addresses.
namespace twin_02c82940 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056dd3d0, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02c82940(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02c82940

// auto_base_init_02d043c0: misc_base_init_02242980 with other addresses.
namespace twin_02d043c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056e4020, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02d043c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02d043c0

// auto_base_init_02d44650: misc_base_init_02242980 with other addresses.
namespace twin_02d44650 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056e9430, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02d44650(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02d44650

// auto_base_init_02d69f20: misc_base_init_02242980 with other addresses.
namespace twin_02d69f20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056efd70, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02d69f20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02d69f20

// auto_base_init_02df7940: misc_base_init_02242980 with other addresses.
namespace twin_02df7940 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05701a70, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02df7940(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02df7940

// auto_base_init_02e17220: misc_base_init_02242980 with other addresses.
namespace twin_02e17220 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02e17220(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02e17220

// auto_base_init_02e172d0: misc_base_init_02242980 with other addresses.
namespace twin_02e172d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02e172d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02e172d0

// auto_base_init_02e17390: misc_base_init_02242980 with other addresses.
namespace twin_02e17390 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02e17390(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02e17390

// auto_base_init_02e17540: misc_base_init_02242980 with other addresses.
namespace twin_02e17540 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02e17540(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02e17540

// auto_base_init_02e55430: misc_base_init_02242980 with other addresses.
namespace twin_02e55430 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0570d670, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02e55430(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02e55430

// auto_base_init_02e6cff0: misc_base_init_02242980 with other addresses.
namespace twin_02e6cff0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0570db00, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02e6cff0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02e6cff0

// auto_base_init_02f8aa30: misc_base_init_02242980 with other addresses.
namespace twin_02f8aa30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05717800, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc

/**
 *
 * Stores the base class's vtable address point in a base object and does nothing else.
 *
 */
extern "C" void bb_auto_base_init_02f8aa30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_02f8aa30
