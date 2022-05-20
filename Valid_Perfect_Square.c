#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        r=sqrt(n);
        if(r*r==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}