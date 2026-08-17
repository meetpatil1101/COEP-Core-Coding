#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int rollNo[5];
    int marks[5][5];
    const char *subjects[5] = {"Math", "Chemistry", "Physics", "English", "Geography"};

    // Input roll numbers with validation
    printf("Enter 5 roll numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Roll %d: ", i + 1);
        int result = scanf("%d", &rollNo[i]);
        
        // Clear input buffer if scanf fails
        if (result != 1)
        {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            i--;
        }
    }

    // Input marks for each student
    printf("\nEnter marks for each student (0-100):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d (Roll %d):\n", i + 1, rollNo[i]);
        for (int j = 0; j < 5; j++)
        {
            printf("%s: ", subjects[j]);
            int result = scanf("%d", &marks[i][j]);
            
            // Clear input buffer if scanf fails
            if (result != 1)
            {
                while (getchar() != '\n');
                printf("Invalid input. Please enter a number.\n");
                j--;
            }
        }
    }

    // Print subject header
    printf("\n%-6s", "Roll");
    for (int j = 0; j < 5; j++)
    {
        printf("%-15s", subjects[j]);
    }
    printf("\n");
    
    // Print separator
    for (int k = 0; k < 80; k++)
    {
        printf("-");
    }
    printf("\n");

    // Print the matrix with roll numbers
    for (int i = 0; i < 5; i++)
    {
        printf("%-6d", rollNo[i]);
        for (int j = 0; j < 5; j++)
        {
            printf("%-15d", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
