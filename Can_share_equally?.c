#include<stdio.h>
int main()
{
    int m,n; 
      scanf("%d%d",&m,&n);
      if(m%2==0&&(m>0||n%2==0))
      { 
        printf("YES");
      }
      else
      { 
        printf("NO");
      }
    return 0;
}