#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int i,a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0 && i%2!=0)
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0; 
}