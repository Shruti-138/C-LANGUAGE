#include <stdio.h>
int main(){
    int principle,rate,time,si;
    printf("enter principle:");
    scanf("%d",&principle);
    printf("enter rate:");
    scanf("%d",&rate);
    printf("enter time:");
    scanf("%d",& time);
    si=(principle*rate*time)/100;
    printf("%d",si);
}