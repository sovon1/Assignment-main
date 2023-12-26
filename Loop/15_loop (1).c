// c program to find the sum of numbers
 #include<stdio.h>
 #include<math.h>
  int main()
{

int n;
printf("Enter any numbers : ");
scanf("%d",&n);

int product =1 ;

while(n>0)
{
 
product = product * (n%10);
n=n/10;
}



printf("\nThe product of the digits is %d",product);
return 0;
}