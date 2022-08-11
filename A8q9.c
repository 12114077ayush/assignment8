#include<stdio.h>
int main()
{
int n=4;
for (int i=0;i<n;i++)
 {
 for(int j=1;j<=i;j++)
 printf(" ");
 for(int j=1;j<=n-i;j++)
 printf("%d",j);
 for(int j=n-i-1;j>0;j--)
 printf("%d",j);
 printf("\n");
 }
 return 0;
}
