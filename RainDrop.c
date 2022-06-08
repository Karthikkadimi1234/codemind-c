#include<stdio.h>
int main()
{
    int n,i;
    int pli=0,pla=0,plo=0;
    scanf("%d",&n);
    
    for(i=1;i<n/2;i++)
    {
        if(n%i==0)
        {
            if(i==3)
            {
                pli=1;
            }
            else if(i==5)
            {
                pla=1;
            }
            else if(i==7)
            {
               plo=1;
            }
        }
    }

if( pli==1)
{
    printf("Pling");
    
}
if(pla==1)
{
    printf("Plang");
   
}
if(plo==1)
{
    printf("Plong");
   
}
else if(pli!=1 && pla!=1 && plo!=1)
{
    printf("%d",n);
    
}
}