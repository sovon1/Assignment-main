// c program to find the sum of numbers
 #include<stdio.h>
 #include<math.h>
  int main()
{

int n;
printf("Enter any numbers : ");
scanf("%d",&n);

int sum =0 ;

while(n>0)
{
 
sum = sum + n%10;
n=n/10;
}



printf("\nThe sum of the digits is %d",sum);
return 0;
}