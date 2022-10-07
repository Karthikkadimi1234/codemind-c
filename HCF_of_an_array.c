#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],hcf;
  
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    hcf=arr[0];
    int j=1;
    while(j<n)
    {
        if(arr[j]%hcf==0)
        {
            j++;
        }
        else
         {
             hcf=arr[j]%hcf;
             i++;
         }
    }
    printf("%d",hcf);
  
}