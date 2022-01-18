#include<stdio.h>
main()
{
  int p,q,r;
   scanf("%d %d %d",&p,&q,&r);
  if(p>50 && q>60 && r>100)
{
    printf("10");
}
  else if(p>50 && q>60)
{
    printf("9");
}
   else if(q>60 && r>100)
{
    printf("8");
}
   else if(p>50 && r>100)
{
    printf("7");
}
   else if(p>50 || q>60 || r>100)
{
    printf("6");
}
   else
{
    printf("5");
}
}