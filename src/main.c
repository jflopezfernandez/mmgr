
#include "mmgr.h"

int add_(int a, int b) { return a + b; }
int sub_(int a, int b) { return a - b; }
int mul_(int a, int b) { return a * b; }
int div_(int a, int b) { return a / b; }

typedef int (*operation_t)(int,int);

operation_t determine_operation(const char* operator_token) {
    if (strcmp(operator_token, "+") == 0) {
        return add_;
    } else if (strcmp(operator_token, "-") == 0) {
        return sub_;
    } else if (strcmp(operator_token, "*") == 0) {
        return mul_;
    } else if (strcmp(operator_token, "/") == 0) {
        return div_;
    } else {
        fprintf(stderr, "[Error] Invalid operator token: %s\n", operator_token);
        exit(EXIT_FAILURE);
    }
}

int evaluate_operation(operation_t operation, int a, int b) {
    return operation(a, b);
}

void parse_input(char* original_input) {
    char* input_string = duplicate_string(original_input);

    char* operator_token = strtok(input_string, " ");

    operation_t operator = determine_operation(operator_token);

    char* a_string = strtok(NULL, " ");

    if (a_string == NULL) {
        fprintf(stderr, "Not enough inputs\n");
        exit(EXIT_FAILURE);
    }

    char* b_string = strtok(NULL, " ");

    if (b_string == NULL) {
        fprintf(stderr, "Not enough inputs\n");
        exit(EXIT_FAILURE);
    }

    int a = atoi(a_string);
    int b = atoi(b_string);

    printf("%d %s %d = %d\n", a, operator_token, b, evaluate_operation(operator, a, b));

    free(input_string);
}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        parse_input(argv[i]);
    }

    return EXIT_SUCCESS;
}
