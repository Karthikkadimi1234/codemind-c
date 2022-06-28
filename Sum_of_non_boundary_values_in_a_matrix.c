#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j,s=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
           if(i!=1 && i!=n && j!=1 && j!=m)
           {
               s+=a[i][j];
           }
        }
    }
    printf("%d",s);
}