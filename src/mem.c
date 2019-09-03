
#include "mmgr.h"

/** This function is a wrapper around the C standard library's 'malloc'
 *  function; its purpose is to implicitly conduct the necessary error-checking
 *  on the pointer returned by malloc to ensure the operation has been
 *  successful.
 * 
 *  The function will exit with an error if the pointer returned by malloc is
 *  invalid, so the caller may be assured that execution beyond the call to
 *  allocate_memory will proceed if and only if the call to malloc returns
 *  successfully.
 * 
 */
void* allocate_memory(size_t size) {
    void* memory_region = malloc(size);

    if (memory_region == NULL) {
        fprintf(stderr, "[Error] %s\n", "Failed to allocate heap memory");
        exit(EXIT_FAILURE);
    }

    return memory_region;
}
