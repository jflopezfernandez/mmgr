
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

/** This function returns the length of the specified string. Unlike many
 *  'strlen' implementations, this implementation does not perform any kind of
 *  word-aligned optimizations. It simply iterates through the string until
 *  hitting the null-terminator, at which point it returns the number of
 *  non-null bytes in the string, just as strlen would.
 * 
 */
size_t string_length(const char* string) {
    size_t length = 0;

    while (*string++)
        ++length;
    
    return length;
}
