#include<stdio.h>
int main()
{

    int a ;
    printf("ENTER THE MONTH NUMBER-");
        scanf("%d",&a);
    
    if (a==1|a==3|a==5|a==7|a==8|a==10|a==12)
    {
        printf("31");
    }
        if(a==2)
        {
            printf("28/29");
        
        }
        if (a==4|a==6|a==9|a==11)
        {
            printf("30");

        }

    
    return 0;
}
