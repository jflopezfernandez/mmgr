
#include "mmgr.h"

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        char* copy = duplicate_string(argv[i]);
        printf("%s\n", copy);
        free(copy);
    }

    return EXIT_SUCCESS;
}
