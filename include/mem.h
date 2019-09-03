
#ifndef PROJECT_INCLUDES_MEM_H
#define PROJECT_INCLUDES_MEM_H

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
void* allocate_memory(size_t size);

#endif // PROJECT_INCLUDES_MEM_H
