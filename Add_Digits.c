#include<stdio.h>
int main()
{
    int n,r,s=0,re,rev;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s+=r;
    }
    int su=0;
    while(s>0)
    {
        re=s%10;
        s=s/10;
        su+=re;
    }
    int sum=0;
    while(su>0)
    {
        rev=su%10;
        su=su/10;
        sum+=rev;
    }
    printf("%d",sum);
}