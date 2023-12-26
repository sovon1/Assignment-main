#include<stdio.h>
int main()
{
   int num1,num2;
   printf("Enter two integers number: ");
   scanf("%d %d",&num1,&num2);
   if (num1>num2)
   {
    printf("num1 = %d is the maximum number",num1);
    }
else 
printf("Num2 = %d is the maximum number",num2);

    return 0;
}