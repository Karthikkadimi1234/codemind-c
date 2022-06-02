#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    int a[n],i,se;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        {
            f=1;
        }
    }
if(f==1)
{
    printf("True");
}
else
{
    printf("False");
}
}