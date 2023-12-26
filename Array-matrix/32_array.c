//checking lower triangular matrix
#include <stdio.h>

int main() {
    int i, j, A[10][10], numOfRowsCols;

    printf("Enter the number of rows and columns: ");
    scanf("%d", &numOfRowsCols);

    // Input matrix
    printf("Enter the matrix elements:\n");
    for (i = 0; i < numOfRowsCols; i++) {
        for (j = 0; j < numOfRowsCols; j++) {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entered matrix:\n");
    for (i = 0; i < numOfRowsCols; i++) {
        for (j = 0; j < numOfRowsCols; j++) {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    // Check if it is an upper triangular matrix
   int uppersum=0,lowersum=0;
    for(i=0;i<numOfRowsCols;i++)
    {
      for(j=0;j<numOfRowsCols;j++)
      {
         if(i>j)
         {
            lowersum = lowersum+A[i][j];
         }
         if(j>i)
         {
            uppersum = uppersum+A[i][j];
         }


      }

    }
    if(lowersum==0)
    printf("it's a lower triangular matrix");
    else
    printf("it's not a lower triangular matrix");
    

    return 0;
}
