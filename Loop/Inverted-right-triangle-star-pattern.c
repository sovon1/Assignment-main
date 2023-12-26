#include<stdio.h>

int main()
{
    int row, col, n = 7;
    for (row = n; row>=0; row--)
    {
        for (col = 0; col <= row; col++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
