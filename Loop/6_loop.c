// printing sum of n digit
#include<stdio.h>

int main()
{
    int n, i;
    int sum =0;
    printf("Enter the last number to find the sum: ");
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum +=i;
    }
    printf("The sum of 1 to %d is %d",n,sum);
  return 0;
}
