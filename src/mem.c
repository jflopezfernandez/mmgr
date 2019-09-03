
#include "mmgr.h"

void* allocate_memory(size_t size) {
    void* memory_region = malloc(size);

    if (memory_region == NULL) {
        fprintf(stderr, "[Error] %s\n", "Failed to allocate heap memory");
        exit(EXIT_FAILURE);
    }

    return memory_region;
}
