#include<stdio.h>
int main()
{

 int num;
 printf("Enter an integer: ");
 scanf("%d",&num);
 printf("The number is %s",(num %2 ==0 ? "Even" : "Odd"));
 return 0;

}