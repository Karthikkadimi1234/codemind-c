#include<stdio.h>
int main()
{
    int n,i,arr[1000],j,z,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { c=0;
      z=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                printf("%d ",c+1);
                z=1;
                break;
            }
            else
            {
                c+=1;
            }
        }
      if(z==0)
      {
          printf("0 ");
      }
    }
}