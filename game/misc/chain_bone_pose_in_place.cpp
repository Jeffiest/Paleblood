// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: chains each bone of a pose onto its parent in place; roots stay as they are.
#include "bone_pose_chain.h"

/**
 *
 * For each bone that has a parent, replaces its matrix with the product of the parent's matrix and its own.
 * Roots are left alone. It then marks the pose as done.
 *
 * The original leaves a scratch value in RAX, so the function returns nothing.
 *
 */
extern "C" void bb_misc_chain_bone_pose_in_place(bone_pose::BonePose *pose, const bone_pose::BoneHierarchy *hierarchy)
{
    for (int32_t bone = 0; bone < pose->bone_count; ++bone) {
        const int64_t parent = hierarchy->bones[bone].parent_index;
        if (parent < 0) continue;
        bone_pose::BoneMatrix *matrices = pose->matrices;
        matrices[bone] = bone_pose::chain(matrices[parent], matrices[bone]);
    }
    pose->state = bone_pose::state_chained;
}
