#include <stdio.h>
#include <string.h>
int main()
{ char s1[] = "Devil";
 char s2[] = "Gang";
 char s3[100];

 strcpy(s3, strcat(s1, s2));  
 puts(s3);   
 printf("Length of concatenated string s3: %lu\n", strlen(s3));
 printf("Reversed string s3: %s\n", strrev(s3));
if (strcmp(s1, s2) == 0) 
{
    printf("Strings are equal\n");
} 
else 
{
    printf("Strings are not equal\n");
}
return 0;
}