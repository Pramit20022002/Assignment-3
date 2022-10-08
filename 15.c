#include<stdio.h>
int main()
{
    int a;
    printf("ENter no.");
    scanf("%d",&a);
    if(a==0)
    printf("zero");
    if(a<0)
    printf("Negative");
    if(a>0)
    printf("positive");
    return 0;
}