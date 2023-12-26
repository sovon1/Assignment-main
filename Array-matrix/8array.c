//C program to copy all elements of one array to another
#include<stdio.h>
int main()
{
  int i,n,array1[100],array2[100],count=0;
  printf("How many numbers do you want to store? :");
   scanf("%d",&n);
   printf("Enter the elements of the array : ");
   for(i=0;i<n;i++)//or i<=n-1
   {
   scanf("%d",&array1[i]);

   }
   for(i=0;i<n;i++)
   {
         array2[i]=array1[i];

   }
   printf("array1 : ");
   for ( i = 0; i < n; i++)
   {
    printf("%d ",array1[i]);
   }
   printf("array2 : ");
   for ( i = 0; i < n; i++)
   {
    printf("%d ",array2[i]);
   }
   
return 0;
}