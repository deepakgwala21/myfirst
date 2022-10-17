//program of cheak number of perfect or not
#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("enter number:");
  scanf("%d",&n);
  
  for(i=1;i<=n/2;i++)
  {
    if (n%i==0)
    {
        sum=sum+i;
    }
 }
  if(sum==n)
  printf("number is perfact:");
  else
  printf("number is not perfect:");

      return 0;
}