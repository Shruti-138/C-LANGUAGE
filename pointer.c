#include<stdio.h>
int main()
{ 
   int i;
   int*ptr;
   ptr=&i;
   scanf("%d",&i);
   printf("%d",*ptr);
   return 0;
}