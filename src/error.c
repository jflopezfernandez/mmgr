
#include "mmgr.h"

/** This function is analogous to the POSIX 'strerror' function, except the
 *  errno variable is replaced by a caller-specified error_code argument. This
 *  allows the error module to use internal linkage for all the error messages.
 * 
 */
void fatal_error(error_code_t error_code) {
    fprintf(stderr, "[Error] %d\n", error_code);
    exit(EXIT_FAILURE);
}
