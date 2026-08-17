#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    // char str[100] = "Hello\nNice To meet you , how may help you?";
    char str[100];
    gets(str);

    printf("using gets: ");
    printStr(str);
    printf("\n");

    printf("using printf: %s", str);
    printf("\nusing puts: ");
    puts(str);

    return 0;
}
