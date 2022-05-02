#include<stdio.h>
#include<math.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int a[n],i,es=0,os=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            es+=a[i];
        }
        if(a[i]%2!=0)
        {
            os+=a[i];
        }
    }
    c=os-es;
    printf("%d",abs(c));
}