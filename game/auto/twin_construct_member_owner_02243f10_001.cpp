// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_construct_member_owner_02243f10, in game/misc/construct_member_owner_02243f10.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

// auto_construct_member_owner_021456a0: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_021456a0 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574cb50, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_021456a0(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_021456a0

// auto_construct_member_owner_021755d0: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_021755d0 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574d340, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_021755d0(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_021755d0

// auto_construct_member_owner_02176f10: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_02176f10 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574d3a0, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_02176f10(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_02176f10

// auto_construct_member_owner_0217a230: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_0217a230 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574d460, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_0217a230(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_0217a230

// auto_construct_member_owner_0217bb90: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_0217bb90 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574d4c0, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_0217bb90(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_0217bb90

// auto_construct_member_owner_0217d4d0: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_0217d4d0 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574d520, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_0217d4d0(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_0217d4d0

// auto_construct_member_owner_0217fc10: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_0217fc10 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574d580, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_0217fc10(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_0217fc10

// auto_construct_member_owner_022035c0: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_022035c0 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574e680, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x059401b8, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_022035c0(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_022035c0

// auto_construct_member_owner_02206bf0: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_02206bf0 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574e6e0, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x059401b8, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_02206bf0(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_02206bf0

// auto_construct_member_owner_022085f0: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_022085f0 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x0574e740, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x059401b8, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_022085f0(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_022085f0

// auto_construct_member_owner_022e4e50: misc_construct_member_owner_02243f10 with other addresses.
namespace twin_022e4e50 {

// Misc: constructs an owner with a member sub-object at +0x68: its base part is constructed first, then
// the owner's vtable is stored, then the member is built from a record that carries the flag heap.


namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];     /**< The member sub-object, built by its constructor. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

/** The record the member's constructor is given: a vtable, the heap twice, zero and the capacity. */
struct MemberInit {
    const void *vtable;               /**< The member's vtable address point. */
    engine::Allocator *allocator;     /**< The flag heap the member allocates from. */
    uint64_t reserved;                /**< Zero. */
    engine::Allocator *allocator_copy; /**< The flag heap again. */
    uint32_t capacity;                /**< The member's capacity. */
    uint8_t flag;                     /**< Cleared. */
    uint8_t unknown_0x25[3];
};
static_assert(offsetof(MemberInit, capacity) == 0x20 && sizeof(MemberInit) == 0x28);

RT_GLOBAL(0x05751340, owner_vtable, const uint8_t);
RT_GLOBAL(0x056f0e30, base_vtable, const uint8_t);
RT_GLOBAL(0x056f0bf0, member_init_vtable, const uint8_t);
RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_ORIGINAL(0x013e8200, construct_base, void(void *object, const void **vtable));
RT_ORIGINAL(0x013e67d0, construct_member, void(void *member, const MemberInit *init));

/** The member's capacity, in characters. */
constexpr uint32_t member_capacity = 0x7f7;

}  // namespace

/**
 *
 * Constructs the owner: its base part first, then its own vtable, then the member at +0x68 from a record
 * that holds the flag heap and the capacity.
 *
 */
extern "C" void bb_auto_construct_member_owner_022e4e50(MemberOwner *owner)
{
    const void *base_address_point = base_vtable.address() + engine::vtable_address_point;
    construct_base(owner, &base_address_point);
    owner->vtable = owner_vtable.address();
    engine::Allocator *heap = flag_heap.get();
    MemberInit init{};
    init.vtable = member_init_vtable.address() + engine::vtable_address_point;
    init.allocator = heap;
    init.allocator_copy = heap;
    init.capacity = member_capacity;
    construct_member(owner->unknown_0x68, &init);
}

}  // namespace twin_022e4e50
