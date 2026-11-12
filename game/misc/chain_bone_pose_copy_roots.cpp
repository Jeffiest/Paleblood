// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: builds a pose from a local pose by chaining each bone onto its parent, copying the roots unchanged.
#include "bone_pose_chain.h"

/**
 *
 * For each bone, takes its local matrix from the source pose and, when it has a parent, multiplies it by the
 * parent's finished matrix in the output pose; a root's matrix is copied. It then marks the output pose as done.
 *
 * The original leaves a scratch value in RAX, so the function returns nothing.
 *
 */
extern "C" void bb_misc_chain_bone_pose_copy_roots(bone_pose::BonePose *output, const bone_pose::BonePose *source,
                                                   const bone_pose::BoneHierarchy *hierarchy)
{
    for (int32_t bone = 0; bone < output->bone_count; ++bone) {
        const int64_t parent = hierarchy->bones[bone].parent_index;
        bone_pose::BoneMatrix *matrices = output->matrices;
        const bone_pose::BoneMatrix *local = source->matrices;
        if (parent < 0) {
            matrices[bone] = local[bone];
        } else {
            matrices[bone] = bone_pose::chain(matrices[parent], local[bone]);
        }
    }
    output->state = bone_pose::state_chained;
}
