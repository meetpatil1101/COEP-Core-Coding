#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int rows1, cols1, rows2, cols2;
    int i, j, k;

    printf("Enter the number of rows and columns for the first matrix:\n");
    printf("rows1: ");
    if (scanf("%d", &rows1) != 1 || rows1 <= 0)
    {
        printf("Invalid number of rows for the first matrix.\n");
        return 1;
    }

    printf("cols1: ");
    if (scanf("%d", &cols1) != 1 || cols1 <= 0)
    {
        printf("Invalid number of columns for the first matrix.\n");
        return 1;
    }

    int *matrix1 = malloc((size_t)rows1 * cols1 * sizeof(int));
    if (!matrix1)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows1; i++)
        for (j = 0; j < cols1; j++)
            scanf("%d", &matrix1[i * cols1 + j]);
    
    printf("Enter the number of rows and columns for the second matrix:\n");
    printf("rows2: ");
    if (scanf("%d", &rows2) != 1 || rows2 <= 0)
    {
        printf("Invalid number of rows for the second matrix.\n");
        free(matrix1);
        return 1;
    }

    printf("cols2: ");
    if (scanf("%d", &cols2) != 1 || cols2 <= 0)
    {
        printf("Invalid number of columns for the second matrix.\n");
        free(matrix1);
        return 1;
    }

    int *matrix2 = malloc((size_t)rows2 * (size_t)cols2 * sizeof(int));
    if (!matrix2)
    {
        printf("Memory allocation failed.\n");
        free(matrix1);
        return 1;
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows2; i++)
        for (j = 0; j < cols2; j++)
            scanf("%d", &matrix2[i * cols2 + j]);
    
    if (cols1 != rows2)
    {
        printf("Matrix multiplication is not possible.\nThe number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        free(matrix1);
        free(matrix2);
        return 1;
    }

    /* transpose matrix2 into matrix2t for cache-friendly access */
    int *matrix2t = malloc((size_t)cols2 * rows2 * sizeof(int));
    if (!matrix2t)
    {
        printf("Memory allocation failed.\n");
        free(matrix1);
        free(matrix2);
        return 1;
    }

    for (i = 0; i < rows2; i++)
        for (j = 0; j < cols2; j++)
            matrix2t[j * rows2 + i] = matrix2[i * cols2 + j];

    int *result = malloc((size_t)rows1 * cols2 * sizeof(int));
    if (!result)
    {
        printf("Memory allocation failed.\n");
        free(matrix1);
        free(matrix2);
        free(matrix2t);
        return 1;
    }

    memset(result, 0, (size_t)rows1 * (size_t)cols2 * sizeof(int));

    for (i = 0; i < rows1; i++)
    {
        int *row1 = matrix1 + i * cols1;
        for (j = 0; j < cols2; j++)
        {
            int *row2t = matrix2t + j * rows2;
            int sum = 0;
            for (k = 0; k < cols1; k++)
                sum += row1[k] * row2t[k];
            result[i * cols2 + j] = sum;
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
            printf("%d ", result[i * cols2 + j]);
        printf("\n");
    }

    free(matrix1);
    free(matrix2);
    free(matrix2t);
    free(result);
    return 0;
}