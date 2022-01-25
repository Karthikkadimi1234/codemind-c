#include<stdio.h>
int main()
{
    int r,n,sum=0,product=1,Result;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        product*=r;
        sum+=r;
        Result=product-sum;
    }
    
    printf("%d",Result);
    return 0;
}
