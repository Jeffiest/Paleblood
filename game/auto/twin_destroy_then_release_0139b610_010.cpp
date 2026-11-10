// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_destroy_then_release, in game/misc/destroy_then_release.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_destroy_then_release_0266f7d0: misc_destroy_then_release with other addresses.
namespace twin_0266f7d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02670a60, fn_02670a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0266f7d0(void *object)
{
    fn_02670a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0266f7d0

// auto_destroy_then_release_02671b60: misc_destroy_then_release with other addresses.
namespace twin_02671b60 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02671b60(void *object)
{
    fn_02671b80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02671b60

// auto_destroy_then_release_02676130: misc_destroy_then_release with other addresses.
namespace twin_02676130 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02676150, fn_02676150, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02676130(void *object)
{
    fn_02676150(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02676130

// auto_destroy_then_release_02679b40: misc_destroy_then_release with other addresses.
namespace twin_02679b40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02679b60, fn_02679b60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02679b40(void *object)
{
    fn_02679b60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02679b40

// auto_destroy_then_release_0267aaa0: misc_destroy_then_release with other addresses.
namespace twin_0267aaa0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0267aac0, fn_0267aac0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0267aaa0(void *object)
{
    fn_0267aac0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0267aaa0

// auto_destroy_then_release_0267cc50: misc_destroy_then_release with other addresses.
namespace twin_0267cc50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0267cc70, fn_0267cc70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0267cc50(void *object)
{
    fn_0267cc70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0267cc50

// auto_destroy_then_release_02683ed0: misc_destroy_then_release with other addresses.
namespace twin_02683ed0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02683f20, fn_02683f20, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02683ed0(void *object)
{
    fn_02683f20(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02683ed0

// auto_destroy_then_release_02688d40: misc_destroy_then_release with other addresses.
namespace twin_02688d40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0122f020, fn_0122f020, void(void *));
RT_ORIGINAL(0x0122efc0, fn_0122efc0, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02688d40(void *object)
{
    fn_0122f020(object);
    return fn_0122efc0(object);
}

}  // namespace twin_02688d40

// auto_destroy_then_release_0268bc20: misc_destroy_then_release with other addresses.
namespace twin_0268bc20 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0268bc40, fn_0268bc40, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0268bc20(void *object)
{
    fn_0268bc40(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0268bc20

// auto_destroy_then_release_026960e0: misc_destroy_then_release with other addresses.
namespace twin_026960e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02696130, fn_02696130, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026960e0(void *object)
{
    fn_02696130(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026960e0

// auto_destroy_then_release_026bb000: misc_destroy_then_release with other addresses.
namespace twin_026bb000 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026bf320, fn_026bf320, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026bb000(void *object)
{
    fn_026bf320(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026bb000

// auto_destroy_then_release_026bb250: misc_destroy_then_release with other addresses.
namespace twin_026bb250 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026bf480, fn_026bf480, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026bb250(void *object)
{
    fn_026bf480(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026bb250

// auto_destroy_then_release_026ce3d0: misc_destroy_then_release with other addresses.
namespace twin_026ce3d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026d0370, fn_026d0370, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026ce3d0(void *object)
{
    fn_026d0370(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026ce3d0

// auto_destroy_then_release_026ce930: misc_destroy_then_release with other addresses.
namespace twin_026ce930 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026d04d0, fn_026d04d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026ce930(void *object)
{
    fn_026d04d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026ce930

// auto_destroy_then_release_026cee90: misc_destroy_then_release with other addresses.
namespace twin_026cee90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026d0630, fn_026d0630, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026cee90(void *object)
{
    fn_026d0630(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026cee90

// auto_destroy_then_release_026cf3f0: misc_destroy_then_release with other addresses.
namespace twin_026cf3f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026d0790, fn_026d0790, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026cf3f0(void *object)
{
    fn_026d0790(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026cf3f0

// auto_destroy_then_release_026d1110: misc_destroy_then_release with other addresses.
namespace twin_026d1110 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x012c6f70, fn_012c6f70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026d1110(void *object)
{
    fn_012c6f70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026d1110

// auto_destroy_then_release_026d5460: misc_destroy_then_release with other addresses.
namespace twin_026d5460 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026d5480, fn_026d5480, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026d5460(void *object)
{
    fn_026d5480(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026d5460

// auto_destroy_then_release_026d6540: misc_destroy_then_release with other addresses.
namespace twin_026d6540 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026d6560, fn_026d6560, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026d6540(void *object)
{
    fn_026d6560(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026d6540

// auto_destroy_then_release_026de660: misc_destroy_then_release with other addresses.
namespace twin_026de660 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026de680, fn_026de680, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026de660(void *object)
{
    fn_026de680(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026de660

// auto_destroy_then_release_026e2d90: misc_destroy_then_release with other addresses.
namespace twin_026e2d90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026e31f0, fn_026e31f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026e2d90(void *object)
{
    fn_026e31f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026e2d90

// auto_destroy_then_release_026fa6a0: misc_destroy_then_release with other addresses.
namespace twin_026fa6a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026fa6c0, fn_026fa6c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026fa6a0(void *object)
{
    fn_026fa6c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026fa6a0

// auto_destroy_then_release_026fccb0: misc_destroy_then_release with other addresses.
namespace twin_026fccb0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026fccd0, fn_026fccd0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026fccb0(void *object)
{
    fn_026fccd0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026fccb0

// auto_destroy_then_release_026fe530: misc_destroy_then_release with other addresses.
namespace twin_026fe530 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026fe550, fn_026fe550, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_026fe530(void *object)
{
    fn_026fe550(object);
    return fn_02fbe588(object);
}

}  // namespace twin_026fe530

// auto_destroy_then_release_02705160: misc_destroy_then_release with other addresses.
namespace twin_02705160 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02705160(void *object)
{
    fn_02682d10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02705160

// auto_destroy_then_release_02707fd0: misc_destroy_then_release with other addresses.
namespace twin_02707fd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02707ff0, fn_02707ff0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02707fd0(void *object)
{
    fn_02707ff0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02707fd0

// auto_destroy_then_release_02708780: misc_destroy_then_release with other addresses.
namespace twin_02708780 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x027087a0, fn_027087a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02708780(void *object)
{
    fn_027087a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02708780

// auto_destroy_then_release_02719e70: misc_destroy_then_release with other addresses.
namespace twin_02719e70 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02719e70(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02719e70

// auto_destroy_then_release_0271aa90: misc_destroy_then_release with other addresses.
namespace twin_0271aa90 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0271aa90(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0271aa90

// auto_destroy_then_release_0271b480: misc_destroy_then_release with other addresses.
namespace twin_0271b480 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0271b480(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0271b480

// auto_destroy_then_release_0271ba10: misc_destroy_then_release with other addresses.
namespace twin_0271ba10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0271ba30, fn_0271ba30, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0271ba10(void *object)
{
    fn_0271ba30(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0271ba10

// auto_destroy_then_release_0271e6f0: misc_destroy_then_release with other addresses.
namespace twin_0271e6f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0271e6f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0271e6f0

// auto_destroy_then_release_0271f960: misc_destroy_then_release with other addresses.
namespace twin_0271f960 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0271f980, fn_0271f980, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0271f960(void *object)
{
    fn_0271f980(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0271f960

// auto_destroy_then_release_02727190: misc_destroy_then_release with other addresses.
namespace twin_02727190 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02727190(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02727190

// auto_destroy_then_release_02728970: misc_destroy_then_release with other addresses.
namespace twin_02728970 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02728990, fn_02728990, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02728970(void *object)
{
    fn_02728990(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02728970

// auto_destroy_then_release_0272c920: misc_destroy_then_release with other addresses.
namespace twin_0272c920 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0272c920(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0272c920

// auto_destroy_then_release_0272cf50: misc_destroy_then_release with other addresses.
namespace twin_0272cf50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0272cf70, fn_0272cf70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0272cf50(void *object)
{
    fn_0272cf70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0272cf50

// auto_destroy_then_release_02736590: misc_destroy_then_release with other addresses.
namespace twin_02736590 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x027365b0, fn_027365b0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02736590(void *object)
{
    fn_027365b0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02736590

// auto_destroy_then_release_027393f0: misc_destroy_then_release with other addresses.
namespace twin_027393f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_027393f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027393f0

// auto_destroy_then_release_0273a1d0: misc_destroy_then_release with other addresses.
namespace twin_0273a1d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0273a1f0, fn_0273a1f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0273a1d0(void *object)
{
    fn_0273a1f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0273a1d0

// auto_destroy_then_release_0273f7a0: misc_destroy_then_release with other addresses.
namespace twin_0273f7a0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0273f7a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0273f7a0

// auto_destroy_then_release_02741320: misc_destroy_then_release with other addresses.
namespace twin_02741320 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02741340, fn_02741340, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02741320(void *object)
{
    fn_02741340(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02741320

// auto_destroy_then_release_02742030: misc_destroy_then_release with other addresses.
namespace twin_02742030 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02742030(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02742030

// auto_destroy_then_release_02743020: misc_destroy_then_release with other addresses.
namespace twin_02743020 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0273c240, fn_0273c240, void(void *));
RT_ORIGINAL(0x0273a520, fn_0273a520, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02743020(void *object)
{
    fn_0273c240(object);
    return fn_0273a520(object);
}

}  // namespace twin_02743020

// auto_destroy_then_release_02743040: misc_destroy_then_release with other addresses.
namespace twin_02743040 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0273c240, fn_0273c240, void(void *));
RT_ORIGINAL(0x0273a660, fn_0273a660, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02743040(void *object)
{
    fn_0273c240(object);
    return fn_0273a660(object);
}

}  // namespace twin_02743040

// auto_destroy_then_release_02743ac0: misc_destroy_then_release with other addresses.
namespace twin_02743ac0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02743ac0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02743ac0

// auto_destroy_then_release_02743de0: misc_destroy_then_release with other addresses.
namespace twin_02743de0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02743de0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02743de0

// auto_destroy_then_release_02744740: misc_destroy_then_release with other addresses.
namespace twin_02744740 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02744760, fn_02744760, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02744740(void *object)
{
    fn_02744760(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02744740

// auto_destroy_then_release_027476f0: misc_destroy_then_release with other addresses.
namespace twin_027476f0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_027476f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027476f0

// auto_destroy_then_release_0274a2d0: misc_destroy_then_release with other addresses.
namespace twin_0274a2d0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0274a2d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0274a2d0

// auto_destroy_then_release_0274ac80: misc_destroy_then_release with other addresses.
namespace twin_0274ac80 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0274ac80(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0274ac80

// auto_destroy_then_release_0274b490: misc_destroy_then_release with other addresses.
namespace twin_0274b490 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0274b4b0, fn_0274b4b0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0274b490(void *object)
{
    fn_0274b4b0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0274b490

// auto_destroy_then_release_0274da80: misc_destroy_then_release with other addresses.
namespace twin_0274da80 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0274da80(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0274da80

// auto_destroy_then_release_0274e400: misc_destroy_then_release with other addresses.
namespace twin_0274e400 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0274e420, fn_0274e420, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0274e400(void *object)
{
    fn_0274e420(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0274e400

// auto_destroy_then_release_0274f790: misc_destroy_then_release with other addresses.
namespace twin_0274f790 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0274f790(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0274f790

// auto_destroy_then_release_02750390: misc_destroy_then_release with other addresses.
namespace twin_02750390 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01353d70, fn_01353d70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02750390(void *object)
{
    fn_01353d70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02750390

// auto_destroy_then_release_02750870: misc_destroy_then_release with other addresses.
namespace twin_02750870 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02750870(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02750870

// auto_destroy_then_release_02751460: misc_destroy_then_release with other addresses.
namespace twin_02751460 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02751460(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02751460

// auto_destroy_then_release_02751d70: misc_destroy_then_release with other addresses.
namespace twin_02751d70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02751d90, fn_02751d90, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02751d70(void *object)
{
    fn_02751d90(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02751d70

// auto_destroy_then_release_02752e80: misc_destroy_then_release with other addresses.
namespace twin_02752e80 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02752e80(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02752e80

// auto_destroy_then_release_02754240: misc_destroy_then_release with other addresses.
namespace twin_02754240 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02754240(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02754240

// auto_destroy_then_release_027548b0: misc_destroy_then_release with other addresses.
namespace twin_027548b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x027548d0, fn_027548d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_027548b0(void *object)
{
    fn_027548d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027548b0

// auto_destroy_then_release_02756020: misc_destroy_then_release with other addresses.
namespace twin_02756020 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02756020(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02756020

// auto_destroy_then_release_027567e0: misc_destroy_then_release with other addresses.
namespace twin_027567e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02756800, fn_02756800, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_027567e0(void *object)
{
    fn_02756800(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027567e0

// auto_destroy_then_release_02757140: misc_destroy_then_release with other addresses.
namespace twin_02757140 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02757140(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02757140

// auto_destroy_then_release_027578f0: misc_destroy_then_release with other addresses.
namespace twin_027578f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02757910, fn_02757910, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_027578f0(void *object)
{
    fn_02757910(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027578f0

// auto_destroy_then_release_027581e0: misc_destroy_then_release with other addresses.
namespace twin_027581e0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_027581e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027581e0

// auto_destroy_then_release_027591b0: misc_destroy_then_release with other addresses.
namespace twin_027591b0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_027591b0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027591b0

// auto_destroy_then_release_02759aa0: misc_destroy_then_release with other addresses.
namespace twin_02759aa0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02759ac0, fn_02759ac0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02759aa0(void *object)
{
    fn_02759ac0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02759aa0

// auto_destroy_then_release_0275a950: misc_destroy_then_release with other addresses.
namespace twin_0275a950 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0275a950(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0275a950

// auto_destroy_then_release_0275b0b0: misc_destroy_then_release with other addresses.
namespace twin_0275b0b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0275b0d0, fn_0275b0d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0275b0b0(void *object)
{
    fn_0275b0d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0275b0b0

// auto_destroy_then_release_0275d640: misc_destroy_then_release with other addresses.
namespace twin_0275d640 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0275d640(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0275d640

// auto_destroy_then_release_0275dee0: misc_destroy_then_release with other addresses.
namespace twin_0275dee0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0275df00, fn_0275df00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0275dee0(void *object)
{
    fn_0275df00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0275dee0

// auto_destroy_then_release_0275f760: misc_destroy_then_release with other addresses.
namespace twin_0275f760 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0275f760(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0275f760

// auto_destroy_then_release_02760300: misc_destroy_then_release with other addresses.
namespace twin_02760300 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02760320, fn_02760320, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02760300(void *object)
{
    fn_02760320(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02760300

// auto_destroy_then_release_02761560: misc_destroy_then_release with other addresses.
namespace twin_02761560 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02761560(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02761560

// auto_destroy_then_release_027621c0: misc_destroy_then_release with other addresses.
namespace twin_027621c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x027621e0, fn_027621e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_027621c0(void *object)
{
    fn_027621e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027621c0

// auto_destroy_then_release_02762800: misc_destroy_then_release with other addresses.
namespace twin_02762800 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02762800(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02762800

// auto_destroy_then_release_027632e0: misc_destroy_then_release with other addresses.
namespace twin_027632e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02763300, fn_02763300, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_027632e0(void *object)
{
    fn_02763300(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027632e0

// auto_destroy_then_release_02765530: misc_destroy_then_release with other addresses.
namespace twin_02765530 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02765530(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02765530

// auto_destroy_then_release_02766920: misc_destroy_then_release with other addresses.
namespace twin_02766920 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02766940, fn_02766940, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02766920(void *object)
{
    fn_02766940(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02766920

// auto_destroy_then_release_02769f80: misc_destroy_then_release with other addresses.
namespace twin_02769f80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0276aaa0, fn_0276aaa0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02769f80(void *object)
{
    fn_0276aaa0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02769f80

// auto_destroy_then_release_0276a0a0: misc_destroy_then_release with other addresses.
namespace twin_0276a0a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0276aba0, fn_0276aba0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0276a0a0(void *object)
{
    fn_0276aba0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0276a0a0

// auto_destroy_then_release_0276a790: misc_destroy_then_release with other addresses.
namespace twin_0276a790 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0276a790(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0276a790

// auto_destroy_then_release_0276b2f0: misc_destroy_then_release with other addresses.
namespace twin_0276b2f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0276b310, fn_0276b310, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0276b2f0(void *object)
{
    fn_0276b310(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0276b2f0

// auto_destroy_then_release_0276bea0: misc_destroy_then_release with other addresses.
namespace twin_0276bea0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0276bea0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0276bea0

// auto_destroy_then_release_0276c1c0: misc_destroy_then_release with other addresses.
namespace twin_0276c1c0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0276c1c0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0276c1c0

// auto_destroy_then_release_0276e6f0: misc_destroy_then_release with other addresses.
namespace twin_0276e6f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0276e710, fn_0276e710, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0276e6f0(void *object)
{
    fn_0276e710(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0276e6f0

// auto_destroy_then_release_0276f6d0: misc_destroy_then_release with other addresses.
namespace twin_0276f6d0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_0276f6d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0276f6d0

// auto_destroy_then_release_02770930: misc_destroy_then_release with other addresses.
namespace twin_02770930 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02770930(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02770930

// auto_destroy_then_release_02770ff0: misc_destroy_then_release with other addresses.
namespace twin_02770ff0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02771010, fn_02771010, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02770ff0(void *object)
{
    fn_02771010(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02770ff0

// auto_destroy_then_release_02775ad0: misc_destroy_then_release with other addresses.
namespace twin_02775ad0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02775ad0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02775ad0

// auto_destroy_then_release_02777850: misc_destroy_then_release with other addresses.
namespace twin_02777850 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02e55450, fn_02e55450, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02777850(void *object)
{
    fn_02e55450(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02777850

// auto_destroy_then_release_02778e30: misc_destroy_then_release with other addresses.
namespace twin_02778e30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02778e50, fn_02778e50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02778e30(void *object)
{
    fn_02778e50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02778e30

// auto_destroy_then_release_02779370: misc_destroy_then_release with other addresses.
namespace twin_02779370 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02778e50, fn_02778e50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02779370(void *object)
{
    fn_02778e50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02779370

// auto_destroy_then_release_0277c320: misc_destroy_then_release with other addresses.
namespace twin_0277c320 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0277c340, fn_0277c340, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0277c320(void *object)
{
    fn_0277c340(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0277c320

// auto_destroy_then_release_0277d200: misc_destroy_then_release with other addresses.
namespace twin_0277d200 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0277d220, fn_0277d220, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0277d200(void *object)
{
    fn_0277d220(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0277d200

// auto_destroy_then_release_0279f720: misc_destroy_then_release with other addresses.
namespace twin_0279f720 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x00439930, fn_00439930, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0279f720(void *object)
{
    fn_00439930(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0279f720

// auto_destroy_then_release_027f5b10: misc_destroy_then_release with other addresses.
namespace twin_027f5b10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x027f5ca0, fn_027f5ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_027f5b10(void *object)
{
    fn_027f5ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027f5b10

// auto_destroy_then_release_027f5b70: misc_destroy_then_release with other addresses.
namespace twin_027f5b70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x027f6380, fn_027f6380, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_027f5b70(void *object)
{
    fn_027f6380(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027f5b70

// auto_destroy_then_release_027f5c40: misc_destroy_then_release with other addresses.
namespace twin_027f5c40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x027f5ca0, fn_027f5ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_027f5c40(void *object)
{
    fn_027f5ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_027f5c40

// auto_destroy_then_release_028c0630: misc_destroy_then_release with other addresses.
namespace twin_028c0630 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x028c03c0, fn_028c03c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_028c0630(void *object)
{
    fn_028c03c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_028c0630

// auto_destroy_then_release_029b5560: misc_destroy_then_release with other addresses.
namespace twin_029b5560 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x029b58d0, fn_029b58d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_029b5560(void *object)
{
    fn_029b58d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_029b5560

// auto_destroy_then_release_02a1ccf0: misc_destroy_then_release with other addresses.
namespace twin_02a1ccf0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a1cd10, fn_02a1cd10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a1ccf0(void *object)
{
    fn_02a1cd10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a1ccf0

// auto_destroy_then_release_02a2b9c0: misc_destroy_then_release with other addresses.
namespace twin_02a2b9c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a2b9e0, fn_02a2b9e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a2b9c0(void *object)
{
    fn_02a2b9e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a2b9c0

// auto_destroy_then_release_02a2f9b0: misc_destroy_then_release with other addresses.
namespace twin_02a2f9b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a2f9d0, fn_02a2f9d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a2f9b0(void *object)
{
    fn_02a2f9d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a2f9b0

// auto_destroy_then_release_02a316b0: misc_destroy_then_release with other addresses.
namespace twin_02a316b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a316d0, fn_02a316d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a316b0(void *object)
{
    fn_02a316d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a316b0

// auto_destroy_then_release_02a44710: misc_destroy_then_release with other addresses.
namespace twin_02a44710 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a44710(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a44710

// auto_destroy_then_release_02a44910: misc_destroy_then_release with other addresses.
namespace twin_02a44910 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a44910(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a44910

// auto_destroy_then_release_02a457c0: misc_destroy_then_release with other addresses.
namespace twin_02a457c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a457e0, fn_02a457e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a457c0(void *object)
{
    fn_02a457e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a457c0

// auto_destroy_then_release_02a45d30: misc_destroy_then_release with other addresses.
namespace twin_02a45d30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a46ca0, fn_02a46ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a45d30(void *object)
{
    fn_02a46ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a45d30

// auto_destroy_then_release_02a46ac0: misc_destroy_then_release with other addresses.
namespace twin_02a46ac0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a46ac0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a46ac0

// auto_destroy_then_release_02a47070: misc_destroy_then_release with other addresses.
namespace twin_02a47070 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a47090, fn_02a47090, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a47070(void *object)
{
    fn_02a47090(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a47070

// auto_destroy_then_release_02a48310: misc_destroy_then_release with other addresses.
namespace twin_02a48310 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a48310(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a48310

// auto_destroy_then_release_02a48ff0: misc_destroy_then_release with other addresses.
namespace twin_02a48ff0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a49bf0, fn_02a49bf0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a48ff0(void *object)
{
    fn_02a49bf0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a48ff0

// auto_destroy_then_release_02a49a10: misc_destroy_then_release with other addresses.
namespace twin_02a49a10 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a49a10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a49a10

// auto_destroy_then_release_02a4abd0: misc_destroy_then_release with other addresses.
namespace twin_02a4abd0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a4abd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a4abd0

// auto_destroy_then_release_02a4b420: misc_destroy_then_release with other addresses.
namespace twin_02a4b420 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a4b440, fn_02a4b440, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a4b420(void *object)
{
    fn_02a4b440(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a4b420

// auto_destroy_then_release_02a4f2e0: misc_destroy_then_release with other addresses.
namespace twin_02a4f2e0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a4f2e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a4f2e0

// auto_destroy_then_release_02a51b60: misc_destroy_then_release with other addresses.
namespace twin_02a51b60 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a51b60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a51b60

// auto_destroy_then_release_02a53ea0: misc_destroy_then_release with other addresses.
namespace twin_02a53ea0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a53ea0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a53ea0

// auto_destroy_then_release_02a694b0: misc_destroy_then_release with other addresses.
namespace twin_02a694b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a694d0, fn_02a694d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a694b0(void *object)
{
    fn_02a694d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a694b0

// auto_destroy_then_release_02a6c8c0: misc_destroy_then_release with other addresses.
namespace twin_02a6c8c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a6c8e0, fn_02a6c8e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a6c8c0(void *object)
{
    fn_02a6c8e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a6c8c0

// auto_destroy_then_release_02a70cf0: misc_destroy_then_release with other addresses.
namespace twin_02a70cf0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024bd4c0, fn_024bd4c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a70cf0(void *object)
{
    fn_024bd4c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a70cf0

// auto_destroy_then_release_02a71370: misc_destroy_then_release with other addresses.
namespace twin_02a71370 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a71370(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a71370

// auto_destroy_then_release_02a8d500: misc_destroy_then_release with other addresses.
namespace twin_02a8d500 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a8d530, fn_02a8d530, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a8d500(void *object)
{
    fn_02a8d530(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a8d500

// auto_destroy_then_release_02a8ec00: misc_destroy_then_release with other addresses.
namespace twin_02a8ec00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a8cc80, fn_02a8cc80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a8ec00(void *object)
{
    fn_02a8cc80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a8ec00

// auto_destroy_then_release_02a8ed60: misc_destroy_then_release with other addresses.
namespace twin_02a8ed60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a8d530, fn_02a8d530, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a8ed60(void *object)
{
    fn_02a8d530(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a8ed60

// auto_destroy_then_release_02a8fb70: misc_destroy_then_release with other addresses.
namespace twin_02a8fb70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a8fbd0, fn_02a8fbd0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a8fb70(void *object)
{
    fn_02a8fbd0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a8fb70

// auto_destroy_then_release_02a91350: misc_destroy_then_release with other addresses.
namespace twin_02a91350 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a913b0, fn_02a913b0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a91350(void *object)
{
    fn_02a913b0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a91350

// auto_destroy_then_release_02a92850: misc_destroy_then_release with other addresses.
namespace twin_02a92850 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02556780, fn_02556780, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a92850(void *object)
{
    fn_02556780(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a92850

// auto_destroy_then_release_02a93700: misc_destroy_then_release with other addresses.
namespace twin_02a93700 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a93700(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a93700

// auto_destroy_then_release_02a93b60: misc_destroy_then_release with other addresses.
namespace twin_02a93b60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02556750, fn_02556750, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a93b60(void *object)
{
    fn_02556750(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a93b60

// auto_destroy_then_release_02a93d10: misc_destroy_then_release with other addresses.
namespace twin_02a93d10 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a93d10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a93d10

// auto_destroy_then_release_02a942e0: misc_destroy_then_release with other addresses.
namespace twin_02a942e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02556780, fn_02556780, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a942e0(void *object)
{
    fn_02556780(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a942e0

// auto_destroy_then_release_02a94950: misc_destroy_then_release with other addresses.
namespace twin_02a94950 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02556780, fn_02556780, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a94950(void *object)
{
    fn_02556780(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a94950

// auto_destroy_then_release_02a95810: misc_destroy_then_release with other addresses.
namespace twin_02a95810 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a95810(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a95810

// auto_destroy_then_release_02a95ac0: misc_destroy_then_release with other addresses.
namespace twin_02a95ac0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a95ac0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a95ac0

// auto_destroy_then_release_02a96f60: misc_destroy_then_release with other addresses.
namespace twin_02a96f60 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a96f60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a96f60

// auto_destroy_then_release_02a97210: misc_destroy_then_release with other addresses.
namespace twin_02a97210 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a97210(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a97210

// auto_destroy_then_release_02a97730: misc_destroy_then_release with other addresses.
namespace twin_02a97730 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02556780, fn_02556780, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a97730(void *object)
{
    fn_02556780(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a97730

// auto_destroy_then_release_02a97fd0: misc_destroy_then_release with other addresses.
namespace twin_02a97fd0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a97fd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a97fd0

// auto_destroy_then_release_02a98430: misc_destroy_then_release with other addresses.
namespace twin_02a98430 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02556750, fn_02556750, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a98430(void *object)
{
    fn_02556750(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a98430

// auto_destroy_then_release_02a985e0: misc_destroy_then_release with other addresses.
namespace twin_02a985e0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a985e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a985e0

// auto_destroy_then_release_02a98a40: misc_destroy_then_release with other addresses.
namespace twin_02a98a40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02556780, fn_02556780, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a98a40(void *object)
{
    fn_02556780(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a98a40

// auto_destroy_then_release_02a994e0: misc_destroy_then_release with other addresses.
namespace twin_02a994e0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a994e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a994e0

// auto_destroy_then_release_02a99940: misc_destroy_then_release with other addresses.
namespace twin_02a99940 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02556750, fn_02556750, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a99940(void *object)
{
    fn_02556750(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a99940

// auto_destroy_then_release_02a99af0: misc_destroy_then_release with other addresses.
namespace twin_02a99af0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a99af0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a99af0

// auto_destroy_then_release_02a99ed0: misc_destroy_then_release with other addresses.
namespace twin_02a99ed0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02fa2d00, fn_02fa2d00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a99ed0(void *object)
{
    fn_02fa2d00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a99ed0

// auto_destroy_then_release_02a99f70: misc_destroy_then_release with other addresses.
namespace twin_02a99f70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02fa3510, fn_02fa3510, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a99f70(void *object)
{
    fn_02fa3510(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a99f70

// auto_destroy_then_release_02a9a0a0: misc_destroy_then_release with other addresses.
namespace twin_02a9a0a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02fa5630, fn_02fa5630, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a9a0a0(void *object)
{
    fn_02fa5630(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a9a0a0

// auto_destroy_then_release_02a9a160: misc_destroy_then_release with other addresses.
namespace twin_02a9a160 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02fa5a30, fn_02fa5a30, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a9a160(void *object)
{
    fn_02fa5a30(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a9a160

// auto_destroy_then_release_02a9a3b0: misc_destroy_then_release with other addresses.
namespace twin_02a9a3b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a9a3e0, fn_02a9a3e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a9a3b0(void *object)
{
    fn_02a9a3e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a9a3b0

// auto_destroy_then_release_02a9ada0: misc_destroy_then_release with other addresses.
namespace twin_02a9ada0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a9add0, fn_02a9add0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a9ada0(void *object)
{
    fn_02a9add0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a9ada0

// auto_destroy_then_release_02a9c9e0: misc_destroy_then_release with other addresses.
namespace twin_02a9c9e0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02a9c9e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a9c9e0

// auto_destroy_then_release_02a9f060: misc_destroy_then_release with other addresses.
namespace twin_02a9f060 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a9f080, fn_02a9f080, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02a9f060(void *object)
{
    fn_02a9f080(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02a9f060

// auto_destroy_then_release_02aa1610: misc_destroy_then_release with other addresses.
namespace twin_02aa1610 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02aa1630, fn_02aa1630, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02aa1610(void *object)
{
    fn_02aa1630(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02aa1610

// auto_destroy_then_release_02aa2780: misc_destroy_then_release with other addresses.
namespace twin_02aa2780 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02aa27a0, fn_02aa27a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02aa2780(void *object)
{
    fn_02aa27a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02aa2780

// auto_destroy_then_release_02aa37b0: misc_destroy_then_release with other addresses.
namespace twin_02aa37b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02a33700, fn_02a33700, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02aa37b0(void *object)
{
    fn_02a33700(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02aa37b0

// auto_destroy_then_release_02aa7cd0: misc_destroy_then_release with other addresses.
namespace twin_02aa7cd0 {

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
extern "C" uint64_t bb_auto_destroy_then_release_02aa7cd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02aa7cd0

// auto_destroy_then_release_02aa95a0: misc_destroy_then_release with other addresses.
namespace twin_02aa95a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02aa97d0, fn_02aa97d0, void(void *));
RT_ORIGINAL(0x02aa94b0, fn_02aa94b0, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02aa95a0(void *object)
{
    fn_02aa97d0(object);
    return fn_02aa94b0(object);
}

}  // namespace twin_02aa95a0

// auto_destroy_then_release_02aa9690: misc_destroy_then_release with other addresses.
namespace twin_02aa9690 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02aa99a0, fn_02aa99a0, void(void *));
RT_ORIGINAL(0x02aa94b0, fn_02aa94b0, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02aa9690(void *object)
{
    fn_02aa99a0(object);
    return fn_02aa94b0(object);
}

}  // namespace twin_02aa9690

// auto_destroy_then_release_02ad4580: misc_destroy_then_release with other addresses.
namespace twin_02ad4580 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02567bf0, fn_02567bf0, void(void *));
RT_ORIGINAL(0x02aab7e0, fn_02aab7e0, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ad4580(void *object)
{
    fn_02567bf0(object);
    return fn_02aab7e0(object);
}

}  // namespace twin_02ad4580

// auto_destroy_then_release_02ade950: misc_destroy_then_release with other addresses.
namespace twin_02ade950 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02ae0460, fn_02ae0460, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ade950(void *object)
{
    fn_02ae0460(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ade950

// auto_destroy_then_release_02ae0d00: misc_destroy_then_release with other addresses.
namespace twin_02ae0d00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02ae0d20, fn_02ae0d20, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ae0d00(void *object)
{
    fn_02ae0d20(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ae0d00

// auto_destroy_then_release_02ae1470: misc_destroy_then_release with other addresses.
namespace twin_02ae1470 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02aea2d0, fn_02aea2d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ae1470(void *object)
{
    fn_02aea2d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ae1470

// auto_destroy_then_release_02ae2490: misc_destroy_then_release with other addresses.
namespace twin_02ae2490 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02aea2d0, fn_02aea2d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ae2490(void *object)
{
    fn_02aea2d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ae2490

// auto_destroy_then_release_02ae29a0: misc_destroy_then_release with other addresses.
namespace twin_02ae29a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02ae29c0, fn_02ae29c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ae29a0(void *object)
{
    fn_02ae29c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ae29a0

// auto_destroy_then_release_02ae2ff0: misc_destroy_then_release with other addresses.
namespace twin_02ae2ff0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02ae3010, fn_02ae3010, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ae2ff0(void *object)
{
    fn_02ae3010(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ae2ff0

// auto_destroy_then_release_02ae3690: misc_destroy_then_release with other addresses.
namespace twin_02ae3690 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02aeac50, fn_02aeac50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ae3690(void *object)
{
    fn_02aeac50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ae3690

// auto_destroy_then_release_02ae3aa0: misc_destroy_then_release with other addresses.
namespace twin_02ae3aa0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02ae3ac0, fn_02ae3ac0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ae3aa0(void *object)
{
    fn_02ae3ac0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ae3aa0

// auto_destroy_then_release_02ae8750: misc_destroy_then_release with other addresses.
namespace twin_02ae8750 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02ae8770, fn_02ae8770, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ae8750(void *object)
{
    fn_02ae8770(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ae8750

// auto_destroy_then_release_02ae97b0: misc_destroy_then_release with other addresses.
namespace twin_02ae97b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02ae97d0, fn_02ae97d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02ae97b0(void *object)
{
    fn_02ae97d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02ae97b0

// auto_destroy_then_release_02af1990: misc_destroy_then_release with other addresses.
namespace twin_02af1990 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af2b00, fn_02af2b00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af1990(void *object)
{
    fn_02af2b00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af1990

// auto_destroy_then_release_02af2d40: misc_destroy_then_release with other addresses.
namespace twin_02af2d40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af2b00, fn_02af2b00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af2d40(void *object)
{
    fn_02af2b00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af2d40

// auto_destroy_then_release_02af2f90: misc_destroy_then_release with other addresses.
namespace twin_02af2f90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af2b00, fn_02af2b00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af2f90(void *object)
{
    fn_02af2b00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af2f90

// auto_destroy_then_release_02af3040: misc_destroy_then_release with other addresses.
namespace twin_02af3040 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af2b00, fn_02af2b00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af3040(void *object)
{
    fn_02af2b00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af3040

// auto_destroy_then_release_02af3290: misc_destroy_then_release with other addresses.
namespace twin_02af3290 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af4240, fn_02af4240, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af3290(void *object)
{
    fn_02af4240(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af3290

// auto_destroy_then_release_02af4480: misc_destroy_then_release with other addresses.
namespace twin_02af4480 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af4240, fn_02af4240, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af4480(void *object)
{
    fn_02af4240(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af4480

// auto_destroy_then_release_02af46d0: misc_destroy_then_release with other addresses.
namespace twin_02af46d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af4240, fn_02af4240, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af46d0(void *object)
{
    fn_02af4240(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af46d0

// auto_destroy_then_release_02af4780: misc_destroy_then_release with other addresses.
namespace twin_02af4780 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af4240, fn_02af4240, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af4780(void *object)
{
    fn_02af4240(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af4780

// auto_destroy_then_release_02af4830: misc_destroy_then_release with other addresses.
namespace twin_02af4830 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af2b00, fn_02af2b00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af4830(void *object)
{
    fn_02af2b00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af4830

// auto_destroy_then_release_02af48e0: misc_destroy_then_release with other addresses.
namespace twin_02af48e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af2b00, fn_02af2b00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af48e0(void *object)
{
    fn_02af2b00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af48e0

// auto_destroy_then_release_02af4990: misc_destroy_then_release with other addresses.
namespace twin_02af4990 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af2b00, fn_02af2b00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af4990(void *object)
{
    fn_02af2b00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af4990

// auto_destroy_then_release_02af4a40: misc_destroy_then_release with other addresses.
namespace twin_02af4a40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af4240, fn_02af4240, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af4a40(void *object)
{
    fn_02af4240(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af4a40

// auto_destroy_then_release_02af4af0: misc_destroy_then_release with other addresses.
namespace twin_02af4af0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af4240, fn_02af4240, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af4af0(void *object)
{
    fn_02af4240(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af4af0

// auto_destroy_then_release_02af4ba0: misc_destroy_then_release with other addresses.
namespace twin_02af4ba0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af4240, fn_02af4240, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af4ba0(void *object)
{
    fn_02af4240(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af4ba0

// auto_destroy_then_release_02af5dd0: misc_destroy_then_release with other addresses.
namespace twin_02af5dd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af6d40, fn_02af6d40, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af5dd0(void *object)
{
    fn_02af6d40(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af5dd0

// auto_destroy_then_release_02af6f80: misc_destroy_then_release with other addresses.
namespace twin_02af6f80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af6d40, fn_02af6d40, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af6f80(void *object)
{
    fn_02af6d40(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af6f80

// auto_destroy_then_release_02af71c0: misc_destroy_then_release with other addresses.
namespace twin_02af71c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af6d40, fn_02af6d40, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af71c0(void *object)
{
    fn_02af6d40(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af71c0

// auto_destroy_then_release_02af7270: misc_destroy_then_release with other addresses.
namespace twin_02af7270 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af6d40, fn_02af6d40, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af7270(void *object)
{
    fn_02af6d40(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af7270

// auto_destroy_then_release_02af74a0: misc_destroy_then_release with other addresses.
namespace twin_02af74a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af8220, fn_02af8220, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af74a0(void *object)
{
    fn_02af8220(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af74a0

// auto_destroy_then_release_02af8460: misc_destroy_then_release with other addresses.
namespace twin_02af8460 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af8220, fn_02af8220, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af8460(void *object)
{
    fn_02af8220(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af8460

// auto_destroy_then_release_02af86a0: misc_destroy_then_release with other addresses.
namespace twin_02af86a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af8220, fn_02af8220, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af86a0(void *object)
{
    fn_02af8220(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af86a0

// auto_destroy_then_release_02af8750: misc_destroy_then_release with other addresses.
namespace twin_02af8750 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af8220, fn_02af8220, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af8750(void *object)
{
    fn_02af8220(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af8750

// auto_destroy_then_release_02af89a0: misc_destroy_then_release with other addresses.
namespace twin_02af89a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af9940, fn_02af9940, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af89a0(void *object)
{
    fn_02af9940(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af89a0

// auto_destroy_then_release_02af9b80: misc_destroy_then_release with other addresses.
namespace twin_02af9b80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af9940, fn_02af9940, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af9b80(void *object)
{
    fn_02af9940(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af9b80

// auto_destroy_then_release_02af9dd0: misc_destroy_then_release with other addresses.
namespace twin_02af9dd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af9940, fn_02af9940, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af9dd0(void *object)
{
    fn_02af9940(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af9dd0

// auto_destroy_then_release_02af9e80: misc_destroy_then_release with other addresses.
namespace twin_02af9e80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af9940, fn_02af9940, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af9e80(void *object)
{
    fn_02af9940(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af9e80

// auto_destroy_then_release_02af9f30: misc_destroy_then_release with other addresses.
namespace twin_02af9f30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02af9940, fn_02af9940, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_02af9f30(void *object)
{
    fn_02af9940(object);
    return fn_02fbe588(object);
}

}  // namespace twin_02af9f30
