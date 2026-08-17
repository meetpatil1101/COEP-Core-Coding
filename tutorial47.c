#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    int i;

    // calloc()
    ptr = calloc(3, sizeof(int));
    if (ptr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    printf("Enter number of elements you want in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Value for element %d: %d\n", i + 1, ptr[i]);
    }
    printf("\n\n\n");5

    free(ptr);
    // realloc()
    ptr = malloc(3 * sizeof(int));
    if (ptr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter number of elements you want in the new array: ");
    scanf("%d", &n);
    if (n < 0)
    {
        n = 0;
    }

    ptr = realloc(ptr, n * sizeof(int));
    if (ptr == NULL && n > 0)
    {
        fprintf(stderr, "Memory reallocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Value for element %d: %d\n", i + 1, ptr[i]);
    }

    free(ptr);
    return 0;
}