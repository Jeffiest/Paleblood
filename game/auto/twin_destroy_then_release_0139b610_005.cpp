// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_destroy_then_release, in game/misc/destroy_then_release.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_destroy_then_release_01b9c630: misc_destroy_then_release with other addresses.
namespace twin_01b9c630 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b9c630(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b9c630

// auto_destroy_then_release_01b9d280: misc_destroy_then_release with other addresses.
namespace twin_01b9d280 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b9d280(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b9d280

// auto_destroy_then_release_01b9dee0: misc_destroy_then_release with other addresses.
namespace twin_01b9dee0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b9dee0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b9dee0

// auto_destroy_then_release_01b9eb30: misc_destroy_then_release with other addresses.
namespace twin_01b9eb30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b9eb30(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b9eb30

// auto_destroy_then_release_01b9f720: misc_destroy_then_release with other addresses.
namespace twin_01b9f720 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b9f720(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b9f720

// auto_destroy_then_release_01ba0750: misc_destroy_then_release with other addresses.
namespace twin_01ba0750 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba0750(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba0750

// auto_destroy_then_release_01ba13e0: misc_destroy_then_release with other addresses.
namespace twin_01ba13e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba13e0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba13e0

// auto_destroy_then_release_01ba2050: misc_destroy_then_release with other addresses.
namespace twin_01ba2050 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba2050(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba2050

// auto_destroy_then_release_01ba2d10: misc_destroy_then_release with other addresses.
namespace twin_01ba2d10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba2d10(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba2d10

// auto_destroy_then_release_01ba39d0: misc_destroy_then_release with other addresses.
namespace twin_01ba39d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba39d0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba39d0

// auto_destroy_then_release_01ba4570: misc_destroy_then_release with other addresses.
namespace twin_01ba4570 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba4570(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba4570

// auto_destroy_then_release_01ba5100: misc_destroy_then_release with other addresses.
namespace twin_01ba5100 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba5100(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba5100

// auto_destroy_then_release_01ba5fe0: misc_destroy_then_release with other addresses.
namespace twin_01ba5fe0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba5fe0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba5fe0

// auto_destroy_then_release_01ba6e70: misc_destroy_then_release with other addresses.
namespace twin_01ba6e70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba6e70(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba6e70

// auto_destroy_then_release_01ba7af0: misc_destroy_then_release with other addresses.
namespace twin_01ba7af0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba7af0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba7af0

// auto_destroy_then_release_01ba8730: misc_destroy_then_release with other addresses.
namespace twin_01ba8730 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba8730(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba8730

// auto_destroy_then_release_01ba92b0: misc_destroy_then_release with other addresses.
namespace twin_01ba92b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba92b0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba92b0

// auto_destroy_then_release_01ba9f60: misc_destroy_then_release with other addresses.
namespace twin_01ba9f60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ba9f60(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ba9f60

// auto_destroy_then_release_01baab60: misc_destroy_then_release with other addresses.
namespace twin_01baab60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01baab60(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01baab60

// auto_destroy_then_release_01bab780: misc_destroy_then_release with other addresses.
namespace twin_01bab780 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bab780(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bab780

// auto_destroy_then_release_01bac410: misc_destroy_then_release with other addresses.
namespace twin_01bac410 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bac410(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bac410

// auto_destroy_then_release_01bacfc0: misc_destroy_then_release with other addresses.
namespace twin_01bacfc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bacfc0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bacfc0

// auto_destroy_then_release_01badea0: misc_destroy_then_release with other addresses.
namespace twin_01badea0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01badea0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01badea0

// auto_destroy_then_release_01baeb50: misc_destroy_then_release with other addresses.
namespace twin_01baeb50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01baeb50(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01baeb50

// auto_destroy_then_release_01bafa30: misc_destroy_then_release with other addresses.
namespace twin_01bafa30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bafa30(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bafa30

// auto_destroy_then_release_01bb0520: misc_destroy_then_release with other addresses.
namespace twin_01bb0520 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb0520(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb0520

// auto_destroy_then_release_01bb1170: misc_destroy_then_release with other addresses.
namespace twin_01bb1170 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb1170(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb1170

// auto_destroy_then_release_01bb1ee0: misc_destroy_then_release with other addresses.
namespace twin_01bb1ee0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb1ee0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb1ee0

// auto_destroy_then_release_01bb2d60: misc_destroy_then_release with other addresses.
namespace twin_01bb2d60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb2d60(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb2d60

// auto_destroy_then_release_01bb38c0: misc_destroy_then_release with other addresses.
namespace twin_01bb38c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb38c0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb38c0

// auto_destroy_then_release_01bb4490: misc_destroy_then_release with other addresses.
namespace twin_01bb4490 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb4490(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb4490

// auto_destroy_then_release_01bb53a0: misc_destroy_then_release with other addresses.
namespace twin_01bb53a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb53a0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb53a0

// auto_destroy_then_release_01bb6150: misc_destroy_then_release with other addresses.
namespace twin_01bb6150 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb6150(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb6150

// auto_destroy_then_release_01bb6db0: misc_destroy_then_release with other addresses.
namespace twin_01bb6db0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb6db0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb6db0

// auto_destroy_then_release_01bb8110: misc_destroy_then_release with other addresses.
namespace twin_01bb8110 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb8110(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb8110

// auto_destroy_then_release_01bb8d80: misc_destroy_then_release with other addresses.
namespace twin_01bb8d80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bb8d80(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bb8d80

// auto_destroy_then_release_01bc9b70: misc_destroy_then_release with other addresses.
namespace twin_01bc9b70 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01bc9b70(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bc9b70

// auto_destroy_then_release_01bce330: misc_destroy_then_release with other addresses.
namespace twin_01bce330 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01bce330(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bce330

// auto_destroy_then_release_01bce500: misc_destroy_then_release with other addresses.
namespace twin_01bce500 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01bce500(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bce500

// auto_destroy_then_release_01beed50: misc_destroy_then_release with other addresses.
namespace twin_01beed50 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01beed50(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01beed50

// auto_destroy_then_release_01beeda0: misc_destroy_then_release with other addresses.
namespace twin_01beeda0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01beeda0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01beeda0

// auto_destroy_then_release_01bf02f0: misc_destroy_then_release with other addresses.
namespace twin_01bf02f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01bf02f0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bf02f0

// auto_destroy_then_release_01bf0c30: misc_destroy_then_release with other addresses.
namespace twin_01bf0c30 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01bf0c30(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bf0c30

// auto_destroy_then_release_01bf9f60: misc_destroy_then_release with other addresses.
namespace twin_01bf9f60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01bf9f80, fn_01bf9f80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01bf9f60(void *object)
{
    fn_01bf9f80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01bf9f60

// auto_destroy_then_release_01c009a0: misc_destroy_then_release with other addresses.
namespace twin_01c009a0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c009a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c009a0

// auto_destroy_then_release_01c01ef0: misc_destroy_then_release with other addresses.
namespace twin_01c01ef0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c01f10, fn_01c01f10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c01ef0(void *object)
{
    fn_01c01f10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c01ef0

// auto_destroy_then_release_01c06aa0: misc_destroy_then_release with other addresses.
namespace twin_01c06aa0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c06ac0, fn_01c06ac0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c06aa0(void *object)
{
    fn_01c06ac0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c06aa0

// auto_destroy_then_release_01c1f220: misc_destroy_then_release with other addresses.
namespace twin_01c1f220 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013915e0, fn_013915e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c1f220(void *object)
{
    fn_013915e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c1f220

// auto_destroy_then_release_01c1f250: misc_destroy_then_release with other addresses.
namespace twin_01c1f250 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0138cc00, fn_0138cc00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c1f250(void *object)
{
    fn_0138cc00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c1f250

// auto_destroy_then_release_01c22610: misc_destroy_then_release with other addresses.
namespace twin_01c22610 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013915e0, fn_013915e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c22610(void *object)
{
    fn_013915e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c22610

// auto_destroy_then_release_01c22640: misc_destroy_then_release with other addresses.
namespace twin_01c22640 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0138cc00, fn_0138cc00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c22640(void *object)
{
    fn_0138cc00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c22640

// auto_destroy_then_release_01c22670: misc_destroy_then_release with other addresses.
namespace twin_01c22670 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0138cc00, fn_0138cc00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c22670(void *object)
{
    fn_0138cc00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c22670

// auto_destroy_then_release_01c238a0: misc_destroy_then_release with other addresses.
namespace twin_01c238a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013915e0, fn_013915e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c238a0(void *object)
{
    fn_013915e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c238a0

// auto_destroy_then_release_01c238d0: misc_destroy_then_release with other addresses.
namespace twin_01c238d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0138cc00, fn_0138cc00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c238d0(void *object)
{
    fn_0138cc00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c238d0

// auto_destroy_then_release_01c23900: misc_destroy_then_release with other addresses.
namespace twin_01c23900 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c23900(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c23900

// auto_destroy_then_release_01c255e0: misc_destroy_then_release with other addresses.
namespace twin_01c255e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013915e0, fn_013915e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c255e0(void *object)
{
    fn_013915e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c255e0

// auto_destroy_then_release_01c25610: misc_destroy_then_release with other addresses.
namespace twin_01c25610 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0138cc00, fn_0138cc00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c25610(void *object)
{
    fn_0138cc00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c25610

// auto_destroy_then_release_01c279e0: misc_destroy_then_release with other addresses.
namespace twin_01c279e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c27a00, fn_01c27a00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c279e0(void *object)
{
    fn_01c27a00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c279e0

// auto_destroy_then_release_01c2a7f0: misc_destroy_then_release with other addresses.
namespace twin_01c2a7f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c2a7f0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c2a7f0

// auto_destroy_then_release_01c2a890: misc_destroy_then_release with other addresses.
namespace twin_01c2a890 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c2a890(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c2a890

// auto_destroy_then_release_01c2aa40: misc_destroy_then_release with other addresses.
namespace twin_01c2aa40 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c2aa40(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c2aa40

// auto_destroy_then_release_01c3c4b0: misc_destroy_then_release with other addresses.
namespace twin_01c3c4b0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c3c4b0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c3c4b0

// auto_destroy_then_release_01c40270: misc_destroy_then_release with other addresses.
namespace twin_01c40270 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c40270(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c40270

// auto_destroy_then_release_01c45fe0: misc_destroy_then_release with other addresses.
namespace twin_01c45fe0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c46000, fn_01c46000, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c45fe0(void *object)
{
    fn_01c46000(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c45fe0

// auto_destroy_then_release_01c46c30: misc_destroy_then_release with other addresses.
namespace twin_01c46c30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c46c30(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c46c30

// auto_destroy_then_release_01c4d0d0: misc_destroy_then_release with other addresses.
namespace twin_01c4d0d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c4d0f0, fn_01c4d0f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c4d0d0(void *object)
{
    fn_01c4d0f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c4d0d0

// auto_destroy_then_release_01c4dc80: misc_destroy_then_release with other addresses.
namespace twin_01c4dc80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c4dca0, fn_01c4dca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c4dc80(void *object)
{
    fn_01c4dca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c4dc80

// auto_destroy_then_release_01c4e0f0: misc_destroy_then_release with other addresses.
namespace twin_01c4e0f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c4e110, fn_01c4e110, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c4e0f0(void *object)
{
    fn_01c4e110(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c4e0f0

// auto_destroy_then_release_01c560a0: misc_destroy_then_release with other addresses.
namespace twin_01c560a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c560c0, fn_01c560c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c560a0(void *object)
{
    fn_01c560c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c560a0

// auto_destroy_then_release_01c57da0: misc_destroy_then_release with other addresses.
namespace twin_01c57da0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c57dc0, fn_01c57dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c57da0(void *object)
{
    fn_01c57dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c57da0

// auto_destroy_then_release_01c5c9b0: misc_destroy_then_release with other addresses.
namespace twin_01c5c9b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c5c9d0, fn_01c5c9d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c5c9b0(void *object)
{
    fn_01c5c9d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c5c9b0

// auto_destroy_then_release_01c626f0: misc_destroy_then_release with other addresses.
namespace twin_01c626f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c626f0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c626f0

// auto_destroy_then_release_01c67320: misc_destroy_then_release with other addresses.
namespace twin_01c67320 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c67320(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c67320

// auto_destroy_then_release_01c6cf80: misc_destroy_then_release with other addresses.
namespace twin_01c6cf80 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c6cf80(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c6cf80

// auto_destroy_then_release_01c71cf0: misc_destroy_then_release with other addresses.
namespace twin_01c71cf0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c71d10, fn_01c71d10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c71cf0(void *object)
{
    fn_01c71d10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c71cf0

// auto_destroy_then_release_01c7c800: misc_destroy_then_release with other addresses.
namespace twin_01c7c800 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01c7c800(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c7c800

// auto_destroy_then_release_01c86280: misc_destroy_then_release with other addresses.
namespace twin_01c86280 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c862a0, fn_01c862a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c86280(void *object)
{
    fn_01c862a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c86280

// auto_destroy_then_release_01c8cfb0: misc_destroy_then_release with other addresses.
namespace twin_01c8cfb0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c8cfd0, fn_01c8cfd0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c8cfb0(void *object)
{
    fn_01c8cfd0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c8cfb0

// auto_destroy_then_release_01c8e800: misc_destroy_then_release with other addresses.
namespace twin_01c8e800 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01c8e820, fn_01c8e820, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01c8e800(void *object)
{
    fn_01c8e820(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01c8e800

// auto_destroy_then_release_01ca1380: misc_destroy_then_release with other addresses.
namespace twin_01ca1380 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01ca1380(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ca1380

// auto_destroy_then_release_01ca2b40: misc_destroy_then_release with other addresses.
namespace twin_01ca2b40 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01ca2b40(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ca2b40

// auto_destroy_then_release_01cac6a0: misc_destroy_then_release with other addresses.
namespace twin_01cac6a0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01cac6a0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01cac6a0

// auto_destroy_then_release_01cb5fc0: misc_destroy_then_release with other addresses.
namespace twin_01cb5fc0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01cb5fc0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01cb5fc0

// auto_destroy_then_release_01cbb0c0: misc_destroy_then_release with other addresses.
namespace twin_01cbb0c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01cbb0e0, fn_01cbb0e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01cbb0c0(void *object)
{
    fn_01cbb0e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01cbb0c0

// auto_destroy_then_release_01cd7920: misc_destroy_then_release with other addresses.
namespace twin_01cd7920 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01cd7920(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01cd7920

// auto_destroy_then_release_01cd7b40: misc_destroy_then_release with other addresses.
namespace twin_01cd7b40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01cd7e50, fn_01cd7e50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01cd7b40(void *object)
{
    fn_01cd7e50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01cd7b40

// auto_destroy_then_release_01ce30f0: misc_destroy_then_release with other addresses.
namespace twin_01ce30f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01ce30f0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ce30f0

// auto_destroy_then_release_01ce3190: misc_destroy_then_release with other addresses.
namespace twin_01ce3190 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ce3190(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ce3190

// auto_destroy_then_release_01ce3340: misc_destroy_then_release with other addresses.
namespace twin_01ce3340 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01ce3340(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ce3340

// auto_destroy_then_release_01ce3a80: misc_destroy_then_release with other addresses.
namespace twin_01ce3a80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01ce3aa0, fn_01ce3aa0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ce3a80(void *object)
{
    fn_01ce3aa0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ce3a80

// auto_destroy_then_release_01ce8f00: misc_destroy_then_release with other addresses.
namespace twin_01ce8f00 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01ce8f00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ce8f00

// auto_destroy_then_release_01d07ad0: misc_destroy_then_release with other addresses.
namespace twin_01d07ad0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d07ad0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d07ad0

// auto_destroy_then_release_01d08e40: misc_destroy_then_release with other addresses.
namespace twin_01d08e40 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d08e40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d08e40

// auto_destroy_then_release_01d09710: misc_destroy_then_release with other addresses.
namespace twin_01d09710 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d09730, fn_01d09730, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d09710(void *object)
{
    fn_01d09730(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d09710

// auto_destroy_then_release_01d0b1a0: misc_destroy_then_release with other addresses.
namespace twin_01d0b1a0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d0b1a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d0b1a0

// auto_destroy_then_release_01d11fb0: misc_destroy_then_release with other addresses.
namespace twin_01d11fb0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d11fb0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d11fb0

// auto_destroy_then_release_01d13410: misc_destroy_then_release with other addresses.
namespace twin_01d13410 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d13410(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d13410

// auto_destroy_then_release_01d13730: misc_destroy_then_release with other addresses.
namespace twin_01d13730 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d13730(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d13730

// auto_destroy_then_release_01d274e0: misc_destroy_then_release with other addresses.
namespace twin_01d274e0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d274e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d274e0

// auto_destroy_then_release_01d27800: misc_destroy_then_release with other addresses.
namespace twin_01d27800 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d27800(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d27800

// auto_destroy_then_release_01d2ad00: misc_destroy_then_release with other addresses.
namespace twin_01d2ad00 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d2ad00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d2ad00

// auto_destroy_then_release_01d2b020: misc_destroy_then_release with other addresses.
namespace twin_01d2b020 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d2b020(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d2b020

// auto_destroy_then_release_01d2cfb0: misc_destroy_then_release with other addresses.
namespace twin_01d2cfb0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d2cfb0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d2cfb0

// auto_destroy_then_release_01d2d2d0: misc_destroy_then_release with other addresses.
namespace twin_01d2d2d0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d2d2d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d2d2d0

// auto_destroy_then_release_01d301f0: misc_destroy_then_release with other addresses.
namespace twin_01d301f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d301f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d301f0

// auto_destroy_then_release_01d30510: misc_destroy_then_release with other addresses.
namespace twin_01d30510 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d30510(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d30510

// auto_destroy_then_release_01d31c60: misc_destroy_then_release with other addresses.
namespace twin_01d31c60 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d31c60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d31c60

// auto_destroy_then_release_01d31f80: misc_destroy_then_release with other addresses.
namespace twin_01d31f80 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d31f80(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d31f80

// auto_destroy_then_release_01d331f0: misc_destroy_then_release with other addresses.
namespace twin_01d331f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d331f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d331f0

// auto_destroy_then_release_01d33510: misc_destroy_then_release with other addresses.
namespace twin_01d33510 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d33510(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d33510

// auto_destroy_then_release_01d34670: misc_destroy_then_release with other addresses.
namespace twin_01d34670 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d34670(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d34670

// auto_destroy_then_release_01d34990: misc_destroy_then_release with other addresses.
namespace twin_01d34990 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d34990(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d34990

// auto_destroy_then_release_01d35b90: misc_destroy_then_release with other addresses.
namespace twin_01d35b90 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d35b90(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d35b90

// auto_destroy_then_release_01d35eb0: misc_destroy_then_release with other addresses.
namespace twin_01d35eb0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d35eb0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d35eb0

// auto_destroy_then_release_01d36cf0: misc_destroy_then_release with other addresses.
namespace twin_01d36cf0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d36cf0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d36cf0

// auto_destroy_then_release_01d37010: misc_destroy_then_release with other addresses.
namespace twin_01d37010 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d37010(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d37010

// auto_destroy_then_release_01d43230: misc_destroy_then_release with other addresses.
namespace twin_01d43230 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d43230(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d43230

// auto_destroy_then_release_01d43550: misc_destroy_then_release with other addresses.
namespace twin_01d43550 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d43550(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d43550

// auto_destroy_then_release_01d46330: misc_destroy_then_release with other addresses.
namespace twin_01d46330 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d46330(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d46330

// auto_destroy_then_release_01d46650: misc_destroy_then_release with other addresses.
namespace twin_01d46650 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d46650(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d46650

// auto_destroy_then_release_01d486c0: misc_destroy_then_release with other addresses.
namespace twin_01d486c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d486c0(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d486c0

// auto_destroy_then_release_01d48720: misc_destroy_then_release with other addresses.
namespace twin_01d48720 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d48720(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d48720

// auto_destroy_then_release_01d48a40: misc_destroy_then_release with other addresses.
namespace twin_01d48a40 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d48a40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d48a40

// auto_destroy_then_release_01d49cc0: misc_destroy_then_release with other addresses.
namespace twin_01d49cc0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d49cc0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d49cc0

// auto_destroy_then_release_01d49fe0: misc_destroy_then_release with other addresses.
namespace twin_01d49fe0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d49fe0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d49fe0

// auto_destroy_then_release_01d4aaf0: misc_destroy_then_release with other addresses.
namespace twin_01d4aaf0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d4ab10, fn_01d4ab10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d4aaf0(void *object)
{
    fn_01d4ab10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d4aaf0

// auto_destroy_then_release_01d4f240: misc_destroy_then_release with other addresses.
namespace twin_01d4f240 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d4f240(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d4f240

// auto_destroy_then_release_01d4f560: misc_destroy_then_release with other addresses.
namespace twin_01d4f560 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d4f560(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d4f560

// auto_destroy_then_release_01d50a00: misc_destroy_then_release with other addresses.
namespace twin_01d50a00 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d50a00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d50a00

// auto_destroy_then_release_01d50d20: misc_destroy_then_release with other addresses.
namespace twin_01d50d20 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d50d20(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d50d20

// auto_destroy_then_release_01d51fb0: misc_destroy_then_release with other addresses.
namespace twin_01d51fb0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d51fb0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d51fb0

// auto_destroy_then_release_01d522d0: misc_destroy_then_release with other addresses.
namespace twin_01d522d0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d522d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d522d0

// auto_destroy_then_release_01d54160: misc_destroy_then_release with other addresses.
namespace twin_01d54160 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d54160(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d54160

// auto_destroy_then_release_01d54480: misc_destroy_then_release with other addresses.
namespace twin_01d54480 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d54480(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d54480

// auto_destroy_then_release_01d54f50: misc_destroy_then_release with other addresses.
namespace twin_01d54f50 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d54f50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d54f50

// auto_destroy_then_release_01d55750: misc_destroy_then_release with other addresses.
namespace twin_01d55750 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d55750(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d55750

// auto_destroy_then_release_01d562c0: misc_destroy_then_release with other addresses.
namespace twin_01d562c0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d562c0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d562c0

// auto_destroy_then_release_01d58c80: misc_destroy_then_release with other addresses.
namespace twin_01d58c80 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d58c80(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d58c80

// auto_destroy_then_release_01d58fa0: misc_destroy_then_release with other addresses.
namespace twin_01d58fa0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d58fa0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d58fa0

// auto_destroy_then_release_01d592c0: misc_destroy_then_release with other addresses.
namespace twin_01d592c0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d592c0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d592c0

// auto_destroy_then_release_01d595e0: misc_destroy_then_release with other addresses.
namespace twin_01d595e0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d595e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d595e0

// auto_destroy_then_release_01d5d250: misc_destroy_then_release with other addresses.
namespace twin_01d5d250 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d5d250(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d5d250

// auto_destroy_then_release_01d5d570: misc_destroy_then_release with other addresses.
namespace twin_01d5d570 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d5d570(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d5d570

// auto_destroy_then_release_01d606e0: misc_destroy_then_release with other addresses.
namespace twin_01d606e0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d606e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d606e0

// auto_destroy_then_release_01d60a00: misc_destroy_then_release with other addresses.
namespace twin_01d60a00 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d60a00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d60a00

// auto_destroy_then_release_01d60d20: misc_destroy_then_release with other addresses.
namespace twin_01d60d20 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d60d20(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d60d20

// auto_destroy_then_release_01d61040: misc_destroy_then_release with other addresses.
namespace twin_01d61040 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d61040(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d61040

// auto_destroy_then_release_01d65020: misc_destroy_then_release with other addresses.
namespace twin_01d65020 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d65020(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d65020

// auto_destroy_then_release_01d65340: misc_destroy_then_release with other addresses.
namespace twin_01d65340 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d65340(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d65340

// auto_destroy_then_release_01d65660: misc_destroy_then_release with other addresses.
namespace twin_01d65660 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d65660(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d65660

// auto_destroy_then_release_01d65980: misc_destroy_then_release with other addresses.
namespace twin_01d65980 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d65980(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d65980

// auto_destroy_then_release_01d665c0: misc_destroy_then_release with other addresses.
namespace twin_01d665c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d665e0, fn_01d665e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d665c0(void *object)
{
    fn_01d665e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d665c0

// auto_destroy_then_release_01d68490: misc_destroy_then_release with other addresses.
namespace twin_01d68490 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d68490(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d68490

// auto_destroy_then_release_01d687b0: misc_destroy_then_release with other addresses.
namespace twin_01d687b0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d687b0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d687b0

// auto_destroy_then_release_01d68ad0: misc_destroy_then_release with other addresses.
namespace twin_01d68ad0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d68ad0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d68ad0

// auto_destroy_then_release_01d68df0: misc_destroy_then_release with other addresses.
namespace twin_01d68df0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d68df0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d68df0

// auto_destroy_then_release_01d69da0: misc_destroy_then_release with other addresses.
namespace twin_01d69da0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d69da0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d69da0

// auto_destroy_then_release_01d6a0c0: misc_destroy_then_release with other addresses.
namespace twin_01d6a0c0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d6a0c0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d6a0c0

// auto_destroy_then_release_01d6e400: misc_destroy_then_release with other addresses.
namespace twin_01d6e400 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d6e400(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d6e400

// auto_destroy_then_release_01d6e720: misc_destroy_then_release with other addresses.
namespace twin_01d6e720 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d6e720(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d6e720

// auto_destroy_then_release_01d6ea40: misc_destroy_then_release with other addresses.
namespace twin_01d6ea40 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d6ea40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d6ea40

// auto_destroy_then_release_01d6ed60: misc_destroy_then_release with other addresses.
namespace twin_01d6ed60 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d6ed60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d6ed60

// auto_destroy_then_release_01d724f0: misc_destroy_then_release with other addresses.
namespace twin_01d724f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d724f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d724f0

// auto_destroy_then_release_01d72810: misc_destroy_then_release with other addresses.
namespace twin_01d72810 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d72810(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d72810

// auto_destroy_then_release_01d72b30: misc_destroy_then_release with other addresses.
namespace twin_01d72b30 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d72b30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d72b30

// auto_destroy_then_release_01d72e50: misc_destroy_then_release with other addresses.
namespace twin_01d72e50 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d72e50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d72e50

// auto_destroy_then_release_01d75e10: misc_destroy_then_release with other addresses.
namespace twin_01d75e10 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d75e10(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d75e10

// auto_destroy_then_release_01d77ab0: misc_destroy_then_release with other addresses.
namespace twin_01d77ab0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d77ad0, fn_01d77ad0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d77ab0(void *object)
{
    fn_01d77ad0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d77ab0

// auto_destroy_then_release_01d7a5d0: misc_destroy_then_release with other addresses.
namespace twin_01d7a5d0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d7a5d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d7a5d0

// auto_destroy_then_release_01d7a8f0: misc_destroy_then_release with other addresses.
namespace twin_01d7a8f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d7a8f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d7a8f0

// auto_destroy_then_release_01d7ac10: misc_destroy_then_release with other addresses.
namespace twin_01d7ac10 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d7ac10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d7ac10

// auto_destroy_then_release_01d7af30: misc_destroy_then_release with other addresses.
namespace twin_01d7af30 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d7af30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d7af30

// auto_destroy_then_release_01d7be70: misc_destroy_then_release with other addresses.
namespace twin_01d7be70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d7be90, fn_01d7be90, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d7be70(void *object)
{
    fn_01d7be90(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d7be70

// auto_destroy_then_release_01d7f7f0: misc_destroy_then_release with other addresses.
namespace twin_01d7f7f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d7f7f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d7f7f0

// auto_destroy_then_release_01d7fb10: misc_destroy_then_release with other addresses.
namespace twin_01d7fb10 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d7fb10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d7fb10

// auto_destroy_then_release_01d7fe30: misc_destroy_then_release with other addresses.
namespace twin_01d7fe30 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d7fe30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d7fe30

// auto_destroy_then_release_01d80150: misc_destroy_then_release with other addresses.
namespace twin_01d80150 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d80150(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d80150

// auto_destroy_then_release_01d81140: misc_destroy_then_release with other addresses.
namespace twin_01d81140 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d81160, fn_01d81160, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d81140(void *object)
{
    fn_01d81160(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d81140

// auto_destroy_then_release_01d83d90: misc_destroy_then_release with other addresses.
namespace twin_01d83d90 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d83d90(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d83d90

// auto_destroy_then_release_01d840b0: misc_destroy_then_release with other addresses.
namespace twin_01d840b0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d840b0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d840b0

// auto_destroy_then_release_01d843d0: misc_destroy_then_release with other addresses.
namespace twin_01d843d0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d843d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d843d0

// auto_destroy_then_release_01d846f0: misc_destroy_then_release with other addresses.
namespace twin_01d846f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d846f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d846f0

// auto_destroy_then_release_01d85810: misc_destroy_then_release with other addresses.
namespace twin_01d85810 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d85830, fn_01d85830, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d85810(void *object)
{
    fn_01d85830(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d85810

// auto_destroy_then_release_01d88840: misc_destroy_then_release with other addresses.
namespace twin_01d88840 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d88840(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d88840

// auto_destroy_then_release_01d88b60: misc_destroy_then_release with other addresses.
namespace twin_01d88b60 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d88b60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d88b60

// auto_destroy_then_release_01d88e80: misc_destroy_then_release with other addresses.
namespace twin_01d88e80 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d88e80(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d88e80

// auto_destroy_then_release_01d891a0: misc_destroy_then_release with other addresses.
namespace twin_01d891a0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d891a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d891a0

// auto_destroy_then_release_01d89fc0: misc_destroy_then_release with other addresses.
namespace twin_01d89fc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d89fe0, fn_01d89fe0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d89fc0(void *object)
{
    fn_01d89fe0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d89fc0

// auto_destroy_then_release_01d8c660: misc_destroy_then_release with other addresses.
namespace twin_01d8c660 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d8c660(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d8c660

// auto_destroy_then_release_01d8c980: misc_destroy_then_release with other addresses.
namespace twin_01d8c980 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d8c980(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d8c980

// auto_destroy_then_release_01d8cca0: misc_destroy_then_release with other addresses.
namespace twin_01d8cca0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d8cca0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d8cca0

// auto_destroy_then_release_01d8cfc0: misc_destroy_then_release with other addresses.
namespace twin_01d8cfc0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d8cfc0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d8cfc0

// auto_destroy_then_release_01d8e3f0: misc_destroy_then_release with other addresses.
namespace twin_01d8e3f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d8e410, fn_01d8e410, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d8e3f0(void *object)
{
    fn_01d8e410(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d8e3f0

// auto_destroy_then_release_01d91710: misc_destroy_then_release with other addresses.
namespace twin_01d91710 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d91710(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d91710

// auto_destroy_then_release_01d919e0: misc_destroy_then_release with other addresses.
namespace twin_01d919e0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d919e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d919e0

// auto_destroy_then_release_01d91d00: misc_destroy_then_release with other addresses.
namespace twin_01d91d00 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d91d00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d91d00

// auto_destroy_then_release_01d92020: misc_destroy_then_release with other addresses.
namespace twin_01d92020 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d92020(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d92020

// auto_destroy_then_release_01d92340: misc_destroy_then_release with other addresses.
namespace twin_01d92340 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d92340(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d92340

// auto_destroy_then_release_01d935b0: misc_destroy_then_release with other addresses.
namespace twin_01d935b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01d935d0, fn_01d935d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01d935b0(void *object)
{
    fn_01d935d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d935b0

// auto_destroy_then_release_01d966d0: misc_destroy_then_release with other addresses.
namespace twin_01d966d0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_01d966d0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01d966d0
