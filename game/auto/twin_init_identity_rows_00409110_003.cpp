// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_identity_rows_5ac5540, in game/misc/init_identity_rows_5ac5540.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_init_identity_rows_02341080: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02341080 {

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
extern "C" void bb_auto_init_identity_rows_02341080()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02341080

// auto_init_identity_rows_02341550: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02341550 {

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
extern "C" void bb_auto_init_identity_rows_02341550()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02341550

// auto_init_identity_rows_023419b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_023419b0 {

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
extern "C" void bb_auto_init_identity_rows_023419b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023419b0

// auto_init_identity_rows_02342260: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02342260 {

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
extern "C" void bb_auto_init_identity_rows_02342260()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02342260

// auto_init_identity_rows_023469a0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_023469a0 {

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
extern "C" void bb_auto_init_identity_rows_023469a0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023469a0

// auto_init_identity_rows_0234c680: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0234c680 {

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
extern "C" void bb_auto_init_identity_rows_0234c680()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0234c680

// auto_init_identity_rows_02350b00: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02350b00 {

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
extern "C" void bb_auto_init_identity_rows_02350b00()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02350b00

// auto_init_identity_rows_02359450: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02359450 {

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
extern "C" void bb_auto_init_identity_rows_02359450()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02359450

// auto_init_identity_rows_02363720: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02363720 {

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
extern "C" void bb_auto_init_identity_rows_02363720()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02363720

// auto_init_identity_rows_02366e50: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02366e50 {

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
extern "C" void bb_auto_init_identity_rows_02366e50()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02366e50

// auto_init_identity_rows_02367090: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02367090 {

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
extern "C" void bb_auto_init_identity_rows_02367090()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02367090

// auto_init_identity_rows_023672d0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_023672d0 {

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
extern "C" void bb_auto_init_identity_rows_023672d0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023672d0

// auto_init_identity_rows_02367ff0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02367ff0 {

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
extern "C" void bb_auto_init_identity_rows_02367ff0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02367ff0

// auto_init_identity_rows_02369e70: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_02369e70 {

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
extern "C" void bb_auto_init_identity_rows_02369e70()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_02369e70

// auto_init_identity_rows_0236b740: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0236b740 {

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
extern "C" void bb_auto_init_identity_rows_0236b740()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0236b740

// auto_init_identity_rows_0236c790: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0236c790 {

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
extern "C" void bb_auto_init_identity_rows_0236c790()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0236c790

// auto_init_identity_rows_023a6990: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_023a6990 {

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
extern "C" void bb_auto_init_identity_rows_023a6990()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023a6990

// auto_init_identity_rows_023e3a70: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_023e3a70 {

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
extern "C" void bb_auto_init_identity_rows_023e3a70()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_023e3a70

// auto_init_identity_rows_024588b0: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_024588b0 {

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
extern "C" void bb_auto_init_identity_rows_024588b0()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_024588b0

// auto_init_identity_rows_0245f890: misc_init_identity_rows_5ac5540 with other addresses.
namespace twin_0245f890 {

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
extern "C" void bb_auto_init_identity_rows_0245f890()
{
    if (static_cast<uint8_t>(matrix_ready_flag.get()) != 0) return;
    for (size_t row = 0; row < matrix_rows; ++row) {
        for (size_t column = 0; column < matrix_columns; ++column) {
            identity_matrix.get()[row][column] = row == column ? 1.0f : 0.0f;
        }
    }
    matrix_ready_flag.get() = 1;
}

}  // namespace twin_0245f890
