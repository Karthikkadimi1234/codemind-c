#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,A;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",A);
    return 0;
}