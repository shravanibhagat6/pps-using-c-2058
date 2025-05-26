#include<stdio.h>
int main()
{
   int pn=1,i,cn=1,nn=0;
   for(i=0;i<15;i++)
     {
       pn=cn;
       cn=nn;
       nn=cn+pn;
       printf("%d\n",nn);
      
     }
  return 0;
}
