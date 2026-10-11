
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e1;

    printf("Enter employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter employee name: ");
    scanf("%49s", e1.name);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);

    return 0;
}
