#include<stdio.h>
int main()
{
    int t,r,n,i,te;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        te=n;
        int re=0;
        while(n>0)
        {
            r=n%10;
            re=re*10+r;
            n=n/10;
        }
        if(re==te)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}