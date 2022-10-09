#include<stdio.h>
int main()
{
    int t,k,i,j;
    scanf("%d",&t);
    for (k=1;k<=t;k++)
    {
        int n,a[100],c=0,f=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        c=0;
        for (j=0;j<n;j++)
        {
            if(j==0)
            {
                if(a[j]>a[j+1])
                {
                    c+=1;
                }
            }
            else if(j==n-1)
            {
                f=0;
                for(i=0;i<n-1;i++)
                {
                    if(a[i]<a[j])
                    {
                        f=1;
                    }
                    else
                    {
                        f=0;
                        break;
                    }
                }
                if(f==1)
                {
                    c+=1;
                }
            }
            else
            {
                f=0;
                for(i=0;i<j;i++)
                {
                    if (a[j]>a[i])
                    {
                        f=1;
                    }
                    else
                    {
                        f=0;
                        break;
                    }
                }
                if(f==1)
                {
                    if (a[j]>a[j+1])
                    {
                        c+=1;
                    }
                }
            }
        }
        printf("Case #%d: %d
",k,c);
    }
}