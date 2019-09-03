
#ifndef PROJECT_INCLUDES_STR_H
#define PROJECT_INCLUDES_STR_H

/** This function is a re-implementation of the C standard library's strcpy
 *  function. Notably, it iterates through the original string until hitting
 *  the null-terminator, performing no checks on either buffer size. While this
 *  does mean that Robert C. Seacord would frown upon me, a length-limited
 *  copy function will be implemented Soon(tm).
 * 
 */
__attribute__((nonnull(1,2)))
void copy_string(char* destination_string, const char* original_string);

/** This function works just like the POSIX 'strdup' function; it handles the
 *  allocation of a large-enough buffer internally and calls the 'copy_string'
 *  function to perform the actual copying of the data.
 * 
 */
__attribute__((returns_nonnull, nonnull(1)))
char* duplicate_string(const char* original);

/** This function returns the length of the specified string. Unlike many
 *  'strlen' implementations, this implementation does not perform any kind of
 *  word-aligned optimizations. It simply iterates through the string until
 *  hitting the null-terminator, at which point it returns the number of
 *  non-null bytes in the string, just as strlen would.
 * 
 */
__attribute__((nonnull(1)))
size_t string_length(const char* string);

#endif // PROJECT_INCLUDES_STR_H
