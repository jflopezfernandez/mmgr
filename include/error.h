
#ifndef PROJECT_INCLUDES_ERROR_H
#define PROJECT_INCLUDES_ERROR_H

typedef enum error_code_e {
    ERROR_UNDEFINED,
    ERROR_MEMORY_ALLOCATION_FAILURE
} error_code_t;

/** This function is analogous to the POSIX 'strerror' function, except the
 *  errno variable is replaced by a caller-specified error_code argument. This
 *  allows the error module to use internal linkage for all the error messages.
 * 
 */
__attribute__((noreturn))
void fatal_error(error_code_t error_code);

#endif // PROJECT_INCLUDES_ERROR_H
