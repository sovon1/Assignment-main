//C program to declare, initialize, input and print array elements
#include<stdio.h>
int main()
{
   int i,array[100],n;
   printf("How many numbers do you want to store? :");
   scanf("%d",&n);
   printf("Enter the elements of the array : ");
   for(i=0;i<n;i++)//or i<=n-1
   {
   scanf("%d",&array[i]);

   }
   printf("The elements of array is : \n ");
   for(i=0;i<n;i++){
   printf("%d \n",array[i]);
   }
    return 0;
}