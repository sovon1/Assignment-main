#include<stdio.h>
int main()
{

 int num;
 printf("Enter an integer: ");
 scanf("%d",&num);
 (num%2 == 0)
 ? printf("number is even")//points to be noted here ,there won't be any semi colon
 : printf("number is odd");
 return 0;
}