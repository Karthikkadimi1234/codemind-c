#include<stdio.h>
int main()
{
    float l,b,w,c,p,a;
    float total;
    scanf("%f%f%f%f",&l,&b,&w,&c);
    p=(l-(2*w))*(b-(2*w));
    a=l*b;
    total=(a-p)*c;
    if(l>2*w&&b>2*w)
    {
        printf("%.0f",total);
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}