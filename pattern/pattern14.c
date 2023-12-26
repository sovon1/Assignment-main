#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the size of the rhombus: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        for (j = 0; j<=2*i; j++)
        {

          if((j==0)||(j==2*i)||(i==n-1))
          {
              printf("*");
          }
          else
          {
              printf(" ");
          }
        }

        printf("\n");
    }

    return 0;
}


