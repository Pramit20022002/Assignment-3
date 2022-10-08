#include<stdio.h>
int main()
{
    int a;
    printf("Enter no.:");
    scanf("%d",&a);
    if(a%7==0 || a%3==0 )
    printf("divisiblee");
    else printf("NON divisible");
    return 0;
}