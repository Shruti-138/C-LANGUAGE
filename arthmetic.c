#include<stdio.h>
int main()
{int a[5] = {10,20,30,40,50};
int *ptr;
ptr=&a[0];
scanf("%d",&a);
printf("%d",*ptr);
ptr++;
printf("after increment : %d",*ptr);
ptr--;
printf("after decrement : %d",*ptr);
ptr+2;
printf("after increment by 2 : %d",*ptr);
ptr-2;
printf("after decrement by 2 : %d",*ptr);
return 0;

}