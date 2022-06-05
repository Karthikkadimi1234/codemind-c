#include<stdio.h>
 int main()
{
    
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        s+=a[i];
    }
    printf("%d",s);
}