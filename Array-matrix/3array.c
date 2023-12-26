//write a c progrm to find the sum of the array
#include<stdio.h>
int main()
{
  int i,n,array[100],count=0;
  printf("How many numbers do you want to store? :");
   scanf("%d",&n);
   printf("Enter the elements of the array : ");
   for(i=0;i<n;i++)//or i<=n-1
   {
   scanf("%d",&array[i]);

   }
   int sum=0;
   for(i=0;i<n;i++)
   {
     sum +=array[i];
    

   }
   printf("The sum of the array is %d",sum);
   return 0;
}