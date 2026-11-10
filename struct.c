
#include <stdio.h>

struct employee {
    int id;
    char name[10];
    int salary;
};

int main() {
    struct employee e1;

    printf("Enter id: ");
    scanf("%d",&e1.id);

    printf("Enter name: ");
    scanf("%s",e1.name);

    printf("Enter salary: ");
    scanf("%d",&e1.salary);

    printf("%d %s %d", e1.id, e1.name, e1.salary);

    return 0;
}