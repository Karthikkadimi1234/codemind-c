#include<stdio.h>
int main()
{
    int l,t,i;
    scanf("%d",&l);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a<l || b<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(a==b)
        {
            printf("ACCEPTED
");
        }
        else
        {
            printf("CROP IT
");
        }
    }
}