#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *danglingPtr3;
    {
        int a = 12;

    }
    danglingPtr3 = &a;

    printf("The address = %p\n", (void*)danglingPtr3);
    printf("The value = %d", *danglingPtr3);
    // Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer
    return 0;
}