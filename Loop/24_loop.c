//highest common factor problem
#include<stdio.h>
int main()
{
    int num1,num2,i,rem,n1,n2;
    printf("Enter two numbers to find the hcf : ");
    scanf("%d %d",&num1,&num2);
    n1 = num1;
    n2 = num2;
    while(n2!=0)
    {
       rem = n1%n2;
       n1=n2;
       n2=rem;
      //this is the most important algorithm

    }
    printf("The hcf is %d",n1);

   


    return 0;
}