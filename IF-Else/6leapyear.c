#include<stdio.h>
int main()
{
 int year;
 printf("Enter an year to check leap year: ");
 scanf("%d",&year);
 if(year%4==0 && year%100!=0 || year%400==0)
  printf("The year is a leap year");
  else
  printf("Not a leap year");




    return 0;
}