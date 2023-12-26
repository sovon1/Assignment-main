#include<stdio.h>
int main()
{

 int num;
 printf("Enter an integer: ");
 scanf("%d",&num);
 switch (num%2)
{
 case 0 : printf("Number is even");
    break;
 
 default: printf("number is odd");
    break;
 }
 
 return 0;
}