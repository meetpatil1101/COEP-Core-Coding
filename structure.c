#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[50];
    int age;
    float marks;
};
int main(void)
{
    struct student s1, s2, s3;

    printf("Enter details of student 1\n");
    printf("Name: ");
    if (!fgets(s1.name, sizeof s1.name, stdin))
        return 1;
    s1.name[strcspn(s1.name, "\n")] = '\0';
    printf("Age: ");
    if (scanf("%d", &s1.age) != 1)
        return 1;
    printf("Marks: ");
    if (scanf("%f", &s1.marks) != 1)
        return 1;
    while (getchar() != '\n' && !feof(stdin));

    printf("\n\nEnter details of student 2\n");
    printf("Name: ");
    if (!fgets(s2.name, sizeof s2.name, stdin))
        return 1;
    s2.name[strcspn(s2.name, "\n")] = '\0';
    printf("Age: ");
    if (scanf("%d", &s2.age) != 1)
        return 1;
    printf("Marks: ");
    if (scanf("%f", &s2.marks) != 1)
        return 1;
    while (getchar() != '\n' && !feof(stdin));

    printf("\n\nEnter details of student 3\n");
    printf("Name: ");
    if (!fgets(s3.name, sizeof s3.name, stdin))
        return 1;
    s3.name[strcspn(s3.name, "\n")] = '\0';
    printf("Age: ");
    if (scanf("%d", &s3.age) != 1)
        return 1;
    printf("Marks: ");
    if (scanf("%f", &s3.marks) != 1)
        return 1;

    printf("%s is a friend of %s\n", s1.name, s2.name);
    snprintf(s3.name, sizeof s3.name, "%s is a friend of %s", s1.name, s2.name);

    return 0;
}