#include<stdio.h>
int main()
{
int n=5;
for(int i=1;i<=n;i++)
 {
  if(i!=n)
  {
   for(int j=1;j<=n;j++)
   {
    if(j==5||j==-i+6)
    printf("*");
    else
    printf(" ");
   }
   printf("\n");
  }
  else
  printf("*****");
 }
 return 0;
}
