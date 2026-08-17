#include <stdio.h>
#include <string.h>
char * replaceWord(const char *s, const char *oldW, const char *newW)
{
    char *resultstring;
   
}
int main()
{FILE * ptr = NULL;
    FILE * ptr2 = NULL;
    ptr = fopen("bill.txt", "r+");
    ptr2 = fopen("newbill.txt", "w");
 
    char str[200];
   fgets(str, 200, ptr);
   fprintf(ptr, "The bill template was: %s", str);
    char * newStr = str ;
    fprintf(ptr2, "The bill template is: %s\n", newStr);
    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}