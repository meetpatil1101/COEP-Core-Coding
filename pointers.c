#include <stdio.h>
int main()
{  int a=23;
    int*p=&a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of p: %d\n" , *p);
    printf("address of pointed by p: %p\n", &*p);
return 0;
}