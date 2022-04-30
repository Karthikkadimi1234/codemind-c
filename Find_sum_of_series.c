#include<stdio.h>
int main()
{
    float i,n;
     float sum=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum+=1/i;
    }
    printf("%.2f",sum);
}