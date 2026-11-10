// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_destroy_then_release, in game/misc/destroy_then_release.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_destroy_then_release_020c30b0: misc_destroy_then_release with other addresses.
namespace twin_020c30b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020c30b0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020c30b0

// auto_destroy_then_release_020c43f0: misc_destroy_then_release with other addresses.
namespace twin_020c43f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020c43f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020c43f0

// auto_destroy_then_release_020c5580: misc_destroy_then_release with other addresses.
namespace twin_020c5580 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x020c55a0, fn_020c55a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020c5580(void *object)
{
    fn_020c55a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020c5580

// auto_destroy_then_release_020c5c10: misc_destroy_then_release with other addresses.
namespace twin_020c5c10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020c5c10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020c5c10

// auto_destroy_then_release_020cd260: misc_destroy_then_release with other addresses.
namespace twin_020cd260 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020cd260(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020cd260

// auto_destroy_then_release_020cd5d0: misc_destroy_then_release with other addresses.
namespace twin_020cd5d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020cd5d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020cd5d0

// auto_destroy_then_release_020cd8f0: misc_destroy_then_release with other addresses.
namespace twin_020cd8f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020cd8f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020cd8f0

// auto_destroy_then_release_020cdc10: misc_destroy_then_release with other addresses.
namespace twin_020cdc10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020cdc10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020cdc10

// auto_destroy_then_release_020cdf30: misc_destroy_then_release with other addresses.
namespace twin_020cdf30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020cdf30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020cdf30

// auto_destroy_then_release_020d2830: misc_destroy_then_release with other addresses.
namespace twin_020d2830 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d2830(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d2830

// auto_destroy_then_release_020d2b50: misc_destroy_then_release with other addresses.
namespace twin_020d2b50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d2b50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d2b50

// auto_destroy_then_release_020d2e70: misc_destroy_then_release with other addresses.
namespace twin_020d2e70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d2e70(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d2e70

// auto_destroy_then_release_020d3190: misc_destroy_then_release with other addresses.
namespace twin_020d3190 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d3190(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d3190

// auto_destroy_then_release_020d3f40: misc_destroy_then_release with other addresses.
namespace twin_020d3f40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d3f40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d3f40

// auto_destroy_then_release_020d45f0: misc_destroy_then_release with other addresses.
namespace twin_020d45f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d45f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d45f0

// auto_destroy_then_release_020d7650: misc_destroy_then_release with other addresses.
namespace twin_020d7650 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d7650(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d7650

// auto_destroy_then_release_020d78f0: misc_destroy_then_release with other addresses.
namespace twin_020d78f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d78f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d78f0

// auto_destroy_then_release_020d7c10: misc_destroy_then_release with other addresses.
namespace twin_020d7c10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d7c10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d7c10

// auto_destroy_then_release_020d7f30: misc_destroy_then_release with other addresses.
namespace twin_020d7f30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d7f30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d7f30

// auto_destroy_then_release_020d8250: misc_destroy_then_release with other addresses.
namespace twin_020d8250 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d8250(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d8250

// auto_destroy_then_release_020d8e50: misc_destroy_then_release with other addresses.
namespace twin_020d8e50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020d8e50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020d8e50

// auto_destroy_then_release_020dadc0: misc_destroy_then_release with other addresses.
namespace twin_020dadc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020dadc0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020dadc0

// auto_destroy_then_release_020dec60: misc_destroy_then_release with other addresses.
namespace twin_020dec60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0137bd50, fn_0137bd50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020dec60(void *object)
{
    fn_0137bd50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020dec60

// auto_destroy_then_release_020ded30: misc_destroy_then_release with other addresses.
namespace twin_020ded30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0137d500, fn_0137d500, void(void *));
RT_ORIGINAL(0x0137d570, fn_0137d570, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020ded30(void *object)
{
    fn_0137d500(object);
    return fn_0137d570(object);
}

}  // namespace twin_020ded30

// auto_destroy_then_release_020e75b0: misc_destroy_then_release with other addresses.
namespace twin_020e75b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0137bd50, fn_0137bd50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020e75b0(void *object)
{
    fn_0137bd50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020e75b0

// auto_destroy_then_release_020e8070: misc_destroy_then_release with other addresses.
namespace twin_020e8070 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0137bd50, fn_0137bd50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020e8070(void *object)
{
    fn_0137bd50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020e8070

// auto_destroy_then_release_020e8e70: misc_destroy_then_release with other addresses.
namespace twin_020e8e70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0137bd50, fn_0137bd50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020e8e70(void *object)
{
    fn_0137bd50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020e8e70

// auto_destroy_then_release_020ea220: misc_destroy_then_release with other addresses.
namespace twin_020ea220 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0137bd50, fn_0137bd50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020ea220(void *object)
{
    fn_0137bd50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020ea220

// auto_destroy_then_release_020eb170: misc_destroy_then_release with other addresses.
namespace twin_020eb170 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0137bd50, fn_0137bd50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020eb170(void *object)
{
    fn_0137bd50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020eb170

// auto_destroy_then_release_020ef420: misc_destroy_then_release with other addresses.
namespace twin_020ef420 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x020ef440, fn_020ef440, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020ef420(void *object)
{
    fn_020ef440(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020ef420

// auto_destroy_then_release_020f1cb0: misc_destroy_then_release with other addresses.
namespace twin_020f1cb0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x020f1cd0, fn_020f1cd0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020f1cb0(void *object)
{
    fn_020f1cd0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020f1cb0

// auto_destroy_then_release_020f75c0: misc_destroy_then_release with other addresses.
namespace twin_020f75c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020f75c0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020f75c0

// auto_destroy_then_release_020f7860: misc_destroy_then_release with other addresses.
namespace twin_020f7860 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020f7860(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020f7860

// auto_destroy_then_release_020f7b80: misc_destroy_then_release with other addresses.
namespace twin_020f7b80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020f7b80(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020f7b80

// auto_destroy_then_release_020f7ea0: misc_destroy_then_release with other addresses.
namespace twin_020f7ea0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020f7ea0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020f7ea0

// auto_destroy_then_release_020f81c0: misc_destroy_then_release with other addresses.
namespace twin_020f81c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020f81c0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020f81c0

// auto_destroy_then_release_020f9470: misc_destroy_then_release with other addresses.
namespace twin_020f9470 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x020f9490, fn_020f9490, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020f9470(void *object)
{
    fn_020f9490(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020f9470

// auto_destroy_then_release_020fdd50: misc_destroy_then_release with other addresses.
namespace twin_020fdd50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020fdd50(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020fdd50

// auto_destroy_then_release_020fe000: misc_destroy_then_release with other addresses.
namespace twin_020fe000 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020fe000(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020fe000

// auto_destroy_then_release_020fe320: misc_destroy_then_release with other addresses.
namespace twin_020fe320 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020fe320(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020fe320

// auto_destroy_then_release_020fe640: misc_destroy_then_release with other addresses.
namespace twin_020fe640 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020fe640(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020fe640

// auto_destroy_then_release_020fe960: misc_destroy_then_release with other addresses.
namespace twin_020fe960 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_020fe960(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_020fe960

// auto_destroy_then_release_02104d30: misc_destroy_then_release with other addresses.
namespace twin_02104d30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02104d30(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02104d30

// auto_destroy_then_release_02104fd0: misc_destroy_then_release with other addresses.
namespace twin_02104fd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02104fd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02104fd0

// auto_destroy_then_release_021052f0: misc_destroy_then_release with other addresses.
namespace twin_021052f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021052f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021052f0

// auto_destroy_then_release_02105610: misc_destroy_then_release with other addresses.
namespace twin_02105610 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02105610(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02105610

// auto_destroy_then_release_02105930: misc_destroy_then_release with other addresses.
namespace twin_02105930 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02105930(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02105930

// auto_destroy_then_release_0210a990: misc_destroy_then_release with other addresses.
namespace twin_0210a990 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0210a990(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0210a990

// auto_destroy_then_release_0210acb0: misc_destroy_then_release with other addresses.
namespace twin_0210acb0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0210acb0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0210acb0

// auto_destroy_then_release_0210afd0: misc_destroy_then_release with other addresses.
namespace twin_0210afd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0210afd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0210afd0

// auto_destroy_then_release_0210b2f0: misc_destroy_then_release with other addresses.
namespace twin_0210b2f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0210b2f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0210b2f0

// auto_destroy_then_release_0210c900: misc_destroy_then_release with other addresses.
namespace twin_0210c900 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0210c900(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0210c900

// auto_destroy_then_release_0210cd70: misc_destroy_then_release with other addresses.
namespace twin_0210cd70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01372820, fn_01372820, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0210cd70(void *object)
{
    fn_01372820(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0210cd70

// auto_destroy_then_release_021100d0: misc_destroy_then_release with other addresses.
namespace twin_021100d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x021100f0, fn_021100f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021100d0(void *object)
{
    fn_021100f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021100d0

// auto_destroy_then_release_02111c60: misc_destroy_then_release with other addresses.
namespace twin_02111c60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02111c80, fn_02111c80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02111c60(void *object)
{
    fn_02111c80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02111c60

// auto_destroy_then_release_02114000: misc_destroy_then_release with other addresses.
namespace twin_02114000 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02114000(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02114000

// auto_destroy_then_release_02115d00: misc_destroy_then_release with other addresses.
namespace twin_02115d00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02115d00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02115d00

// auto_destroy_then_release_021170e0: misc_destroy_then_release with other addresses.
namespace twin_021170e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021170e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021170e0

// auto_destroy_then_release_02118e50: misc_destroy_then_release with other addresses.
namespace twin_02118e50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x016ea820, fn_016ea820, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02118e50(void *object)
{
    fn_016ea820(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02118e50

// auto_destroy_then_release_02119380: misc_destroy_then_release with other addresses.
namespace twin_02119380 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02682d10, fn_02682d10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02119380(void *object)
{
    fn_02682d10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02119380

// auto_destroy_then_release_02119790: misc_destroy_then_release with other addresses.
namespace twin_02119790 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02119790(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02119790

// auto_destroy_then_release_02119e40: misc_destroy_then_release with other addresses.
namespace twin_02119e40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02119e40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02119e40

// auto_destroy_then_release_0211e3a0: misc_destroy_then_release with other addresses.
namespace twin_0211e3a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0211e3a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0211e3a0

// auto_destroy_then_release_0211ee30: misc_destroy_then_release with other addresses.
namespace twin_0211ee30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0211ee30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0211ee30

// auto_destroy_then_release_0211f600: misc_destroy_then_release with other addresses.
namespace twin_0211f600 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02682d10, fn_02682d10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0211f600(void *object)
{
    fn_02682d10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0211f600

// auto_destroy_then_release_0211fa90: misc_destroy_then_release with other addresses.
namespace twin_0211fa90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0211fa90(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0211fa90

// auto_destroy_then_release_02120180: misc_destroy_then_release with other addresses.
namespace twin_02120180 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02120180(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02120180

// auto_destroy_then_release_02122dc0: misc_destroy_then_release with other addresses.
namespace twin_02122dc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x016ea820, fn_016ea820, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02122dc0(void *object)
{
    fn_016ea820(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02122dc0

// auto_destroy_then_release_02126750: misc_destroy_then_release with other addresses.
namespace twin_02126750 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x016ea820, fn_016ea820, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02126750(void *object)
{
    fn_016ea820(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02126750

// auto_destroy_then_release_02126850: misc_destroy_then_release with other addresses.
namespace twin_02126850 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02126850(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02126850

// auto_destroy_then_release_02127a50: misc_destroy_then_release with other addresses.
namespace twin_02127a50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02127a50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02127a50

// auto_destroy_then_release_0212bcc0: misc_destroy_then_release with other addresses.
namespace twin_0212bcc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02dcc960, fn_02dcc960, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0212bcc0(void *object)
{
    fn_02dcc960(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0212bcc0

// auto_destroy_then_release_0213dc60: misc_destroy_then_release with other addresses.
namespace twin_0213dc60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0213dc80, fn_0213dc80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0213dc60(void *object)
{
    fn_0213dc80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0213dc60

// auto_destroy_then_release_02140820: misc_destroy_then_release with other addresses.
namespace twin_02140820 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02140820(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02140820

// auto_destroy_then_release_02140b40: misc_destroy_then_release with other addresses.
namespace twin_02140b40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02140b40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02140b40

// auto_destroy_then_release_02140e60: misc_destroy_then_release with other addresses.
namespace twin_02140e60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02140e60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02140e60

// auto_destroy_then_release_02141180: misc_destroy_then_release with other addresses.
namespace twin_02141180 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02141180(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02141180

// auto_destroy_then_release_02141790: misc_destroy_then_release with other addresses.
namespace twin_02141790 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x021417b0, fn_021417b0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02141790(void *object)
{
    fn_021417b0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02141790

// auto_destroy_then_release_02145070: misc_destroy_then_release with other addresses.
namespace twin_02145070 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02671b80, fn_02671b80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02145070(void *object)
{
    fn_02671b80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02145070

// auto_destroy_then_release_02146bd0: misc_destroy_then_release with other addresses.
namespace twin_02146bd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02146bd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02146bd0

// auto_destroy_then_release_02147fe0: misc_destroy_then_release with other addresses.
namespace twin_02147fe0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02147fe0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02147fe0

// auto_destroy_then_release_02148330: misc_destroy_then_release with other addresses.
namespace twin_02148330 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02655680, fn_02655680, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02148330(void *object)
{
    fn_02655680(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02148330

// auto_destroy_then_release_021492d0: misc_destroy_then_release with other addresses.
namespace twin_021492d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021492d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021492d0

// auto_destroy_then_release_02149ee0: misc_destroy_then_release with other addresses.
namespace twin_02149ee0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02149ee0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02149ee0

// auto_destroy_then_release_0214ce90: misc_destroy_then_release with other addresses.
namespace twin_0214ce90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0214ce90(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0214ce90

// auto_destroy_then_release_0214d1b0: misc_destroy_then_release with other addresses.
namespace twin_0214d1b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0214d1b0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0214d1b0

// auto_destroy_then_release_0214d4d0: misc_destroy_then_release with other addresses.
namespace twin_0214d4d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0214d4d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0214d4d0

// auto_destroy_then_release_0214d7f0: misc_destroy_then_release with other addresses.
namespace twin_0214d7f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0214d7f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0214d7f0

// auto_destroy_then_release_0214eee0: misc_destroy_then_release with other addresses.
namespace twin_0214eee0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0214eee0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0214eee0

// auto_destroy_then_release_02153050: misc_destroy_then_release with other addresses.
namespace twin_02153050 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02153070, fn_02153070, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02153050(void *object)
{
    fn_02153070(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02153050

// auto_destroy_then_release_02153560: misc_destroy_then_release with other addresses.
namespace twin_02153560 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02153580, fn_02153580, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02153560(void *object)
{
    fn_02153580(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02153560

// auto_destroy_then_release_02154bd0: misc_destroy_then_release with other addresses.
namespace twin_02154bd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02154bf0, fn_02154bf0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02154bd0(void *object)
{
    fn_02154bf0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02154bd0

// auto_destroy_then_release_02155370: misc_destroy_then_release with other addresses.
namespace twin_02155370 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02155370(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02155370

// auto_destroy_then_release_02156320: misc_destroy_then_release with other addresses.
namespace twin_02156320 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02156340, fn_02156340, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02156320(void *object)
{
    fn_02156340(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02156320

// auto_destroy_then_release_02159920: misc_destroy_then_release with other addresses.
namespace twin_02159920 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02159940, fn_02159940, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02159920(void *object)
{
    fn_02159940(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02159920

// auto_destroy_then_release_0215b490: misc_destroy_then_release with other addresses.
namespace twin_0215b490 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0215b490(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0215b490

// auto_destroy_then_release_02160010: misc_destroy_then_release with other addresses.
namespace twin_02160010 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02160010(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02160010

// auto_destroy_then_release_02161c40: misc_destroy_then_release with other addresses.
namespace twin_02161c40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02161c40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02161c40

// auto_destroy_then_release_02163090: misc_destroy_then_release with other addresses.
namespace twin_02163090 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02163090(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02163090

// auto_destroy_then_release_02171da0: misc_destroy_then_release with other addresses.
namespace twin_02171da0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x016ea820, fn_016ea820, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02171da0(void *object)
{
    fn_016ea820(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02171da0

// auto_destroy_then_release_021743a0: misc_destroy_then_release with other addresses.
namespace twin_021743a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021743a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021743a0

// auto_destroy_then_release_021750e0: misc_destroy_then_release with other addresses.
namespace twin_021750e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021750e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021750e0

// auto_destroy_then_release_02175e50: misc_destroy_then_release with other addresses.
namespace twin_02175e50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02175e50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02175e50

// auto_destroy_then_release_02176a20: misc_destroy_then_release with other addresses.
namespace twin_02176a20 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02176a20(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02176a20

// auto_destroy_then_release_02177790: misc_destroy_then_release with other addresses.
namespace twin_02177790 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02177790(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02177790

// auto_destroy_then_release_02178360: misc_destroy_then_release with other addresses.
namespace twin_02178360 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02178360(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02178360

// auto_destroy_then_release_02178ff0: misc_destroy_then_release with other addresses.
namespace twin_02178ff0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02178ff0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02178ff0

// auto_destroy_then_release_02179d40: misc_destroy_then_release with other addresses.
namespace twin_02179d40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02179d40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02179d40

// auto_destroy_then_release_0217aac0: misc_destroy_then_release with other addresses.
namespace twin_0217aac0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0217aac0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0217aac0

// auto_destroy_then_release_0217b6a0: misc_destroy_then_release with other addresses.
namespace twin_0217b6a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0217b6a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0217b6a0

// auto_destroy_then_release_0217c410: misc_destroy_then_release with other addresses.
namespace twin_0217c410 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0217c410(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0217c410

// auto_destroy_then_release_0217cfe0: misc_destroy_then_release with other addresses.
namespace twin_0217cfe0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0217cfe0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0217cfe0

// auto_destroy_then_release_0217dd50: misc_destroy_then_release with other addresses.
namespace twin_0217dd50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0217dd50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0217dd50

// auto_destroy_then_release_0217e920: misc_destroy_then_release with other addresses.
namespace twin_0217e920 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0217e920(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0217e920

// auto_destroy_then_release_0217f060: misc_destroy_then_release with other addresses.
namespace twin_0217f060 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01384750, fn_01384750, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0217f060(void *object)
{
    fn_01384750(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0217f060

// auto_destroy_then_release_0217f900: misc_destroy_then_release with other addresses.
namespace twin_0217f900 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0217f900(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0217f900

// auto_destroy_then_release_021804a0: misc_destroy_then_release with other addresses.
namespace twin_021804a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021804a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021804a0

// auto_destroy_then_release_02181080: misc_destroy_then_release with other addresses.
namespace twin_02181080 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02181080(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02181080

// auto_destroy_then_release_02183dc0: misc_destroy_then_release with other addresses.
namespace twin_02183dc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02183de0, fn_02183de0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02183dc0(void *object)
{
    fn_02183de0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02183dc0

// auto_destroy_then_release_02185c70: misc_destroy_then_release with other addresses.
namespace twin_02185c70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0218b8e0, fn_0218b8e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02185c70(void *object)
{
    fn_0218b8e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02185c70

// auto_destroy_then_release_02186280: misc_destroy_then_release with other addresses.
namespace twin_02186280 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02186280(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02186280

// auto_destroy_then_release_0218a510: misc_destroy_then_release with other addresses.
namespace twin_0218a510 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0218a510(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0218a510

// auto_destroy_then_release_0218b8c0: misc_destroy_then_release with other addresses.
namespace twin_0218b8c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0218b8e0, fn_0218b8e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0218b8c0(void *object)
{
    fn_0218b8e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0218b8c0

// auto_destroy_then_release_0218d040: misc_destroy_then_release with other addresses.
namespace twin_0218d040 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0218d040(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0218d040

// auto_destroy_then_release_0218dbd0: misc_destroy_then_release with other addresses.
namespace twin_0218dbd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0218dbd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0218dbd0

// auto_destroy_then_release_0218eba0: misc_destroy_then_release with other addresses.
namespace twin_0218eba0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0218eba0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0218eba0

// auto_destroy_then_release_021900b0: misc_destroy_then_release with other addresses.
namespace twin_021900b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0270c640, fn_0270c640, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021900b0(void *object)
{
    fn_0270c640(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021900b0

// auto_destroy_then_release_02191d40: misc_destroy_then_release with other addresses.
namespace twin_02191d40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02191d60, fn_02191d60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02191d40(void *object)
{
    fn_02191d60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02191d40

// auto_destroy_then_release_02194230: misc_destroy_then_release with other addresses.
namespace twin_02194230 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02194230(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02194230

// auto_destroy_then_release_02194550: misc_destroy_then_release with other addresses.
namespace twin_02194550 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02194550(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02194550

// auto_destroy_then_release_02194870: misc_destroy_then_release with other addresses.
namespace twin_02194870 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02194870(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02194870

// auto_destroy_then_release_02194b90: misc_destroy_then_release with other addresses.
namespace twin_02194b90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02194b90(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02194b90

// auto_destroy_then_release_02196620: misc_destroy_then_release with other addresses.
namespace twin_02196620 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02196640, fn_02196640, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02196620(void *object)
{
    fn_02196640(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02196620

// auto_destroy_then_release_02199070: misc_destroy_then_release with other addresses.
namespace twin_02199070 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x016ea820, fn_016ea820, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02199070(void *object)
{
    fn_016ea820(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02199070

// auto_destroy_then_release_02199170: misc_destroy_then_release with other addresses.
namespace twin_02199170 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x016e89f0, fn_016e89f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02199170(void *object)
{
    fn_016e89f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02199170

// auto_destroy_then_release_0219d1f0: misc_destroy_then_release with other addresses.
namespace twin_0219d1f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0219d1f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0219d1f0

// auto_destroy_then_release_0219d510: misc_destroy_then_release with other addresses.
namespace twin_0219d510 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0219d510(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0219d510

// auto_destroy_then_release_0219d830: misc_destroy_then_release with other addresses.
namespace twin_0219d830 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0219d830(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0219d830

// auto_destroy_then_release_0219db50: misc_destroy_then_release with other addresses.
namespace twin_0219db50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0219db50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0219db50

// auto_destroy_then_release_0219fa80: misc_destroy_then_release with other addresses.
namespace twin_0219fa80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0219faa0, fn_0219faa0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0219fa80(void *object)
{
    fn_0219faa0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0219fa80

// auto_destroy_then_release_021a2070: misc_destroy_then_release with other addresses.
namespace twin_021a2070 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x021a2090, fn_021a2090, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021a2070(void *object)
{
    fn_021a2090(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021a2070

// auto_destroy_then_release_021a2b60: misc_destroy_then_release with other addresses.
namespace twin_021a2b60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x021a2b80, fn_021a2b80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021a2b60(void *object)
{
    fn_021a2b80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021a2b60

// auto_destroy_then_release_021a4650: misc_destroy_then_release with other addresses.
namespace twin_021a4650 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021a4650(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021a4650

// auto_destroy_then_release_021a48f0: misc_destroy_then_release with other addresses.
namespace twin_021a48f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021a48f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021a48f0

// auto_destroy_then_release_021a4c10: misc_destroy_then_release with other addresses.
namespace twin_021a4c10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021a4c10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021a4c10

// auto_destroy_then_release_021a5430: misc_destroy_then_release with other addresses.
namespace twin_021a5430 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0135d610, fn_0135d610, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021a5430(void *object)
{
    fn_0135d610(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021a5430

// auto_destroy_then_release_021a7340: misc_destroy_then_release with other addresses.
namespace twin_021a7340 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x021a7360, fn_021a7360, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021a7340(void *object)
{
    fn_021a7360(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021a7340

// auto_destroy_then_release_021a8e90: misc_destroy_then_release with other addresses.
namespace twin_021a8e90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x016ea820, fn_016ea820, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021a8e90(void *object)
{
    fn_016ea820(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021a8e90

// auto_destroy_then_release_021aec10: misc_destroy_then_release with other addresses.
namespace twin_021aec10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021aec10(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021aec10

// auto_destroy_then_release_021aef50: misc_destroy_then_release with other addresses.
namespace twin_021aef50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021aef50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021aef50

// auto_destroy_then_release_021af270: misc_destroy_then_release with other addresses.
namespace twin_021af270 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021af270(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021af270

// auto_destroy_then_release_021af590: misc_destroy_then_release with other addresses.
namespace twin_021af590 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021af590(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021af590

// auto_destroy_then_release_021af8b0: misc_destroy_then_release with other addresses.
namespace twin_021af8b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021af8b0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021af8b0

// auto_destroy_then_release_021b4b30: misc_destroy_then_release with other addresses.
namespace twin_021b4b30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x021b4b50, fn_021b4b50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021b4b30(void *object)
{
    fn_021b4b50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021b4b30

// auto_destroy_then_release_021b6c40: misc_destroy_then_release with other addresses.
namespace twin_021b6c40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x021b6c60, fn_021b6c60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021b6c40(void *object)
{
    fn_021b6c60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021b6c40

// auto_destroy_then_release_021c20c0: misc_destroy_then_release with other addresses.
namespace twin_021c20c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c20c0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c20c0

// auto_destroy_then_release_021c2950: misc_destroy_then_release with other addresses.
namespace twin_021c2950 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c2950(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c2950

// auto_destroy_then_release_021c36f0: misc_destroy_then_release with other addresses.
namespace twin_021c36f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c36f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c36f0

// auto_destroy_then_release_021c41a0: misc_destroy_then_release with other addresses.
namespace twin_021c41a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c41a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c41a0

// auto_destroy_then_release_021c4e50: misc_destroy_then_release with other addresses.
namespace twin_021c4e50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c4e50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c4e50

// auto_destroy_then_release_021c5900: misc_destroy_then_release with other addresses.
namespace twin_021c5900 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c5900(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c5900

// auto_destroy_then_release_021c6f90: misc_destroy_then_release with other addresses.
namespace twin_021c6f90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c6f90(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c6f90

// auto_destroy_then_release_021c7bd0: misc_destroy_then_release with other addresses.
namespace twin_021c7bd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c7bd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c7bd0

// auto_destroy_then_release_021c7d60: misc_destroy_then_release with other addresses.
namespace twin_021c7d60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x021c7d80, fn_021c7d80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c7d60(void *object)
{
    fn_021c7d80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c7d60

// auto_destroy_then_release_021c8b70: misc_destroy_then_release with other addresses.
namespace twin_021c8b70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021c8b70(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021c8b70

// auto_destroy_then_release_021ca310: misc_destroy_then_release with other addresses.
namespace twin_021ca310 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021ca310(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021ca310

// auto_destroy_then_release_021cbb30: misc_destroy_then_release with other addresses.
namespace twin_021cbb30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021cbb30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021cbb30

// auto_destroy_then_release_021d3d00: misc_destroy_then_release with other addresses.
namespace twin_021d3d00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021d3d00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021d3d00

// auto_destroy_then_release_021dc400: misc_destroy_then_release with other addresses.
namespace twin_021dc400 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021dc400(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021dc400

// auto_destroy_then_release_021dcf10: misc_destroy_then_release with other addresses.
namespace twin_021dcf10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021dcf10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021dcf10

// auto_destroy_then_release_021dec10: misc_destroy_then_release with other addresses.
namespace twin_021dec10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_021dec10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_021dec10

// auto_destroy_then_release_02203e20: misc_destroy_then_release with other addresses.
namespace twin_02203e20 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02203e20(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02203e20

// auto_destroy_then_release_02204ef0: misc_destroy_then_release with other addresses.
namespace twin_02204ef0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02204ef0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02204ef0

// auto_destroy_then_release_02206700: misc_destroy_then_release with other addresses.
namespace twin_02206700 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02206700(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02206700

// auto_destroy_then_release_02207460: misc_destroy_then_release with other addresses.
namespace twin_02207460 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02207460(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02207460

// auto_destroy_then_release_02208100: misc_destroy_then_release with other addresses.
namespace twin_02208100 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02208100(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02208100

// auto_destroy_then_release_02208e70: misc_destroy_then_release with other addresses.
namespace twin_02208e70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02208e70(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02208e70

// auto_destroy_then_release_02209b10: misc_destroy_then_release with other addresses.
namespace twin_02209b10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02209b10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02209b10

// auto_destroy_then_release_0220aa60: misc_destroy_then_release with other addresses.
namespace twin_0220aa60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0220aa60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0220aa60

// auto_destroy_then_release_0220b7f0: misc_destroy_then_release with other addresses.
namespace twin_0220b7f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0220b7f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0220b7f0

// auto_destroy_then_release_0220c790: misc_destroy_then_release with other addresses.
namespace twin_0220c790 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0220c790(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0220c790

// auto_destroy_then_release_02213a10: misc_destroy_then_release with other addresses.
namespace twin_02213a10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02213a10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02213a10

// auto_destroy_then_release_02213d30: misc_destroy_then_release with other addresses.
namespace twin_02213d30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02213d30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02213d30

// auto_destroy_then_release_02214050: misc_destroy_then_release with other addresses.
namespace twin_02214050 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02214050(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02214050

// auto_destroy_then_release_02214370: misc_destroy_then_release with other addresses.
namespace twin_02214370 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02214370(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02214370

// auto_destroy_then_release_02219530: misc_destroy_then_release with other addresses.
namespace twin_02219530 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02219550, fn_02219550, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02219530(void *object)
{
    fn_02219550(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02219530

// auto_destroy_then_release_0221c840: misc_destroy_then_release with other addresses.
namespace twin_0221c840 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0221c840(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0221c840

// auto_destroy_then_release_0221cae0: misc_destroy_then_release with other addresses.
namespace twin_0221cae0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0221cae0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0221cae0

// auto_destroy_then_release_0221ce00: misc_destroy_then_release with other addresses.
namespace twin_0221ce00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0221ce00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0221ce00

// auto_destroy_then_release_0221d120: misc_destroy_then_release with other addresses.
namespace twin_0221d120 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0221d120(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0221d120

// auto_destroy_then_release_0221d440: misc_destroy_then_release with other addresses.
namespace twin_0221d440 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0221d440(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0221d440

// auto_destroy_then_release_0222a460: misc_destroy_then_release with other addresses.
namespace twin_0222a460 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0222a460(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0222a460

// auto_destroy_then_release_0222a700: misc_destroy_then_release with other addresses.
namespace twin_0222a700 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0222a700(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0222a700

// auto_destroy_then_release_0222aa20: misc_destroy_then_release with other addresses.
namespace twin_0222aa20 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0222aa20(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0222aa20

// auto_destroy_then_release_02233a60: misc_destroy_then_release with other addresses.
namespace twin_02233a60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02233a80, fn_02233a80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02233a60(void *object)
{
    fn_02233a80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02233a60

// auto_destroy_then_release_02233f80: misc_destroy_then_release with other addresses.
namespace twin_02233f80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02233b10, fn_02233b10, void(void *));
RT_ORIGINAL(0x022361f0, fn_022361f0, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02233f80(void *object)
{
    fn_02233b10(object);
    return fn_022361f0(object);
}

}  // namespace twin_02233f80

// auto_destroy_then_release_02235970: misc_destroy_then_release with other addresses.
namespace twin_02235970 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02235970(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02235970

// auto_destroy_then_release_02235b10: misc_destroy_then_release with other addresses.
namespace twin_02235b10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02235b10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02235b10

// auto_destroy_then_release_02235e30: misc_destroy_then_release with other addresses.
namespace twin_02235e30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02235e30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02235e30

// auto_destroy_then_release_02239d50: misc_destroy_then_release with other addresses.
namespace twin_02239d50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02239d50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02239d50
