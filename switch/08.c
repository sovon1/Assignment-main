#include<stdio.h>
int main()
{
    float n1, n2, result= 0.0f;
    char op;
    printf("Enter the number: ");
    scanf("%f %c %f", &n1,&op,&n2);

    switch(op)
    {
    case '+' :
        result= n1+n2;
        break;

    case '-' :
        result= n1-n2;
        break;

    case '*' :
        result= n1*n2;
        break;

    case '/' :
        result= n1/n2;
        break;

    default:
        printf("Invalid operator ");
    }
    printf("%.2f %c %.2f = %.2f", n1, op, n2, result);

    return 0;

}
