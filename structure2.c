#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[50];
    int age;
    float marks;
};
struct student s1, s2, s3;
int main()
{
    s1.id = 1;
    strcpy(s1.name, "John");
    s1.age = 20;
    s1.marks = 85.5;
    s2.id = 2;
    strcpy(s2.name, "Alice");
    s2.age = 22;
    s2.marks = 90.0;
    s3.id = 3;
    strcpy(s3.name, "Bob");
    s3.age = 21;
    s3.marks = 78.5;
    switch (1)
    {
    case 1:
        printf("Details of student 1\n");
        printf("Id: %d\n", s1.id);
        printf("Name: %s\n", s1.name);
        printf("Age: %d\n", s1.age);
        printf("Marks: %.2f\n", s1.marks);
        printf("\n\n");
    case 2:
        printf("Details of student 2\n");
        printf("Id: %d\n", s2.id);
        printf("Name: %s\n", s2.name);
        printf("Age: %d\n", s2.age);
        printf("Marks: %.2f\n", s2.marks);
        printf("\n\n");

    case 3:
        printf("Details of student 3\n");
        printf("Id: %d\n", s3.id);
        printf("Name: %s\n", s3.name);
        printf("Age: %d\n", s3.age);
        printf("Marks: %.2f\n", s3.marks);
        printf("\n\n");
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}