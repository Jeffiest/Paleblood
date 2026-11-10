// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_identity_rows_5ac5540, in game/misc/init_identity_rows_5ac5540.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_identity_rows_0040b380: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0040b380 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0040b380()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0040b380

// auto_init_identity_rows_0040bea0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0040bea0 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0040bea0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0040bea0

// auto_init_identity_rows_0040f4d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0040f4d0 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0040f4d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0040f4d0

// auto_init_identity_rows_004144c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004144c0 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_004144c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004144c0

// auto_init_identity_rows_0041ca20: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0041ca20 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0041ca20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0041ca20

// auto_init_identity_rows_0042c2c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0042c2c0 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0042c2c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0042c2c0

// auto_init_identity_rows_0042e520: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0042e520 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0042e520()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0042e520

// auto_init_identity_rows_004305c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004305c0 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_004305c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004305c0

// auto_init_identity_rows_00433690: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00433690 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_00433690()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00433690

// auto_init_identity_rows_00437800: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00437800 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_00437800()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00437800

// auto_init_identity_rows_0043b1e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0043b1e0 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0043b1e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0043b1e0

// auto_init_identity_rows_0043e860: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0043e860 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0043e860()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0043e860

// auto_init_identity_rows_00445720: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00445720 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_00445720()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00445720

// auto_init_identity_rows_0044f2c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0044f2c0 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0044f2c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0044f2c0

// auto_init_identity_rows_00450bb0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00450bb0 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_00450bb0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00450bb0

// auto_init_identity_rows_00489e60: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00489e60 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_00489e60()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00489e60

// auto_init_identity_rows_0048b350: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0048b350 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0048b350()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0048b350

// auto_init_identity_rows_0048d300: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0048d300 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_0048d300()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0048d300

// auto_init_identity_rows_00491000: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00491000 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_00491000()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00491000

// auto_init_identity_rows_004924e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004924e0 {

// Misc: set the three-row matrix at 0x05ac5540 to the identity, once.


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
extern "C" void bb_auto_init_identity_rows_004924e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004924e0
