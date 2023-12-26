// printing sum of odd n digit
#include<stdio.h>

int main()
{
    int n, i;
    int sum =0;
    printf("Enter the last number to find the sum: ");
    
    scanf("%d",&n);
    for(i=1;i<=n;i+=2) //you forgot +=
    {
    sum +=i;
    }
    printf("The sum(odd) of 1 to %d is %d",n,sum);
  return 0;
}
