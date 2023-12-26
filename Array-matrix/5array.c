//2nd largest elements
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
   int firstlargest,secondlargest;
   firstlargest=array[0];
secondlargest=array[0];
   for(i=0;i<n;i++)
   {
     if(array[i]>firstlargest)
     //// Update secondlargest and firstlargest
     {
           secondlargest=firstlargest;
       firstlargest = array[i];
    

     }
    
     else if(secondlargest<array[i]) {
     if(secondlargest<firstlargest)
     { 
        secondlargest=array[i];
     }
     }
     
   
   }
   printf("The second largest elements of the array is %d \n",secondlargest);

}