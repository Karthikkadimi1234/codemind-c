#include<stdio.h>
int main()
{
    long long int t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    { long long int n,a;
        scanf("%lld%lld",&n,&a);
        if(n==1)
        {
            if(a&1!=0)
            {
            printf("Odd
");
            }
            else
            {
                printf("Even
");
            }
        }
        else if(a&1!=0)
        {  if(n&1!=0)
             {
                printf("Odd
");
             }
             else
             {
                 printf("Even
");
             }
        }
        else
        {
            printf("Impossible
");
        }
        
    }
    
}