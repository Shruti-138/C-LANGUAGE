#include<stdio.h>
#include<stdlib.h>
int main()
{ int *arr;
int i;
int n;
 printf("enter no. of elements");
scanf("%d",&n);
arr=(int*)calloc(n, sizeof(int));
if(arr==NULL)
{printf("memory is not allocated");
}
else
{printf("enter the elements");
    for(i=0;i<n;i++)
{scanf("%d",arr+i);  
}
printf("the elements are");
for(i=0;i<n;i++)
{printf("%d ",*(arr+i));
}
}
return 0;
}
