#include<stdio.h>
int main()
{
    int m,n,a[1000],j=0,i,c=0,s=0,k;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        a[j++]=i;
    }
    for(i=0;i<j;i++)
    {  s=0;
        for(k=i;k<j;k++)
        {
            s+=a[k];
            if(s%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    
}