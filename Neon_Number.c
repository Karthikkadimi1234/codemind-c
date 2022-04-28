#include<stdio.h>
int main()
{
     int i,n,r,sum=0;
     scanf("%d",&n);//9
     i=n*n;          //9*9=81
     while(i>0)
     {
         r=i%10;  //81%10=1
         i=i/10;
         sum+=r;
     }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        
        
        printf("Not Neon Number");
    }
    return 0;
}