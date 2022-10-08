#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("marks of subject1-");
    scanf("%d",&a);
    printf("marks of subject2-");
     scanf  ("%D",&b);
    printf("marks of subject3-");
            scanf("%D",&c);
     printf("marks of subject4-");
     scanf("%d",&d);
     printf("marks of subject5-");
     scanf("%d",&e);
           if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
           {
            printf("PAss");
           }
           else 
           {
            printf("FAIL");
            }
            return 0;
            

}