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
    struct Driver drivers[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter your Name:\n");
        scanf("%s", drivers[i].Name);
        printf("Enter your licence id:\n");
        scanf("%d", &drivers[i].Licenseid);
        printf("Enter your Route:\n");
        scanf("%s", drivers[i].Route);
        printf("Enter your KmsDriven:\n");
        scanf("%f", &drivers[i].KmsDriven);
        printf("Following details of the driver are noted.....\n\n\n");
    }
    printf("Details of all drivers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Driver %d:\n", i + 1);
        printf("Name: %s\n", drivers[i].Name);
        printf("License ID: %d\n", drivers[i].Licenseid);
        printf("Route: %s\n", drivers[i].Route);
        printf("Kms Driven: %.2f\n\n", drivers[i].KmsDriven);
    }
    return 0;
}