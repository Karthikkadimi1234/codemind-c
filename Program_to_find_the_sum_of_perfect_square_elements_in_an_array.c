#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,k,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=sqrt(a[i]);
        if(a[i]==k*k)
        {
            s+=a[i];
        }
    }
    printf("%d",s);
}