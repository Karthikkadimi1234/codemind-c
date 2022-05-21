#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,d,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    d=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=floor(d))
        {
            c++;
        }
    }
    printf("%d",c);
}