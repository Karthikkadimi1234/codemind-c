#include<stdio.h>
main()
{
    int a,b,i=1,c;
    scanf("%d %d",&a,&b);
    while(a*i%b!=0)
    {
        i++;
        c=a*i;
    }
    printf("%d",c);
}