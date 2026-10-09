
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *start, *end;
    int temp;

    start = &a[0];
    end = &a[4];

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}