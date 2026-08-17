#include <stdio.h>
int fib_iterasion(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++)
    {
        b = a + b;
        a = b-a;
       
    }
    return b;
}

int main()
{
    int n;
    printf("Enter the position of the Fibonacci number you want: ");
    scanf("%d", &n);
    printf("The Fibonacci number at position %d is %d\n", n, fib_iterasion(n));
    return 0;
}