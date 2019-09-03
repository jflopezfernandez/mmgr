
#ifndef PROJECT_INCLUDES_STR_H
#define PROJECT_INCLUDES_STR_H

void copy_string(char* destination_string, const char* original_string);

char* duplicate_string(const char* original);

/** This function returns the length of the specified string. Unlike many
 *  'strlen' implementations, this implementation does not perform any kind of
 *  word-aligned optimizations. It simply iterates through the string until
 *  hitting the null-terminator, at which point it returns the number of
 *  non-null bytes in the string, just as strlen would.
 * 
 */
size_t string_length(const char* string);

#endif // PROJECT_INCLUDES_STR_H
