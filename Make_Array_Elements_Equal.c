
#include<stdio.h>
int main()
{
    int n,a[1000],v=0,c=0,i,j,k,l=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]==k)
        {
            l++;
        }
    }
    if(l==n)
    {
        printf("0");
    }
    else
    {
    for(i=0;i<n;i++)
    { c=0;
        for(j=i;j<n;j++)
        {
          if(a[j]==a[i])
          {
              c+=1;
              if(c>v)
              {
                  v=c;
              }
          }
        }
    }
    printf("%d",v);
    }
    
}