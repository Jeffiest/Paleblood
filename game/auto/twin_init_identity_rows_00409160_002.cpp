// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_identity_rows_5ac5570, in game/misc/init_identity_rows_5ac5570.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_identity_rows_02089b10: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02089b10 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02089b10()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02089b10

// auto_init_identity_rows_0208ae90: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0208ae90 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0208ae90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0208ae90

// auto_init_identity_rows_02090be0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02090be0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02090be0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02090be0

// auto_init_identity_rows_02093730: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02093730 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02093730()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02093730

// auto_init_identity_rows_020942a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_020942a0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_020942a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020942a0

// auto_init_identity_rows_020950b0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_020950b0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_020950b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020950b0

// auto_init_identity_rows_02256590: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02256590 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02256590()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02256590

// auto_init_identity_rows_02330e00: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02330e00 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02330e00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02330e00

// auto_init_identity_rows_02332700: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02332700 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02332700()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02332700

// auto_init_identity_rows_023370d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023370d0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023370d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023370d0

// auto_init_identity_rows_02337970: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02337970 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02337970()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02337970

// auto_init_identity_rows_0233a120: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0233a120 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0233a120()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233a120

// auto_init_identity_rows_0233bab0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0233bab0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0233bab0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233bab0

// auto_init_identity_rows_0233d450: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0233d450 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0233d450()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233d450

// auto_init_identity_rows_0233d690: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0233d690 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0233d690()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233d690

// auto_init_identity_rows_0233e100: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0233e100 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0233e100()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233e100

// auto_init_identity_rows_0233eae0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0233eae0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0233eae0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233eae0

// auto_init_identity_rows_0233f530: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0233f530 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0233f530()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233f530

// auto_init_identity_rows_0233fd60: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0233fd60 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0233fd60()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233fd60

// auto_init_identity_rows_023408d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023408d0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023408d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023408d0

// auto_init_identity_rows_023410d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023410d0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023410d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023410d0

// auto_init_identity_rows_023415a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023415a0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023415a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023415a0

// auto_init_identity_rows_02341a00: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02341a00 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02341a00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02341a00

// auto_init_identity_rows_023422b0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023422b0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023422b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023422b0

// auto_init_identity_rows_023469f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023469f0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023469f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023469f0

// auto_init_identity_rows_0234c6d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0234c6d0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0234c6d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0234c6d0

// auto_init_identity_rows_02350b50: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02350b50 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02350b50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02350b50

// auto_init_identity_rows_023594a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023594a0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023594a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023594a0

// auto_init_identity_rows_02363770: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02363770 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02363770()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02363770

// auto_init_identity_rows_02366ea0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02366ea0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02366ea0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02366ea0

// auto_init_identity_rows_023670e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023670e0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023670e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023670e0

// auto_init_identity_rows_02367320: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02367320 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02367320()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02367320

// auto_init_identity_rows_02368040: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02368040 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02368040()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02368040

// auto_init_identity_rows_02369ec0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02369ec0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02369ec0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02369ec0

// auto_init_identity_rows_0236b790: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0236b790 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0236b790()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0236b790

// auto_init_identity_rows_0236c7e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0236c7e0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0236c7e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0236c7e0

// auto_init_identity_rows_023a69e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023a69e0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023a69e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023a69e0

// auto_init_identity_rows_023e3ac0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_023e3ac0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_023e3ac0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023e3ac0

// auto_init_identity_rows_02458900: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02458900 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_02458900()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02458900

// auto_init_identity_rows_0245f8e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0245f8e0 {

// Misc: set the two-row matrix at 0x05ac5570 to the identity, once.


namespace {

/** Rows of the matrix: the top two rows of a four-by-four transform. */
constexpr size_t matrix_rows = 2;
/** Columns of the matrix. */
constexpr size_t matrix_columns = 4;

/** The matrix layout: two rows of four floats. */
using MatrixRows = float[matrix_rows][matrix_columns];

RT_GLOBAL(0x05ac5570, identity_matrix, MatrixRows);
RT_GLOBAL(0x05ac5598, matrix_ready_flag, uint64_t);

}  // namespace

/**
 *
 * Sets the matrix to the identity the first time it is called: one on the diagonal, zero elsewhere.
 *
 * The flag is tested as its low byte only, and the whole flag is set to one after the matrix is
 * written. Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_init_identity_rows_0245f8e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0245f8e0
