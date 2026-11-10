#include<stdio.h>
struct student
{int rollno;
    char name[20];
    float marks;
};
int main()
{struct student s[3];
int i;
for(i=0;i<3;i++)
{printf("Enter roll number, name and marks: ");
scanf("%d %19s %f",&s[i].rollno,s[i].name,&s[i].marks);
}
return 0;
}
