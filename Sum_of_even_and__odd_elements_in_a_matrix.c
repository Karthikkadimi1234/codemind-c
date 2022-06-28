#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j,s=0,so=0;
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
            if(a[i][j]%2==0)
            {
                s+=a[i][j];
            }
            else
            {
                so+=a[i][j];
            }
        }
    }
    printf("%d %d",s,so);
}