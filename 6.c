#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two numbers - ");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("greater no. is %d",a);
    if(b>=a)
    printf("greater no. is %d",b);
    return 0;
}