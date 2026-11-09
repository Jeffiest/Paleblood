// SPDX-License-Identifier: GPL-2.0-or-later
// Guarded static wide string initializer at 0x01e535c0. Its instructions match the one at 0x0217ffb0
// byte for byte apart from the call targets, which resolve to the same globals and originals, so
// this replacement runs that initializer.

extern "C" void bb_engine_initialize_static_wide_string_0217ffb0();

extern "C" void bb_engine_initialize_static_wide_string_01e535c0()
{
    bb_engine_initialize_static_wide_string_0217ffb0();
}
