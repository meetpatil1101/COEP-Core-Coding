#include <stdio.h>
#include <string.h>
struct Driver
{
    char Name[50];
    int Licenseid;
    char Route[50];
    float KmsDriven;
};
int main()
{
    int i = 0, n;
    printf("Enter number of drivers whose details you want \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter your Name:\n");
        scanf("%s", &n);
        printf("Enter your licence id:\n");
        scanf("%d", &n);
        printf("Enter your Route:\n");
        scanf("%s", &n);
        printf("Enter your KmsDriven:\n");
        scanf("%d", &n);
        printf("Following details of the driver are noted.....\n\n\n");
    }
    return 0;
}