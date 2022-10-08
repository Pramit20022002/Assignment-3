#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three numbers - ");
    scanf("%d%d%D",&a,&b,&c);
    if(a>=b&&a>=c)
    printf("greatest no. is %d",a);
    if(b>=a&&b>=c)
    printf("greatest no. is %d",b);
    if(c>a&&c>b)
    printf("greatest no. is %d",c);
    return 0;
    
}