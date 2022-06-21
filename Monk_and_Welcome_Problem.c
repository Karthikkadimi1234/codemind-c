#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],b[100],c[100],i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
}