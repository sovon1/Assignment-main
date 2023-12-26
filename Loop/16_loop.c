//reversing a number
 #include<stdio.h>
 #include<math.h>
  int main()
{

int n;
printf("Enter any numbers : ");
scanf("%d",&n);

int reverse =0 ;

while(n>0)
{
  
reverse = reverse*10  + (n%10);
n=n/10;
}



printf("\nThe reverse of the digit is %d",reverse);
return 0;
}