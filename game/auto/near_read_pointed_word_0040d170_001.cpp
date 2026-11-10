// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_read_source_word, in game/misc/read_source_word.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>

// auto_read_pointed_word_00552870: misc_read_source_word with other addresses and constants.
namespace near_00552870 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x18];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x18);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x28];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x28);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00552870(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00552870

// auto_read_pointed_word_00552880: misc_read_source_word with other addresses and constants.
namespace near_00552880 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x18];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x18);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x28];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x28);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00552880(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00552880

// auto_read_pointed_word_00565f20: misc_read_source_word with other addresses and constants.
namespace near_00565f20 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x20];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x20);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x20];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x20);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00565f20(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00565f20

// auto_read_pointed_word_00570120: misc_read_source_word with other addresses and constants.
namespace near_00570120 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xd8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xd8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x20];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x20);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00570120(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00570120

// auto_read_pointed_word_005872c0: misc_read_source_word with other addresses and constants.
namespace near_005872c0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xd8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xd8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x20];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x20);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_005872c0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_005872c0

// auto_read_pointed_word_006bdb40: misc_read_source_word with other addresses and constants.
namespace near_006bdb40 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x218];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x218);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006bdb40(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006bdb40

// auto_read_pointed_word_006c49c0: misc_read_source_word with other addresses and constants.
namespace near_006c49c0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x240];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x240);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006c49c0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006c49c0

// auto_read_pointed_word_006c49d0: misc_read_source_word with other addresses and constants.
namespace near_006c49d0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x208];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x208);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006c49d0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006c49d0

// auto_read_pointed_word_006c49e0: misc_read_source_word with other addresses and constants.
namespace near_006c49e0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x248];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x248);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006c49e0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006c49e0

// auto_read_pointed_word_006c49f0: misc_read_source_word with other addresses and constants.
namespace near_006c49f0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x210];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x210);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006c49f0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006c49f0

// auto_read_pointed_word_006c4a00: misc_read_source_word with other addresses and constants.
namespace near_006c4a00 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x250];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x250);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006c4a00(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006c4a00

// auto_read_pointed_word_006c4a10: misc_read_source_word with other addresses and constants.
namespace near_006c4a10 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x200];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x200);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006c4a10(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006c4a10

// auto_read_pointed_word_006c4a20: misc_read_source_word with other addresses and constants.
namespace near_006c4a20 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x258];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x258);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006c4a20(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006c4a20

// auto_read_pointed_word_006d1430: misc_read_source_word with other addresses and constants.
namespace near_006d1430 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x20];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x20);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x18];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x18);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006d1430(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006d1430

// auto_read_pointed_word_006d6940: misc_read_source_word with other addresses and constants.
namespace near_006d6940 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xd8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xd8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x18];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x18);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006d6940(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006d6940

// auto_read_pointed_word_006e1f60: misc_read_source_word with other addresses and constants.
namespace near_006e1f60 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xd8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xd8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x18];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x18);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_006e1f60(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_006e1f60

// auto_read_pointed_word_0071cb70: misc_read_source_word with other addresses and constants.
namespace near_0071cb70 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x220];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x220);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0071cb70(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0071cb70

// auto_read_pointed_word_00721c00: misc_read_source_word with other addresses and constants.
namespace near_00721c00 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x1b0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x1b0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x80];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x80);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00721c00(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00721c00

// auto_read_pointed_word_007230f0: misc_read_source_word with other addresses and constants.
namespace near_007230f0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x1f8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x1f8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_007230f0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_007230f0

// auto_read_pointed_word_00723430: misc_read_source_word with other addresses and constants.
namespace near_00723430 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x270];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x270);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00723430(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00723430

// auto_read_pointed_word_00725ed0: misc_read_source_word with other addresses and constants.
namespace near_00725ed0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x28];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x28);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x10];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x10);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00725ed0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00725ed0

// auto_read_pointed_word_00731160: misc_read_source_word with other addresses and constants.
namespace near_00731160 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x2c0];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x2c0);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00731160(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00731160

// auto_read_pointed_word_00731b20: misc_read_source_word with other addresses and constants.
namespace near_00731b20 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x260];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x260);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00731b20(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00731b20

// auto_read_pointed_word_00731b30: misc_read_source_word with other addresses and constants.
namespace near_00731b30 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x268];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x268);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00731b30(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00731b30

// auto_read_pointed_word_007371f0: misc_read_source_word with other addresses and constants.
namespace near_007371f0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x30];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x30);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_007371f0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_007371f0

// auto_read_pointed_word_00737210: misc_read_source_word with other addresses and constants.
namespace near_00737210 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x38];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x38);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00737210(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00737210

// auto_read_pointed_word_008d7310: misc_read_source_word with other addresses and constants.
namespace near_008d7310 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x30];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x30);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x10];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x10);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_008d7310(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_008d7310

// auto_read_pointed_word_008d7410: misc_read_source_word with other addresses and constants.
namespace near_008d7410 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x48];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x48);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x10];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x10);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_008d7410(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_008d7410

// auto_read_pointed_word_00aa51a0: misc_read_source_word with other addresses and constants.
namespace near_00aa51a0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x20];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x20);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x38];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x38);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00aa51a0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00aa51a0

// auto_read_pointed_word_00aa51c0: misc_read_source_word with other addresses and constants.
namespace near_00aa51c0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x30];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x30);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x38];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x38);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00aa51c0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00aa51c0

// auto_read_pointed_word_00aa51e0: misc_read_source_word with other addresses and constants.
namespace near_00aa51e0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x40];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x40);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x38];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x38);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00aa51e0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00aa51e0

// auto_read_pointed_word_00e1ab80: misc_read_source_word with other addresses and constants.
namespace near_00e1ab80 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x16f0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x16f0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x7dc8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x7dc8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00e1ab80(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00e1ab80

// auto_read_pointed_word_00e24780: misc_read_source_word with other addresses and constants.
namespace near_00e24780 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x390];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x390);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x7dc8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x7dc8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00e24780(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00e24780

// auto_read_pointed_word_00e7bc30: misc_read_source_word with other addresses and constants.
namespace near_00e7bc30 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x18];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x18);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x50];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x50);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00e7bc30(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00e7bc30

// auto_read_pointed_word_00e7ce20: misc_read_source_word with other addresses and constants.
namespace near_00e7ce20 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x38];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x38);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x50];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x50);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00e7ce20(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00e7ce20

// auto_read_pointed_word_00e7dea0: misc_read_source_word with other addresses and constants.
namespace near_00e7dea0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x10];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x10);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x18];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x18);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00e7dea0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00e7dea0

// auto_read_pointed_word_00e7f160: misc_read_source_word with other addresses and constants.
namespace near_00e7f160 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x40];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x40);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x18];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x18);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00e7f160(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00e7f160

// auto_read_pointed_word_00e90b20: misc_read_source_word with other addresses and constants.
namespace near_00e90b20 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x40];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x40);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x10];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x10);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_00e90b20(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_00e90b20

// auto_read_pointed_word_013741a0: misc_read_source_word with other addresses and constants.
namespace near_013741a0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xf8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xf8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_013741a0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_013741a0

// auto_read_pointed_word_01374340: misc_read_source_word with other addresses and constants.
namespace near_01374340 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x1a8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x1a8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_01374340(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_01374340

// auto_read_pointed_word_01374980: misc_read_source_word with other addresses and constants.
namespace near_01374980 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xf0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xf0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_01374980(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_01374980

// auto_read_pointed_word_0138e550: misc_read_source_word with other addresses and constants.
namespace near_0138e550 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x18];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x18);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x10];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x10);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0138e550(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0138e550

// auto_read_pointed_word_013f2490: misc_read_source_word with other addresses and constants.
namespace near_013f2490 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xc8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xc8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_013f2490(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_013f2490

// auto_read_pointed_word_01438640: misc_read_source_word with other addresses and constants.
namespace near_01438640 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x10];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x10);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x60];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x60);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_01438640(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_01438640

// auto_read_pointed_word_014644d0: misc_read_source_word with other addresses and constants.
namespace near_014644d0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x50];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x50);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_014644d0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_014644d0

// auto_read_pointed_word_014644e0: misc_read_source_word with other addresses and constants.
namespace near_014644e0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xa30];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xa30);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x48];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x48);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_014644e0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_014644e0

// auto_read_pointed_word_01466950: misc_read_source_word with other addresses and constants.
namespace near_01466950 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x68];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x68);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_01466950(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_01466950

// auto_read_pointed_word_0163b320: misc_read_source_word with other addresses and constants.
namespace near_0163b320 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0xd8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0xd8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0163b320(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0163b320

// auto_read_pointed_word_0169ae10: misc_read_source_word with other addresses and constants.
namespace near_0169ae10 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x888];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x888);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0169ae10(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0169ae10

// auto_read_pointed_word_0169aef0: misc_read_source_word with other addresses and constants.
namespace near_0169aef0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x8a0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x8a0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0169aef0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0169aef0

// auto_read_pointed_word_0192daa0: misc_read_source_word with other addresses and constants.
namespace near_0192daa0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x18];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x18);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0192daa0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0192daa0

// auto_read_pointed_word_01c0b3e0: misc_read_source_word with other addresses and constants.
namespace near_01c0b3e0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x5c8];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x5c8);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_01c0b3e0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_01c0b3e0

// auto_read_pointed_word_01cc1b40: misc_read_source_word with other addresses and constants.
namespace near_01cc1b40 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0xf0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0xf0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x58];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x58);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_01cc1b40(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_01cc1b40

// auto_read_pointed_word_020a2760: misc_read_source_word with other addresses and constants.
namespace near_020a2760 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x208];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x208);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x18];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x18);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_020a2760(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_020a2760

// auto_read_pointed_word_020f49b0: misc_read_source_word with other addresses and constants.
namespace near_020f49b0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x8e0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x8e0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0xd0];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0xd0);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_020f49b0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_020f49b0

// auto_read_pointed_word_0216f970: misc_read_source_word with other addresses and constants.
namespace near_0216f970 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x388];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x388);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x50];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x50);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0216f970(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0216f970

// auto_read_pointed_word_0216f980: misc_read_source_word with other addresses and constants.
namespace near_0216f980 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x388];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x388);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x50];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x50);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0216f980(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0216f980

// auto_read_pointed_word_021ce030: misc_read_source_word with other addresses and constants.
namespace near_021ce030 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x20];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x20);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x50];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x50);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_021ce030(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_021ce030

// auto_read_pointed_word_023c3bd0: misc_read_source_word with other addresses and constants.
namespace near_023c3bd0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x30];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x30);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_023c3bd0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_023c3bd0

// auto_read_pointed_word_023c3f80: misc_read_source_word with other addresses and constants.
namespace near_023c3f80 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x460];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x460);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_023c3f80(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_023c3f80

// auto_read_pointed_word_023c4180: misc_read_source_word with other addresses and constants.
namespace near_023c4180 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x28];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x28);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_023c4180(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_023c4180

// auto_read_pointed_word_023c42d0: misc_read_source_word with other addresses and constants.
namespace near_023c42d0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x40];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x40);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_023c42d0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_023c42d0

// auto_read_pointed_word_023c4760: misc_read_source_word with other addresses and constants.
namespace near_023c4760 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x30];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x30);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_023c4760(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_023c4760

// auto_read_pointed_word_023c5d20: misc_read_source_word with other addresses and constants.
namespace near_023c5d20 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x460];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x460);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_023c5d20(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_023c5d20

// auto_read_pointed_word_023c6580: misc_read_source_word with other addresses and constants.
namespace near_023c6580 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x40];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x40);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_023c6580(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_023c6580

// auto_read_pointed_word_023c70b0: misc_read_source_word with other addresses and constants.
namespace near_023c70b0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x28];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x28);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_023c70b0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_023c70b0

// auto_read_pointed_word_0247cb80: misc_read_source_word with other addresses and constants.
namespace near_0247cb80 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x438];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x438);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0247cb80(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0247cb80

// auto_read_pointed_word_02482ef0: misc_read_source_word with other addresses and constants.
namespace near_02482ef0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x460];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x460);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_02482ef0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_02482ef0

// auto_read_pointed_word_02482f00: misc_read_source_word with other addresses and constants.
namespace near_02482f00 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x40];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x40);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_02482f00(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_02482f00

// auto_read_pointed_word_02482f80: misc_read_source_word with other addresses and constants.
namespace near_02482f80 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x48];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x48);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_02482f80(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_02482f80

// auto_read_pointed_word_024c1df0: misc_read_source_word with other addresses and constants.
namespace near_024c1df0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x28];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x28);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_024c1df0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_024c1df0

// auto_read_pointed_word_024ed0d0: misc_read_source_word with other addresses and constants.
namespace near_024ed0d0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x460];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x460);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_024ed0d0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_024ed0d0

// auto_read_pointed_word_024ed0e0: misc_read_source_word with other addresses and constants.
namespace near_024ed0e0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x40];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x40);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_024ed0e0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_024ed0e0

// auto_read_pointed_word_024ed160: misc_read_source_word with other addresses and constants.
namespace near_024ed160 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x48];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x48);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x8];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x8);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_024ed160(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_024ed160

// auto_read_pointed_word_0271ca40: misc_read_source_word with other addresses and constants.
namespace near_0271ca40 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x18];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x18);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x10];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x10);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0271ca40(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0271ca40

// auto_read_pointed_word_0278e2f0: misc_read_source_word with other addresses and constants.
namespace near_0278e2f0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x1c0];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x1c0);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x40];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x40);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0278e2f0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0278e2f0

// auto_read_pointed_word_0278e360: misc_read_source_word with other addresses and constants.
namespace near_0278e360 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x38];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x38);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x40];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x40);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0278e360(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0278e360

// auto_read_pointed_word_0278e380: misc_read_source_word with other addresses and constants.
namespace near_0278e380 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x38];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x38);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x20];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x20);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0278e380(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0278e380

// auto_read_pointed_word_0278e790: misc_read_source_word with other addresses and constants.
namespace near_0278e790 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x10];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x10);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x48];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x48);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0278e790(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0278e790

// auto_read_pointed_word_0278e870: misc_read_source_word with other addresses and constants.
namespace near_0278e870 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x18];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x18);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x48];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x48);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_0278e870(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_0278e870

// auto_read_pointed_word_028043d0: misc_read_source_word with other addresses and constants.
namespace near_028043d0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x18];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x18);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x38];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x38);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_028043d0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_028043d0

// auto_read_pointed_word_028a2800: misc_read_source_word with other addresses and constants.
namespace near_028a2800 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x18];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x18);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x48];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x48);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_028a2800(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_028a2800

// auto_read_pointed_word_028cd3f0: misc_read_source_word with other addresses and constants.
namespace near_028cd3f0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x30];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x30);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x50];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x50);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_028cd3f0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_028cd3f0

// auto_read_pointed_word_028cd400: misc_read_source_word with other addresses and constants.
namespace near_028cd400 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x40];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x40);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x50];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x50);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_028cd400(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_028cd400

// auto_read_pointed_word_028cd410: misc_read_source_word with other addresses and constants.
namespace near_028cd410 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x50];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x50);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x50];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x50);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_028cd410(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_028cd410

// auto_read_pointed_word_028f6ef0: misc_read_source_word with other addresses and constants.
namespace near_028f6ef0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x58];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x58);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x10];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x10);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_028f6ef0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_028f6ef0

// auto_read_pointed_word_028f90d0: misc_read_source_word with other addresses and constants.
namespace near_028f90d0 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x10];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x10);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x18];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x18);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_028f90d0(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_028f90d0

// auto_read_pointed_word_02a70070: misc_read_source_word with other addresses and constants.
namespace near_02a70070 {

/** The object a holder points to, of which only the word read here is known. */
struct WordSource {
    uint8_t unknown_0x0000[0x20];
    uint64_t word;
};
static_assert(offsetof(WordSource, word) == 0x20);

/** An object of which only its pointer to the source is known. */
struct WordHolder {
    uint8_t unknown_0x0000[0x68];
    const WordSource *source;
};
static_assert(offsetof(WordHolder, source) == 0x68);

/**
 *
 * Returns the word of the source the holder points to.
 *
 * The source is not checked for null, as in the original.
 */
extern "C" uint64_t bb_auto_read_pointed_word_02a70070(const WordHolder *holder)
{
    return holder->source->word;
}

}  // namespace near_02a70070
