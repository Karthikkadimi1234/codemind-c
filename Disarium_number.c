#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,t,d=0,re,rev=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        re=n%10;
        rev=rev*10+re;
        n=n/10;
    }
    while(rev>0)
    {
       static int i=1;
        r=rev%10;
        rev=rev/10;
        c++;
        while(i<=c)
        {
            d+=pow(r,i);
            i++;
        }
    }
    
    if(d==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}