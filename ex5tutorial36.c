#include <stdio.h>
#include <string.h>
void arrayRev(int arr[])
{ /*int i;
    for(i=4; i>=0; i--)
    { 
        printf("%d ", arr[i]);
    }*/
int temp , i;
for(i=0; i<5/2; i++)
{
    temp = arr[i];
    arr[i] = arr[4-i];
    arr[4-i] = temp;
}
}

int main()
{ 
int arr[5] = {1, 2, 3, 4, 5};
printf("the original array is: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
 printf("the value of element at %d is %d\n", 0 , arr[0]);
    printf("the value of element at %d is %d\n", 1 , arr[1]);
    printf("the value of element at %d is %d\n", 2 , arr[2]);
    printf("the value of element at %d is %d\n", 3 , arr[3]);
    printf("the value of element at %d is %d\n", 4 , arr[4]);
    printf("\n\n");
        
arrayRev(arr);
printf("the reverse of the array is: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("the value of element at %d is %d\n", 0 , arr[0]);
    printf("the value of element at %d is %d\n", 1 , arr[1]);
    printf("the value of element at %d is %d\n", 2 , arr[2]);
    printf("the value of element at %d is %d\n", 3 , arr[3]);
    printf("the value of element at %d is %d\n", 4 , arr[4]);
return 0;
}