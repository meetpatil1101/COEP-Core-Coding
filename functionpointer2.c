#include <stdio.h>
#include <stdlib.h>
void greet()
{
    printf("Hello World!\n");
}
float avg(int a, int b)
{
    return (float)(a + b) / 2;
}
int main()
{int a, b;
    printf("enter the number a: ");
    scanf("%d", &a);
    printf("enter the number b: ");
    scanf("%d", &b);
    greet();
    float (*fptr)(int, int);
    fptr = &avg;
    float d = fptr(a, b);
    printf("d: %.2f\n", d);
    return 0;
}