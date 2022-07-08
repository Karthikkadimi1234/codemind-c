#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m],i,j,s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=0 && i!=n-1 && j!=0 && j!=n-1)
            {
               continue;
            }
            else
            {
                s+=a[i][j];
            }
        }
    }
    printf("%d",s);
}