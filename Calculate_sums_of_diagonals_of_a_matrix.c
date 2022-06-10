#include<stdio.h>
int main()
{
    int r,a[100][100],i,j,s=0,t=0;
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(i==j)
            {
                s+=a[i][j];
            }
            if(i+j==r+1)
            {
                t+=a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d",s);
    printf("
Secondary Diagonal:%d",t);
}