
     #include<stdio.h>
#include<math.h>
int main()
{
    int n,i,rev=0,r,re=0,s;
    scanf("%d",&n);
    i=n*n;
    while( n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
int C=rev*rev;
    while(C>0)
    {
        s=C%10;
        re=re*10+s;
        C=C/10;
    }

    if(i==re)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}