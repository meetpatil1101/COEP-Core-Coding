#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    int length = strlen(str);
    int isPalindrome = 1; // Assume it is a palindrome

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("\"%s\" is a palindrome.", str);
    else
        printf("\"%s\" is not a palindrome.", str);
    
 printf("  \n");
    return 0;
}