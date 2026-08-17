#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double result;
    double a, b;
    int choice;
    printf("=================\n");
    printf("Simple Calculator\n");
    printf("=================\n");
    printf("which operation do you want to operate\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Exit\n");
    scanf("%d", &choice);
    if (choice == 5)
    {
        printf("Calculator exiting...........\n");
        return 0;
    }
    else if (choice < 1 || choice > 5)
    {
        printf("Invalid choice. Please select 1-5.\n");
        return 0;
    }
    else 
    {
        printf("Enter the first number: ");
        scanf("%lf", &a);
        printf("Enter the second number: ");
        scanf("%lf", &b);
        switch (choice)
        {
        case 1:
            result = a + b;
            printf("the result of %.6g + %.6g = %.6g\n", a, b, result);
            break;
        case 2:
            result = a - b;
            printf("the result of %.6g - %.6g = %.6g\n", a, b, result);
            break;
        case 3:
            result = a * b;
            printf("the result of %.6g * %.6g = %.6g\n", a, b, result);
            break;
        case 4:
            if (b == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = a / b;
                printf("the result of %.6g / %.6g = %.6g\n", a, b, result);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
    }
    return 0;
}