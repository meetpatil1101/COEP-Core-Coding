#include <stdio.h>
#include <stdlib.h>
void greet()
{
    printf("Hello World!\n");
}
int sum(int a, int b)
{
    return a + b;
}
int main()
{int a, b;
    printf("enter the number a: ");
    scanf("%d", &a);
    printf("enter the number b: ");
    scanf("%d", &b);
    greet();
    int (*fptr)(int, int);
    fptr = &sum;
    int d = fptr(a, b);
    printf("d: %d\n", d);
    return 0;
}