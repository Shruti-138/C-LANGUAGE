#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    int i;
    struct student s[3];

    for (i = 0; i < 3; i++)
    {
        printf("Enter roll number, name and marks: ");
        scanf("%d %19s %f",
              &s[i].rollno, s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d %s %.2f\n",
               s[i].rollno, s[i].name, s[i].marks);
    }

    return 0;
}