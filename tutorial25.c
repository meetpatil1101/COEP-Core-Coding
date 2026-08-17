#include <stdio.h>

int fib_recurrsion(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib_recurrsion(n-1) + fib_recurrsion(n-2);
    }
}

int main()
{
    int n;
    printf("Enter the position of the Fibonacci number you want: ");
    scanf("%d", &n);
    printf("The Fibonacci number at position %d is %d\n", n, fib_recurrsion(n));
    return 0;
}