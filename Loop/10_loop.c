// counting the digits in a number
#include<stdio.h>

int main()
{
    int num;
    int count = 0;
    printf("Enter number: ");
    
    scanf("%d",&num);
    
    while(num>0)
    {
    count++;
    num = num/10;
    }
    printf("The total digit is %d",count);
  return 0;
}
    