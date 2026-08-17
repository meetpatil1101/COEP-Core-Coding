#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
float Edistance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
float Area_of_Circle(float Edistance)
{
    return PI * pow(Edistance, 2);
}
int main()
{
    float x1, y1, x2, y2;

    printf("Enter x1 :\n");
    scanf("%f", &x1);
    printf("Enter y1 :\n");
    scanf("%f", &y1);
    printf("Enter x2 :\n");
    scanf("%f", &x2);
    printf("Enter y2 :\n");
    scanf("%f", &y2);
    printf("Euclidean Distance : %f\n", Edistance(x1, y1, x2, y2));
    printf("Area of circle :%.2f\n", Area_of_Circle(Edistance(x1, y1, x2, y2)));
    return 0;
}