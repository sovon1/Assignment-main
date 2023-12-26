//max min in an array
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
   int max,min;
   max=array[0];
   min=array[0];
   for(i=0;i<n;i++)
   {
     if(array[i]>max)
     {
       max = array[i];

     }
     if(array[i]<min)
     {

        min = array[i];
     }
   }
   printf("The maximum elements of the array is %d \n",max);
   printf("The minimum elements of the array is  %d",min);

}