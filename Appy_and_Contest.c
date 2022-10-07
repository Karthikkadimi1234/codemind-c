#include<stdio.h>
int gcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    return gcd(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        long long int n,a,b,k,i,tot,l;
        scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
        tot=(n/a)+(n/b);
        l=(a*b)/(gcd(a,b));
        tot-=(2*(n/l));
        if (tot>=k)
        {
        printf("Win
");
        }
        else{
             printf("Lose
");
         }
         t--;
    }
}