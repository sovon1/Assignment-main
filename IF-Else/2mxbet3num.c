#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 3 integers to find out the maximum");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    printf("Num 1 is the maximum number");
    else if (num2>num3)
    printf("num2 is the maximum number");
    else 
    printf("num3 is the maximum number");




    return 0;
}