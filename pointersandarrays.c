#include <stdio.h>
int main()
{ int array[4] = {1, 2, 3, 4};
int *arrayptr = array;
printf("Value of array[0]: %d\n", array[0]);
printf("Value of array[0]: %d\n", *(&array[0]));
printf("Value of array[0]: %d\n", *(array + 0));
printf("Value of array[1]: %d\n", array[1]);
printf("Value of array[2]: %d\n", array[2]);
printf("Value of array[3]: %d\n", array[3]);
printf("Address of array[0]: %d\n", array);
printf("Address of array[1]: %d\n", array+1);
printf("Address of array[2]: %d\n", array+2);
printf("Address of array[3]: %d\n\n", array+3);
arrayptr++;
printf("Address of arrayptr: %d\n", arrayptr);
printf("Address of arrayptr[1]: %d\n", arrayptr+1);
printf("Address of arrayptr[2]: %d\n", arrayptr+2);
printf("Address of arrayptr[3]: %d\n", arrayptr+3);
return 0;
}