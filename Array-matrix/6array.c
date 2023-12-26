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
   int even=0,odd=0;
   
   for(i=0;i<n;i++)
   {
     if(array[i]%2==0)
     {
       even++;

     }
     if(array[i]%2!=0)
     {

        odd++;
     }
   }
   printf("The even elements of the array is %d \n",even);
   printf("The odd elements of the array is  %d",odd);

}