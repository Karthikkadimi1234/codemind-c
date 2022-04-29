#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p,a;
    scanf("%d %d %d",&x,&y,&m);
    p=pow(x,y);
    a=p%m;
    printf("%d",a);
}