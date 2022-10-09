#include<stdio.h>
int main()
{
    int n,ro,a[100],i,v,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&ro);
    while(ro>0)
    {
        int x=a[0],v;
        a[0]=a[n-1];
        for (i=1; i<n; i++)
        {
            v=a[i];
            a[i]=x;
            x=v;
        }
        ro--;
    }
    for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}