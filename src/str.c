
#include "mmgr.h"

void copy_string(char* destination_string, const char* original_string) {
    while ((*destination_string++ = *original_string++))
        ;
}

char* duplicate_string(const char* original) {
    size_t length = string_length(original);

    char* duplicate = allocate_memory(length + 1);

    copy_string(duplicate, original);

    return duplicate;
}

size_t string_length(const char* string) {
    size_t length = 0;

    while (*string++)
        ++length;
    
    return length;
}
