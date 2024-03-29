/* SPDX-License-Identifier: LGPL-2.1-or-later */
#pragma once

#include <sys/mman.h>

#include "macro.h"

#ifndef MFD_ALLOW_SEALING
#  define MFD_ALLOW_SEALING 0x0002U
#else
assert_cc(MFD_ALLOW_SEALING == 0x0002U);
#endif

#ifndef MFD_CLOEXEC
#  define MFD_CLOEXEC 0x0001U
#else
assert_cc(MFD_CLOEXEC == 0x0001U);
#endif

#ifndef MFD_NOEXEC_SEAL
#  define MFD_NOEXEC_SEAL 0x0008U
#else
assert_cc(MFD_NOEXEC_SEAL == 0x0008U);
#endif

#ifndef MFD_EXEC
#  define MFD_EXEC 0x0010U
#else
assert_cc(MFD_EXEC == 0x0010U);
#endif
