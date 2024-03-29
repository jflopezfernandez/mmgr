
#ifndef PROJECT_INCLUDES_MMGR_H
#define PROJECT_INCLUDES_MMGR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <setjmp.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <signal.h>
#include <time.h>
#include <locale.h>
#include <limits.h>
#include <inttypes.h>

#if !defined(FALSE) || !defined(TRUE)
enum { FALSE = 0, TRUE = !FALSE };
#endif

#include "error.h"
#include "mem.h"
#include "str.h"

#endif // PROJECT_INCLUDES_MMGR_H
