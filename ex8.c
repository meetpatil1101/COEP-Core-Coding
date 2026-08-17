#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char chars, i = 0;
    char *ptr;

    for (i = 0; i < 3; i++)
    {
        printf("Employee %d - Enter number of characters in your id :\n", i + 1);
        scanf("%d", &chars);

        ptr = (char *)malloc((chars + 1) * sizeof(char));

        printf("Enter your id :\n");
        scanf("%s", ptr);
        printf("Employee %d - Your id is: %s\n", i + 1, ptr);
    }

    // Free the allocated memory
    for (i = 0; i < 3; i++)
    {
        free(ptr);
    }
    return 0;
}