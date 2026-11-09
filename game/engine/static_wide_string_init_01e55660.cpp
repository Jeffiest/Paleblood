// SPDX-License-Identifier: GPL-2.0-or-later
// Guarded static wide string initializer at 0x01e55660. Its instructions match the one at 0x0217ffb0
// apart from the branch targets, and its calls resolve to the same globals and originals, so this
// replacement runs that initializer.

extern "C" void bb_engine_initialize_static_wide_string_0217ffb0();

extern "C" void bb_engine_initialize_static_wide_string_01e55660()
{
    bb_engine_initialize_static_wide_string_0217ffb0();
}
