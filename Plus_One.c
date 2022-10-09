#include<stdio.h>
int main()
{
    int n,r=0,s=0,re,c=0,j=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        s=(s*10)+a[j];
    }
    r=s+1;
    
    while(r>0)
    {
        b[j]=r%10;
        r=r/10;
        j++;
        c++;
    }
    
    for(int k=c-1;k>=0;k--)
    {
        printf("%d ",b[k]);
    }
}