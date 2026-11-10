// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_identity_rows_5ac5570, in game/misc/init_identity_rows_5ac5570.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_identity_rows_0040b3d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0040b3d0 {

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
extern "C" void bb_auto_init_identity_rows_0040b3d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0040b3d0

// auto_init_identity_rows_0040bef0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0040bef0 {

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
extern "C" void bb_auto_init_identity_rows_0040bef0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0040bef0

// auto_init_identity_rows_0040f520: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0040f520 {

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
extern "C" void bb_auto_init_identity_rows_0040f520()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0040f520

// auto_init_identity_rows_00414510: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00414510 {

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
extern "C" void bb_auto_init_identity_rows_00414510()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00414510

// auto_init_identity_rows_0041ca70: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0041ca70 {

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
extern "C" void bb_auto_init_identity_rows_0041ca70()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0041ca70

// auto_init_identity_rows_0042c310: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0042c310 {

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
extern "C" void bb_auto_init_identity_rows_0042c310()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0042c310

// auto_init_identity_rows_0042e570: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0042e570 {

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
extern "C" void bb_auto_init_identity_rows_0042e570()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0042e570

// auto_init_identity_rows_00430610: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00430610 {

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
extern "C" void bb_auto_init_identity_rows_00430610()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00430610

// auto_init_identity_rows_004336e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004336e0 {

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
extern "C" void bb_auto_init_identity_rows_004336e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004336e0

// auto_init_identity_rows_00437850: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00437850 {

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
extern "C" void bb_auto_init_identity_rows_00437850()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00437850

// auto_init_identity_rows_0043b230: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0043b230 {

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
extern "C" void bb_auto_init_identity_rows_0043b230()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0043b230

// auto_init_identity_rows_0043e8b0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0043e8b0 {

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
extern "C" void bb_auto_init_identity_rows_0043e8b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0043e8b0

// auto_init_identity_rows_00445770: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00445770 {

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
extern "C" void bb_auto_init_identity_rows_00445770()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00445770

// auto_init_identity_rows_0044f310: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0044f310 {

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
extern "C" void bb_auto_init_identity_rows_0044f310()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0044f310

// auto_init_identity_rows_00450c00: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00450c00 {

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
extern "C" void bb_auto_init_identity_rows_00450c00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00450c00

// auto_init_identity_rows_00489eb0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00489eb0 {

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
extern "C" void bb_auto_init_identity_rows_00489eb0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00489eb0

// auto_init_identity_rows_0048b3a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0048b3a0 {

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
extern "C" void bb_auto_init_identity_rows_0048b3a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0048b3a0

// auto_init_identity_rows_0048d350: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0048d350 {

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
extern "C" void bb_auto_init_identity_rows_0048d350()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0048d350

// auto_init_identity_rows_00491050: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00491050 {

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
extern "C" void bb_auto_init_identity_rows_00491050()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00491050

// auto_init_identity_rows_00492530: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00492530 {

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
extern "C" void bb_auto_init_identity_rows_00492530()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00492530

// auto_init_identity_rows_00493e70: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00493e70 {

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
extern "C" void bb_auto_init_identity_rows_00493e70()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00493e70

// auto_init_identity_rows_00498ed0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00498ed0 {

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
extern "C" void bb_auto_init_identity_rows_00498ed0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00498ed0

// auto_init_identity_rows_004a59c0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004a59c0 {

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
extern "C" void bb_auto_init_identity_rows_004a59c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004a59c0

// auto_init_identity_rows_004a8f80: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004a8f80 {

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
extern "C" void bb_auto_init_identity_rows_004a8f80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004a8f80

// auto_init_identity_rows_004ac090: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004ac090 {

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
extern "C" void bb_auto_init_identity_rows_004ac090()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ac090

// auto_init_identity_rows_004ad0f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004ad0f0 {

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
extern "C" void bb_auto_init_identity_rows_004ad0f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ad0f0

// auto_init_identity_rows_004ad620: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004ad620 {

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
extern "C" void bb_auto_init_identity_rows_004ad620()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ad620

// auto_init_identity_rows_004b3010: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004b3010 {

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
extern "C" void bb_auto_init_identity_rows_004b3010()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004b3010

// auto_init_identity_rows_004b39c0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004b39c0 {

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
extern "C" void bb_auto_init_identity_rows_004b39c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004b39c0

// auto_init_identity_rows_004ba630: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004ba630 {

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
extern "C" void bb_auto_init_identity_rows_004ba630()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ba630

// auto_init_identity_rows_004bb3f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004bb3f0 {

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
extern "C" void bb_auto_init_identity_rows_004bb3f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004bb3f0

// auto_init_identity_rows_004c68d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004c68d0 {

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
extern "C" void bb_auto_init_identity_rows_004c68d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004c68d0

// auto_init_identity_rows_004dd600: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004dd600 {

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
extern "C" void bb_auto_init_identity_rows_004dd600()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004dd600

// auto_init_identity_rows_004e0230: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004e0230 {

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
extern "C" void bb_auto_init_identity_rows_004e0230()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004e0230

// auto_init_identity_rows_004e2e00: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004e2e00 {

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
extern "C" void bb_auto_init_identity_rows_004e2e00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004e2e00

// auto_init_identity_rows_004e5960: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004e5960 {

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
extern "C" void bb_auto_init_identity_rows_004e5960()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004e5960

// auto_init_identity_rows_004ea1e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004ea1e0 {

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
extern "C" void bb_auto_init_identity_rows_004ea1e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ea1e0

// auto_init_identity_rows_004ee6a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004ee6a0 {

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
extern "C" void bb_auto_init_identity_rows_004ee6a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ee6a0

// auto_init_identity_rows_004ef430: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004ef430 {

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
extern "C" void bb_auto_init_identity_rows_004ef430()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ef430

// auto_init_identity_rows_004f3cf0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004f3cf0 {

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
extern "C" void bb_auto_init_identity_rows_004f3cf0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f3cf0

// auto_init_identity_rows_004f3df0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004f3df0 {

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
extern "C" void bb_auto_init_identity_rows_004f3df0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f3df0

// auto_init_identity_rows_004f7060: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004f7060 {

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
extern "C" void bb_auto_init_identity_rows_004f7060()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f7060

// auto_init_identity_rows_004f9050: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004f9050 {

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
extern "C" void bb_auto_init_identity_rows_004f9050()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f9050

// auto_init_identity_rows_004f9620: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004f9620 {

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
extern "C" void bb_auto_init_identity_rows_004f9620()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f9620

// auto_init_identity_rows_004fb4e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004fb4e0 {

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
extern "C" void bb_auto_init_identity_rows_004fb4e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004fb4e0

// auto_init_identity_rows_004ff0f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_004ff0f0 {

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
extern "C" void bb_auto_init_identity_rows_004ff0f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ff0f0

// auto_init_identity_rows_00505730: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00505730 {

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
extern "C" void bb_auto_init_identity_rows_00505730()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00505730

// auto_init_identity_rows_00507b90: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00507b90 {

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
extern "C" void bb_auto_init_identity_rows_00507b90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00507b90

// auto_init_identity_rows_00508c70: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00508c70 {

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
extern "C" void bb_auto_init_identity_rows_00508c70()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00508c70

// auto_init_identity_rows_0050b0c0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0050b0c0 {

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
extern "C" void bb_auto_init_identity_rows_0050b0c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0050b0c0

// auto_init_identity_rows_0050dbd0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0050dbd0 {

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
extern "C" void bb_auto_init_identity_rows_0050dbd0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0050dbd0

// auto_init_identity_rows_005106d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_005106d0 {

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
extern "C" void bb_auto_init_identity_rows_005106d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005106d0

// auto_init_identity_rows_005117a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_005117a0 {

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
extern "C" void bb_auto_init_identity_rows_005117a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005117a0

// auto_init_identity_rows_00518ea0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00518ea0 {

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
extern "C" void bb_auto_init_identity_rows_00518ea0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00518ea0

// auto_init_identity_rows_0051e1a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0051e1a0 {

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
extern "C" void bb_auto_init_identity_rows_0051e1a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0051e1a0

// auto_init_identity_rows_0051f680: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0051f680 {

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
extern "C" void bb_auto_init_identity_rows_0051f680()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0051f680

// auto_init_identity_rows_0052be20: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0052be20 {

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
extern "C" void bb_auto_init_identity_rows_0052be20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0052be20

// auto_init_identity_rows_0052d1b0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0052d1b0 {

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
extern "C" void bb_auto_init_identity_rows_0052d1b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0052d1b0

// auto_init_identity_rows_0052e4d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0052e4d0 {

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
extern "C" void bb_auto_init_identity_rows_0052e4d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0052e4d0

// auto_init_identity_rows_00536a60: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00536a60 {

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
extern "C" void bb_auto_init_identity_rows_00536a60()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00536a60

// auto_init_identity_rows_0053c0d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0053c0d0 {

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
extern "C" void bb_auto_init_identity_rows_0053c0d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0053c0d0

// auto_init_identity_rows_0053d9f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0053d9f0 {

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
extern "C" void bb_auto_init_identity_rows_0053d9f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0053d9f0

// auto_init_identity_rows_0053e680: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0053e680 {

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
extern "C" void bb_auto_init_identity_rows_0053e680()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0053e680

// auto_init_identity_rows_005401e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_005401e0 {

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
extern "C" void bb_auto_init_identity_rows_005401e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005401e0

// auto_init_identity_rows_00540cf0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00540cf0 {

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
extern "C" void bb_auto_init_identity_rows_00540cf0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00540cf0

// auto_init_identity_rows_00545400: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00545400 {

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
extern "C" void bb_auto_init_identity_rows_00545400()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00545400

// auto_init_identity_rows_00545b10: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00545b10 {

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
extern "C" void bb_auto_init_identity_rows_00545b10()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00545b10

// auto_init_identity_rows_00546100: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00546100 {

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
extern "C" void bb_auto_init_identity_rows_00546100()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00546100

// auto_init_identity_rows_00547220: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00547220 {

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
extern "C" void bb_auto_init_identity_rows_00547220()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00547220

// auto_init_identity_rows_005477b0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_005477b0 {

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
extern "C" void bb_auto_init_identity_rows_005477b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005477b0

// auto_init_identity_rows_00548b00: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00548b00 {

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
extern "C" void bb_auto_init_identity_rows_00548b00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00548b00

// auto_init_identity_rows_0054a610: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0054a610 {

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
extern "C" void bb_auto_init_identity_rows_0054a610()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0054a610

// auto_init_identity_rows_005e7890: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_005e7890 {

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
extern "C" void bb_auto_init_identity_rows_005e7890()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005e7890

// auto_init_identity_rows_005ebd80: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_005ebd80 {

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
extern "C" void bb_auto_init_identity_rows_005ebd80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005ebd80

// auto_init_identity_rows_005ef890: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_005ef890 {

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
extern "C" void bb_auto_init_identity_rows_005ef890()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005ef890

// auto_init_identity_rows_005f25b0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_005f25b0 {

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
extern "C" void bb_auto_init_identity_rows_005f25b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005f25b0

// auto_init_identity_rows_00613750: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00613750 {

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
extern "C" void bb_auto_init_identity_rows_00613750()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00613750

// auto_init_identity_rows_0062b310: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0062b310 {

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
extern "C" void bb_auto_init_identity_rows_0062b310()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0062b310

// auto_init_identity_rows_0062b980: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0062b980 {

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
extern "C" void bb_auto_init_identity_rows_0062b980()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0062b980

// auto_init_identity_rows_00633760: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00633760 {

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
extern "C" void bb_auto_init_identity_rows_00633760()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00633760

// auto_init_identity_rows_00643f50: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00643f50 {

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
extern "C" void bb_auto_init_identity_rows_00643f50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00643f50

// auto_init_identity_rows_0064b260: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0064b260 {

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
extern "C" void bb_auto_init_identity_rows_0064b260()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0064b260

// auto_init_identity_rows_0064d460: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0064d460 {

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
extern "C" void bb_auto_init_identity_rows_0064d460()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0064d460

// auto_init_identity_rows_006545f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_006545f0 {

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
extern "C" void bb_auto_init_identity_rows_006545f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_006545f0

// auto_init_identity_rows_00654b80: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00654b80 {

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
extern "C" void bb_auto_init_identity_rows_00654b80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00654b80

// auto_init_identity_rows_00657070: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00657070 {

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
extern "C" void bb_auto_init_identity_rows_00657070()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00657070

// auto_init_identity_rows_00661410: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00661410 {

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
extern "C" void bb_auto_init_identity_rows_00661410()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00661410

// auto_init_identity_rows_00663810: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00663810 {

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
extern "C" void bb_auto_init_identity_rows_00663810()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00663810

// auto_init_identity_rows_006704f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_006704f0 {

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
extern "C" void bb_auto_init_identity_rows_006704f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_006704f0

// auto_init_identity_rows_006b24f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_006b24f0 {

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
extern "C" void bb_auto_init_identity_rows_006b24f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_006b24f0

// auto_init_identity_rows_00738850: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00738850 {

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
extern "C" void bb_auto_init_identity_rows_00738850()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00738850

// auto_init_identity_rows_00739730: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_00739730 {

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
extern "C" void bb_auto_init_identity_rows_00739730()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00739730

// auto_init_identity_rows_0073ae10: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0073ae10 {

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
extern "C" void bb_auto_init_identity_rows_0073ae10()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0073ae10

// auto_init_identity_rows_0073c7f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0073c7f0 {

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
extern "C" void bb_auto_init_identity_rows_0073c7f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0073c7f0

// auto_init_identity_rows_0073e830: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0073e830 {

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
extern "C" void bb_auto_init_identity_rows_0073e830()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0073e830

// auto_init_identity_rows_0073f480: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0073f480 {

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
extern "C" void bb_auto_init_identity_rows_0073f480()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0073f480

// auto_init_identity_rows_007402a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_007402a0 {

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
extern "C" void bb_auto_init_identity_rows_007402a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_007402a0

// auto_init_identity_rows_007923d0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_007923d0 {

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
extern "C" void bb_auto_init_identity_rows_007923d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_007923d0

// auto_init_identity_rows_007a1960: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_007a1960 {

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
extern "C" void bb_auto_init_identity_rows_007a1960()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_007a1960

// auto_init_identity_rows_014aba70: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_014aba70 {

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
extern "C" void bb_auto_init_identity_rows_014aba70()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014aba70

// auto_init_identity_rows_014acd00: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_014acd00 {

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
extern "C" void bb_auto_init_identity_rows_014acd00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014acd00

// auto_init_identity_rows_014ae240: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_014ae240 {

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
extern "C" void bb_auto_init_identity_rows_014ae240()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014ae240

// auto_init_identity_rows_014b0cd0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_014b0cd0 {

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
extern "C" void bb_auto_init_identity_rows_014b0cd0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014b0cd0

// auto_init_identity_rows_014b3520: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_014b3520 {

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
extern "C" void bb_auto_init_identity_rows_014b3520()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014b3520

// auto_init_identity_rows_01711b70: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01711b70 {

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
extern "C" void bb_auto_init_identity_rows_01711b70()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01711b70

// auto_init_identity_rows_01721e10: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01721e10 {

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
extern "C" void bb_auto_init_identity_rows_01721e10()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01721e10

// auto_init_identity_rows_0178d5c0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0178d5c0 {

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
extern "C" void bb_auto_init_identity_rows_0178d5c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0178d5c0

// auto_init_identity_rows_0185ff00: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0185ff00 {

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
extern "C" void bb_auto_init_identity_rows_0185ff00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0185ff00

// auto_init_identity_rows_019bf670: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_019bf670 {

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
extern "C" void bb_auto_init_identity_rows_019bf670()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_019bf670

// auto_init_identity_rows_01a459a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01a459a0 {

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
extern "C" void bb_auto_init_identity_rows_01a459a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01a459a0

// auto_init_identity_rows_01a5eba0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01a5eba0 {

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
extern "C" void bb_auto_init_identity_rows_01a5eba0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01a5eba0

// auto_init_identity_rows_01abef90: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01abef90 {

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
extern "C" void bb_auto_init_identity_rows_01abef90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01abef90

// auto_init_identity_rows_01ae57b0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ae57b0 {

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
extern "C" void bb_auto_init_identity_rows_01ae57b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ae57b0

// auto_init_identity_rows_01b6ec50: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01b6ec50 {

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
extern "C" void bb_auto_init_identity_rows_01b6ec50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01b6ec50

// auto_init_identity_rows_01b76a20: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01b76a20 {

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
extern "C" void bb_auto_init_identity_rows_01b76a20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01b76a20

// auto_init_identity_rows_01b90140: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01b90140 {

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
extern "C" void bb_auto_init_identity_rows_01b90140()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01b90140

// auto_init_identity_rows_01b99f90: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01b99f90 {

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
extern "C" void bb_auto_init_identity_rows_01b99f90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01b99f90

// auto_init_identity_rows_01bc3fe0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01bc3fe0 {

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
extern "C" void bb_auto_init_identity_rows_01bc3fe0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01bc3fe0

// auto_init_identity_rows_01c34550: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01c34550 {

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
extern "C" void bb_auto_init_identity_rows_01c34550()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01c34550

// auto_init_identity_rows_01d5bd50: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01d5bd50 {

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
extern "C" void bb_auto_init_identity_rows_01d5bd50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01d5bd50

// auto_init_identity_rows_01d5f1e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01d5f1e0 {

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
extern "C" void bb_auto_init_identity_rows_01d5f1e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01d5f1e0

// auto_init_identity_rows_01d6c710: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01d6c710 {

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
extern "C" void bb_auto_init_identity_rows_01d6c710()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01d6c710

// auto_init_identity_rows_01dd51f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01dd51f0 {

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
extern "C" void bb_auto_init_identity_rows_01dd51f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01dd51f0

// auto_init_identity_rows_01dd9030: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01dd9030 {

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
extern "C" void bb_auto_init_identity_rows_01dd9030()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01dd9030

// auto_init_identity_rows_01ddcd50: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ddcd50 {

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
extern "C" void bb_auto_init_identity_rows_01ddcd50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ddcd50

// auto_init_identity_rows_01e27240: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01e27240 {

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
extern "C" void bb_auto_init_identity_rows_01e27240()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01e27240

// auto_init_identity_rows_01ecd3c0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ecd3c0 {

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
extern "C" void bb_auto_init_identity_rows_01ecd3c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ecd3c0

// auto_init_identity_rows_01ece400: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ece400 {

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
extern "C" void bb_auto_init_identity_rows_01ece400()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ece400

// auto_init_identity_rows_01ed1cb0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ed1cb0 {

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
extern "C" void bb_auto_init_identity_rows_01ed1cb0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed1cb0

// auto_init_identity_rows_01ed7410: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ed7410 {

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
extern "C" void bb_auto_init_identity_rows_01ed7410()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed7410

// auto_init_identity_rows_01ed8c30: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ed8c30 {

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
extern "C" void bb_auto_init_identity_rows_01ed8c30()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed8c30

// auto_init_identity_rows_01ed9a20: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ed9a20 {

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
extern "C" void bb_auto_init_identity_rows_01ed9a20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed9a20

// auto_init_identity_rows_01ed9de0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ed9de0 {

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
extern "C" void bb_auto_init_identity_rows_01ed9de0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed9de0

// auto_init_identity_rows_01edab60: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01edab60 {

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
extern "C" void bb_auto_init_identity_rows_01edab60()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edab60

// auto_init_identity_rows_01edae30: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01edae30 {

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
extern "C" void bb_auto_init_identity_rows_01edae30()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edae30

// auto_init_identity_rows_01edbc90: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01edbc90 {

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
extern "C" void bb_auto_init_identity_rows_01edbc90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edbc90

// auto_init_identity_rows_01edc8e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01edc8e0 {

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
extern "C" void bb_auto_init_identity_rows_01edc8e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edc8e0

// auto_init_identity_rows_01edcea0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01edcea0 {

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
extern "C" void bb_auto_init_identity_rows_01edcea0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edcea0

// auto_init_identity_rows_01edd600: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01edd600 {

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
extern "C" void bb_auto_init_identity_rows_01edd600()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edd600

// auto_init_identity_rows_01ee3a20: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ee3a20 {

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
extern "C" void bb_auto_init_identity_rows_01ee3a20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ee3a20

// auto_init_identity_rows_01ee9dd0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ee9dd0 {

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
extern "C" void bb_auto_init_identity_rows_01ee9dd0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ee9dd0

// auto_init_identity_rows_01eebf50: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01eebf50 {

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
extern "C" void bb_auto_init_identity_rows_01eebf50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01eebf50

// auto_init_identity_rows_01ef50f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ef50f0 {

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
extern "C" void bb_auto_init_identity_rows_01ef50f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ef50f0

// auto_init_identity_rows_01f02750: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f02750 {

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
extern "C" void bb_auto_init_identity_rows_01f02750()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f02750

// auto_init_identity_rows_01f08280: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f08280 {

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
extern "C" void bb_auto_init_identity_rows_01f08280()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f08280

// auto_init_identity_rows_01f0f1e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f0f1e0 {

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
extern "C" void bb_auto_init_identity_rows_01f0f1e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f0f1e0

// auto_init_identity_rows_01f12210: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f12210 {

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
extern "C" void bb_auto_init_identity_rows_01f12210()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f12210

// auto_init_identity_rows_01f162b0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f162b0 {

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
extern "C" void bb_auto_init_identity_rows_01f162b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f162b0

// auto_init_identity_rows_01f18100: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f18100 {

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
extern "C" void bb_auto_init_identity_rows_01f18100()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f18100

// auto_init_identity_rows_01f1b250: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f1b250 {

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
extern "C" void bb_auto_init_identity_rows_01f1b250()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f1b250

// auto_init_identity_rows_01f1df50: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f1df50 {

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
extern "C" void bb_auto_init_identity_rows_01f1df50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f1df50

// auto_init_identity_rows_01f240c0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f240c0 {

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
extern "C" void bb_auto_init_identity_rows_01f240c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f240c0

// auto_init_identity_rows_01f2f100: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f2f100 {

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
extern "C" void bb_auto_init_identity_rows_01f2f100()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f2f100

// auto_init_identity_rows_01f32fd0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f32fd0 {

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
extern "C" void bb_auto_init_identity_rows_01f32fd0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f32fd0

// auto_init_identity_rows_01f37ba0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f37ba0 {

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
extern "C" void bb_auto_init_identity_rows_01f37ba0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f37ba0

// auto_init_identity_rows_01f3c380: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f3c380 {

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
extern "C" void bb_auto_init_identity_rows_01f3c380()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f3c380

// auto_init_identity_rows_01f4fe10: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f4fe10 {

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
extern "C" void bb_auto_init_identity_rows_01f4fe10()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f4fe10

// auto_init_identity_rows_01f558f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f558f0 {

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
extern "C" void bb_auto_init_identity_rows_01f558f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f558f0

// auto_init_identity_rows_01f57d50: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f57d50 {

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
extern "C" void bb_auto_init_identity_rows_01f57d50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f57d50

// auto_init_identity_rows_01f58050: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f58050 {

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
extern "C" void bb_auto_init_identity_rows_01f58050()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f58050

// auto_init_identity_rows_01f5a580: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f5a580 {

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
extern "C" void bb_auto_init_identity_rows_01f5a580()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5a580

// auto_init_identity_rows_01f5aab0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f5aab0 {

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
extern "C" void bb_auto_init_identity_rows_01f5aab0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5aab0

// auto_init_identity_rows_01f5acf0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f5acf0 {

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
extern "C" void bb_auto_init_identity_rows_01f5acf0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5acf0

// auto_init_identity_rows_01f5c830: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f5c830 {

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
extern "C" void bb_auto_init_identity_rows_01f5c830()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5c830

// auto_init_identity_rows_01f5fe90: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f5fe90 {

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
extern "C" void bb_auto_init_identity_rows_01f5fe90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5fe90

// auto_init_identity_rows_01f649c0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f649c0 {

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
extern "C" void bb_auto_init_identity_rows_01f649c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f649c0

// auto_init_identity_rows_01f65680: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f65680 {

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
extern "C" void bb_auto_init_identity_rows_01f65680()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f65680

// auto_init_identity_rows_01f6a870: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f6a870 {

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
extern "C" void bb_auto_init_identity_rows_01f6a870()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f6a870

// auto_init_identity_rows_01f84190: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f84190 {

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
extern "C" void bb_auto_init_identity_rows_01f84190()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f84190

// auto_init_identity_rows_01f9f320: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01f9f320 {

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
extern "C" void bb_auto_init_identity_rows_01f9f320()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f9f320

// auto_init_identity_rows_01fac6a0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01fac6a0 {

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
extern "C" void bb_auto_init_identity_rows_01fac6a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fac6a0

// auto_init_identity_rows_01fb3380: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01fb3380 {

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
extern "C" void bb_auto_init_identity_rows_01fb3380()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fb3380

// auto_init_identity_rows_01fc2f00: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01fc2f00 {

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
extern "C" void bb_auto_init_identity_rows_01fc2f00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fc2f00

// auto_init_identity_rows_01fe05c0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01fe05c0 {

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
extern "C" void bb_auto_init_identity_rows_01fe05c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fe05c0

// auto_init_identity_rows_01fe3920: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01fe3920 {

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
extern "C" void bb_auto_init_identity_rows_01fe3920()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fe3920

// auto_init_identity_rows_01fe5ed0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01fe5ed0 {

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
extern "C" void bb_auto_init_identity_rows_01fe5ed0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fe5ed0

// auto_init_identity_rows_01feb820: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01feb820 {

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
extern "C" void bb_auto_init_identity_rows_01feb820()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01feb820

// auto_init_identity_rows_01ff0ab0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_01ff0ab0 {

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
extern "C" void bb_auto_init_identity_rows_01ff0ab0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ff0ab0

// auto_init_identity_rows_02000300: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02000300 {

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
extern "C" void bb_auto_init_identity_rows_02000300()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02000300

// auto_init_identity_rows_0200cd90: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0200cd90 {

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
extern "C" void bb_auto_init_identity_rows_0200cd90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0200cd90

// auto_init_identity_rows_0201b090: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0201b090 {

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
extern "C" void bb_auto_init_identity_rows_0201b090()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0201b090

// auto_init_identity_rows_0201e150: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0201e150 {

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
extern "C" void bb_auto_init_identity_rows_0201e150()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0201e150

// auto_init_identity_rows_02023ae0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02023ae0 {

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
extern "C" void bb_auto_init_identity_rows_02023ae0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02023ae0

// auto_init_identity_rows_0202d250: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0202d250 {

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
extern "C" void bb_auto_init_identity_rows_0202d250()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0202d250

// auto_init_identity_rows_02033cc0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02033cc0 {

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
extern "C" void bb_auto_init_identity_rows_02033cc0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02033cc0

// auto_init_identity_rows_0203d290: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0203d290 {

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
extern "C" void bb_auto_init_identity_rows_0203d290()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0203d290

// auto_init_identity_rows_0204c3c0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0204c3c0 {

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
extern "C" void bb_auto_init_identity_rows_0204c3c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0204c3c0

// auto_init_identity_rows_02053890: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02053890 {

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
extern "C" void bb_auto_init_identity_rows_02053890()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02053890

// auto_init_identity_rows_020564f0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_020564f0 {

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
extern "C" void bb_auto_init_identity_rows_020564f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020564f0

// auto_init_identity_rows_02056820: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02056820 {

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
extern "C" void bb_auto_init_identity_rows_02056820()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02056820

// auto_init_identity_rows_02056e40: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02056e40 {

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
extern "C" void bb_auto_init_identity_rows_02056e40()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02056e40

// auto_init_identity_rows_02057260: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02057260 {

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
extern "C" void bb_auto_init_identity_rows_02057260()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02057260

// auto_init_identity_rows_020576e0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_020576e0 {

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
extern "C" void bb_auto_init_identity_rows_020576e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020576e0

// auto_init_identity_rows_020585b0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_020585b0 {

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
extern "C" void bb_auto_init_identity_rows_020585b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020585b0

// auto_init_identity_rows_0205ac20: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0205ac20 {

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
extern "C" void bb_auto_init_identity_rows_0205ac20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0205ac20

// auto_init_identity_rows_02062090: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02062090 {

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
extern "C" void bb_auto_init_identity_rows_02062090()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02062090

// auto_init_identity_rows_02068230: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02068230 {

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
extern "C" void bb_auto_init_identity_rows_02068230()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02068230

// auto_init_identity_rows_0206aad0: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_0206aad0 {

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
extern "C" void bb_auto_init_identity_rows_0206aad0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0206aad0

// auto_init_identity_rows_02076e50: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02076e50 {

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
extern "C" void bb_auto_init_identity_rows_02076e50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02076e50

// auto_init_identity_rows_02088b80: misc_init_identity_rows_5ac5570 with other addresses.
namespace twin_02088b80 {

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
extern "C" void bb_auto_init_identity_rows_02088b80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02088b80
