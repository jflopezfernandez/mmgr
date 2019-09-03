
#ifndef PROJECT_INCLUDES_ERROR_H
#define PROJECT_INCLUDES_ERROR_H

typedef enum error_code_e {
    ERROR_UNDEFINED,
    ERROR_MEMORY_ALLOCATION_FAILURE
} error_code_t;

void fatal_error(error_code_t error_code);

#endif // PROJECT_INCLUDES_ERROR_H
