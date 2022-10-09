#include<stdio.h>
int main()
{    
   long long int t;
   scanf("%lld",&t);
   while(t>0)
   {
    long long int D,d,p,Q,n,q,s=0;
    scanf("%lld%lld%lld%lld",&D,&d,&p,&Q);
    t--;
    n=D/d;
    q=D%d;
    for(int i=0;i<n;i++)
    {
        s+=(p+i*Q)*d;
    }
    s+=(p+n*Q)*q;
    printf("%lld
",s);
   }
}