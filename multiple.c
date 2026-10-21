#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 10 == 0) {
        printf("Multiple of 10");
    }
    else {
        printf("Not a multiple of 10");
    }

    return 0;
}