#include<stdio.h>
int main()
{
  int i,n,array1[100],array2[100],array3[100];
  printf("How many numbers do you want to store? :");
   scanf("%d",&n);
   printf("Enter the elements of the array : ");
   for(i=0;i<n;i++)//or i<=n-1
   {
   scanf("%d",&array1[i]);
 

   }
     int evencount =0;
   for(i=0;i<n;i++)
   {
      
      if (array1[i] % 2 == 0)
      {
        array2[evencount++]=array1[i];

      }
      else
      array3[i-evencount]=array1[i];

     }
   printf("The even elements are : ");
   for(i=0;i<evencount;i++)
   {
      printf("%d ",array2[i]);

   }
   printf("\nThe odd elements are : ");
   for(i=0;i<n-evencount;i++)
   {
      printf("%d ",array3[i]);

   }
}