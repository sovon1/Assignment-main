//to check a number is even or odd

#include<stdio.h>
int main()
{
    int num1;

    printf("Enter the number: ");
    scanf("%d", &num1);

    switch(num1%2==0)
    {
    case 0:
        printf("%d is odd.", num1);
        break;

    case 1:
        printf("%d is even.", num1);
    }
    return 0;
}
