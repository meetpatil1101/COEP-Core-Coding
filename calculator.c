#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: %s add|sub|mul|div num1 num2\n", argv[0]);
        return 1;
    }
    
    const char *op = argv[1];
    double a = atoi(argv[2]);
    double b = atoi(argv[3]);
    double result;

    if (strcmp(op, "add") == 0 || strcmp(op, "+") == 0)
        result = a + b;
    else if (strcmp(op, "sub") == 0 || strcmp(op, "-") == 0)
        result = a - b;
    else if (strcmp(op, "mul") == 0 || strcmp(op, "*") == 0)
        result = a * b;
    else if (strcmp(op, "div") == 0 || strcmp(op, "/") == 0)
    {
        if (b == 0.0)
        {
            printf("Error: division by zero\n");
            return 1;
        }
        result = a / b;
    }
    else
    {
        printf("Unknown operation: %s\n", op);
        return 1;
    }

    printf("%.6g\n", result);
    return 0;
}