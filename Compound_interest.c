#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,g,o,w;
    scanf("%lf%lf%lf",&p,&r,&t);
    g=1+(r/100);
    o=pow(g,t);
    w=(p*o);
    printf("%.2lf",w);
}