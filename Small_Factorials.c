#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {    
        int n,j;
        scanf("%d",&n);
        int r=1;
        for(j=1;j<=n;j++)
        {
            r*=j;
        }
        printf("%d
",r);
        
    }
    
}