//write a c program to print all negative elements in array
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
   printf("Negative elements in the array are : ");
   for(i=0;i<n;i++)
   {
      if(array[i]<0)
     {
         printf("%d ",array[i]);
         count++;
     }


     
      


   }
   printf("\n the total negative elements in the array %d",count);
   



    return 0;
}
//same goes for prime number/even/odd/neg