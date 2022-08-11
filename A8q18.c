#include<stdio.h>
int main()
{
int n1=5,n2=4;
for(int i=1;i<=n1;i++)
 {
 for(int j=1;j<=n1-i;j++)
 printf(" ");
 for(int j=1;j<=i;j++)
 printf("*");
 for(int j=1;j<=i-1;j++)
 printf("*");
 printf("\n");
 }
 for(int i=1;i<=n2;i++)
 {
 for(int j=1;j<=i;j++)
 printf(" ");
 for(int j=1;j<=n2-i+1;j++)
 printf("*");
 for(int j=1;j<=n2-i;j++)
 printf("*");
 printf("\n");
 }
 return 0;
}
