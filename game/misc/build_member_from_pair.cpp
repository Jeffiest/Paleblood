// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: makes a member from a pair source: a provided object is retained and held, the pair's target makes a built member, and a counted handle is released.
#include <cstdint>

#include "member_build_object.h"
#include "member_build_provider.h"
#include "member_build_source.h"
#include "misc.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x00410d90, init_member_original, void(void *member, void *source, uint32_t width));
RT_ORIGINAL(0x00454320, route_dispatch, uint64_t(void *handle));
RT_GLOBAL(0x0553c870, member_table, const uint8_t);

/** The offset of the member vtable inside its table. */
constexpr uint64_t member_vtable_offset = 0x10;
/** The width the member is initialized with before the build. */
constexpr uint32_t member_init_width = 0x20003;
/** The tag the member carries. */
constexpr uint32_t member_tag = 0x90000;
/** The size of the count cell the scratch service hands out, and its flags. */
constexpr uint32_t count_cell_size = 0x8;
constexpr uint32_t count_cell_flags = 0;
/** The bit of the held object's flag byte that sets the member's flag, and the shift that reaches it. */
constexpr uint8_t held_flag_shift = 0x4;
constexpr uint8_t held_flag_mask = 0x1;
/** The count the counted handle's last holder sees before it is released. */
constexpr int32_t last_holder_count = 0x1;
/** The kind the descriptor carries for the target. */
constexpr uint32_t descriptor_kind = 0x2;
/** The bits of the tagged handle that are not the object's address. */
constexpr uint64_t handle_tag_mask = 0x3;

}  // namespace

/**
 *
 * Makes a member from a pair source. The member is initialized, then the provided object is retained and
 * its held object's flag is read. Unless the pair has no target or the flag is set, the target makes a
 * built member from a counted handle (the route word, or the dispatch result when the route has no word),
 * the old built member is released, the new one is bound, a count cell is taken from the scratch
 * service, and the handle's count is taken down, releasing the counted object on the last count.
 *
 */
extern "C" void bb_misc_build_member_from_pair(misc::MemberBuildObject *member, misc::MemberBuildSource *source,
                                               misc::MemberBuildProvider *provider, void *extra)
{
    init_member_original(member, source, member_init_width);
    member->vtable = static_cast<const uint8_t *>(member_table.address()) + member_vtable_offset;
    member->cleared = 0;
    member->tag = member_tag;
    member->built = nullptr;
    misc::MemberBuildProvided *provided = provider->provided;
    if (provided != nullptr) {
        misc::fn_0045a4b0(provided);
    }
    member->provided = provided;
    member->extra = extra;

    misc::MemberBuildHeld *held = provided->held;
    member->held = held;
    const uint8_t held_bits = held->vtable->report(held);
    member->flag = ((held_bits >> held_flag_shift) & held_flag_mask) != 0;

    misc::MemberBuildPairTarget *target = source->pair->target;
    if (target == nullptr || member->flag) {
        member->cell = nullptr;
        return;
    }

    uint64_t handle = 0;
    misc::fn_0045c6f0(&handle);
    uint64_t route_word = 0;
    misc::MemberBuildRoute *route = source->route;
    if (route != nullptr) {
        route_word = route->value;
        if (route_word == 0) {
            route_word = route_dispatch(&handle);
        }
    }

    misc::MemberBuildDescriptor descriptor{};
    descriptor.kind = descriptor_kind;
    descriptor.route_word = route_word;
    descriptor.pair_word = source->pair->head;
    descriptor.source_word = source->value;
    descriptor.provided_word = provider->vtable->word(provider);
    descriptor.first_flag = 1;
    descriptor.second_flag = 1;
    descriptor.zero_word = 0;

    misc::BuiltMember *built = target->vtable->make(target, &member->tag, source->pair->key, &descriptor);
    if (member->built != nullptr) {
        misc::fn_0045a510(member->built);
    }
    member->built = built;
    built->vtable->bind(built, provided);

    misc::Service *service = misc::scratch_service.get();
    auto *cell = static_cast<uint64_t *>(service->vtable->allocate(service, count_cell_size, count_cell_flags));
    *cell = 0;
    member->cell = cell;

    auto *counted = reinterpret_cast<misc::MemberBuildCounted *>(handle & ~handle_tag_mask);
    const int32_t previous = __atomic_fetch_add(&counted->count, -1, __ATOMIC_SEQ_CST);
    if (previous == last_holder_count) {
        service->vtable->release(service, counted);
    }
}
