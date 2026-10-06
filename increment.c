#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = &a[0];


    ptr++;

    printf("%d\n", *ptr);

    return 0;
}