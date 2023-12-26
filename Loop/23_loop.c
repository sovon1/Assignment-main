//finding factorial of a number
#include<stdio.h>
int main()
{
   int i ,n;
   printf("Enter a number you want to find the factorial : ");
   scanf("%d",&n);
   int fact = 1;
   //finding factorial
   for(i=1;i<=n;i++)
   {
      
      fact=fact*i;


   }
   printf("The factorial is %d",fact);


    return 0;
}