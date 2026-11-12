// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "flagged_text_entry.h"

#include "runtime/original.h"

namespace {

using misc::FlaggedTextEntry;

constexpr uint16_t flag_key = 0x1;
constexpr uint16_t flag_weight = 0x2;
constexpr uint16_t flag_text = 0x4;
constexpr uint16_t flag_level = 0x8;
constexpr uint16_t flag_option_one = 0x10;
constexpr uint16_t flag_option_two = 0x20;
constexpr uint16_t flag_option_four = 0x40;
constexpr uint16_t flag_option_eight = 0x80;
constexpr uint16_t flag_second_text = 0x100;
constexpr uint16_t flag_shared = 0x200;
constexpr uint16_t flag_tag_byte = 0x400;
constexpr uint16_t flag_identity = 0x800;

constexpr uint8_t option_one = 0x1;
constexpr uint8_t option_two = 0x2;
constexpr uint8_t option_four = 0x4;
constexpr uint8_t option_eight = 0x8;
constexpr unsigned no_shift = 0;
constexpr unsigned option_two_shift = 1;
constexpr uint32_t tag_byte_mask = 0xff000000;

struct StaticText {
    uint64_t tagged_text;
};

RT_ORIGINAL(0x0046ab40, fn_0046ab40, void(FlaggedTextEntry *destination, const FlaggedTextEntry *base, uint64_t zero));
RT_ORIGINAL(0x0046ad00, fn_0046ad00, void(FlaggedTextEntry *destination, const uint64_t *text));
RT_ORIGINAL(0x0045ce40, fn_0045ce40, uint64_t(const uint64_t *text));
RT_ORIGINAL(0x0045d6a0, fn_0045d6a0, void(uint64_t *destination, const uint64_t *source));
RT_ORIGINAL(0x0045dfc0, fn_0045dfc0, void(uint64_t *text));
RT_ORIGINAL(0x0045a4b0, fn_0045a4b0, void(void *object));
RT_ORIGINAL(0x0045a4c0, fn_0045a4c0, void(void *object));
RT_ORIGINAL(0x0045a510, fn_0045a510, void(misc::FlaggedTextEntryShared *shared));
RT_ORIGINAL(0x0045c6f0, fn_0045c6f0, void(StaticText *text));
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe548, register_destructor, void(void *destructor, void *object, void *handle));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_GLOBAL(0x057e9958, empty_text_guard, uint8_t);
RT_GLOBAL(0x057e9950, empty_text, StaticText);
RT_GLOBAL(0x027a5d10, empty_text_destructor, uint8_t);
RT_GLOBAL(0x0553b490, module_handle, uint8_t);

/** Copies one option bit and marks it present, dropping the identity when the destination's bit differs. */
void merge_option_dropping_identity(FlaggedTextEntry *destination, const FlaggedTextEntry *source, uint8_t option,
                                    unsigned shift, uint16_t flag, uint16_t &source_flags)
{
    const uint8_t source_bit = source->option_bits & option;
    uint32_t destination_flags = destination->flags;
    if (destination_flags & flag_identity) {
        const bool source_set = source_bit != 0;
        const bool destination_set = ((destination->option_bits & option) >> shift) != 0;
        if (destination_set != source_set) {
            if (destination->identity) {
                fn_0045a4c0(destination->identity);
                destination_flags = destination->flags;
                source_flags = source->flags;
            }
            destination->identity = nullptr;
            destination_flags &= static_cast<uint16_t>(~flag_identity);
            destination->flags = static_cast<uint16_t>(destination_flags);
        }
    }
    uint8_t bits = destination->option_bits;
    if (source_bit) bits |= option; else bits &= static_cast<uint8_t>(~option);
    destination->option_bits = bits;
    destination->flags = static_cast<uint16_t>(destination_flags | flag);
}

/** Copies one option bit and marks it present. */
void merge_option(FlaggedTextEntry *destination, const FlaggedTextEntry *source, uint8_t option, uint16_t flag)
{
    uint8_t bits = destination->option_bits;
    if (source->option_bits & option) bits |= option; else bits &= static_cast<uint8_t>(~option);
    destination->option_bits = bits;
    destination->flags = static_cast<uint16_t>(destination->flags | flag);
}

}  // namespace

/**
 *
 * Copies the fields that source marks as present onto destination, starting from a copy of base.
 *
 * Returns destination.
 */
extern "C" FlaggedTextEntry *bb_misc_tagged_entry_merge(FlaggedTextEntry *destination, const FlaggedTextEntry *base,
                                                   const FlaggedTextEntry *source)
{
    fn_0046ab40(destination, base, 0);
    uint16_t flags = source->flags;

    if (flags & flag_option_one)
        merge_option_dropping_identity(destination, source, option_one, no_shift, flag_option_one, flags);
    if (flags & flag_option_two)
        merge_option_dropping_identity(destination, source, option_two, option_two_shift, flag_option_two, flags);
    if (flags & flag_option_four) merge_option(destination, source, option_four, flag_option_four);
    if (flags & flag_option_eight) merge_option(destination, source, option_eight, flag_option_eight);
    if (flags & flag_key) {
        destination->key_and_tag = source->key_and_tag;
        destination->flags |= flag_key;
    }
    if (flags & flag_tag_byte) {
        destination->key_and_tag = (destination->key_and_tag & ~tag_byte_mask) | (source->key_and_tag & tag_byte_mask);
        destination->flags |= flag_tag_byte;
    }
    if (flags & flag_weight) {
        destination->weight = static_cast<float>(static_cast<int16_t>(static_cast<int32_t>(source->weight)));
        destination->flags |= flag_weight;
    }
    if (flags & flag_level) {
        destination->level = source->level;
        destination->flags |= flag_level;
    }
    if (flags & flag_text) {
        if (!empty_text_guard.get() && guard_acquire(empty_text_guard.address())) {
            fn_0045c6f0(empty_text.address());
            register_destructor(empty_text_destructor.address(), empty_text.address(), module_handle.address());
            guard_release(empty_text_guard.address());
        }
        flags = source->flags;
        const uint64_t *text = (flags & flag_text) ? &source->tagged_text : &empty_text.get().tagged_text;
        fn_0046ad00(destination, text);
        flags = source->flags;
    }
    if (flags & flag_identity) {
        void *identity = nullptr;
        if (source->identity) {
            fn_0045a4b0(source->identity);
            void *held = source->identity;
            if (held) {
                fn_0045a4c0(held);
                fn_0045a4b0(held);
                identity = held;
            }
        }
        if (destination->identity) fn_0045a4c0(destination->identity);
        destination->identity = identity;
        destination->flags |= flag_identity;
        flags = source->flags;
    }
    bool second_text_cleared = false;
    if (flags & flag_second_text) {
        if (fn_0045ce40(&source->second_text) == 0) {
            fn_0045dfc0(&destination->second_text);
            destination->flags &= static_cast<uint16_t>(~flag_second_text);
            second_text_cleared = true;
        } else {
            flags = source->flags;
        }
    }
    if (!second_text_cleared && (flags & flag_second_text)) {
        if (fn_0045ce40(&source->second_text) != 0) {
            fn_0045d6a0(&destination->second_text, &source->second_text);
            destination->flags |= flag_second_text;
        }
    }
    if (source->flags & flag_shared) {
        misc::FlaggedTextEntryShared *shared = source->shared;
        misc::FlaggedTextEntryShared *kept = nullptr;
        if (shared) {
            shared->reference_count++;
            fn_0045a510(shared);
            shared->reference_count++;
            kept = shared;
        }
        if (destination->shared) fn_0045a510(destination->shared);
        destination->shared = kept;
        destination->flags |= flag_shared;
    }
    return destination;
}
