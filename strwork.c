#include <stdio.h>
#include <string.h>
int main()
{ char str1[50], str2[50] , str3[100];
     printf("Enter name of str1\n");
     gets(str1);
     printf("Enter name of str2\n");
     gets(str2);
 printf(" using printf: %s is a friend of %s\n" , str1, str2);
 strcpy(str3 ,strcat(strcat(str1 , " is a friend of ") , str2));
 printf("\nusing puts: ");
 puts(str3);
return 0;
}