//c program to find the power of a number
#include<stdio.h>
int main()
{
    int base, exponent,i,number=1;
    printf("input Base and exponent : ");
   scanf("%d %d",&base,&exponent);

    for(i=1;i<=exponent;i++)
    {
        number = number * base;
        int number = base;
    }
    printf("The result is : %d",number);


    return 0;
}