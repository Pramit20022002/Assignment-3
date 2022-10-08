#include<stdio.H>
int main()
{
    int a;
    printf("Enter no.:");

    scanf("%d",&a);
    
    if(a%3==0 && a%2==0)
    printf("divisible");
    else printf("non-divisible");
    return 0;
}