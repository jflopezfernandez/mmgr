
#include "mmgr.h"

void fatal_error(error_code_t error_code) {
    fprintf(stderr, "[Error] %d\n", error_code);
    exit(EXIT_FAILURE);
}
