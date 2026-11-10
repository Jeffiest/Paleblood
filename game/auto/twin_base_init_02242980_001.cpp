// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_base_init_02242980, in game/misc/base_init_02242980.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/engine.h"
#include "runtime/original.h"

namespace misc {}

// auto_base_init_0045a480: misc_base_init_02242980 with other addresses.
namespace twin_0045a480 {
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
extern "C" void bb_auto_base_init_0045a480(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0045a480

// auto_base_init_0045a4a0: misc_base_init_02242980 with other addresses.
namespace twin_0045a4a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0553f7e0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0045a4a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0045a4a0

// auto_base_init_004c66d0: misc_base_init_02242980 with other addresses.
namespace twin_004c66d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05543fa0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_004c66d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_004c66d0

// auto_base_init_008188a0: misc_base_init_02242980 with other addresses.
namespace twin_008188a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x055be6d0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_008188a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_008188a0

// auto_base_init_00835cb0: misc_base_init_02242980 with other addresses.
namespace twin_00835cb0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x055c0070, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00835cb0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00835cb0

// auto_base_init_00836410: misc_base_init_02242980 with other addresses.
namespace twin_00836410 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x055bee00, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00836410(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00836410

// auto_base_init_0085d9e0: misc_base_init_02242980 with other addresses.
namespace twin_0085d9e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x055c2240, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0085d9e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0085d9e0

// auto_base_init_008bd2f0: misc_base_init_02242980 with other addresses.
namespace twin_008bd2f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0563e0b0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_008bd2f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_008bd2f0

// auto_base_init_008bf8f0: misc_base_init_02242980 with other addresses.
namespace twin_008bf8f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0563e940, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_008bf8f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_008bf8f0

// auto_base_init_008c3c60: misc_base_init_02242980 with other addresses.
namespace twin_008c3c60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0563f0c0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_008c3c60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_008c3c60

// auto_base_init_008cc9a0: misc_base_init_02242980 with other addresses.
namespace twin_008cc9a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0563f360, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_008cc9a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_008cc9a0

// auto_base_init_00907860: misc_base_init_02242980 with other addresses.
namespace twin_00907860 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0563fa90, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00907860(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00907860

// auto_base_init_00908590: misc_base_init_02242980 with other addresses.
namespace twin_00908590 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0563fee0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00908590(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00908590

// auto_base_init_00908740: misc_base_init_02242980 with other addresses.
namespace twin_00908740 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0563ff50, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00908740(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00908740

// auto_base_init_00909210: misc_base_init_02242980 with other addresses.
namespace twin_00909210 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640000, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00909210(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00909210

// auto_base_init_00909300: misc_base_init_02242980 with other addresses.
namespace twin_00909300 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640090, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00909300(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00909300

// auto_base_init_00909570: misc_base_init_02242980 with other addresses.
namespace twin_00909570 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640190, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00909570(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00909570

// auto_base_init_00909920: misc_base_init_02242980 with other addresses.
namespace twin_00909920 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640470, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00909920(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00909920

// auto_base_init_00909a10: misc_base_init_02242980 with other addresses.
namespace twin_00909a10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056404b0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00909a10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00909a10

// auto_base_init_00909cc0: misc_base_init_02242980 with other addresses.
namespace twin_00909cc0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056405a0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00909cc0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00909cc0

// auto_base_init_00909db0: misc_base_init_02242980 with other addresses.
namespace twin_00909db0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640630, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00909db0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00909db0

// auto_base_init_0090a070: misc_base_init_02242980 with other addresses.
namespace twin_0090a070 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056406f0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090a070(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090a070

// auto_base_init_0090a160: misc_base_init_02242980 with other addresses.
namespace twin_0090a160 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640730, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090a160(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090a160

// auto_base_init_0090ab40: misc_base_init_02242980 with other addresses.
namespace twin_0090ab40 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640980, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090ab40(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090ab40

// auto_base_init_0090ab70: misc_base_init_02242980 with other addresses.
namespace twin_0090ab70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640940, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090ab70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090ab70

// auto_base_init_0090be70: misc_base_init_02242980 with other addresses.
namespace twin_0090be70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640d70, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090be70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090be70

// auto_base_init_0090c310: misc_base_init_02242980 with other addresses.
namespace twin_0090c310 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640f30, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090c310(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090c310

// auto_base_init_0090c7e0: misc_base_init_02242980 with other addresses.
namespace twin_0090c7e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05641110, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090c7e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090c7e0

// auto_base_init_0090c800: misc_base_init_02242980 with other addresses.
namespace twin_0090c800 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05640850, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090c800(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090c800

// auto_base_init_0090cdf0: misc_base_init_02242980 with other addresses.
namespace twin_0090cdf0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05641680, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090cdf0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090cdf0

// auto_base_init_0090cfa0: misc_base_init_02242980 with other addresses.
namespace twin_0090cfa0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056416f0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090cfa0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090cfa0

// auto_base_init_0090d090: misc_base_init_02242980 with other addresses.
namespace twin_0090d090 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0563fa00, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090d090(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090d090

// auto_base_init_0090d170: misc_base_init_02242980 with other addresses.
namespace twin_0090d170 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05641760, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090d170(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090d170

// auto_base_init_0090dff0: misc_base_init_02242980 with other addresses.
namespace twin_0090dff0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056417e0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_0090dff0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_0090dff0

// auto_base_init_00910620: misc_base_init_02242980 with other addresses.
namespace twin_00910620 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05641cc0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00910620(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00910620

// auto_base_init_00911190: misc_base_init_02242980 with other addresses.
namespace twin_00911190 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05641d50, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00911190(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00911190

// auto_base_init_00911300: misc_base_init_02242980 with other addresses.
namespace twin_00911300 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05641dd0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00911300(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00911300

// auto_base_init_009642e0: misc_base_init_02242980 with other addresses.
namespace twin_009642e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05649a60, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009642e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009642e0

// auto_base_init_00964890: misc_base_init_02242980 with other addresses.
namespace twin_00964890 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05649f30, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00964890(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00964890

// auto_base_init_009736f0: misc_base_init_02242980 with other addresses.
namespace twin_009736f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0564a5b0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009736f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009736f0

// auto_base_init_009834e0: misc_base_init_02242980 with other addresses.
namespace twin_009834e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0564a700, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009834e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009834e0

// auto_base_init_009b4f60: misc_base_init_02242980 with other addresses.
namespace twin_009b4f60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0564caf0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009b4f60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009b4f60

// auto_base_init_009b7b00: misc_base_init_02242980 with other addresses.
namespace twin_009b7b00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0564fd70, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009b7b00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009b7b00

// auto_base_init_009b9130: misc_base_init_02242980 with other addresses.
namespace twin_009b9130 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0564de70, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009b9130(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009b9130

// auto_base_init_009c43a0: misc_base_init_02242980 with other addresses.
namespace twin_009c43a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0564c960, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009c43a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009c43a0

// auto_base_init_009c4850: misc_base_init_02242980 with other addresses.
namespace twin_009c4850 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0564e550, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009c4850(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009c4850

// auto_base_init_009c4860: misc_base_init_02242980 with other addresses.
namespace twin_009c4860 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0564e590, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009c4860(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009c4860

// auto_base_init_009cc020: misc_base_init_02242980 with other addresses.
namespace twin_009cc020 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0564fdb0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009cc020(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009cc020

// auto_base_init_009dd8d0: misc_base_init_02242980 with other addresses.
namespace twin_009dd8d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05653a10, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009dd8d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009dd8d0

// auto_base_init_009ddc00: misc_base_init_02242980 with other addresses.
namespace twin_009ddc00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05652050, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009ddc00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009ddc00

// auto_base_init_009de4b0: misc_base_init_02242980 with other addresses.
namespace twin_009de4b0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05651400, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009de4b0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009de4b0

// auto_base_init_009e13a0: misc_base_init_02242980 with other addresses.
namespace twin_009e13a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056548b0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009e13a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009e13a0

// auto_base_init_009e87f0: misc_base_init_02242980 with other addresses.
namespace twin_009e87f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05653b80, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009e87f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009e87f0

// auto_base_init_009e98d0: misc_base_init_02242980 with other addresses.
namespace twin_009e98d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05654410, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009e98d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009e98d0

// auto_base_init_009ef030: misc_base_init_02242980 with other addresses.
namespace twin_009ef030 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05655100, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009ef030(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009ef030

// auto_base_init_009eff00: misc_base_init_02242980 with other addresses.
namespace twin_009eff00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056552c0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009eff00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009eff00

// auto_base_init_009f0b30: misc_base_init_02242980 with other addresses.
namespace twin_009f0b30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05659e50, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009f0b30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009f0b30

// auto_base_init_009f11c0: misc_base_init_02242980 with other addresses.
namespace twin_009f11c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05659d10, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009f11c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009f11c0

// auto_base_init_009f2320: misc_base_init_02242980 with other addresses.
namespace twin_009f2320 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05656c20, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009f2320(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009f2320

// auto_base_init_009f2330: misc_base_init_02242980 with other addresses.
namespace twin_009f2330 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05656cb0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_009f2330(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_009f2330

// auto_base_init_00a0d380: misc_base_init_02242980 with other addresses.
namespace twin_00a0d380 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056588e0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a0d380(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a0d380

// auto_base_init_00a44220: misc_base_init_02242980 with other addresses.
namespace twin_00a44220 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565b1a0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a44220(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a44220

// auto_base_init_00a44590: misc_base_init_02242980 with other addresses.
namespace twin_00a44590 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565b260, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a44590(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a44590

// auto_base_init_00a8b010: misc_base_init_02242980 with other addresses.
namespace twin_00a8b010 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565c040, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a8b010(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a8b010

// auto_base_init_00a8b040: misc_base_init_02242980 with other addresses.
namespace twin_00a8b040 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565c000, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a8b040(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a8b040

// auto_base_init_00a8b070: misc_base_init_02242980 with other addresses.
namespace twin_00a8b070 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565bfc0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a8b070(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a8b070

// auto_base_init_00a8b2e0: misc_base_init_02242980 with other addresses.
namespace twin_00a8b2e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565d4c0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a8b2e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a8b2e0

// auto_base_init_00a8b5e0: misc_base_init_02242980 with other addresses.
namespace twin_00a8b5e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565c1a0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a8b5e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a8b5e0

// auto_base_init_00a8b840: misc_base_init_02242980 with other addresses.
namespace twin_00a8b840 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565c290, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a8b840(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a8b840

// auto_base_init_00a8c280: misc_base_init_02242980 with other addresses.
namespace twin_00a8c280 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565efb0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a8c280(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a8c280

// auto_base_init_00a8fd60: misc_base_init_02242980 with other addresses.
namespace twin_00a8fd60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565f0c0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a8fd60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a8fd60

// auto_base_init_00a91690: misc_base_init_02242980 with other addresses.
namespace twin_00a91690 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565e260, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a91690(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a91690

// auto_base_init_00a91d50: misc_base_init_02242980 with other addresses.
namespace twin_00a91d50 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565eab0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a91d50(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a91d50

// auto_base_init_00a92130: misc_base_init_02242980 with other addresses.
namespace twin_00a92130 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565ec70, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00a92130(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00a92130

// auto_base_init_00aa5370: misc_base_init_02242980 with other addresses.
namespace twin_00aa5370 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0565f960, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aa5370(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aa5370

// auto_base_init_00aa9540: misc_base_init_02242980 with other addresses.
namespace twin_00aa9540 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056614b0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aa9540(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aa9540

// auto_base_init_00aab4f0: misc_base_init_02242980 with other addresses.
namespace twin_00aab4f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05661240, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aab4f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aab4f0

// auto_base_init_00aba6d0: misc_base_init_02242980 with other addresses.
namespace twin_00aba6d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05661410, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aba6d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aba6d0

// auto_base_init_00abcae0: misc_base_init_02242980 with other addresses.
namespace twin_00abcae0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05661300, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00abcae0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00abcae0

// auto_base_init_00ad0870: misc_base_init_02242980 with other addresses.
namespace twin_00ad0870 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056614f0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ad0870(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ad0870

// auto_base_init_00aeba60: misc_base_init_02242980 with other addresses.
namespace twin_00aeba60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056622e0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aeba60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aeba60

// auto_base_init_00aed390: misc_base_init_02242980 with other addresses.
namespace twin_00aed390 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05662c40, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aed390(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aed390

// auto_base_init_00aed480: misc_base_init_02242980 with other addresses.
namespace twin_00aed480 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05662f30, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aed480(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aed480

// auto_base_init_00aed820: misc_base_init_02242980 with other addresses.
namespace twin_00aed820 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05662800, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aed820(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aed820

// auto_base_init_00aedc20: misc_base_init_02242980 with other addresses.
namespace twin_00aedc20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05662980, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aedc20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aedc20

// auto_base_init_00aedd10: misc_base_init_02242980 with other addresses.
namespace twin_00aedd10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05662ef0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00aedd10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00aedd10

// auto_base_init_00af1200: misc_base_init_02242980 with other addresses.
namespace twin_00af1200 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05662c00, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00af1200(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00af1200

// auto_base_init_00af3290: misc_base_init_02242980 with other addresses.
namespace twin_00af3290 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05662eb0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00af3290(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00af3290

// auto_base_init_00af3340: misc_base_init_02242980 with other addresses.
namespace twin_00af3340 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05662e70, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00af3340(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00af3340

// auto_base_init_00af6350: misc_base_init_02242980 with other addresses.
namespace twin_00af6350 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05662f70, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00af6350(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00af6350

// auto_base_init_00af89b0: misc_base_init_02242980 with other addresses.
namespace twin_00af89b0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05663040, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00af89b0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00af89b0

// auto_base_init_00b1aeb0: misc_base_init_02242980 with other addresses.
namespace twin_00b1aeb0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056674f0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00b1aeb0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00b1aeb0

// auto_base_init_00b2b010: misc_base_init_02242980 with other addresses.
namespace twin_00b2b010 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05669640, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00b2b010(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00b2b010

// auto_base_init_00bda5d0: misc_base_init_02242980 with other addresses.
namespace twin_00bda5d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566bfe0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00bda5d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00bda5d0

// auto_base_init_00bda600: misc_base_init_02242980 with other addresses.
namespace twin_00bda600 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566c020, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00bda600(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00bda600

// auto_base_init_00bda630: misc_base_init_02242980 with other addresses.
namespace twin_00bda630 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566bfa0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00bda630(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00bda630

// auto_base_init_00bda660: misc_base_init_02242980 with other addresses.
namespace twin_00bda660 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566bf60, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00bda660(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00bda660

// auto_base_init_00bda690: misc_base_init_02242980 with other addresses.
namespace twin_00bda690 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566bf20, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00bda690(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00bda690

// auto_base_init_00bda6c0: misc_base_init_02242980 with other addresses.
namespace twin_00bda6c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566bee0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00bda6c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00bda6c0

// auto_base_init_00bdf360: misc_base_init_02242980 with other addresses.
namespace twin_00bdf360 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566de40, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00bdf360(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00bdf360

// auto_base_init_00c28270: misc_base_init_02242980 with other addresses.
namespace twin_00c28270 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05670e80, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00c28270(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00c28270

// auto_base_init_00c8f500: misc_base_init_02242980 with other addresses.
namespace twin_00c8f500 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056726f0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00c8f500(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00c8f500

// auto_base_init_00c934d0: misc_base_init_02242980 with other addresses.
namespace twin_00c934d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05674c90, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00c934d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00c934d0

// auto_base_init_00c936f0: misc_base_init_02242980 with other addresses.
namespace twin_00c936f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05678bc0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00c936f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00c936f0

// auto_base_init_00c937e0: misc_base_init_02242980 with other addresses.
namespace twin_00c937e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056736b0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00c937e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00c937e0

// auto_base_init_00c990d0: misc_base_init_02242980 with other addresses.
namespace twin_00c990d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05673a80, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00c990d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00c990d0

// auto_base_init_00c9f270: misc_base_init_02242980 with other addresses.
namespace twin_00c9f270 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05673ff0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00c9f270(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00c9f270

// auto_base_init_00c9f2a0: misc_base_init_02242980 with other addresses.
namespace twin_00c9f2a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05673fb0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00c9f2a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00c9f2a0

// auto_base_init_00ca0240: misc_base_init_02242980 with other addresses.
namespace twin_00ca0240 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05674430, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ca0240(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ca0240

// auto_base_init_00ca2d10: misc_base_init_02242980 with other addresses.
namespace twin_00ca2d10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05674500, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ca2d10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ca2d10

// auto_base_init_00ca2f50: misc_base_init_02242980 with other addresses.
namespace twin_00ca2f50 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05674790, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ca2f50(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ca2f50

// auto_base_init_00ca2f80: misc_base_init_02242980 with other addresses.
namespace twin_00ca2f80 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05674750, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ca2f80(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ca2f80

// auto_base_init_00ca48b0: misc_base_init_02242980 with other addresses.
namespace twin_00ca48b0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05674ce0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ca48b0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ca48b0

// auto_base_init_00cb3cc0: misc_base_init_02242980 with other addresses.
namespace twin_00cb3cc0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056750d0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00cb3cc0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00cb3cc0

// auto_base_init_00cbad20: misc_base_init_02242980 with other addresses.
namespace twin_00cbad20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05675de0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00cbad20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00cbad20

// auto_base_init_00cbc050: misc_base_init_02242980 with other addresses.
namespace twin_00cbc050 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05675f80, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00cbc050(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00cbc050

// auto_base_init_00cd2730: misc_base_init_02242980 with other addresses.
namespace twin_00cd2730 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05676ca0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00cd2730(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00cd2730

// auto_base_init_00cd33c0: misc_base_init_02242980 with other addresses.
namespace twin_00cd33c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05676d40, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00cd33c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00cd33c0

// auto_base_init_00ce2c50: misc_base_init_02242980 with other addresses.
namespace twin_00ce2c50 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05677430, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ce2c50(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ce2c50

// auto_base_init_00ce34a0: misc_base_init_02242980 with other addresses.
namespace twin_00ce34a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05673cb0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ce34a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ce34a0

// auto_base_init_00ce3a50: misc_base_init_02242980 with other addresses.
namespace twin_00ce3a50 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05677be0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ce3a50(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ce3a50

// auto_base_init_00ce3ab0: misc_base_init_02242980 with other addresses.
namespace twin_00ce3ab0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05677b50, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ce3ab0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ce3ab0

// auto_base_init_00ce3ae0: misc_base_init_02242980 with other addresses.
namespace twin_00ce3ae0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05677b10, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ce3ae0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ce3ae0

// auto_base_init_00ce76d0: misc_base_init_02242980 with other addresses.
namespace twin_00ce76d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05673890, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00ce76d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00ce76d0

// auto_base_init_00cebc60: misc_base_init_02242980 with other addresses.
namespace twin_00cebc60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056738d0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00cebc60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00cebc60

// auto_base_init_00cebc90: misc_base_init_02242980 with other addresses.
namespace twin_00cebc90 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05673850, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00cebc90(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00cebc90

// auto_base_init_00cf94d0: misc_base_init_02242980 with other addresses.
namespace twin_00cf94d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05678940, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00cf94d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00cf94d0

// auto_base_init_00cfb5c0: misc_base_init_02242980 with other addresses.
namespace twin_00cfb5c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05673810, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00cfb5c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00cfb5c0

// auto_base_init_00d0e630: misc_base_init_02242980 with other addresses.
namespace twin_00d0e630 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05678c70, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d0e630(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d0e630

// auto_base_init_00d0f050: misc_base_init_02242980 with other addresses.
namespace twin_00d0f050 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05678cb0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d0f050(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d0f050

// auto_base_init_00d16200: misc_base_init_02242980 with other addresses.
namespace twin_00d16200 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05676290, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d16200(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d16200

// auto_base_init_00d162d0: misc_base_init_02242980 with other addresses.
namespace twin_00d162d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05678d30, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d162d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d162d0

// auto_base_init_00d26770: misc_base_init_02242980 with other addresses.
namespace twin_00d26770 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567a430, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d26770(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d26770

// auto_base_init_00d26830: misc_base_init_02242980 with other addresses.
namespace twin_00d26830 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567a4b0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d26830(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d26830

// auto_base_init_00d26890: misc_base_init_02242980 with other addresses.
namespace twin_00d26890 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567a470, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d26890(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d26890

// auto_base_init_00d268f0: misc_base_init_02242980 with other addresses.
namespace twin_00d268f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567a3f0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d268f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d268f0

// auto_base_init_00d37880: misc_base_init_02242980 with other addresses.
namespace twin_00d37880 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567bdf0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d37880(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d37880

// auto_base_init_00d37a70: misc_base_init_02242980 with other addresses.
namespace twin_00d37a70 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567be30, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d37a70(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d37a70

// auto_base_init_00d37ca0: misc_base_init_02242980 with other addresses.
namespace twin_00d37ca0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567be70, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d37ca0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d37ca0

// auto_base_init_00d37e90: misc_base_init_02242980 with other addresses.
namespace twin_00d37e90 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567beb0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d37e90(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d37e90

// auto_base_init_00d37fe0: misc_base_init_02242980 with other addresses.
namespace twin_00d37fe0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567bef0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d37fe0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d37fe0

// auto_base_init_00d44910: misc_base_init_02242980 with other addresses.
namespace twin_00d44910 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567d5d0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d44910(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d44910

// auto_base_init_00d451d0: misc_base_init_02242980 with other addresses.
namespace twin_00d451d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567dcd0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d451d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d451d0

// auto_base_init_00d452c0: misc_base_init_02242980 with other addresses.
namespace twin_00d452c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567dd40, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d452c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d452c0

// auto_base_init_00d453b0: misc_base_init_02242980 with other addresses.
namespace twin_00d453b0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567de20, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d453b0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d453b0

// auto_base_init_00d454a0: misc_base_init_02242980 with other addresses.
namespace twin_00d454a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567df00, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d454a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d454a0

// auto_base_init_00d47a10: misc_base_init_02242980 with other addresses.
namespace twin_00d47a10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567e410, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d47a10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d47a10

// auto_base_init_00d484e0: misc_base_init_02242980 with other addresses.
namespace twin_00d484e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567eae0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d484e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d484e0

// auto_base_init_00d48830: misc_base_init_02242980 with other addresses.
namespace twin_00d48830 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567eca0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d48830(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d48830

// auto_base_init_00d4d360: misc_base_init_02242980 with other addresses.
namespace twin_00d4d360 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568bf40, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d4d360(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d4d360

// auto_base_init_00d4d3c0: misc_base_init_02242980 with other addresses.
namespace twin_00d4d3c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568bec0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d4d3c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d4d3c0

// auto_base_init_00d4d410: misc_base_init_02242980 with other addresses.
namespace twin_00d4d410 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568bf80, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d4d410(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d4d410

// auto_base_init_00d4d470: misc_base_init_02242980 with other addresses.
namespace twin_00d4d470 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568bf00, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d4d470(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d4d470

// auto_base_init_00d4e4e0: misc_base_init_02242980 with other addresses.
namespace twin_00d4e4e0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567f800, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d4e4e0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d4e4e0

// auto_base_init_00d4f130: misc_base_init_02242980 with other addresses.
namespace twin_00d4f130 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05689ef0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d4f130(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d4f130

// auto_base_init_00d4f5f0: misc_base_init_02242980 with other addresses.
namespace twin_00d4f5f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05680030, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d4f5f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d4f5f0

// auto_base_init_00d4fcc0: misc_base_init_02242980 with other addresses.
namespace twin_00d4fcc0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05680540, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d4fcc0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d4fcc0

// auto_base_init_00d4fdb0: misc_base_init_02242980 with other addresses.
namespace twin_00d4fdb0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05680620, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d4fdb0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d4fdb0

// auto_base_init_00d52df0: misc_base_init_02242980 with other addresses.
namespace twin_00d52df0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05680cd0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d52df0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d52df0

// auto_base_init_00d52e20: misc_base_init_02242980 with other addresses.
namespace twin_00d52e20 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05684960, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d52e20(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d52e20

// auto_base_init_00d52e50: misc_base_init_02242980 with other addresses.
namespace twin_00d52e50 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05680e50, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d52e50(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d52e50

// auto_base_init_00d52ff0: misc_base_init_02242980 with other addresses.
namespace twin_00d52ff0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05680d10, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d52ff0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d52ff0

// auto_base_init_00d53730: misc_base_init_02242980 with other addresses.
namespace twin_00d53730 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05680f80, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d53730(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d53730

// auto_base_init_00d5a790: misc_base_init_02242980 with other addresses.
namespace twin_00d5a790 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05682230, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d5a790(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d5a790

// auto_base_init_00d5aa80: misc_base_init_02242980 with other addresses.
namespace twin_00d5aa80 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056826d0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d5aa80(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d5aa80

// auto_base_init_00d5ac00: misc_base_init_02242980 with other addresses.
namespace twin_00d5ac00 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568b730, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d5ac00(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d5ac00

// auto_base_init_00d5acf0: misc_base_init_02242980 with other addresses.
namespace twin_00d5acf0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056828b0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d5acf0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d5acf0

// auto_base_init_00d5aee0: misc_base_init_02242980 with other addresses.
namespace twin_00d5aee0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567cd80, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d5aee0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d5aee0

// auto_base_init_00d5d350: misc_base_init_02242980 with other addresses.
namespace twin_00d5d350 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05683450, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d5d350(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d5d350

// auto_base_init_00d5e8f0: misc_base_init_02242980 with other addresses.
namespace twin_00d5e8f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056837f0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d5e8f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d5e8f0

// auto_base_init_00d5ee60: misc_base_init_02242980 with other addresses.
namespace twin_00d5ee60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05683860, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d5ee60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d5ee60

// auto_base_init_00d5f6b0: misc_base_init_02242980 with other addresses.
namespace twin_00d5f6b0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05683970, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d5f6b0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d5f6b0

// auto_base_init_00d600a0: misc_base_init_02242980 with other addresses.
namespace twin_00d600a0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05684910, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d600a0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d600a0

// auto_base_init_00d603d0: misc_base_init_02242980 with other addresses.
namespace twin_00d603d0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056849d0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d603d0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d603d0

// auto_base_init_00d604c0: misc_base_init_02242980 with other addresses.
namespace twin_00d604c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0567e290, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d604c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d604c0

// auto_base_init_00d60700: misc_base_init_02242980 with other addresses.
namespace twin_00d60700 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056856c0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d60700(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d60700

// auto_base_init_00d60c60: misc_base_init_02242980 with other addresses.
namespace twin_00d60c60 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056859e0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d60c60(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d60c60

// auto_base_init_00d61ac0: misc_base_init_02242980 with other addresses.
namespace twin_00d61ac0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056860e0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d61ac0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d61ac0

// auto_base_init_00d62d30: misc_base_init_02242980 with other addresses.
namespace twin_00d62d30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05686950, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d62d30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d62d30

// auto_base_init_00d63eb0: misc_base_init_02242980 with other addresses.
namespace twin_00d63eb0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056872c0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d63eb0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d63eb0

// auto_base_init_00d64260: misc_base_init_02242980 with other addresses.
namespace twin_00d64260 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x056879d0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d64260(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d64260

// auto_base_init_00d64f30: misc_base_init_02242980 with other addresses.
namespace twin_00d64f30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568dfa0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d64f30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d64f30

// auto_base_init_00d6c860: misc_base_init_02242980 with other addresses.
namespace twin_00d6c860 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05689850, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d6c860(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d6c860

// auto_base_init_00d6d170: misc_base_init_02242980 with other addresses.
namespace twin_00d6d170 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05689eb0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d6d170(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d6d170

// auto_base_init_00d6d9c0: misc_base_init_02242980 with other addresses.
namespace twin_00d6d9c0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568a450, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d6d9c0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d6d9c0

// auto_base_init_00d7d050: misc_base_init_02242980 with other addresses.
namespace twin_00d7d050 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568aed0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d7d050(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d7d050

// auto_base_init_00d7eba0: misc_base_init_02242980 with other addresses.
namespace twin_00d7eba0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568b7c0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d7eba0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d7eba0

// auto_base_init_00d7ec90: misc_base_init_02242980 with other addresses.
namespace twin_00d7ec90 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568b8d0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d7ec90(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d7ec90

// auto_base_init_00d85690: misc_base_init_02242980 with other addresses.
namespace twin_00d85690 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568c370, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d85690(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d85690

// auto_base_init_00d86640: misc_base_init_02242980 with other addresses.
namespace twin_00d86640 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568c900, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d86640(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d86640

// auto_base_init_00d86730: misc_base_init_02242980 with other addresses.
namespace twin_00d86730 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568cab0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d86730(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d86730

// auto_base_init_00d882f0: misc_base_init_02242980 with other addresses.
namespace twin_00d882f0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568d910, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d882f0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d882f0

// auto_base_init_00d96ea0: misc_base_init_02242980 with other addresses.
namespace twin_00d96ea0 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568ee80, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00d96ea0(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00d96ea0

// auto_base_init_00da2770: misc_base_init_02242980 with other addresses.
namespace twin_00da2770 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0568fcd0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00da2770(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00da2770

// auto_base_init_00da3690: misc_base_init_02242980 with other addresses.
namespace twin_00da3690 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05682170, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00da3690(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00da3690

// auto_base_init_00da3780: misc_base_init_02242980 with other addresses.
namespace twin_00da3780 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05690470, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00da3780(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00da3780

// auto_base_init_00da3c80: misc_base_init_02242980 with other addresses.
namespace twin_00da3c80 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05690620, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00da3c80(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00da3c80

// auto_base_init_00dace10: misc_base_init_02242980 with other addresses.
namespace twin_00dace10 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05691af0, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00dace10(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00dace10

// auto_base_init_00db6c30: misc_base_init_02242980 with other addresses.
namespace twin_00db6c30 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05692150, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00db6c30(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00db6c30

// auto_base_init_00e7f570: misc_base_init_02242980 with other addresses.
namespace twin_00e7f570 {
namespace misc { using namespace ::misc; }

// A base object whose constructors store the base class's vtable at its address point.



namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05697b20, base_vtable, const uint8_t);

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
extern "C" void bb_auto_base_init_00e7f570(misc::BaseObject *self)
{
    misc::base_init(self);
}

}  // namespace twin_00e7f570
