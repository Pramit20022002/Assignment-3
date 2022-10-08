#include<STDIO.H>
int main()
{
    int a,b,c;
    printf("Enter side1-side2-side3");
    
    scanf("%d%d%d",&a,&b,&c);
    if(a + b >= c )
  {
    printf("VALID");
   }
   else{
    printf("INVALID");
   }
   return 0;
}