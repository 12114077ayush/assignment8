#include<stdio.h>
int main()
{
int n=69;
for(int i=65;i<=n;i++)
 {
  for(int j=1;j<=n-i;j++)
  printf(" ");
  for(int j=65;j<=i;j++){
  char x=j;
  printf("%c",x);
  }
  for(int j=i-1;j>64;j--){
   char y=j;
  printf("%c",y);
  }
  printf("\n");
 }
 return 0;
}
