#include<stdio.h>
int main()
{ 
   int i = 10;
   int*ptr;
   ptr = &i;
   *ptr=5;
   printf("%d", *ptr);

   return 0;
}