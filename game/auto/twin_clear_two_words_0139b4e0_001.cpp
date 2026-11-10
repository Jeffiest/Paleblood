// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_clear_two_words, in game/misc/clear_two_words.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>

// auto_clear_two_words_0042fa70: misc_clear_two_words with other addresses.
namespace twin_0042fa70 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_0042fa70(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_0042fa70

// auto_clear_two_words_00ae6dc0: misc_clear_two_words with other addresses.
namespace twin_00ae6dc0 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_00ae6dc0(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_00ae6dc0

// auto_clear_two_words_00df09d0: misc_clear_two_words with other addresses.
namespace twin_00df09d0 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_00df09d0(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_00df09d0

// auto_clear_two_words_0124cca0: misc_clear_two_words with other addresses.
namespace twin_0124cca0 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_0124cca0(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_0124cca0

// auto_clear_two_words_0192d310: misc_clear_two_words with other addresses.
namespace twin_0192d310 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_0192d310(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_0192d310

// auto_clear_two_words_01bc8fa0: misc_clear_two_words with other addresses.
namespace twin_01bc8fa0 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_01bc8fa0(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_01bc8fa0

// auto_clear_two_words_02055c20: misc_clear_two_words with other addresses.
namespace twin_02055c20 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_02055c20(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_02055c20

// auto_clear_two_words_024df520: misc_clear_two_words with other addresses.
namespace twin_024df520 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_024df520(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_024df520

// auto_clear_two_words_0257f650: misc_clear_two_words with other addresses.
namespace twin_0257f650 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_0257f650(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_0257f650

// auto_clear_two_words_02719210: misc_clear_two_words with other addresses.
namespace twin_02719210 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_02719210(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_02719210

// auto_clear_two_words_02c2e1a0: misc_clear_two_words with other addresses.
namespace twin_02c2e1a0 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_02c2e1a0(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_02c2e1a0

// auto_clear_two_words_02c81af0: misc_clear_two_words with other addresses.
namespace twin_02c81af0 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_02c81af0(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_02c81af0

// auto_clear_two_words_02fa7840: misc_clear_two_words with other addresses.
namespace twin_02fa7840 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_02fa7840(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_02fa7840

// auto_clear_two_words_02fa8190: misc_clear_two_words with other addresses.
namespace twin_02fa8190 {

// Misc: clear both 64-bit words of a two-word record.

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_auto_clear_two_words_02fa8190(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}

}  // namespace twin_02fa8190
