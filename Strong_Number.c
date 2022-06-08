#include<stdio.h>
int main()
{
    int n,r,i,c=0;
    scanf("%d",&n);
    int t;
    t=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        int p=1;
        for(i=1;i<=r;i++)
        {
            p*=i;
           
        }
       c+=p;
    }
if(c==t)
{
    printf("The number %d is a strong number",t);
}
else
{
    printf("The number %d is not a strong number",t);
}
}