#include<stdio.h>
#include<math.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    c=sqrt(n);
    if(n==c*c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}