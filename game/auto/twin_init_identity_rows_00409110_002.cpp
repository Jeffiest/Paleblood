// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_identity_rows_5ac5540, in game/misc/init_identity_rows_5ac5540.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_identity_rows_00493e20: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00493e20 {

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
extern "C" void bb_auto_init_identity_rows_00493e20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00493e20

// auto_init_identity_rows_00498e80: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00498e80 {

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
extern "C" void bb_auto_init_identity_rows_00498e80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00498e80

// auto_init_identity_rows_004a5970: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004a5970 {

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
extern "C" void bb_auto_init_identity_rows_004a5970()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004a5970

// auto_init_identity_rows_004a8f30: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004a8f30 {

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
extern "C" void bb_auto_init_identity_rows_004a8f30()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004a8f30

// auto_init_identity_rows_004ac040: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004ac040 {

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
extern "C" void bb_auto_init_identity_rows_004ac040()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ac040

// auto_init_identity_rows_004ad0a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004ad0a0 {

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
extern "C" void bb_auto_init_identity_rows_004ad0a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ad0a0

// auto_init_identity_rows_004ad5d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004ad5d0 {

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
extern "C" void bb_auto_init_identity_rows_004ad5d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ad5d0

// auto_init_identity_rows_004b2fc0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004b2fc0 {

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
extern "C" void bb_auto_init_identity_rows_004b2fc0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004b2fc0

// auto_init_identity_rows_004b3970: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004b3970 {

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
extern "C" void bb_auto_init_identity_rows_004b3970()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004b3970

// auto_init_identity_rows_004ba5e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004ba5e0 {

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
extern "C" void bb_auto_init_identity_rows_004ba5e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ba5e0

// auto_init_identity_rows_004bb3a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004bb3a0 {

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
extern "C" void bb_auto_init_identity_rows_004bb3a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004bb3a0

// auto_init_identity_rows_004c6880: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004c6880 {

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
extern "C" void bb_auto_init_identity_rows_004c6880()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004c6880

// auto_init_identity_rows_004dd5b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004dd5b0 {

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
extern "C" void bb_auto_init_identity_rows_004dd5b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004dd5b0

// auto_init_identity_rows_004e01e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004e01e0 {

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
extern "C" void bb_auto_init_identity_rows_004e01e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004e01e0

// auto_init_identity_rows_004e2db0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004e2db0 {

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
extern "C" void bb_auto_init_identity_rows_004e2db0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004e2db0

// auto_init_identity_rows_004e5910: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004e5910 {

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
extern "C" void bb_auto_init_identity_rows_004e5910()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004e5910

// auto_init_identity_rows_004ea190: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004ea190 {

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
extern "C" void bb_auto_init_identity_rows_004ea190()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ea190

// auto_init_identity_rows_004ee650: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004ee650 {

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
extern "C" void bb_auto_init_identity_rows_004ee650()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ee650

// auto_init_identity_rows_004ef3e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004ef3e0 {

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
extern "C" void bb_auto_init_identity_rows_004ef3e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ef3e0

// auto_init_identity_rows_004f3ca0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004f3ca0 {

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
extern "C" void bb_auto_init_identity_rows_004f3ca0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f3ca0

// auto_init_identity_rows_004f3da0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004f3da0 {

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
extern "C" void bb_auto_init_identity_rows_004f3da0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f3da0

// auto_init_identity_rows_004f7010: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004f7010 {

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
extern "C" void bb_auto_init_identity_rows_004f7010()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f7010

// auto_init_identity_rows_004f9000: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004f9000 {

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
extern "C" void bb_auto_init_identity_rows_004f9000()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f9000

// auto_init_identity_rows_004f95d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004f95d0 {

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
extern "C" void bb_auto_init_identity_rows_004f95d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004f95d0

// auto_init_identity_rows_004fb490: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004fb490 {

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
extern "C" void bb_auto_init_identity_rows_004fb490()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004fb490

// auto_init_identity_rows_004ff0a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_004ff0a0 {

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
extern "C" void bb_auto_init_identity_rows_004ff0a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_004ff0a0

// auto_init_identity_rows_005056e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_005056e0 {

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
extern "C" void bb_auto_init_identity_rows_005056e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005056e0

// auto_init_identity_rows_00507b40: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00507b40 {

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
extern "C" void bb_auto_init_identity_rows_00507b40()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00507b40

// auto_init_identity_rows_00508c20: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00508c20 {

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
extern "C" void bb_auto_init_identity_rows_00508c20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00508c20

// auto_init_identity_rows_0050b070: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0050b070 {

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
extern "C" void bb_auto_init_identity_rows_0050b070()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0050b070

// auto_init_identity_rows_0050db80: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0050db80 {

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
extern "C" void bb_auto_init_identity_rows_0050db80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0050db80

// auto_init_identity_rows_00510680: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00510680 {

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
extern "C" void bb_auto_init_identity_rows_00510680()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00510680

// auto_init_identity_rows_00511750: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00511750 {

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
extern "C" void bb_auto_init_identity_rows_00511750()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00511750

// auto_init_identity_rows_00518e50: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00518e50 {

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
extern "C" void bb_auto_init_identity_rows_00518e50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00518e50

// auto_init_identity_rows_0051e150: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0051e150 {

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
extern "C" void bb_auto_init_identity_rows_0051e150()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0051e150

// auto_init_identity_rows_0051f630: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0051f630 {

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
extern "C" void bb_auto_init_identity_rows_0051f630()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0051f630

// auto_init_identity_rows_0052bdd0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0052bdd0 {

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
extern "C" void bb_auto_init_identity_rows_0052bdd0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0052bdd0

// auto_init_identity_rows_0052d160: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0052d160 {

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
extern "C" void bb_auto_init_identity_rows_0052d160()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0052d160

// auto_init_identity_rows_0052e480: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0052e480 {

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
extern "C" void bb_auto_init_identity_rows_0052e480()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0052e480

// auto_init_identity_rows_00536a10: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00536a10 {

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
extern "C" void bb_auto_init_identity_rows_00536a10()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00536a10

// auto_init_identity_rows_0053c080: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0053c080 {

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
extern "C" void bb_auto_init_identity_rows_0053c080()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0053c080

// auto_init_identity_rows_0053d9a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0053d9a0 {

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
extern "C" void bb_auto_init_identity_rows_0053d9a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0053d9a0

// auto_init_identity_rows_0053e630: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0053e630 {

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
extern "C" void bb_auto_init_identity_rows_0053e630()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0053e630

// auto_init_identity_rows_00540190: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00540190 {

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
extern "C" void bb_auto_init_identity_rows_00540190()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00540190

// auto_init_identity_rows_00540ca0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00540ca0 {

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
extern "C" void bb_auto_init_identity_rows_00540ca0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00540ca0

// auto_init_identity_rows_005453b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_005453b0 {

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
extern "C" void bb_auto_init_identity_rows_005453b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005453b0

// auto_init_identity_rows_00545ac0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00545ac0 {

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
extern "C" void bb_auto_init_identity_rows_00545ac0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00545ac0

// auto_init_identity_rows_005460b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_005460b0 {

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
extern "C" void bb_auto_init_identity_rows_005460b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005460b0

// auto_init_identity_rows_005471d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_005471d0 {

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
extern "C" void bb_auto_init_identity_rows_005471d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005471d0

// auto_init_identity_rows_00547760: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00547760 {

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
extern "C" void bb_auto_init_identity_rows_00547760()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00547760

// auto_init_identity_rows_00548ab0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00548ab0 {

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
extern "C" void bb_auto_init_identity_rows_00548ab0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00548ab0

// auto_init_identity_rows_0054a5c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0054a5c0 {

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
extern "C" void bb_auto_init_identity_rows_0054a5c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0054a5c0

// auto_init_identity_rows_005e7840: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_005e7840 {

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
extern "C" void bb_auto_init_identity_rows_005e7840()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005e7840

// auto_init_identity_rows_005ebd30: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_005ebd30 {

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
extern "C" void bb_auto_init_identity_rows_005ebd30()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005ebd30

// auto_init_identity_rows_005ef840: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_005ef840 {

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
extern "C" void bb_auto_init_identity_rows_005ef840()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005ef840

// auto_init_identity_rows_005f2560: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_005f2560 {

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
extern "C" void bb_auto_init_identity_rows_005f2560()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_005f2560

// auto_init_identity_rows_00613700: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00613700 {

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
extern "C" void bb_auto_init_identity_rows_00613700()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00613700

// auto_init_identity_rows_0062b2c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0062b2c0 {

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
extern "C" void bb_auto_init_identity_rows_0062b2c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0062b2c0

// auto_init_identity_rows_0062b930: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0062b930 {

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
extern "C" void bb_auto_init_identity_rows_0062b930()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0062b930

// auto_init_identity_rows_00633710: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00633710 {

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
extern "C" void bb_auto_init_identity_rows_00633710()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00633710

// auto_init_identity_rows_00643f00: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00643f00 {

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
extern "C" void bb_auto_init_identity_rows_00643f00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00643f00

// auto_init_identity_rows_0064b210: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0064b210 {

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
extern "C" void bb_auto_init_identity_rows_0064b210()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0064b210

// auto_init_identity_rows_0064d410: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0064d410 {

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
extern "C" void bb_auto_init_identity_rows_0064d410()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0064d410

// auto_init_identity_rows_006545a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_006545a0 {

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
extern "C" void bb_auto_init_identity_rows_006545a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_006545a0

// auto_init_identity_rows_00654b30: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00654b30 {

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
extern "C" void bb_auto_init_identity_rows_00654b30()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00654b30

// auto_init_identity_rows_00657020: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00657020 {

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
extern "C" void bb_auto_init_identity_rows_00657020()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00657020

// auto_init_identity_rows_006613c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_006613c0 {

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
extern "C" void bb_auto_init_identity_rows_006613c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_006613c0

// auto_init_identity_rows_006637c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_006637c0 {

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
extern "C" void bb_auto_init_identity_rows_006637c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_006637c0

// auto_init_identity_rows_006704a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_006704a0 {

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
extern "C" void bb_auto_init_identity_rows_006704a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_006704a0

// auto_init_identity_rows_006b24a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_006b24a0 {

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
extern "C" void bb_auto_init_identity_rows_006b24a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_006b24a0

// auto_init_identity_rows_00738800: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00738800 {

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
extern "C" void bb_auto_init_identity_rows_00738800()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00738800

// auto_init_identity_rows_007396e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_007396e0 {

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
extern "C" void bb_auto_init_identity_rows_007396e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_007396e0

// auto_init_identity_rows_0073adc0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0073adc0 {

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
extern "C" void bb_auto_init_identity_rows_0073adc0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0073adc0

// auto_init_identity_rows_0073c7a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0073c7a0 {

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
extern "C" void bb_auto_init_identity_rows_0073c7a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0073c7a0

// auto_init_identity_rows_0073e7e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0073e7e0 {

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
extern "C" void bb_auto_init_identity_rows_0073e7e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0073e7e0

// auto_init_identity_rows_0073f430: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0073f430 {

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
extern "C" void bb_auto_init_identity_rows_0073f430()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0073f430

// auto_init_identity_rows_00740250: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00740250 {

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
extern "C" void bb_auto_init_identity_rows_00740250()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00740250

// auto_init_identity_rows_00792380: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_00792380 {

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
extern "C" void bb_auto_init_identity_rows_00792380()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_00792380

// auto_init_identity_rows_007a1910: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_007a1910 {

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
extern "C" void bb_auto_init_identity_rows_007a1910()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_007a1910

// auto_init_identity_rows_014aba20: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_014aba20 {

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
extern "C" void bb_auto_init_identity_rows_014aba20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014aba20

// auto_init_identity_rows_014accb0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_014accb0 {

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
extern "C" void bb_auto_init_identity_rows_014accb0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014accb0

// auto_init_identity_rows_014ae1f0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_014ae1f0 {

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
extern "C" void bb_auto_init_identity_rows_014ae1f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014ae1f0

// auto_init_identity_rows_014b0c80: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_014b0c80 {

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
extern "C" void bb_auto_init_identity_rows_014b0c80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014b0c80

// auto_init_identity_rows_014b34d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_014b34d0 {

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
extern "C" void bb_auto_init_identity_rows_014b34d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_014b34d0

// auto_init_identity_rows_01711b20: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01711b20 {

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
extern "C" void bb_auto_init_identity_rows_01711b20()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01711b20

// auto_init_identity_rows_01721dc0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01721dc0 {

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
extern "C" void bb_auto_init_identity_rows_01721dc0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01721dc0

// auto_init_identity_rows_0178d570: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0178d570 {

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
extern "C" void bb_auto_init_identity_rows_0178d570()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0178d570

// auto_init_identity_rows_0185feb0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0185feb0 {

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
extern "C" void bb_auto_init_identity_rows_0185feb0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0185feb0

// auto_init_identity_rows_019bf620: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_019bf620 {

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
extern "C" void bb_auto_init_identity_rows_019bf620()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_019bf620

// auto_init_identity_rows_01a45950: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01a45950 {

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
extern "C" void bb_auto_init_identity_rows_01a45950()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01a45950

// auto_init_identity_rows_01a5eb50: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01a5eb50 {

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
extern "C" void bb_auto_init_identity_rows_01a5eb50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01a5eb50

// auto_init_identity_rows_01abef40: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01abef40 {

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
extern "C" void bb_auto_init_identity_rows_01abef40()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01abef40

// auto_init_identity_rows_01ae5760: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ae5760 {

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
extern "C" void bb_auto_init_identity_rows_01ae5760()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ae5760

// auto_init_identity_rows_01b6ec00: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01b6ec00 {

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
extern "C" void bb_auto_init_identity_rows_01b6ec00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01b6ec00

// auto_init_identity_rows_01b769d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01b769d0 {

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
extern "C" void bb_auto_init_identity_rows_01b769d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01b769d0

// auto_init_identity_rows_01b900f0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01b900f0 {

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
extern "C" void bb_auto_init_identity_rows_01b900f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01b900f0

// auto_init_identity_rows_01b99f40: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01b99f40 {

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
extern "C" void bb_auto_init_identity_rows_01b99f40()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01b99f40

// auto_init_identity_rows_01bc3f90: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01bc3f90 {

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
extern "C" void bb_auto_init_identity_rows_01bc3f90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01bc3f90

// auto_init_identity_rows_01c34500: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01c34500 {

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
extern "C" void bb_auto_init_identity_rows_01c34500()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01c34500

// auto_init_identity_rows_01d5bd00: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01d5bd00 {

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
extern "C" void bb_auto_init_identity_rows_01d5bd00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01d5bd00

// auto_init_identity_rows_01d5f190: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01d5f190 {

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
extern "C" void bb_auto_init_identity_rows_01d5f190()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01d5f190

// auto_init_identity_rows_01d6c6c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01d6c6c0 {

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
extern "C" void bb_auto_init_identity_rows_01d6c6c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01d6c6c0

// auto_init_identity_rows_01dd51a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01dd51a0 {

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
extern "C" void bb_auto_init_identity_rows_01dd51a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01dd51a0

// auto_init_identity_rows_01dd8fe0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01dd8fe0 {

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
extern "C" void bb_auto_init_identity_rows_01dd8fe0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01dd8fe0

// auto_init_identity_rows_01ddcd00: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ddcd00 {

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
extern "C" void bb_auto_init_identity_rows_01ddcd00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ddcd00

// auto_init_identity_rows_01e271f0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01e271f0 {

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
extern "C" void bb_auto_init_identity_rows_01e271f0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01e271f0

// auto_init_identity_rows_01ecd370: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ecd370 {

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
extern "C" void bb_auto_init_identity_rows_01ecd370()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ecd370

// auto_init_identity_rows_01ece3b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ece3b0 {

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
extern "C" void bb_auto_init_identity_rows_01ece3b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ece3b0

// auto_init_identity_rows_01ed1c60: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ed1c60 {

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
extern "C" void bb_auto_init_identity_rows_01ed1c60()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed1c60

// auto_init_identity_rows_01ed73c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ed73c0 {

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
extern "C" void bb_auto_init_identity_rows_01ed73c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed73c0

// auto_init_identity_rows_01ed8be0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ed8be0 {

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
extern "C" void bb_auto_init_identity_rows_01ed8be0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed8be0

// auto_init_identity_rows_01ed99d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ed99d0 {

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
extern "C" void bb_auto_init_identity_rows_01ed99d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed99d0

// auto_init_identity_rows_01ed9d90: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ed9d90 {

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
extern "C" void bb_auto_init_identity_rows_01ed9d90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ed9d90

// auto_init_identity_rows_01edab10: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01edab10 {

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
extern "C" void bb_auto_init_identity_rows_01edab10()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edab10

// auto_init_identity_rows_01edade0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01edade0 {

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
extern "C" void bb_auto_init_identity_rows_01edade0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edade0

// auto_init_identity_rows_01edbc40: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01edbc40 {

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
extern "C" void bb_auto_init_identity_rows_01edbc40()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edbc40

// auto_init_identity_rows_01edc890: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01edc890 {

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
extern "C" void bb_auto_init_identity_rows_01edc890()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edc890

// auto_init_identity_rows_01edce50: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01edce50 {

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
extern "C" void bb_auto_init_identity_rows_01edce50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edce50

// auto_init_identity_rows_01edd5b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01edd5b0 {

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
extern "C" void bb_auto_init_identity_rows_01edd5b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01edd5b0

// auto_init_identity_rows_01ee39d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ee39d0 {

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
extern "C" void bb_auto_init_identity_rows_01ee39d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ee39d0

// auto_init_identity_rows_01ee9d80: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ee9d80 {

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
extern "C" void bb_auto_init_identity_rows_01ee9d80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ee9d80

// auto_init_identity_rows_01eebf00: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01eebf00 {

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
extern "C" void bb_auto_init_identity_rows_01eebf00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01eebf00

// auto_init_identity_rows_01ef50a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ef50a0 {

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
extern "C" void bb_auto_init_identity_rows_01ef50a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ef50a0

// auto_init_identity_rows_01f02700: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f02700 {

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
extern "C" void bb_auto_init_identity_rows_01f02700()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f02700

// auto_init_identity_rows_01f08230: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f08230 {

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
extern "C" void bb_auto_init_identity_rows_01f08230()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f08230

// auto_init_identity_rows_01f0f190: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f0f190 {

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
extern "C" void bb_auto_init_identity_rows_01f0f190()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f0f190

// auto_init_identity_rows_01f121c0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f121c0 {

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
extern "C" void bb_auto_init_identity_rows_01f121c0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f121c0

// auto_init_identity_rows_01f16260: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f16260 {

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
extern "C" void bb_auto_init_identity_rows_01f16260()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f16260

// auto_init_identity_rows_01f180b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f180b0 {

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
extern "C" void bb_auto_init_identity_rows_01f180b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f180b0

// auto_init_identity_rows_01f1b200: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f1b200 {

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
extern "C" void bb_auto_init_identity_rows_01f1b200()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f1b200

// auto_init_identity_rows_01f1df00: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f1df00 {

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
extern "C" void bb_auto_init_identity_rows_01f1df00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f1df00

// auto_init_identity_rows_01f24070: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f24070 {

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
extern "C" void bb_auto_init_identity_rows_01f24070()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f24070

// auto_init_identity_rows_01f2f0b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f2f0b0 {

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
extern "C" void bb_auto_init_identity_rows_01f2f0b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f2f0b0

// auto_init_identity_rows_01f32f80: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f32f80 {

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
extern "C" void bb_auto_init_identity_rows_01f32f80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f32f80

// auto_init_identity_rows_01f37b50: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f37b50 {

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
extern "C" void bb_auto_init_identity_rows_01f37b50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f37b50

// auto_init_identity_rows_01f3c330: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f3c330 {

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
extern "C" void bb_auto_init_identity_rows_01f3c330()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f3c330

// auto_init_identity_rows_01f4fdc0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f4fdc0 {

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
extern "C" void bb_auto_init_identity_rows_01f4fdc0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f4fdc0

// auto_init_identity_rows_01f558a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f558a0 {

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
extern "C" void bb_auto_init_identity_rows_01f558a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f558a0

// auto_init_identity_rows_01f57d00: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f57d00 {

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
extern "C" void bb_auto_init_identity_rows_01f57d00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f57d00

// auto_init_identity_rows_01f58000: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f58000 {

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
extern "C" void bb_auto_init_identity_rows_01f58000()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f58000

// auto_init_identity_rows_01f5a530: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f5a530 {

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
extern "C" void bb_auto_init_identity_rows_01f5a530()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5a530

// auto_init_identity_rows_01f5aa60: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f5aa60 {

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
extern "C" void bb_auto_init_identity_rows_01f5aa60()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5aa60

// auto_init_identity_rows_01f5aca0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f5aca0 {

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
extern "C" void bb_auto_init_identity_rows_01f5aca0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5aca0

// auto_init_identity_rows_01f5c7e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f5c7e0 {

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
extern "C" void bb_auto_init_identity_rows_01f5c7e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5c7e0

// auto_init_identity_rows_01f5fe40: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f5fe40 {

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
extern "C" void bb_auto_init_identity_rows_01f5fe40()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f5fe40

// auto_init_identity_rows_01f64970: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f64970 {

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
extern "C" void bb_auto_init_identity_rows_01f64970()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f64970

// auto_init_identity_rows_01f65630: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f65630 {

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
extern "C" void bb_auto_init_identity_rows_01f65630()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f65630

// auto_init_identity_rows_01f6a820: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f6a820 {

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
extern "C" void bb_auto_init_identity_rows_01f6a820()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f6a820

// auto_init_identity_rows_01f84140: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f84140 {

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
extern "C" void bb_auto_init_identity_rows_01f84140()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f84140

// auto_init_identity_rows_01f9f2d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01f9f2d0 {

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
extern "C" void bb_auto_init_identity_rows_01f9f2d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01f9f2d0

// auto_init_identity_rows_01fac650: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01fac650 {

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
extern "C" void bb_auto_init_identity_rows_01fac650()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fac650

// auto_init_identity_rows_01fb3330: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01fb3330 {

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
extern "C" void bb_auto_init_identity_rows_01fb3330()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fb3330

// auto_init_identity_rows_01fc2eb0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01fc2eb0 {

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
extern "C" void bb_auto_init_identity_rows_01fc2eb0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fc2eb0

// auto_init_identity_rows_01fe0570: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01fe0570 {

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
extern "C" void bb_auto_init_identity_rows_01fe0570()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fe0570

// auto_init_identity_rows_01fe38d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01fe38d0 {

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
extern "C" void bb_auto_init_identity_rows_01fe38d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fe38d0

// auto_init_identity_rows_01fe5e80: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01fe5e80 {

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
extern "C" void bb_auto_init_identity_rows_01fe5e80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01fe5e80

// auto_init_identity_rows_01feb7d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01feb7d0 {

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
extern "C" void bb_auto_init_identity_rows_01feb7d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01feb7d0

// auto_init_identity_rows_01ff0a60: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_01ff0a60 {

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
extern "C" void bb_auto_init_identity_rows_01ff0a60()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_01ff0a60

// auto_init_identity_rows_020002b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_020002b0 {

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
extern "C" void bb_auto_init_identity_rows_020002b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020002b0

// auto_init_identity_rows_0200cd40: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0200cd40 {

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
extern "C" void bb_auto_init_identity_rows_0200cd40()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0200cd40

// auto_init_identity_rows_0201b040: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0201b040 {

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
extern "C" void bb_auto_init_identity_rows_0201b040()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0201b040

// auto_init_identity_rows_0201e100: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0201e100 {

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
extern "C" void bb_auto_init_identity_rows_0201e100()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0201e100

// auto_init_identity_rows_02023a90: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02023a90 {

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
extern "C" void bb_auto_init_identity_rows_02023a90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02023a90

// auto_init_identity_rows_0202d200: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0202d200 {

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
extern "C" void bb_auto_init_identity_rows_0202d200()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0202d200

// auto_init_identity_rows_02033c70: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02033c70 {

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
extern "C" void bb_auto_init_identity_rows_02033c70()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02033c70

// auto_init_identity_rows_0203d240: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0203d240 {

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
extern "C" void bb_auto_init_identity_rows_0203d240()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0203d240

// auto_init_identity_rows_0204c370: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0204c370 {

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
extern "C" void bb_auto_init_identity_rows_0204c370()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0204c370

// auto_init_identity_rows_02053840: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02053840 {

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
extern "C" void bb_auto_init_identity_rows_02053840()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02053840

// auto_init_identity_rows_020564a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_020564a0 {

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
extern "C" void bb_auto_init_identity_rows_020564a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020564a0

// auto_init_identity_rows_020567d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_020567d0 {

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
extern "C" void bb_auto_init_identity_rows_020567d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020567d0

// auto_init_identity_rows_02056df0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02056df0 {

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
extern "C" void bb_auto_init_identity_rows_02056df0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02056df0

// auto_init_identity_rows_02057210: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02057210 {

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
extern "C" void bb_auto_init_identity_rows_02057210()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02057210

// auto_init_identity_rows_02057690: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02057690 {

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
extern "C" void bb_auto_init_identity_rows_02057690()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02057690

// auto_init_identity_rows_02058560: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02058560 {

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
extern "C" void bb_auto_init_identity_rows_02058560()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02058560

// auto_init_identity_rows_0205abd0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0205abd0 {

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
extern "C" void bb_auto_init_identity_rows_0205abd0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0205abd0

// auto_init_identity_rows_02062040: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02062040 {

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
extern "C" void bb_auto_init_identity_rows_02062040()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02062040

// auto_init_identity_rows_020681e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_020681e0 {

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
extern "C" void bb_auto_init_identity_rows_020681e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020681e0

// auto_init_identity_rows_0206aa80: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0206aa80 {

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
extern "C" void bb_auto_init_identity_rows_0206aa80()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0206aa80

// auto_init_identity_rows_02076e00: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02076e00 {

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
extern "C" void bb_auto_init_identity_rows_02076e00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02076e00

// auto_init_identity_rows_02088b30: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02088b30 {

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
extern "C" void bb_auto_init_identity_rows_02088b30()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02088b30

// auto_init_identity_rows_02089ac0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02089ac0 {

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
extern "C" void bb_auto_init_identity_rows_02089ac0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02089ac0

// auto_init_identity_rows_0208ae40: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0208ae40 {

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
extern "C" void bb_auto_init_identity_rows_0208ae40()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0208ae40

// auto_init_identity_rows_02090b90: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02090b90 {

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
extern "C" void bb_auto_init_identity_rows_02090b90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02090b90

// auto_init_identity_rows_020936e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_020936e0 {

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
extern "C" void bb_auto_init_identity_rows_020936e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_020936e0

// auto_init_identity_rows_02094250: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02094250 {

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
extern "C" void bb_auto_init_identity_rows_02094250()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02094250

// auto_init_identity_rows_02095060: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02095060 {

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
extern "C" void bb_auto_init_identity_rows_02095060()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02095060

// auto_init_identity_rows_02256540: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02256540 {

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
extern "C" void bb_auto_init_identity_rows_02256540()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02256540

// auto_init_identity_rows_02330db0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02330db0 {

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
extern "C" void bb_auto_init_identity_rows_02330db0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02330db0

// auto_init_identity_rows_023326b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_023326b0 {

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
extern "C" void bb_auto_init_identity_rows_023326b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023326b0

// auto_init_identity_rows_02337080: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02337080 {

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
extern "C" void bb_auto_init_identity_rows_02337080()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02337080

// auto_init_identity_rows_02337920: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02337920 {

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
extern "C" void bb_auto_init_identity_rows_02337920()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02337920

// auto_init_identity_rows_0233a0d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0233a0d0 {

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
extern "C" void bb_auto_init_identity_rows_0233a0d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233a0d0

// auto_init_identity_rows_0233ba60: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0233ba60 {

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
extern "C" void bb_auto_init_identity_rows_0233ba60()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233ba60

// auto_init_identity_rows_0233d400: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0233d400 {

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
extern "C" void bb_auto_init_identity_rows_0233d400()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233d400

// auto_init_identity_rows_0233d640: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0233d640 {

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
extern "C" void bb_auto_init_identity_rows_0233d640()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233d640

// auto_init_identity_rows_0233e0b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0233e0b0 {

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
extern "C" void bb_auto_init_identity_rows_0233e0b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233e0b0

// auto_init_identity_rows_0233ea90: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0233ea90 {

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
extern "C" void bb_auto_init_identity_rows_0233ea90()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233ea90

// auto_init_identity_rows_0233f4e0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0233f4e0 {

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
extern "C" void bb_auto_init_identity_rows_0233f4e0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233f4e0

// auto_init_identity_rows_0233fd10: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0233fd10 {

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
extern "C" void bb_auto_init_identity_rows_0233fd10()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0233fd10

// auto_init_identity_rows_02340880: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02340880 {

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
extern "C" void bb_auto_init_identity_rows_02340880()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02340880
