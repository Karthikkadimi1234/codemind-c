#include<stdio.h>
int reverse(int n)
{
    int rev=0,r;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
  {
      int a;
      scanf("%d",&a);
      do{
          a=a+reverse(a);
      }while(a!=reverse(a));
      printf("%d",a);
      return 0;
  }