#include<stdio.h>
int main()
{
    int n,c=0,a[100],j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c+=1;
            }
        }
    }
    printf("%d",c+n);
}