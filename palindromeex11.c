#include <stdio.h>
#include <stdlib.h>
void checkPalindrome(int number)
{
    int originalNumber = number;
    long reversedNumber = 0;
    number = abs(number);
    while (number > 0)
    {
        reversedNumber = reversedNumber * 10 + (number % 10);
        number /= 10;
    }

    if (originalNumber == reversedNumber)
        printf("%d is a palindrome.\n", originalNumber);
    else
        printf("%d is not a palindrome.\n", originalNumber);
}
int main()
{
   int number;
   printf("Enter a number: ");
   scanf("%d", &number);  
   checkPalindrome(number);
    return 0;
}