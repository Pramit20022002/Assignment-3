/*#include<stdio.h>
int main()
{
    int a,b,c;
        scanf("%d",&a);

    a=6*a*a + 5*a + 1 ;

    printf("%d",a);
}*/
#include<stdio.h>
int main()
{
    float x,y,profit,loss,cp,sp;
    printf("Enter a cost price : ");
    scanf("%f",&cp);

    printf("Enter a selling price : ");
    scanf("%f",&sp);

    if(cp > sp)
    {
        loss = cp - sp;

        x = (loss * 100) / cp;

        printf("Loss percentage is %f%%",x);
    }
    if(sp > cp)
    {
        profit = sp - cp;

        y = (profit * 100) / cp;

        printf("Profit percentage is %f%%",y);
    }
    if(sp == cp)
    {
        printf("NO profit No loss");
    }

    return 0;


}