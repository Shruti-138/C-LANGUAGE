#include <stdio.h>

int main()
{
    int a[5];
    int *ptr;
    int i;

    ptr = &a[0];

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    ptr = &a[0];

    printf("Array elements are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}