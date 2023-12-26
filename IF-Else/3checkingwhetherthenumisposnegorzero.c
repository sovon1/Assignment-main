#include<stdio.h>
int main()
{
int num;
printf("Enter a integers to check pos neg or zero");
scanf("%d",&num);
if(num>0)
printf("it's a postive number");
else if (num<0)
printf("it's a negative number");
else if(num=0)
printf("The number is zero ");
else
printf("Not a number");




    return 0;
}