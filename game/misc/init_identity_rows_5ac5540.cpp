// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** Rows of the matrix: the top three rows of a four-by-four transform. */
constexpr size_t matrix_rows = 3;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: three rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5540, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5590, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_misc_init_identity_rows_5ac5540()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}
