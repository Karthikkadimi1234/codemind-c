#include<stdio.h>
int main()
{
    int l,b,w,c,p,a,total;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    p=(l+(2*w))*(b+(2*w));
    a=l*b;
    total=(p-a)*c;
        printf("%d",total);
    return 0;
}