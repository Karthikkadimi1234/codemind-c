#include<stdio.h>
int main()
{
    int n,sum=0,r,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}