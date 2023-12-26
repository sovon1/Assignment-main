#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer : ");
    scanf("%d",&num);
    //if(num%5 == 0 && num%11 == 0)
    if(!(num%5) && !(num%11))
    /*!(num % 5) and !(num % 11) use the logical NOT operator (!)
     to negate the result of the modulus operations.
      So, if num is divisible by 5,
       !(num % 5) will be true (1),
        and if num is divisible by 11,
         !(num % 11) will be true (1).*/
    printf("Number is divisible by 5 and 11");
    else 
    printf("Number is not divisible by 5 and 11");





    return 0;
}