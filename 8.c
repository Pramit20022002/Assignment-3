#include<stdio.h>
int main()
{
    int a;
    printf("Enter year-");
    scanf("%d",&a);
    if(a%4==0)
    printf("LEAP year");
    else printf("Not a leap YEaR");
    return 0;

}