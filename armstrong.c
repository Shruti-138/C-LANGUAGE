#include <stdio.h>

void armstrong(int n) {
    int d, sum = 0, temp = n;

    while (n > 0) {
        d = n % 10;
        sum = sum + d * d * d;
        n = n / 10;
    }

    if (sum == temp)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}