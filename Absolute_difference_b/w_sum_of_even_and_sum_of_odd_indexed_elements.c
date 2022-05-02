#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,es=0,os=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es+=a[i];
        }
        if(i%2!=0)
        {
            os+=a[i];
        }
    }
    printf("%d",abs(es-os));
}