#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}