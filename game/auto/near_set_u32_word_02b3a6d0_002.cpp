// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_set_u32_word_160, in game/misc/set_u32_word_160.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>

// auto_set_u32_word_02d4d620: misc_set_u32_word_160 with other addresses and constants.
namespace near_02d4d620 {

/** An object of which only the 32-bit word set here is known. */
struct WordOwner {
    uint8_t unknown_0x0000[0x154];
    uint32_t word;
};
static_assert(offsetof(WordOwner, word) == 0x154);

/**
 *
 * Stores the low 32 bits of the value in the owner's word.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_u32_word_02d4d620(WordOwner *owner, uint32_t value)
{
    owner->word = value;
}

}  // namespace near_02d4d620

// auto_set_u32_word_02d55470: misc_set_u32_word_160 with other addresses and constants.
namespace near_02d55470 {

/** An object of which only the 32-bit word set here is known. */
struct WordOwner {
    uint8_t unknown_0x0000[0x1f0];
    uint32_t word;
};
static_assert(offsetof(WordOwner, word) == 0x1f0);

/**
 *
 * Stores the low 32 bits of the value in the owner's word.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_u32_word_02d55470(WordOwner *owner, uint32_t value)
{
    owner->word = value;
}

}  // namespace near_02d55470

// auto_set_u32_word_02e42b30: misc_set_u32_word_160 with other addresses and constants.
namespace near_02e42b30 {

/** An object of which only the 32-bit word set here is known. */
struct WordOwner {
    uint8_t unknown_0x0000[0xbf0];
    uint32_t word;
};
static_assert(offsetof(WordOwner, word) == 0xbf0);

/**
 *
 * Stores the low 32 bits of the value in the owner's word.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_u32_word_02e42b30(WordOwner *owner, uint32_t value)
{
    owner->word = value;
}

}  // namespace near_02e42b30

// auto_set_u32_word_02e496e0: misc_set_u32_word_160 with other addresses and constants.
namespace near_02e496e0 {

/** An object of which only the 32-bit word set here is known. */
struct WordOwner {
    uint8_t unknown_0x0000[0xc0];
    uint32_t word;
};
static_assert(offsetof(WordOwner, word) == 0xc0);

/**
 *
 * Stores the low 32 bits of the value in the owner's word.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_u32_word_02e496e0(WordOwner *owner, uint32_t value)
{
    owner->word = value;
}

}  // namespace near_02e496e0

// auto_set_u32_word_02e4afe0: misc_set_u32_word_160 with other addresses and constants.
namespace near_02e4afe0 {

/** An object of which only the 32-bit word set here is known. */
struct WordOwner {
    uint8_t unknown_0x0000[0xc0];
    uint32_t word;
};
static_assert(offsetof(WordOwner, word) == 0xc0);

/**
 *
 * Stores the low 32 bits of the value in the owner's word.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_u32_word_02e4afe0(WordOwner *owner, uint32_t value)
{
    owner->word = value;
}

}  // namespace near_02e4afe0

// auto_set_u32_word_02e4be60: misc_set_u32_word_160 with other addresses and constants.
namespace near_02e4be60 {

/** An object of which only the 32-bit word set here is known. */
struct WordOwner {
    uint8_t unknown_0x0000[0xc0];
    uint32_t word;
};
static_assert(offsetof(WordOwner, word) == 0xc0);

/**
 *
 * Stores the low 32 bits of the value in the owner's word.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_u32_word_02e4be60(WordOwner *owner, uint32_t value)
{
    owner->word = value;
}

}  // namespace near_02e4be60

// auto_set_u32_word_02e526c0: misc_set_u32_word_160 with other addresses and constants.
namespace near_02e526c0 {

/** An object of which only the 32-bit word set here is known. */
struct WordOwner {
    uint8_t unknown_0x0000[0xc0];
    uint32_t word;
};
static_assert(offsetof(WordOwner, word) == 0xc0);

/**
 *
 * Stores the low 32 bits of the value in the owner's word.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_u32_word_02e526c0(WordOwner *owner, uint32_t value)
{
    owner->word = value;
}

}  // namespace near_02e526c0
