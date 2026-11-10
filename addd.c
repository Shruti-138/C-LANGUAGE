#include<stdio.h>
int main()
{int a,b,*ptr1,*ptr2,sum;
ptr1=&a;
ptr2=&b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
sum=*ptr1+*ptr2;
printf("Sum: %d",sum);
return 0;
}