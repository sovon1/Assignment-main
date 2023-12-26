#include<stdio.h>
int main()
{
  int i,n,array1[100],array2[100];
  printf("How many numbers do you want to store? :");
   scanf("%d",&n);
   printf("Enter the elements of the array : ");
   for(i=0;i<n;i++)//or i<=n-1
   {
   scanf("%d",&array1[i]);

   }
   for(i=n-1;i>=0;i--)
   {
     
      array2[n-i-1]=array1[i];
//also you could use directly
/*printf("\nArray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }*/
   }

   //printing the reverse array
   printf("array2 : ");
   for(i=0;i<n;i++)
   {
      printf("%d ",array2[i]);

   }
}