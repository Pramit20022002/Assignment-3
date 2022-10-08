#include<stdio.H>
int main()
{
    int a,b,c,d;
    printf("enter cost price");
    scanf("%d",&a);
    printf("Enter selling price");
    scanf("%d",&b);
    c=b-a;
        c=c/a;
        c=c*100; 
         d=a-b;
        d=d*10/a;
        
        d=d*10;
    if(a<b)
    {
        
        printf("Profit is %d %% ",c);

    }
    if(a>b)
    {
       
        printf("Loss is %d %%",d);
    }
    return 0;
}