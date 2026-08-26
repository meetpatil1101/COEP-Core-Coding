#include <stdio.h>

void function1(int array[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d is: %d\n", i, array[i]);
    }
    array[0] = 10; \\ This will not work .
}

void function2(int *ptrarray)
{
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d is: %d\n", i, ptrarray[i]);
    }
    ptrarray[0] = 10;
}

void function3(int array[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The value at [%d][%d] is: %d\n", i, j, array[i][j]);
        }
    }
    array[0][0] = 10;
}

int main(void)
{
    int arr1[6] = {0, 1, 2, 3, 4, 5};
    int arr2[2][3] = {{0, 1, 2}, {3, 4, 5}};

    function1(arr1);
    function2(arr1);
    function3(arr2);

    printf("The value of index 0 is: %d\n", arr2[0][0]);
    return 0;
}
