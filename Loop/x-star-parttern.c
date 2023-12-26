#include<stdio.h>

int main()
{
    int row, col, n = 7;
    for (row = 0; row <= n; row++)
    {
        for (col = 0; col <= n; col++)
        {
            if (row == col || col == n - row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
