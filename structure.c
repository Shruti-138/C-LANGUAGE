#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &s[i].rollno);

        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", s[i].name);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks);
    }

    printf("\n----- Student Details -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nRoll Number: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
