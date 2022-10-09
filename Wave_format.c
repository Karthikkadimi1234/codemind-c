#include<stdio.h>
int max(int *arr,int n)
{
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
     int n,arr[100],i,v,temp,j;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(arr[j]<arr[i])
             {
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
     }
     v=n;
    for(i=0;i<v;i++)
    {
        while((n-1)>=0)
        {
           int x=max(arr,n-1);
            if(x==0)
            {
                printf("%d",max(arr,n));
            }
            else
            {
                printf("%d ",max(arr,n-1));
                printf("%d ",max(arr,n));
                
            }
            n-=2;
        }
    }
     
}