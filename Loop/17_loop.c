//checking palindrome
 #include<stdio.h>
 #include<math.h>
  int main()
{

int n;
printf("Enter any numbers : ");
scanf("%d",&n);

int reverse =0 ;
int originalnum=n;
while(n>0)
{
  
reverse = reverse*10  + (n%10);
n=n/10;
}


if( originalnum==reverse)
printf(" The number is palindrome ");
else
printf("The numbers isn’t a palindrome");
return 0;
}