#include<stdio.h>
int main()
{
    int n,i,j,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                a[j]=1000;
            }
        }
        if(a[i]!=1000)
        {
            printf("%d ",a[i]);
        }
    }
}